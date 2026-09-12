#define XUANTIE_IMPLIED_TABLE	\
  {"zvqdotq", "v"},		\
  {"xtheadc", "xtheadcmo"},	\
  {"xtheadc", "xtheadsync"},	\
  {"xtheadc", "xtheadba"},	\
  {"xtheadc", "xtheadbb"},	\
  {"xtheadc", "xtheadbs"},	\
  {"xtheadc", "xtheadcondmov"},	\
  {"xtheadc", "xtheadmemidx"},	\
  {"xtheadc", "xtheadmempair"},	\
  {"xtheadc", "xtheadfmemidx"},	\
  {"xtheadc", "xtheadfmv"},	\
  {"xtheadc", "xtheadmac"},	\
				\
  {"xtheade", "xtheadcmo"},	\
  {"xtheade", "xtheadsync"},	\
  {"xtheade", "xtheadba"},	\
  {"xtheade", "xtheadbb"},	\
  {"xtheade", "xtheadbs"},	\
  {"xtheade", "xtheadcondmov"},	\
  {"xtheade", "xtheadmemidx"},	\
  {"xtheade", "xtheadfmv"},	\
  {"xtheade", "xtheadmac"},	\
  {"xtheade", "xtheadint"},     \
				\
  {"xtheadse", "xtheadcmo"},	\
				\
  {"xtheadvdot", "v"},		\
  {"xtheadvsfa", "v"},		\
  {"xtheadvcrypto", "v"},		\
  {"xtheadvcoder", "v"},		\
  {"xtheadvarith", "v"},		\
  {"xtheadvfcvt", "v"},		\
  {"xtheadvreduction", "v"},		\
				\
  {"xtheadcf", "f"},		\
  {"xtheadcv", "v"},		\
  {"xtheadcvwn", "v"},		\
  {"xtheadvcpml", "v"},		\
  {"xtheadvcpml", "xtheadcv"},		\
  {"xtheadvector", "xtheadzvamo"},		\
  {"p", "zpn"},						\
  {"p", "zpsfoperand",					\
   [] (const riscv_subset_list *subset_list) -> bool	\
   { return subset_list->xlen () == 64;}},		\
  {"p", "zprvsfextra",					\
   [] (const riscv_subset_list *subset_list) -> bool	\
   { return subset_list->xlen () == 64;}},		\
  {"zpsfoperand", "zpn",				\
   [] (const riscv_subset_list *subset_list) -> bool	\
   { return subset_list->xlen () == 32;}},		\
  {"zvbc32e", "zvbc"},					\
  {"zvkgs", "zvkg"},					\

#define XUANTIE_EXT_VERSION_TABLE			\
  {"p",		  ISA_SPEC_CLASS_NONE,	0, 9},		\
  {"zpn",	  ISA_SPEC_CLASS_NONE,	0, 9},		\
  {"zprvsfextra", ISA_SPEC_CLASS_NONE,	0, 9},		\
  {"zpsfoperand", ISA_SPEC_CLASS_NONE,	0, 9},		\
  {"xtheadaioe", ISA_SPEC_CLASS_NONE,	0, 1},		\
  {"xtheadc", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadcvwn", ISA_SPEC_CLASS_NONE,	1, 0},		\
  {"xtheade", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadfpp", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadmatrix", ISA_SPEC_CLASS_NONE, 0, 3},		\
  {"xtheadse", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadvdot", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadvsfa", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadvfofp8min", ISA_SPEC_CLASS_NONE, 0, 2},	\
  {"xtheadvfoe8m0min", ISA_SPEC_CLASS_NONE, 0, 2},	\
  {"xtheadvfofp4min", ISA_SPEC_CLASS_NONE, 0, 2},	\
  {"xtheadvfofp6min", ISA_SPEC_CLASS_NONE, 0, 2},	\
  {"xtheadcbi", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadcei", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadcf", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadcv", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadvcpml", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xxtcsrcacherpl", ISA_SPEC_CLASS_NONE, 1, 0},	\
  {"zvamo", ISA_SPEC_CLASS_NONE, 0, 7},			\
  {"zvlsseg", ISA_SPEC_CLASS_NONE, 0, 7},		\
  {"v",       ISA_SPEC_CLASS_20190608, 0, 7},		\
  {"xtheadzvamo", ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"xtheadvfcvt", ISA_SPEC_CLASS_NONE, 1, 0},   \
  {"xtheadvreduction", ISA_SPEC_CLASS_NONE, 1, 0},   \
  {"xtheadlpw", ISA_SPEC_CLASS_NONE, 1, 0},   \
  {"smcdeleg", ISA_SPEC_CLASS_NONE, 1, 0},   \
  {"smclic", ISA_SPEC_CLASS_NONE, 0, 1},   \
  {"ssclic", ISA_SPEC_CLASS_NONE, 0, 1},   \
  {"smcsrind", ISA_SPEC_CLASS_NONE, 1, 0},   \
  {"sscsrind", ISA_SPEC_CLASS_NONE, 1, 0},   \
  {"xtheadvcrypto", ISA_SPEC_CLASS_NONE, 0, 1},   \
  {"xtheadvcoder", ISA_SPEC_CLASS_NONE, 0, 1},   \
  {"xtheadvarith", ISA_SPEC_CLASS_NONE, 0, 1},   \
  {"xtheadcbop", ISA_SPEC_CLASS_NONE, 0, 1},   \
  {"xtheadcrc", ISA_SPEC_CLASS_NONE, 0, 1},   \
	\
  {"zacas",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"zabha",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"zicfilp",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"zicfiss",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ziccamoc",  ISA_SPEC_CLASS_NONE, 0, 1},		\
  {"zimop",    ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"zcmop", ISA_SPEC_CLASS_NONE, 1, 0},			\
  {"zvbc32e", ISA_SPEC_CLASS_NONE, 0, 7},		\
  {"zvkgs", ISA_SPEC_CLASS_NONE, 0, 7},			\
  {"zama16b",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"shcounterenw",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"shvstvala",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"shtvala",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"shvstvecd",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"shvsatpa",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"shgatpa",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"smcntrpmf",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"smctr",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"smnpm",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"smmpm",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"smmtt",  ISA_SPEC_CLASS_NONE, 0, 2},		\
  {"smrnmi",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"sspm",  ISA_SPEC_CLASS_NONE, 1, 0},			\
  {"ssqosid",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"svbare",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"svade",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ssccptr",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"sstvecd",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"sstvala",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"sscounterenw",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ssnpm",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ssccfg",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ssctr",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ssstrict",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"ssu64xl",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"supm",  ISA_SPEC_CLASS_NONE, 1, 0},			\
  {"svvptc",  ISA_SPEC_CLASS_NONE, 1, 0},		\
  {"zvqdotq", ISA_SPEC_CLASS_NONE, 0, 1},		\

#define XUANTIE_EXT_FLAG_TABLE								\
  RISCV_EXT_FLAG_ENTRY("p",			x_riscv_xt_subext, MASK_DSP),		\
  RISCV_EXT_FLAG_ENTRY("zpn",			x_riscv_xt_subext, MASK_ZPN),		\
  RISCV_EXT_FLAG_ENTRY("zpsfoperand",		x_riscv_xt_subext, MASK_ZPSFOPERAND),	\
  RISCV_EXT_FLAG_ENTRY("zprvsfextra",		x_riscv_xt_subext, MASK_ZPRVSFEXTRA),	\
  RISCV_EXT_FLAG_ENTRY("xtheadc",		x_riscv_xt_subext, MASK_XTHEADC),		\
  RISCV_EXT_FLAG_ENTRY("xtheade",		x_riscv_xt_subext, MASK_XTHEADE),		\
  RISCV_EXT_FLAG_ENTRY("xtheadfpp",		x_riscv_xt_subext, MASK_XTHEADFPP),		\
  RISCV_EXT_FLAG_ENTRY("xtheadmatrix",		x_riscv_xt_subext, MASK_XTHEADMATRIX),	\
  RISCV_EXT_FLAG_ENTRY("xtheadse",		x_riscv_xt_subext, MASK_XTHEADSE),		\
  RISCV_EXT_FLAG_ENTRY("xtheadvdot",		x_riscv_xt_subext, MASK_XTHEADVDOT),	\
  RISCV_EXT_FLAG_ENTRY("xtheadvsfa",		x_riscv_xt_subext, MASK_XTHEADVSFA),	\
  RISCV_EXT_FLAG_ENTRY("xtheadcbi",		x_riscv_xt_subext, MASK_XTHEADCBI),		\
  RISCV_EXT_FLAG_ENTRY("xtheadcei",		x_riscv_xt_subext, MASK_XTHEADCEI),		\
  RISCV_EXT_FLAG_ENTRY("xtheadcf",		x_riscv_xt_subext, MASK_XTHEADCF),		\
  RISCV_EXT_FLAG_ENTRY("xtheadcv",		x_riscv_xt_subext, MASK_XTHEADCV),		\
  RISCV_EXT_FLAG_ENTRY("xtheadcvwn",		x_riscv_xt_subext, MASK_XTHEADCVWN),		\
  RISCV_EXT_FLAG_ENTRY("xtheadvcpml",		x_riscv_xt_subext, MASK_XTHEADVCPML),		\
  RISCV_EXT_FLAG_ENTRY("xtheadvcrypto",		x_riscv_xt_subext, MASK_XTHEADVCRYPTO),	\
  RISCV_EXT_FLAG_ENTRY("xtheadvcoder",		x_riscv_xt_subext, MASK_XTHEADVCODER),	\
  RISCV_EXT_FLAG_ENTRY("xtheadvarith",		x_riscv_xt_subext, MASK_XTHEADVARITH),	\
  RISCV_EXT_FLAG_ENTRY("xtheadcbop",		x_riscv_xt_subext, MASK_XTHEADCBOP),	\
  RISCV_EXT_FLAG_ENTRY("xtheadvfcvt",		x_riscv_xt_subext, MASK_XTHEADVFCVT),	\
  RISCV_EXT_FLAG_ENTRY("xtheadvreduction",		x_riscv_xt_subext, MASK_XTHEADVREDUCTION),	\
  RISCV_EXT_FLAG_ENTRY("xtheadlpw",		x_riscv_xt_subext, MASK_XTHEADLPW),	\

#define TARGET_SUBSET_VERSION_P(SUBSET, MAJOR, MINOR) \
  (riscv_cmdline_subset_list () -> lookup (SUBSET, MAJOR, MINOR) != NULL)

/* Compute default -mabi option from arch string.  */

static const char *
xt_compute_default_abi(const char* arch_str)
{
  location_t loc = UNKNOWN_LOCATION;

  riscv_parse_arch_string (arch_str, NULL, loc);

  if (!riscv_cmdline_subset_list ())
    return "-mabi=" STRINGIZING (TARGET_RISCV_DEFAULT_ABI);

  if (riscv_cmdline_subset_list ()->xlen() == 64) {
    if (TARGET_SUBSET_VERSION_P("d", RISCV_DONT_CARE_VERSION,
				RISCV_DONT_CARE_VERSION))
      return "-mabi=lp64d";
    if (TARGET_SUBSET_VERSION_P("f", RISCV_DONT_CARE_VERSION,
				RISCV_DONT_CARE_VERSION))
      return "-mabi=lp64f";
    return "-mabi=lp64";
  } else {
    if (TARGET_SUBSET_VERSION_P("e", RISCV_DONT_CARE_VERSION,
				RISCV_DONT_CARE_VERSION))
      return "-mabi=ilp32e";
    if (TARGET_SUBSET_VERSION_P("d", RISCV_DONT_CARE_VERSION,
				RISCV_DONT_CARE_VERSION))
      return "-mabi=ilp32d";
    if (TARGET_SUBSET_VERSION_P("f", RISCV_DONT_CARE_VERSION,
				RISCV_DONT_CARE_VERSION))
      return "-mabi=ilp32f";
    return "-mabi=ilp32";
  }
}

/* Expand default -mabi option from -march option.  */

const char *
xt_expand_abi_from_arch (int argc ATTRIBUTE_UNUSED, const char **argv)
{
  return xt_compute_default_abi(argv[0]);
}

/* Expand default -mabi option from -mcpu option.  */

const char *
xt_expand_abi_from_cpu (int argc, const char **argv)
{
  gcc_assert (argc > 0 && argc <= 2);
  const char *default_abi_str = NULL;
  if (argc >= 2)
    default_abi_str = argv[1];

  const riscv_cpu_info *cpu = riscv_find_cpu (argv[0]);

  if (cpu == NULL)
    {
      if (default_abi_str == NULL)
	return "";
      else
	return xasprintf ("-mabi=%s", default_abi_str);
    }
  else
    return xt_compute_default_abi(cpu->arch);
}

/* Get multilib path for STARTFILE_PREFIX_SPEC.  */

const char *
xt_get_arch_spec_path (int argc ATTRIBUTE_UNUSED,
	      const char **argv ATTRIBUTE_UNUSED)
{
  const char *arch_spec = "";
  const char *abi_spec = NULL;
  const char *xlen_spec = NULL;

  const riscv_subset_list *subset_list = riscv_cmdline_subset_list ();

  if (subset_list)
    {
      if (subset_list->xlen() == 64)
	xlen_spec = "lib64";
      else if (subset_list->xlen() == 32)
	xlen_spec = "lib32";
      else
	gcc_unreachable ();

      if (subset_list->lookup ("xtheadc"))
	arch_spec = "xthead";

    }

  for (int i = 0; i < argc; i++)
    {
      if (strcmp (argv[i], "-") == 0 || argv[i] == NULL)
	continue;

      if (strstr(argv[i], "mabi=") != NULL)
	abi_spec = argv[i] + strlen("mabi=");

      if (!xlen_spec)
	{
	  if (strstr(argv[i], "rv64") != NULL)
	    xlen_spec = "lib64";
	  if (strstr(argv[i], "rv32") != NULL)
	    xlen_spec = "lib32";
	}
    }

  if (!xlen_spec)
    warning_at (input_location, 0, "Missing -march=");

  if (!abi_spec)
    warning_at (input_location, 0, "Missing -mabi=");

  return concat (xlen_spec, arch_spec, "/", abi_spec, "/", NULL);
}

/* Returns the pipeline based on the value of arch.  */
const char *
xt_expand_tune_form_arch (int argc ATTRIBUTE_UNUSED,
	      const char **argv ATTRIBUTE_UNUSED)
{
  riscv_subset_list *subset_list;
  subset_list = riscv_subset_list::parse (argv[0], UNKNOWN_LOCATION);
  if (subset_list)
    {
      if (subset_list->lookup ("xtheadc"))
	return "c910";
      else if (subset_list->lookup ("xtheade"))
	return "e906";
      else if (subset_list->lookup ("xtheadse"))
	return "e902";
      else if (subset_list->lookup ("xtheadcmo"))
	return "c910";
    }

  return "rocket";;
}

void
riscv_subset_list::xt_finalize ()
{
  if (lookup ("xtheadmatrix") && !lookup ("xtheadmatrix", 0, 3))
    error_at (m_loc, "%<-march=%s%>: unsupported version of %<xtheadmatrix%>; "
	      "only version 0.3 is supported", m_arch);

  if (m_xlen == 32 && lookup ("zprvsfextra"))
    error_at (m_loc, "%<-march=%s%>: The ISA 'zprvsfextra' need RV64.", m_arch);

  if (m_xlen == 64
      && (lookup ("zpn") || lookup ("zpsfoperand") || lookup ("zprvsfextra"))
      && !(lookup ("zpn") && lookup ("zpsfoperand") && lookup ("zprvsfextra")))
    error_at (m_loc, "%<-march=%s%>: At RV64, the ISA 'zpn' 'zpsfoperand'"
		     " 'zprvsfextra' must be present or absent at the same"
		     " time.", m_arch);
  
  if ((lookup ("v", 0, 7) != NULL) && !(lookup ("xtheadvector"))){
    add ("xtheadvector", false);
  }

  if ((lookup ("zvamo", 0, 7) != NULL) && !(lookup ("xtheadzvamo")))
    add ("xtheadzvamo", false);
}

/* Compute if given extension is equivalent with a group of extensions in given subset list.  */
bool
xt_match_score_inc_p (std::string name,
					 const riscv_subset_list *arch,
					 const riscv_subset_list *multilib)
{
  if (name.compare ("c") != 0 || arch->lookup ("zca") == NULL)
    return false;

  if (multilib->lookup ("d") != NULL)
    {
      if (multilib->xlen () == 32)
	return arch->lookup ("zcf") != NULL && arch->lookup ("zcd") != NULL;
      else
	return arch->lookup ("zcd") != NULL;
    }
    
  if (multilib->lookup ("f") != NULL && multilib->xlen () == 32)
    return arch->lookup ("zcf") != NULL;

  return true;
}

#ifndef XT_USE_UPPER_LEVEL_DIR_FOR_MULTI_LIB_OS
#define XT_USE_UPPER_LEVEL_DIR_FOR_MULTI_LIB_OS 0
#endif

/* Implement TARGET_COMPUTE_MULTILIB_OS.  */
static const char *
xt_compute_multilib_os (
  const char *multilib_os_dir,
  const char *multilib_dir)
{
  if (!XT_USE_UPPER_LEVEL_DIR_FOR_MULTI_LIB_OS)
    return multilib_os_dir;

  /* We don't need to do anything if we don't get multilib_dir.  */
  if (multilib_dir == NULL)
    return multilib_os_dir;

  /* If multilib_dir is the default, multilib_os_dir should also be the default.  */
  if (strcmp (multilib_dir, ".") == 0 || multilib_os_dir != NULL)
    return multilib_os_dir;

  /* According to the definition in gcc/config/riscv/t-linux, we cannot simply copy
     multilib_dir to multilib_os_dir:
	MULTILIB_OSDIRNAMES := $(patsubst lib%,../lib%,$(MULTILIB_DIRNAMES)). */
  return concat ("../", multilib_dir , NULL);
}

#undef TARGET_COMPUTE_MULTILIB_OS
#define TARGET_COMPUTE_MULTILIB_OS xt_compute_multilib_os