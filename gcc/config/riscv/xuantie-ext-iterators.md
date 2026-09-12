;; Machine description for XUANTIE vendor extensions
;; Copyright (C) 2024 Free Software Foundation, Inc.
;; Contributed by Alibaba Damo Academy Xuantie Team.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

(define_attr "xt_restriction" "none,th_mem,th_fmem"
  (const_string "none"))

(define_attr "xt_disabled" "no,yes"
  (cond [(and (eq_attr "xt_restriction" "th_mem")
	      (match_test "TARGET_XTHEADMEMIDX"))
	 (const_string "yes")

	 (and (eq_attr "xt_restriction" "th_fmem")
	      (match_test "TARGET_XTHEADFMEMIDX"))
	 (const_string "yes")
	]
       (const_string "no")))
