/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:29-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_11 9
#define LABEL_1_10 11
#define LABEL_1_12 13
#define LABEL_1_13 15
#define ENVIRONMENT_LABEL_1_3 32
#define DEBUGGING_LABEL_1_2 31
#define OBJECT_1_3 30
#define OBJECT_1_2 29
#define OBJECT_1_1 28
#define OBJECT_1_0 27
#define EXECUTE_CACHE_1_15 17
#define EXECUTE_CACHE_1_14 19
#define EXECUTE_CACHE_1_9 21
#define EXECUTE_CACHE_1_7 23
#define EXECUTE_CACHE_1_6 25
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_1_4);
      goto print_user_friendly_name_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_user_friendly_name_11)
DEFLABEL (print_user_friendly_name_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd5.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define TAG_2_9 2
#define ENVIRONMENT_LABEL_2_3 19
#define DEBUGGING_LABEL_2_2 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_11 9
#define EXECUTE_CACHE_2_10 11
#define EXECUTE_CACHE_2_7 13
#define EXECUTE_CACHE_2_6 15
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_4);
      goto show_environment_procedure_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_environment_procedure_6)
DEFLABEL (show_environment_procedure_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  ((Wrd13.pObj) [2]) = (Wrd7.Obj);
  ((Wrd13.pObj) [3]) = Rvl;
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_9 7
#define ENVIRONMENT_LABEL_3_3 18
#define DEBUGGING_LABEL_3_2 17
#define EXECUTE_CACHE_3_10 9
#define EXECUTE_CACHE_3_8 11
#define EXECUTE_CACHE_3_7 13
#define EXECUTE_CACHE_3_5 15
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_3_4);
      goto write_dbg_name_3;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_dbg_name_6)
DEFLABEL (write_dbg_name_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_10 9
#define LABEL_4_11 11
#define ENVIRONMENT_LABEL_4_3 26
#define DEBUGGING_LABEL_4_2 25
#define EXECUTE_CACHE_4_14 13
#define EXECUTE_CACHE_4_13 15
#define EXECUTE_CACHE_4_12 17
#define EXECUTE_CACHE_4_9 19
#define EXECUTE_CACHE_4_8 21
#define EXECUTE_CACHE_4_6 23
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_4_4);
      goto write_dbg_upcase_name_5;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_dbg_upcase_name_8)
DEFLABEL (write_dbg_upcase_name_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 25
#define DEBUGGING_LABEL_5_2 24
#define OBJECT_5_2 23
#define OBJECT_5_1 22
#define OBJECT_5_0 21
#define EXECUTE_CACHE_5_12 11
#define EXECUTE_CACHE_5_11 13
#define EXECUTE_CACHE_5_10 15
#define EXECUTE_CACHE_5_9 17
#define EXECUTE_CACHE_5_7 19
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5_4);
      goto debug_read_eval_print_1_4;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_read_eval_print_1_7)
DEFLABEL (debug_read_eval_print_1_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (label_8)
  (Wrd10.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_12 7
#define LABEL_6_7 9
#define LABEL_6_13 11
#define LABEL_6_14 13
#define LABEL_6_15 15
#define LABEL_6_16 17
#define LABEL_6_9 19
#define TAG_6_10 8
#define LABEL_6_18 21
#define LABEL_6_19 23
#define TAG_6_20 10
#define LABEL_6_22 25
#define LABEL_6_24 27
#define LABEL_6_25 29
#define LABEL_6_27 31
#define ENVIRONMENT_LABEL_6_3 59
#define DEBUGGING_LABEL_6_2 58
#define OBJECT_6_8 57
#define OBJECT_6_7 56
#define OBJECT_6_6 55
#define OBJECT_6_5 54
#define OBJECT_6_4 53
#define OBJECT_6_3 52
#define OBJECT_6_2 51
#define OBJECT_6_1 50
#define OBJECT_6_0 49
#define EXECUTE_CACHE_6_28 33
#define EXECUTE_CACHE_6_26 35
#define EXECUTE_CACHE_6_23 37
#define EXECUTE_CACHE_6_21 39
#define EXECUTE_CACHE_6_17 41
#define EXECUTE_CACHE_6_11 43
#define EXECUTE_CACHE_6_8 45
#define FREE_REFERENCE_6_0 48
#define FREE_REFERENCES_LABEL_6_0 32
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
  machine_word Wrd6;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_4);
      goto output_to_string_16;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_25;

    case 2:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_26;

    case 9:
      current_block = (Rpc - LABEL_6_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_6_19);
      goto lambda_27;

    case 11:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_to_string_24)
DEFLABEL (output_to_string_16)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [0]) = Rvl;
  (Wrd59.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd59.uLng) == 1))
    goto label_37;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_35;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd21.Lng) > 4L)
    goto label_30;

DEFLABEL (label_29)
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd13.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_34;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd36.Lng) - 4L);
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_34;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_33)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_32;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [1]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_31)
  (Wrd49.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_12);
  goto label_29;

DEFLABEL (label_32)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_6_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd53.Obj) = (current_block [OBJECT_6_1]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_37)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_36;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_6_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  (Wrd15.Obj) = (current_block [OBJECT_6_5]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_19])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_18])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_6_19);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_28]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_27);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_8]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_11 11
#define LABEL_7_13 13
#define LABEL_7_15 15
#define LABEL_7_17 17
#define LABEL_7_18 19
#define LABEL_7_19 21
#define LABEL_7_21 23
#define ENVIRONMENT_LABEL_7_3 41
#define DEBUGGING_LABEL_7_2 40
#define OBJECT_7_2 39
#define OBJECT_7_1 38
#define OBJECT_7_0 37
#define EXECUTE_CACHE_7_20 25
#define EXECUTE_CACHE_7_16 27
#define EXECUTE_CACHE_7_14 29
#define EXECUTE_CACHE_7_12 31
#define EXECUTE_CACHE_7_10 33
#define EXECUTE_CACHE_7_7 35
#define FREE_REFERENCES_LABEL_7_0 24
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_7_4);
      goto show_frames_12;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_7_21);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_frames_16)
DEFLABEL (show_frames_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_9;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_7_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_21;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_21;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd10.Obj);
  goto loop_9;

DEFLABEL (label_21)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_5 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define LABEL_8_11 13
#define LABEL_8_13 15
#define ENVIRONMENT_LABEL_8_3 32
#define DEBUGGING_LABEL_8_2 31
#define OBJECT_8_1 30
#define OBJECT_8_0 29
#define EXECUTE_CACHE_8_16 17
#define EXECUTE_CACHE_8_15 19
#define EXECUTE_CACHE_8_14 21
#define EXECUTE_CACHE_8_12 23
#define EXECUTE_CACHE_8_10 25
#define EXECUTE_CACHE_8_6 27
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_8_4);
      goto show_frame_6;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_frame_10)
DEFLABEL (show_frame_6)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_15;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd22.Lng) < 0)
    goto label_13;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_7);

DEFLABEL (label_13)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_12 11
#define LABEL_9_11 13
#define LABEL_9_13 15
#define ENVIRONMENT_LABEL_9_3 33
#define DEBUGGING_LABEL_9_2 32
#define OBJECT_9_2 31
#define OBJECT_9_1 30
#define OBJECT_9_0 29
#define EXECUTE_CACHE_9_16 17
#define EXECUTE_CACHE_9_15 19
#define EXECUTE_CACHE_9_14 21
#define EXECUTE_CACHE_9_10 23
#define EXECUTE_CACHE_9_9 25
#define EXECUTE_CACHE_9_6 27
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_9_4);
      goto show_environment_name_7;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_environment_name_10)
DEFLABEL (show_environment_name_7)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_11 9
#define LABEL_10_12 11
#define LABEL_10_7 13
#define LABEL_10_9 15
#define LABEL_10_15 17
#define LABEL_10_16 19
#define LABEL_10_17 21
#define LABEL_10_18 23
#define LABEL_10_20 25
#define LABEL_10_21 27
#define LABEL_10_22 29
#define LABEL_10_24 31
#define LABEL_10_27 33
#define LABEL_10_26 35
#define LABEL_10_30 37
#define LABEL_10_28 39
#define LABEL_10_29 41
#define LABEL_10_31 43
#define TAG_10_32 20
#define LABEL_10_34 45
#define LABEL_10_36 47
#define LABEL_10_38 49
#define LABEL_10_37 51
#define ENVIRONMENT_LABEL_10_3 82
#define DEBUGGING_LABEL_10_2 81
#define OBJECT_10_5 80
#define OBJECT_10_4 79
#define OBJECT_10_3 78
#define OBJECT_10_2 77
#define OBJECT_10_1 76
#define OBJECT_10_0 75
#define EXECUTE_CACHE_10_39 53
#define EXECUTE_CACHE_10_35 55
#define EXECUTE_CACHE_10_33 57
#define EXECUTE_CACHE_10_25 59
#define EXECUTE_CACHE_10_23 61
#define EXECUTE_CACHE_10_19 63
#define EXECUTE_CACHE_10_14 65
#define EXECUTE_CACHE_10_13 67
#define EXECUTE_CACHE_10_10 69
#define EXECUTE_CACHE_10_8 71
#define FREE_REFERENCE_10_0 74
#define FREE_REFERENCES_LABEL_10_0 52
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd49;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_10_4);
      goto show_environment_bindings_23;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_10_11);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_10_12);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_10_16);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_10_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_10_22);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_10_24);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_10_27);
      goto lambda_8;

    case 16:
      current_block = (Rpc - LABEL_10_26);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_10_30);
      goto label_30;

    case 18:
      current_block = (Rpc - LABEL_10_28);
      goto continuation_6;

    case 19:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_10_31);
      goto lambda_36;

    case 21:
      current_block = (Rpc - LABEL_10_34);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_10_36);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_10_38);
      goto label_31;

    case 24:
      current_block = (Rpc - LABEL_10_37);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_environment_bindings_33)
DEFLABEL (show_environment_bindings_23)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_49;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd49.Lng) == 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10_21);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (label_38)
  (Wrd12.Obj) = (Rsp [3]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_22);
  Rsp = (& (Rsp [1]));
  goto lambda_8;

DEFLABEL (label_40)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_48;
  Wrd15 = Wrd19;

DEFLABEL (label_47)
  Wrd14 = Wrd15;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_46;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_46;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! ((Wrd41.Lng) > (Wrd42.Lng)))
    goto label_39;

DEFLABEL (label_45)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_44;
  Wrd9 = Wrd13;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_42;
  Wrd8 = Wrd12;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_39]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_37);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto lambda_8;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_38])), (Wrd9.pObj));

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_30])), (Wrd10.pObj));

DEFLABEL (label_30)
  (Wrd9.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_16])), (Wrd16.pObj));

DEFLABEL (label_28)
  (Wrd15.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (lambda_34)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_53;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_52)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_51;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (label_51)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_26)
  (Wrd14.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_35)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_10_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_28);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_31])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_10_31);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_35]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_11 11
#define LABEL_11_12 13
#define LABEL_11_16 15
#define LABEL_11_18 17
#define LABEL_11_19 19
#define LABEL_11_13 21
#define TAG_11_14 9
#define LABEL_11_22 23
#define LABEL_11_15 25
#define LABEL_11_17 27
#define LABEL_11_23 29
#define LABEL_11_26 31
#define LABEL_11_32 33
#define LABEL_11_33 35
#define LABEL_11_28 37
#define LABEL_11_29 39
#define TAG_11_30 18
#define LABEL_11_35 41
#define LABEL_11_36 43
#define LABEL_11_31 45
#define ENVIRONMENT_LABEL_11_3 76
#define DEBUGGING_LABEL_11_2 75
#define OBJECT_11_7 74
#define OBJECT_11_6 73
#define OBJECT_11_5 72
#define OBJECT_11_4 71
#define OBJECT_11_3 70
#define OBJECT_11_2 69
#define OBJECT_11_1 68
#define OBJECT_11_0 67
#define EXECUTE_CACHE_11_37 47
#define EXECUTE_CACHE_11_34 49
#define EXECUTE_CACHE_11_27 51
#define EXECUTE_CACHE_11_25 53
#define EXECUTE_CACHE_11_24 55
#define EXECUTE_CACHE_11_21 57
#define EXECUTE_CACHE_11_20 59
#define EXECUTE_CACHE_11_10 61
#define EXECUTE_CACHE_11_9 63
#define EXECUTE_CACHE_11_8 65
#define FREE_REFERENCES_LABEL_11_0 46
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd15;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_11_4);
      goto print_binding_25;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_24;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_11_16);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_11_18);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_11_19);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_11_13);
      goto lambda_38;

    case 10:
      current_block = (Rpc - LABEL_11_22);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_11_26);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_11_32);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_11_33);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_11_29);
      goto lambda_39;

    case 19:
      current_block = (Rpc - LABEL_11_35);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_11_36);
      goto label_35;

    case 21:
      current_block = (Rpc - LABEL_11_31);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_binding_37)
DEFLABEL (print_binding_25)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_53;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_53;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_52)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_13])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_51;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_50)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_40;
  (Wrd15.Obj) = (current_block [OBJECT_11_3]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_49;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_48)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_47;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd7.Obj) = (current_block [OBJECT_11_5]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (label_41)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_26);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_29])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [6]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_11_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd23.uLng) == 30))
    goto label_45;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));

DEFLABEL (label_44)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_43;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_43;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd36.Lng) = ((Wrd38.Lng) - (Wrd39.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_43;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_34]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_28);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (label_43)
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_32]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_7]), 1);

DEFLABEL (label_32)
  (Wrd17.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_29)
  (Wrd19.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_11_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_11_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_55;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (label_55)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_11_29);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_59;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_58)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_57;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_37]));

DEFLABEL (label_57)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_36]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_35)
  (Wrd20.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define EXECUTE_CACHE_12_7 7
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_12_4);
      goto debugger_failure_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugger_failure_4)
DEFLABEL (debugger_failure_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_13_4);
      goto debugger_message_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugger_message_4)
DEFLABEL (debugger_message_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define ENVIRONMENT_LABEL_14_3 19
#define DEBUGGING_LABEL_14_2 18
#define OBJECT_14_0 17
#define EXECUTE_CACHE_14_9 11
#define EXECUTE_CACHE_14_8 13
#define FREE_REFERENCE_14_0 16
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_14_4);
      goto message_arguments__string_3;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (message_arguments__string_7)
DEFLABEL (message_arguments__string_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 2);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_14_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_11)
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgutl_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_15_4);
      goto debugger_presentation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugger_presentation_3)
DEFLABEL (debugger_presentation_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
dbgutl_so_07d363b83757f1b3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_dbgutl_so_07d363b83757f1b3 [15] =
  {
    { "dbgutl_so_code_1", 7, dbgutl_so_code_1 },
    { "dbgutl_so_code_2", 3, dbgutl_so_code_2 },
    { "dbgutl_so_code_3", 3, dbgutl_so_code_3 },
    { "dbgutl_so_code_4", 5, dbgutl_so_code_4 },
    { "dbgutl_so_code_5", 4, dbgutl_so_code_5 },
    { "dbgutl_so_code_6", 15, dbgutl_so_code_6 },
    { "dbgutl_so_code_7", 11, dbgutl_so_code_7 },
    { "dbgutl_so_code_8", 7, dbgutl_so_code_8 },
    { "dbgutl_so_code_9", 7, dbgutl_so_code_9 },
    { "dbgutl_so_code_10", 25, dbgutl_so_code_10 },
    { "dbgutl_so_code_11", 22, dbgutl_so_code_11 },
    { "dbgutl_so_code_12", 2, dbgutl_so_code_12 },
    { "dbgutl_so_code_13", 2, dbgutl_so_code_13 },
    { "dbgutl_so_code_14", 4, dbgutl_so_code_14 },
    { "dbgutl_so_code_15", 1, dbgutl_so_code_15 }
  };

int
decl_dbgutl_so_07d363b83757f1b3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_dbgutl_so_07d363b83757f1b3);
  return (0);
}

DECLARE_COMPILED_CODE ("dbgutl.so", 3, decl_dbgutl_so_07d363b83757f1b3, dbgutl_so_07d363b83757f1b3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dbgutl_so_data_07d363b83757f1b3 [3008] =
  "\x5f\x1e\x96\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x0c\x0c"
  "\x28\x0d\x28\x0d\xb9\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc"
  "\x1d\xb0\x82\x88\x0c\x28\x0d\x28\x0d\xbd\x28\x0d\xbe\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\x28\xb1"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x28\xb2\x28\x1b\x28\x1b\x28\x1b"
  "\x28\xb1\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x0c\x0c\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xba\x1d\xb0\x86\x88\x1d\x0c\x0c\x08\x0c\x80\xc1\x1c\x84\xc1"
  "\x1c\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb1\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x0c\x28\xb6\x28\xb1"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x0d\x1c\x28\xb1"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x28\xb1\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x1b\x0d\x1c"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb1\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x80\x0c\x0c\x0c\x1b\x1b\x82\x28\x0d\x28\x1b\x28\xb1\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\xb9\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x24\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x23\x22\x29\x21\x9f\x2b\xb8\x17\x1c\x88\x1b\xb0\x2a\x1b"
  "\x2a\x1b\x2a\xb1\x2a\x1b\x2a\x02\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb2\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb4\x2a\x17\xb6\x1b\x1b"
  "\xb5\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\xb3\x1b\x0d\x1b\x17\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x64\x62\x67\x75\x74\x6c\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0e\x20\x73\x70\x65\x63\x69\x61\x6c\x20\x66"
  "\x6f\x72\x6d\x03\x61\x20\x10\x74\x68\x65\x20\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3a\x20\x15\x61\x6e\x20\x75\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x1b\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6e\x61\x6d\x65\x04\x0d\x77\x72\x69\x74\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x1d\x73\x70\x65\x63\x69\x61\x6c\x2d\x66"
  "\x6f\x72\x6d\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61"
  "\x6d\x65\x3f\x03\x0e\x73\x74\x72\x69\x6e\x67\x2d\x75\x70\x63\x61"
  "\x73\x65\x04\x16\x77\x72\x69\x74\x65\x2d\x64\x62\x67\x2d\x75\x70"
  "\x63\x61\x73\x65\x2d\x6e\x61\x6d\x65\x06\x0a\x10\x81\x8d\x02\x09"
  "\x0e\x81\x89\x02\x08\x0c\x81\x89\x02\x07\x0a\x81\x89\x02\x06\x08"
  "\x81\x87\x02\x05\x06\x81\x85\x02\x04\x04\x84\x06\x0f\x21\x02\x23"
  "\x4e\x6f\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x66\x6f\x72"
  "\x20\x74\x68\x69\x73\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2e\x03\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x6c\x61\x6d\x62\x64\x61\x04\x11\x64\x65\x62\x75\x67\x67\x65\x72"
  "\x2d\x66\x61\x69\x6c\x75\x72\x65\x04\x16\x64\x65\x62\x75\x67\x67"
  "\x65\x72\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x04"
  "\x0d\x70\x72\x65\x74\x74\x79\x2d\x70\x72\x69\x6e\x74\x05\x0d\x08"
  "\x81\x83\x02\x0c\x06\x81\x85\x02\x0b\x04\x84\x06\x07\x14\x02\x04"
  "\x03\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f"
  "\x6c\x3f\x09\x04\x06\x77\x72\x69\x74\x65\x0a\x03\x0c\x73\x79\x6d"
  "\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x0b\x05\x10\x08\x81\x85\x02\x0f"
  "\x06\x81\x85\x02\x0e\x04\x84\x06\x07\x13\x0c\x02\x03\x03\x09\x04"
  "\x0a\x03\x0b\x03\x04\x07\x15\x0c\x81\x87\x02\x14\x0a\x81\x85\x02"
  "\x13\x08\x81\x85\x02\x12\x06\x81\x85\x02\x11\x04\x84\x06\x0b\x1b"
  "\x0b\x02\x09\x4e\x6f\x20\x76\x61\x6c\x75\x65\x08\x56\x61\x6c\x75"
  "\x65\x3a\x20\x14\x45\x76\x61\x6c\x75\x61\x74\x65\x20\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x05\x16\x70\x72\x6f\x6d\x70\x74\x2d"
  "\x66\x6f\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x11"
  "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x76\x61\x6c\x75\x65\x3f"
  "\x04\x0b\x64\x65\x62\x75\x67\x2f\x65\x76\x61\x6c\x05\x11\x64\x65"
  "\x62\x75\x67\x67\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x09\x04"
  "\x09\x06\x19\x0a\x81\x87\x02\x18\x08\x81\x89\x02\x17\x06\x81\x85"
  "\x02\x16\x04\x84\x06\x09\x1a\x02\x02\x02\x3e\x18\x3c\x45\x72\x72"
  "\x6f\x72\x20\x77\x68\x69\x6c\x65\x20\x70\x72\x69\x6e\x74\x69\x6e"
  "\x67\x3a\x20\x05\x20\x2e\x2e\x2e\x04\x63\x64\x72\x0d\x04\x63\x61"
  "\x72\x0e\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x3a\x65\x72\x72\x6f\x72\x02\x04\x20\x77\x69\x74\x68\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x74\x72\x75\x6e\x63\x61\x74"
  "\x65\x64\x2d\x73\x74\x72\x69\x6e\x67\x03\x1f\x63\x61\x6c\x6c\x2d"
  "\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x07\x10\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x05\x17\x62\x69\x6e\x64"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c"
  "\x65\x72\x03\x02\x14\x63\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x0f\x04\x17\x77\x72\x69\x74\x65"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72\x65\x70\x6f\x72"
  "\x74\x08\x28\x20\x81\x85\x02\x27\x1e\x81\x87\x02\x26\x1c\x81\x85"
  "\x02\x25\x1a\x81\x85\x02\x24\x18\x81\x85\x02\x23\x16\x81\x85\x02"
  "\x22\x14\x81\x85\x02\x21\x12\x81\x8b\x02\x20\x10\x81\x89\x02\x1f"
  "\x0e\x81\x87\x02\x1e\x0c\x81\x87\x02\x1d\x0a\x81\x87\x02\x1c\x08"
  "\x81\x87\x02\x1b\x06\x81\x83\x02\x1a\x04\x84\x06\x1f\x3c\x10\x02"
  "\x08\x02\x29\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x04\x04\x03\x08\x6e"
  "\x65\x77\x6c\x69\x6e\x65\x11\x06\x0b\x73\x68\x6f\x77\x2d\x66\x72"
  "\x61\x6d\x65\x12\x03\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x68\x61\x73\x2d\x70\x61\x72\x65\x6e\x74\x3f\x03\x13\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e"
  "\x74\x07\x33\x18\x81\x87\x02\x32\x16\x81\x87\x02\x31\x14\x81\x87"
  "\x02\x30\x12\x81\x87\x02\x2f\x10\x81\x87\x02\x2e\x0e\x81\x87\x02"
  "\x2d\x0c\x81\x87\x02\x2c\x0a\x81\x87\x02\x2b\x08\x81\x87\x02\x2a"
  "\x06\x81\x83\x02\x29\x04\x85\x08\x17\x2a\x13\x02\x09\x02\x2a\x44"
  "\x65\x70\x74\x68\x20\x28\x72\x65\x6c\x61\x74\x69\x76\x65\x20\x74"
  "\x6f\x20\x69\x6e\x69\x74\x69\x61\x6c\x20\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x29\x3a\x20\x04\x16\x73\x68\x6f\x77\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x14"
  "\x04\x03\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e"
  "\x70\x61\x63\x6b\x61\x67\x65\x15\x04\x0a\x05\x1a\x73\x68\x6f\x77"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62\x69\x6e"
  "\x64\x69\x6e\x67\x73\x16\x03\x11\x07\x3a\x10\x81\x89\x02\x39\x0e"
  "\x81\x89\x02\x38\x0c\x81\x89\x02\x37\x0a\x81\x89\x02\x36\x08\x81"
  "\x89\x02\x35\x06\x81\x89\x02\x34\x04\x86\x0a\x0f\x21\x17\x02\x0a"
  "\x08\x6e\x61\x6d\x65\x64\x3a\x20\x0c\x63\x72\x65\x61\x74\x65\x64"
  "\x20\x62\x79\x20\x0d\x45\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x20\x04\x03\x15\x03\x11\x03\x0d\x70\x61\x63\x6b\x61\x67\x65\x2f"
  "\x6e\x61\x6d\x65\x04\x19\x70\x72\x69\x6e\x74\x2d\x75\x73\x65\x72"
  "\x2d\x66\x72\x69\x65\x6e\x64\x6c\x79\x2d\x6e\x61\x6d\x65\x15\x04"
  "\x0a\x07\x41\x10\x81\x83\x02\x40\x0e\x81\x83\x02\x3f\x0c\x81\x83"
  "\x02\x3e\x0a\x81\x87\x02\x3d\x08\x81\x85\x02\x3c\x06\x81\x85\x02"
  "\x3b\x04\x84\x06\x0f\x22\x18\x02\x0b\x09\x20\x73\x68\x6f\x77\x6e"
  "\x29\x3a\x12\x20\x62\x69\x6e\x64\x69\x6e\x67\x73\x20\x28\x66\x69"
  "\x72\x73\x74\x20\x11\x20\x68\x61\x73\x20\x6e\x6f\x20\x62\x69\x6e"
  "\x64\x69\x6e\x67\x73\x06\x20\x68\x61\x73\x20\x0f\x20\x68\x61\x73"
  "\x20\x62\x69\x6e\x64\x69\x6e\x67\x73\x3a\x0e\x15\x62\x72\x69\x65"
  "\x66\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x2d\x6c\x69\x6d\x69\x74"
  "\x19\x02\x03\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x62\x69\x6e\x64\x69\x6e\x67\x73\x03\x07\x6c\x65\x6e\x67\x74\x68"
  "\x04\x09\x73\x79\x6d\x62\x6f\x6c\x3c\x3f\x04\x05\x73\x6f\x72\x74"
  "\x04\x03\x11\x04\x0a\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04"
  "\x0e\x70\x72\x69\x6e\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x1a\x04"
  "\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x0b\x5a\x34\x81\x8b\x02"
  "\x59\x32\x81\x8d\x02\x58\x30\x81\x8b\x02\x57\x2e\x81\x8b\x02\x56"
  "\x2c\x81\x85\x02\x55\x2a\x81\x8b\x02\x54\x28\x81\x89\x02\x53\x26"
  "\x81\x8f\x02\x52\x24\x81\x8b\x02\x51\x22\x81\x89\x02\x50\x20\x81"
  "\x8b\x02\x4f\x1e\x81\x8b\x02\x4e\x1c\x81\x8b\x02\x4d\x1a\x81\x8b"
  "\x02\x4c\x18\x81\x8b\x02\x4b\x16\x81\x8b\x02\x4a\x14\x81\x8b\x02"
  "\x49\x12\x81\x8b\x02\x48\x10\x81\x89\x02\x47\x0e\x81\x8b\x02\x46"
  "\x0c\x81\x85\x02\x45\x0a\x81\x85\x02\x44\x08\x84\x06\x43\x06\x81"
  "\x87\x02\x42\x04\x85\x08\x33\x53\x1b\x02\x0c\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x18\x20\x69\x73\x20\x61\x20"
  "\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x6b\x65\x79\x77\x6f\x72"
  "\x64\x04\x20\x3d\x20\x0f\x20\x69\x73\x20\x75\x6e\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x0e\x0d\x03\x13\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x78\x2d\x73\x69\x7a\x65\x03\x11\x04\x03\x16\x6d"
  "\x61\x63\x72\x6f\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74"
  "\x72\x61\x70\x3f\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70"
  "\x65\x6e\x64\x11\x02\x0f\x04\x11\x6f\x75\x74\x70\x75\x74\x2d\x74"
  "\x6f\x2d\x73\x74\x72\x69\x6e\x67\x0f\x04\x0f\x77\x72\x69\x74\x65"
  "\x2d\x64\x62\x67\x2d\x6e\x61\x6d\x65\x0e\x04\x04\x6d\x61\x78\x03"
  "\x0a\x0b\x70\x2e\x81\x89\x02\x6f\x2c\x81\x83\x02\x6e\x2a\x81\x83"
  "\x02\x6d\x28\x81\x83\x02\x6c\x26\x81\x85\x02\x6b\x24\x81\x8d\x02"
  "\x6a\x22\x81\x8d\x02\x69\x20\x81\x85\x02\x68\x1e\x81\x85\x02\x67"
  "\x1c\x81\x85\x02\x66\x1a\x81\x87\x02\x65\x18\x81\x83\x02\x64\x16"
  "\x81\x83\x02\x63\x14\x81\x87\x02\x62\x12\x81\x87\x02\x61\x10\x81"
  "\x85\x02\x60\x0e\x81\x83\x02\x5f\x0c\x81\x8b\x02\x5e\x0a\x81\x8b"
  "\x02\x5d\x08\x81\x89\x02\x5c\x06\x81\x85\x02\x5b\x04\x84\x06\x2d"
  "\x4d\x0d\x02\x0d\x03\x1a\x6d\x65\x73\x73\x61\x67\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x73\x2d\x3e\x73\x74\x72\x69\x6e\x67\x0a"
  "\x04\x16\x70\x6f\x72\x74\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d"
  "\x66\x61\x69\x6c\x75\x72\x65\x03\x72\x06\x81\x85\x02\x71\x04\xfe"
  "\x05\x05\x0d\x02\x0e\x03\x0a\x04\x16\x70\x6f\x72\x74\x2f\x64\x65"
  "\x62\x75\x67\x67\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x03\x74"
  "\x06\x81\x85\x02\x73\x04\xfe\x05\x05\x0d\x1c\x02\x0f\x06\x61\x70"
  "\x70\x6c\x79\x11\x02\x04\x04\x6d\x61\x70\x03\x10\x77\x72\x69\x74"
  "\x65\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x03\x78\x0a\x83\x04"
  "\x77\x08\x81\x85\x02\x76\x06\x81\x83\x02\x75\x04\x83\x04\x09\x14"
  "\x11\x02\x10\x04\x1b\x70\x6f\x72\x74\x2f\x64\x65\x62\x75\x67\x67"
  "\x65\x72\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x02"
  "\x79\x04\x84\x06\x03\x10\x1d\x1d\x04\x11\x04\x1c\x04\x04\x0d\x04"
  "\x11\x1b\x04\x18\x04\x17\x04\x13\x04\x10\x04\x04\x0b\x04\x0c\x04"
  "\x04\x04\x11\x0a\x09\x1a\x19\x16\x14\x12\x0c\x73\x68\x6f\x77\x2d"
  "\x66\x72\x61\x6d\x65\x73\x0f\x18\x64\x65\x62\x75\x67\x2f\x72\x65"
  "\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x2d\x31\x0e"
  "\x1b\x73\x68\x6f\x77\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x15\x11\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
dbgutl_so_data_07d363b83757f1b3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dbgutl_so_data_07d363b83757f1b3 [0]))), (sizeof (prog_dbgutl_so_data_07d363b83757f1b3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("dbgutl.so", dbgutl_so_data_07d363b83757f1b3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dbgutl.so", "cb31e66bc7fd18f4")
