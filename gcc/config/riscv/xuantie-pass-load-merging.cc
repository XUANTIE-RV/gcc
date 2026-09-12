/* Copyright (C) 2024 Free Software Foundation, Inc.
   Contributed by Alibaba Damo Academy Xuantie Team.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#define MAX_LOADS_TO_MERGE 64

/* Return true if STMT is a load valid for store merging.  */

static bool
load_valid_for_load_merging_p (gimple *stmt)
{
  return gimple_assign_load_p (stmt)
	 && gimple_vuse (stmt)
	 && !stmt_can_throw_internal (cfun, stmt)
	 && !gimple_has_volatile_ops (stmt);
}

/* If MEM is a memory reference usable for load merging, return the non-NULL
   base_addr and set *PBITSIZE, *PBITPOS. Otherwise return NULL.  */

static tree
mem_valid_for_load_merging (tree mem, poly_int64 *pbitsize,
			    poly_int64 *pbitpos)
{
  poly_int64 bitsize, bitpos;
  machine_mode mode;
  int unsignedp = 0, reversep = 0, volatilep = 0;
  tree offset;
  tree base_addr = get_inner_reference (mem, &bitsize, &bitpos, &offset, &mode,
					&unsignedp, &reversep, &volatilep);
  *pbitsize = bitsize;
  if (known_le (bitsize, 0))
    return NULL_TREE;

  /* TODO: Don't support bit field load merge yet.  */
  if (TREE_CODE (mem) == COMPONENT_REF
      && DECL_BIT_FIELD_TYPE (TREE_OPERAND (mem, 1)))
    return NULL_TREE;

  if (reversep)
    return NULL_TREE;

  /* We do not want to rewrite TARGET_MEM_REFs.  */
  if (TREE_CODE (base_addr) == TARGET_MEM_REF)
    return NULL_TREE;
  /* In some cases get_inner_reference may return a
     MEM_REF [ptr + byteoffset].  For the purposes of this pass
     canonicalize the base_addr to MEM_REF [ptr] and take
     byteoffset into account in the bitpos.  */
  else if (TREE_CODE (base_addr) == MEM_REF)
    {
      poly_offset_int bit_off = mem_ref_offset (base_addr) << LOG2_BITS_PER_UNIT;
      bit_off += bitpos;
      if (bit_off.to_shwi (&bitpos))
	base_addr = TREE_OPERAND (base_addr, 0);
      else
	return NULL_TREE;
    }
  /* get_inner_reference returns the base object, get at its
     address now.  */
  else
    base_addr = build_fold_addr_expr (base_addr);

  if (offset)
    {
      /* If the access is variable offset then a base decl has to be
	 address-taken to be able to emit pointer-based loads to it.  */
      tree base = get_base_address (base_addr);
      if (!base || (DECL_P (base) && !TREE_ADDRESSABLE (base)))
	return NULL_TREE;

      /* TODO: Don't support plus offset.  */
      if (TREE_CODE (offset) == PLUS_EXPR)
	return NULL_TREE;

      base_addr = build2 (POINTER_PLUS_EXPR, TREE_TYPE (base_addr),
			  base_addr, offset);
    }

  *pbitsize = bitsize;
  *pbitpos = bitpos;
  return base_addr;
}


const pass_data pass_data_load_merging =
{
  GIMPLE_PASS, /* type */
  "load-merging", /* name */
  OPTGROUP_NONE, /* optinfo_flags */
  TV_NONE, /* tv_id */
  PROP_ssa, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  TODO_update_ssa, /* todo_flags_finish */
};

class load_info
{
public:
  HOST_WIDE_INT bitsize;
  HOST_WIDE_INT bitpos;
  gimple *stmt;
  unsigned int order;

  load_info (HOST_WIDE_INT bs, HOST_WIDE_INT bp,
	     gimple *st, unsigned int ord)
    : bitsize (bs), bitpos (bp), stmt (st), order (ord) {};
};

class load_chain_info
{
public:
  load_chain_info *next, **pnxp;
  tree base_addr;
  auto_vec<load_info *> m_load_info;

  load_chain_info (load_chain_info *&inpst, tree b_a)
  : next (inpst), pnxp (&inpst), base_addr (b_a)
  {
    inpst = this;
    if (next)
      {
	gcc_checking_assert (pnxp == next->pnxp);
	next->pnxp = &next;
      }
  }
  ~load_chain_info ()
  {
    *pnxp = next;
    if (next)
      {
	gcc_checking_assert (&next == next->pnxp);
	next->pnxp = pnxp;
      }
  }
  bool terminate_and_process_chain ();
  bool coalesce_immediate_loads ();
};

/* Coalesce the load_info objects recorded against the base object
   BASE in the first phase and merge them.
   Delete the allocated structures.
   Return true if any changes were made.  */

bool
load_chain_info::terminate_and_process_chain ()
{
  /* Process load chain.  */
  bool ret = false;
  if (m_load_info.length () > 1)
    {
      ret = coalesce_immediate_loads ();
    }

  /* Delete all the entries we allocated ourselves.  */
  load_info *info;
  unsigned int i;
  FOR_EACH_VEC_ELT (m_load_info, i, info)
    delete info;

  return ret;
}

/* Sorting function for load_info objects.
   Sorts them by bitposition.  */

static int
sort_by_bitpos (const void *x, const void *y)
{
  load_info *const *tmp = (load_info * const *) x;
  load_info *const *tmp2 = (load_info * const *) y;

  if ((*tmp)->bitpos < (*tmp2)->bitpos)
    return -1;
  else if ((*tmp)->bitpos > (*tmp2)->bitpos)
    return 1;
  else
    /* If they are the same let's use the order which is guaranteed to
       be different.  */
    return (*tmp)->order - (*tmp2)->order;
}

/* Go through the candidate loads recorded in m_load_info and
   try to merge them,  Return true if coalescing was successful.  */

bool
load_chain_info::coalesce_immediate_loads ()
{
  /* Anything less can't be processed.   */
  if (m_load_info.length () < 2)
    return false;

  if (dump_file && (dump_flags & TDF_DETAILS))
    fprintf (dump_file, "Attempting to coalesce %u loads in chain\n",
	     m_load_info.length ());

  /* Order the stores by the bitposition they write to.  */
  m_load_info.qsort (sort_by_bitpos);

  load_info *info, *infoj;
  unsigned int i, j, total_size = 0;
  HOST_WIDE_INT prev_bitsize, prev_bitpos;
  auto_vec<load_info *> merged_loads;
  bool changed = false;
  FOR_EACH_VEC_ELT (m_load_info, i, info)
    {
      gimple_stmt_iterator fisrt_gsi;

      if (total_size == 0)
	{
	  if (info->bitsize >= BITS_PER_WORD)
	    continue;
	  prev_bitsize = info->bitsize;
	  fisrt_gsi = gsi_for_stmt (info->stmt);
	}
      /* TODO: Handle the different element size.
	 And A more ideal way to judge wether to process is
	 using cost model, now we simply think at least 4 load
	 merged to one is cost-effective.  */
      else if (prev_bitsize != info->bitsize
	       || (prev_bitpos + prev_bitsize) != info->bitpos
	       || info->bitsize * 4 > BITS_PER_WORD)
	{
	  total_size = 0;
	  merged_loads.release ();
	  continue;
	}

      prev_bitpos = info->bitpos;
      total_size += info->bitsize;
      merged_loads.safe_push (info);
      if (total_size < BITS_PER_WORD)
	continue;

      gcc_assert (total_size == BITS_PER_WORD);
      gimple_seq seq = NULL;
      gimple *stmt = NULL;
      tree val_expr, addr_tmp, load_type = long_unsigned_type_node;
      tree load_offset_ptr, val_tmp;
      addr_tmp = unshare_expr (base_addr);
      load_offset_ptr = build_int_cst (ptr_type_node, merged_loads[0]->bitpos);
      val_expr = fold_build2 (MEM_REF, load_type, addr_tmp, load_offset_ptr);
      val_tmp = make_temp_ssa_name (load_type, NULL, "load_dst");
      stmt = gimple_build_assign (val_tmp, MEM_REF, val_expr);
      gimple_seq_add_stmt_without_update (&seq, stmt);
      gsi_insert_seq_before (&fisrt_gsi, seq, GSI_SAME_STMT);

      FOR_EACH_VEC_ELT (merged_loads, j, infoj)
	{
	  gimple_stmt_iterator current_gsi = gsi_for_stmt (infoj->stmt);
	  tree lhs, val_tmp2, val_tmp3, lshift_num, rshift_num;

	  seq = NULL;
	  val_tmp2 = make_temp_ssa_name (load_type, NULL, "lshift_dst");
	  lshift_num = build_int_cst (load_type,
				      BITS_PER_WORD - (j + 1) * infoj->bitsize);
	  stmt = gimple_build_assign (val_tmp2, LSHIFT_EXPR,
				      val_tmp, lshift_num);
	  gimple_seq_add_stmt_without_update (&seq, stmt);
	  gsi_insert_seq_before (&current_gsi, seq, GSI_SAME_STMT);
	  seq = NULL;
	  lhs = gimple_assign_lhs (infoj->stmt);
	  val_tmp3 = make_temp_ssa_name (load_type, NULL, "rshift_dst");
	  rshift_num = build_int_cst (load_type,
				      BITS_PER_WORD - infoj->bitsize);
	  stmt = gimple_build_assign (val_tmp3, RSHIFT_EXPR,
				      val_tmp2, rshift_num);
	  gimple_seq_add_stmt_without_update (&seq, stmt);
	  gsi_insert_seq_before (&current_gsi, seq, GSI_SAME_STMT);
	  stmt = gimple_build_assign (lhs, val_tmp3);
	  gsi_replace (&current_gsi, stmt, true);
	}

      changed = true;
      merged_loads.release ();
      total_size = 0;
    }

  return changed;
}

class pass_load_merging : public gimple_opt_pass
{
public:
  pass_load_merging (gcc::context *ctxt)
    : gimple_opt_pass (pass_data_load_merging, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    {
      /* TODO the originly aligned address can be optimized too when strict alignment is required.  */
      return !STRICT_ALIGNMENT && optimize && riscv_load_merging;
    }

  virtual unsigned int execute (function *fun);

private:
  hash_map<tree_operand_hash, class load_chain_info *> m_loads;
  load_chain_info *m_loads_head;

  bool process_load (gimple *);
  bool terminate_and_process_chain (load_chain_info *);
  bool terminate_and_process_all_chains ();
  bool terminate_all_aliasing_chains (load_chain_info **, gimple *);
}; // class pass_load_merging

gimple_opt_pass *
make_pass_load_merging (gcc::context *ctxt)
{
    return new pass_load_merging (ctxt);
}

/* Entry point for the pass.  Go over each basic block recording chains of
   immediate loads.  Upon encountering a terminating statement (as defined
   by stmt_terminates_chain_p) process the recorded loads and emit the widened
   variants.  */

unsigned int
pass_load_merging::execute (function *fun)
{
  basic_block bb;
  bool changed = false;

  FOR_EACH_BB_FN (bb, fun)
    {
      gimple_stmt_iterator gsi;

      if (dump_file && (dump_flags & TDF_DETAILS))
	fprintf (dump_file, "Processing basic block <%d>:\n", bb->index);

      for (gsi = gsi_after_labels (bb); !gsi_end_p (gsi); gsi_next (&gsi))
	{
	  gimple *stmt = gsi_stmt (gsi);

	  if (is_gimple_debug (stmt))
	    continue;

	  if (gimple_has_volatile_ops (stmt))
	    {
	      /* Terminate all chains.  */
	      if (dump_file && (dump_flags & TDF_DETAILS))
		fprintf (dump_file, "Volatile access terminates all chains\n");
	      changed |= terminate_and_process_all_chains ();
	      continue;
	    }

	  if (load_valid_for_load_merging_p (stmt))
	    changed |= process_load (stmt);
	  else
	    changed |= terminate_all_aliasing_chains (NULL, stmt);
	}
      changed |= terminate_and_process_all_chains ();
    }

  /* If the function can throw and catch non-call exceptions and something
     changed during the pass, then the CFG has (very likely) changed too.  */
  if (cfun->can_throw_non_call_exceptions && cfun->eh && changed)
    {
      return TODO_cleanup_cfg;
    }

  return 0;
}

/* Helper function.  Terminate the recorded chain loading to base object
   BASE.  Return true if the merging was successful.  The m_loads
   entry is removed after the processing in any case.  */

bool
pass_load_merging::terminate_and_process_chain (load_chain_info *chain_info)
{
  bool ret = chain_info->terminate_and_process_chain ();
  m_loads.remove (chain_info->base_addr);
  delete chain_info;
  return ret;
}

/* Terminate and process all recorded chains.  Return true if any changes
   were made.  */

bool
pass_load_merging::terminate_and_process_all_chains ()
{
  bool ret = false;
  while (m_loads_head)
    ret |= terminate_and_process_chain (m_loads_head);
  gcc_assert (m_loads.is_empty ());
  return ret;
}

/* Terminate all chains that are affected by the statement STMT.
   CHAIN_INFO is the chain we should ignore from the checks if
   non-NULL.  Return true if any changes were made.  */

bool
pass_load_merging::terminate_all_aliasing_chains (load_chain_info **chain_info,
						  gimple *stmt)
{
  bool ret = false;

  /* If the statement doesn't touch memory it can't alias.  */
  if (!gimple_vuse (stmt) || !gimple_store_p (stmt))
    return false;

  tree load_rhs = gimple_assign_load_p (stmt) ?
		    gimple_assign_rhs1 (stmt) : NULL_TREE;
  ao_ref load_rhs_ref;
  ao_ref_init (&load_rhs_ref, load_rhs);
  for (load_chain_info *next = m_loads_head, *cur = next; cur; cur = next)
    {
      next = cur->next;

      /* We already checked all the loads in chain_info and terminated the
	 chain if necessary.  Skip it here.  */
      if (chain_info && *chain_info == cur)
	continue;

      load_info *info;
      unsigned int i;
      FOR_EACH_VEC_ELT (cur->m_load_info, i, info)
	{
	  tree rhs = gimple_assign_rhs1 (info->stmt);
	  ao_ref rhs_ref;
	  ao_ref_init (&rhs_ref, rhs);
	  if (ref_maybe_used_by_stmt_p (stmt, &rhs_ref)
	      || stmt_may_clobber_ref_p_1 (stmt, &rhs_ref)
	      || (load_rhs && refs_may_alias_p_1 (&load_rhs_ref,
						  &rhs_ref, false)))
	    {
	      if (dump_file && (dump_flags & TDF_DETAILS))
		{
		  fprintf (dump_file, "stmt causes chain termination:\n");
		  print_gimple_stmt (dump_file, stmt, 0);
		}
	      ret |= terminate_and_process_chain (cur);
	      break;
	    }
	}
    }
  return ret;
}

/* Record the load STMT for load merging optimization if it can be
   optimized.  Return true if any changes were made.  */

bool
pass_load_merging::process_load (gimple *stmt)
{
  tree rhs = gimple_assign_rhs1 (stmt);
  poly_int64 bitsize, bitpos;
  tree base_addr
    = mem_valid_for_load_merging (rhs, &bitsize, &bitpos);

  if (known_le (bitsize, 0U))
    return false;

  HOST_WIDE_INT const_bitsize, const_bitpos;

  if (base_addr == NULL_TREE
      || !bitsize.is_constant (&const_bitsize)
      || !bitpos.is_constant (&const_bitpos))
    return terminate_all_aliasing_chains(NULL, stmt);

  class load_chain_info **chain_info = NULL;
  if (base_addr)
    chain_info = m_loads.get (base_addr);

  load_info *info;
  bool ret = false;

  if (chain_info)
    {
      unsigned int ord = (*chain_info)->m_load_info.length ();
      info = new load_info (const_bitsize, const_bitpos, stmt, ord);
      if (dump_file && (dump_flags & TDF_DETAILS))
	{
	  fprintf (dump_file, "Recording load from stmt:\n");
	  print_gimple_stmt (dump_file, stmt, 0);
	}
      (*chain_info)->m_load_info.safe_push (info);
      ret |= terminate_all_aliasing_chains (chain_info, stmt);
      /* If we reach the limit of loads to merge in a chain terminate and
	 process the chain now.  */
      if ((*chain_info)->m_load_info.length ()
	  == (unsigned int) MAX_LOADS_TO_MERGE)
	{
	  if (dump_file && (dump_flags & TDF_DETAILS))
	    fprintf (dump_file,
		     "Reached maximum number of statements to merge:\n");
	  ret |= terminate_and_process_chain (*chain_info);
	}
      return ret;
    }

  ret |= terminate_all_aliasing_chains (NULL, stmt);
  class load_chain_info *new_chain = new load_chain_info (m_loads_head, base_addr);
  info = new load_info (const_bitsize, const_bitpos, stmt, 0);
  new_chain->m_load_info.safe_push (info);
  m_loads.put (base_addr, new_chain);
  if (dump_file && (dump_flags & TDF_DETAILS))
    {
      fprintf (dump_file, "Starting new chain with statement:\n");
      print_gimple_stmt (dump_file, stmt, 0);
      fprintf (dump_file, "The base object is:\n");
      print_generic_expr (dump_file, base_addr);
      fprintf (dump_file, "\n");
    }

  return ret;
}
