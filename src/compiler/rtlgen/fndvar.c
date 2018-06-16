/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:22-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto find_variable_locative_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_variable_locative_3)
DEFLABEL (find_variable_locative_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 9
#define DEBUGGING_LABEL_2_2 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto find_variable_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_variable_value_3)
DEFLABEL (find_variable_value_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define TAG_3_7 2
#define LABEL_3_8 9
#define TAG_3_9 3
#define ENVIRONMENT_LABEL_3_3 19
#define DEBUGGING_LABEL_3_2 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_11 11
#define EXECUTE_CACHE_3_10 13
#define FREE_REFERENCE_3_0 16
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto find_variable_value_simple_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_variable_value_simple_6)
DEFLABEL (find_variable_value_simple_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;
  Wrd9 = Wrd13;

DEFLABEL (label_9)
  (Rsp [3]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_6])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_8])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  ((Wrd22.pObj) [2]) = (Wrd19.Obj);
  (Rsp [5]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_3_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_3_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_8 13
#define FREE_REFERENCE_4_0 16
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto find_known_variable_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_known_variable_6)
DEFLABEL (find_known_variable_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (Rsp [4]) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_6);
  (Wrd5.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd5.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 21
#define DEBUGGING_LABEL_5_2 20
#define OBJECT_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_9 11
#define EXECUTE_CACHE_5_8 13
#define FREE_REFERENCE_5_0 16
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto find_closure_variable_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_closure_variable_7)
DEFLABEL (find_closure_variable_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd5.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 15
#define DEBUGGING_LABEL_6_2 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_6_4);
      goto find_stack_overwrite_variable_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_stack_overwrite_variable_5)
DEFLABEL (find_stack_overwrite_variable_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_5);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_6 7
#define LABEL_7_11 9
#define TAG_7_12 3
#define LABEL_7_13 11
#define TAG_7_14 4
#define LABEL_7_15 13
#define TAG_7_16 5
#define LABEL_7_20 15
#define LABEL_7_21 17
#define LABEL_7_22 19
#define LABEL_7_24 21
#define LABEL_7_8 23
#define LABEL_7_25 25
#define LABEL_7_9 27
#define LABEL_7_28 29
#define LABEL_7_29 31
#define LABEL_7_30 33
#define LABEL_7_31 35
#define LABEL_7_33 37
#define LABEL_7_34 39
#define LABEL_7_18 41
#define LABEL_7_38 43
#define LABEL_7_39 45
#define LABEL_7_36 47
#define LABEL_7_42 49
#define LABEL_7_43 51
#define ENVIRONMENT_LABEL_7_3 94
#define DEBUGGING_LABEL_7_2 93
#define OBJECT_7_12 92
#define OBJECT_7_11 91
#define OBJECT_7_10 90
#define OBJECT_7_9 89
#define OBJECT_7_8 88
#define OBJECT_7_7 87
#define OBJECT_7_6 86
#define OBJECT_7_5 85
#define OBJECT_7_4 84
#define OBJECT_7_3 83
#define OBJECT_7_2 82
#define OBJECT_7_1 81
#define OBJECT_7_0 80
#define EXECUTE_CACHE_7_41 53
#define EXECUTE_CACHE_7_40 55
#define EXECUTE_CACHE_7_37 57
#define EXECUTE_CACHE_7_35 59
#define EXECUTE_CACHE_7_32 61
#define EXECUTE_CACHE_7_27 63
#define EXECUTE_CACHE_7_26 65
#define EXECUTE_CACHE_7_23 67
#define EXECUTE_CACHE_7_19 69
#define EXECUTE_CACHE_7_17 71
#define EXECUTE_CACHE_7_10 73
#define EXECUTE_CACHE_7_7 75
#define FREE_REFERENCE_7_1 78
#define FREE_REFERENCE_7_0 79
#define FREE_REFERENCES_LABEL_7_0 52
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd48;
  machine_word Wrd22;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_19;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto find_variable_35;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_50;

    case 4:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_51;

    case 5:
      current_block = (Rpc - LABEL_7_15);
      goto lambda_52;

    case 6:
      current_block = (Rpc - LABEL_7_20);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_7_22);
      goto label_45;

    case 9:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_23;

    case 10:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_32;

    case 12:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_7_28);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_7_29);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_7_30);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_7_31);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_7_33);
      goto label_42;

    case 18:
      current_block = (Rpc - LABEL_7_34);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_7_38);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_7_39);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_7_36);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_7_42);
      goto label_47;

    case 24:
      current_block = (Rpc - LABEL_7_43);
      goto label_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_variable_49)
DEFLABEL (find_variable_35)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_84;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_84;
  (Wrd5.Obj) = ((Wrd11.pObj) [16]);

DEFLABEL (label_83)
  if ((Wrd5.Obj) == (current_block [OBJECT_7_2]))
    goto label_59;
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_11])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_53;

DEFLABEL (label_54)
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_53)
DEFLABEL (label_58)
  (Wrd28.Obj) = (Rsp [1]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd30.Obj) = (Rsp [4]);
  goto label_55;

DEFLABEL (label_56)
  (Wrd30.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_55)
DEFLABEL (label_57)
  (Rsp [4]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_13])));
  Rhp += 4;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd40 = Wrd33;
  (Wrd41.Obj) = (Rsp [6]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  ((Wrd40.pObj) [4]) = (Wrd37.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [5]) = (Wrd35.Obj);
  (Rsp [6]) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_15])));
  Rhp += 1;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  ((Wrd44.pObj) [2]) = (Wrd35.Obj);
  (Rsp [5]) = (Wrd43.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (label_59)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_81)
  (Wrd51.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_65;
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd97.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_7_21);
  (* (--Rsp)) = Rvl;
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 10))
    goto label_64;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd26.Lng))))
    goto label_64;
  (Wrd18.Obj) = ((Wrd24.pObj) [17]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_60)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (label_61)
  (Wrd7.Obj) = (current_block [OBJECT_7_8]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_63)
  (Wrd11.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));

DEFLABEL (label_62)
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_64)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_7_7]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_60;

DEFLABEL (label_65)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_80;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_80;
  (Wrd9.Obj) = ((Wrd13.pObj) [10]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_79)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_78;
  Wrd23 = Wrd27;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_76;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_76;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_75)
  (Wrd45.Obj) = (* (Rsp++));
  if ((Wrd29.Obj) == (Wrd45.Obj))
    goto label_72;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_71;
  Wrd46 = Wrd50;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_69;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd60.Lng))))
    goto label_69;
  (Wrd52.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_68)
  (Wrd68.Obj) = (* (Rsp++));
  if ((Wrd52.Obj) == (Wrd68.Obj))
    goto label_67;

DEFLABEL (label_66)
  (Wrd69.Obj) = (current_block [OBJECT_7_12]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (label_67)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_7_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (label_69)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (current_block [OBJECT_7_10]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_43)
  (Wrd52.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_33])), (Wrd47.pObj));

DEFLABEL (label_42)
  (Wrd46.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_74;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd83.Lng))))
    goto label_74;
  (Wrd75.Obj) = ((Wrd81.pObj) [3]);

DEFLABEL (label_73)
  (Rsp [0]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_32]));

DEFLABEL (label_74)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (current_block [OBJECT_7_11]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_44)
  (Wrd75.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_7_10]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_41)
  (Wrd29.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_29])), (Wrd24.pObj));

DEFLABEL (label_40)
  (Wrd23.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (current_block [OBJECT_7_9]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_5);
  goto label_81;

DEFLABEL (label_84)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_7_24);
  (Wrd7.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Wrd5.Obj) = Rvl;
  goto label_62;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_7_11);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_7_13);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_39]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_40]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_41]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_38);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [5]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_85)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_37]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_87;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_87;
  (Wrd8.Obj) = ((Wrd14.pObj) [16]);

DEFLABEL (label_86)
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [3]);
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_87)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_90;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd39.Lng))))
    goto label_90;
  (Wrd31.Obj) = ((Wrd37.pObj) [16]);

DEFLABEL (label_89)
  (Rsp [3]) = (Wrd31.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_90)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_7_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_47)
  (Wrd31.Obj) = Rvl;
  goto label_89;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_7_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_95;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd27.Lng))))
    goto label_95;
  (Wrd7.Obj) = ((Wrd25.pObj) [18]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_92;

DEFLABEL (label_93)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  goto label_91;

DEFLABEL (label_92)
  (Wrd9.Obj) = (Rsp [2]);

DEFLABEL (label_91)
DEFLABEL (label_94)
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_95)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_7_6]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_93;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_11 11
#define LABEL_8_12 13
#define LABEL_8_15 15
#define LABEL_8_16 17
#define LABEL_8_19 19
#define LABEL_8_20 21
#define LABEL_8_13 23
#define LABEL_8_26 25
#define LABEL_8_8 27
#define LABEL_8_27 29
#define LABEL_8_28 31
#define LABEL_8_9 33
#define LABEL_8_17 35
#define LABEL_8_24 37
#define LABEL_8_22 39
#define LABEL_8_38 41
#define LABEL_8_39 43
#define LABEL_8_29 45
#define LABEL_8_30 47
#define LABEL_8_42 49
#define LABEL_8_34 51
#define LABEL_8_40 53
#define LABEL_8_44 55
#define LABEL_8_45 57
#define LABEL_8_46 59
#define LABEL_8_48 61
#define LABEL_8_49 63
#define LABEL_8_50 65
#define LABEL_8_51 67
#define LABEL_8_52 69
#define LABEL_8_41 71
#define LABEL_8_36 73
#define LABEL_8_53 75
#define TAG_8_54 36
#define LABEL_8_59 77
#define LABEL_8_55 79
#define TAG_8_56 38
#define LABEL_8_47 81
#define LABEL_8_57 83
#define LABEL_8_58 85
#define ENVIRONMENT_LABEL_8_3 131
#define DEBUGGING_LABEL_8_2 130
#define OBJECT_8_13 129
#define OBJECT_8_12 128
#define OBJECT_8_11 127
#define OBJECT_8_10 126
#define OBJECT_8_9 125
#define OBJECT_8_8 124
#define OBJECT_8_7 123
#define OBJECT_8_6 122
#define OBJECT_8_5 121
#define OBJECT_8_4 120
#define OBJECT_8_3 119
#define OBJECT_8_2 118
#define OBJECT_8_1 117
#define OBJECT_8_0 116
#define EXECUTE_CACHE_8_60 87
#define EXECUTE_CACHE_8_43 89
#define EXECUTE_CACHE_8_35 91
#define EXECUTE_CACHE_8_33 93
#define EXECUTE_CACHE_8_32 95
#define EXECUTE_CACHE_8_31 97
#define EXECUTE_CACHE_8_25 99
#define EXECUTE_CACHE_8_23 101
#define EXECUTE_CACHE_8_37 103
#define EXECUTE_CACHE_8_21 105
#define EXECUTE_CACHE_8_18 107
#define EXECUTE_CACHE_8_14 109
#define EXECUTE_CACHE_8_10 111
#define FREE_REFERENCE_8_1 114
#define FREE_REFERENCE_8_0 115
#define FREE_REFERENCES_LABEL_8_0 86
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd116;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd112;
  machine_word Wrd118;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd128;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd8;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd45;
  machine_word Wrd24;
  machine_word Wrd50;
  machine_word Wrd83;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8_4);
      goto find_variable_internal_52;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_54;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_55;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto label_57;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto label_58;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto loop_51;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_8_19);
      goto label_61;

    case 9:
      current_block = (Rpc - LABEL_8_20);
      goto label_60;

    case 10:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_35;

    case 12:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_34;

    case 13:
      current_block = (Rpc - LABEL_8_27);
      goto label_62;

    case 14:
      current_block = (Rpc - LABEL_8_28);
      goto label_63;

    case 15:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_33;

    case 16:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_47;

    case 17:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_32;

    case 18:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_6;

    case 19:
      current_block = (Rpc - LABEL_8_38);
      goto label_64;

    case 20:
      current_block = (Rpc - LABEL_8_39);
      goto label_65;

    case 21:
      current_block = (Rpc - LABEL_8_29);
      goto continuation_40;

    case 22:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_39;

    case 23:
      current_block = (Rpc - LABEL_8_42);
      goto label_66;

    case 24:
      current_block = (Rpc - LABEL_8_34);
      goto continuation_48;

    case 25:
      current_block = (Rpc - LABEL_8_40);
      goto continuation_8;

    case 26:
      current_block = (Rpc - LABEL_8_44);
      goto label_67;

    case 27:
      current_block = (Rpc - LABEL_8_45);
      goto label_68;

    case 28:
      current_block = (Rpc - LABEL_8_46);
      goto label_69;

    case 29:
      current_block = (Rpc - LABEL_8_48);
      goto label_74;

    case 30:
      current_block = (Rpc - LABEL_8_49);
      goto label_70;

    case 31:
      current_block = (Rpc - LABEL_8_50);
      goto label_73;

    case 32:
      current_block = (Rpc - LABEL_8_51);
      goto label_71;

    case 33:
      current_block = (Rpc - LABEL_8_52);
      goto label_72;

    case 34:
      current_block = (Rpc - LABEL_8_41);
      goto continuation_7;

    case 35:
      current_block = (Rpc - LABEL_8_36);
      goto continuation_31;

    case 36:
      current_block = (Rpc - LABEL_8_53);
      goto lambda_79;

    case 37:
      current_block = (Rpc - LABEL_8_59);
      goto label_75;

    case 38:
      current_block = (Rpc - LABEL_8_55);
      goto lambda_80;

    case 39:
      current_block = (Rpc - LABEL_8_47);
      goto continuation_29;

    case 40:
      current_block = (Rpc - LABEL_8_57);
      goto continuation_22;

    case 41:
      current_block = (Rpc - LABEL_8_58);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_variable_internal_77)
DEFLABEL (find_variable_internal_52)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_130;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_130;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_129)
  (Wrd21.Obj) = (Rsp [3]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_82;

DEFLABEL (label_81)
  (Wrd83.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd83.Obj);
  goto loop_51;

DEFLABEL (label_82)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_128;
  Wrd25 = Wrd29;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_126;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd39.Lng))))
    goto label_126;
  (Wrd31.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_125)
  (Wrd47.Obj) = (* (Rsp++));
  if (! ((Wrd31.Obj) == (Wrd47.Obj)))
    goto label_93;
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_32]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 10))
    goto label_91;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_91;
  (Wrd11.Obj) = ((Wrd17.pObj) [4]);

DEFLABEL (label_90)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_89)
  (Wrd27.Obj) = (Rsp [0]);
  if (! ((Wrd27.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_84;

DEFLABEL (label_83)
  (Wrd46.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_51;

DEFLABEL (label_84)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_88;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd37.Lng))))
    goto label_88;
  (Wrd29.Obj) = ((Wrd35.pObj) [17]);

DEFLABEL (label_87)
  (Wrd45.Obj) = (Rsp [2]);
  if (! ((Wrd45.Obj) == (Wrd29.Obj)))
    goto label_83;
  (Wrd48.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_31]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_86;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_86;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_85)
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_43]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_8_29);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_86)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_8_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_42]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_8_8]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_63)
  (Wrd29.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_91)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_8_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_62)
  (Wrd11.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_89;

DEFLABEL (label_93)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_124;
  Wrd48 = Wrd52;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_122;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd62.Lng))))
    goto label_122;
  (Wrd54.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_121)
  (Wrd70.Obj) = (* (Rsp++));
  if (! ((Wrd54.Obj) == (Wrd70.Obj)))
    goto label_81;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_25]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_8_24);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_94)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_95;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_36]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_8_9]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_37]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_8_36);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_51;

DEFLABEL (label_95)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_120;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_120;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_119)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_118;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_118;
  (Wrd24.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_117)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_40]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_41]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_41);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_32]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_40);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_116;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_116;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_115)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_114;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd29.Lng))))
    goto label_114;
  (Wrd24.Obj) = ((Wrd27.pObj) [17]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_113)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_112;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd44.Lng))))
    goto label_112;
  (Wrd36.Obj) = ((Wrd42.pObj) [17]);

DEFLABEL (label_111)
  (Wrd52.Obj) = (* (Rsp++));
  if ((Wrd36.Obj) == (Wrd52.Obj))
    goto label_108;

DEFLABEL (label_107)
  (Wrd62.Obj) = (Rsp [4]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_106;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd61.Lng))))
    goto label_106;
  (Wrd53.Obj) = ((Wrd59.pObj) [24]);

DEFLABEL (label_105)
  (Rsp [1]) = (Wrd53.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd69.Obj) = (Rsp [0]);
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_103;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [1]);
  if ((Wrd73.Obj) == ((SCHEME_OBJECT) 0))
    goto label_99;

DEFLABEL (label_98)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_97;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);

DEFLABEL (label_96)
  (Rsp [0]) = (Wrd85.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd96.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_53])));
  Rhp += 3;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd96.pObj)));
  Wrd101 = Wrd96;
  (Wrd102.Obj) = (Rsp [4]);
  ((Wrd101.pObj) [2]) = (Wrd102.Obj);
  (Wrd100.Obj) = (Rsp [1]);
  ((Wrd101.pObj) [3]) = (Wrd100.Obj);
  ((Wrd101.pObj) [4]) = (Wrd85.Obj);
  (Rsp [5]) = (Wrd95.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_55])));
  Rhp += 1;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd106 = Wrd105;
  (Wrd107.Obj) = (Rsp [3]);
  ((Wrd106.pObj) [2]) = (Wrd107.Obj);
  (Rsp [6]) = (Wrd104.Obj);
  (Wrd108.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd108.Obj);
  (Rsp [4]) = (Wrd85.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_33]));

DEFLABEL (label_97)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_52]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_72)
  (Wrd85.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_102;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);

DEFLABEL (label_101)
  (Rsp [1]) = (Wrd75.Obj);

DEFLABEL (label_100)
  Rsp = (& (Rsp [1]));
  goto loop_51;

DEFLABEL (label_102)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_51]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_71)
  (Wrd75.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_103)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_50]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_73)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_98;

DEFLABEL (label_104)
  (Wrd118.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd118.Obj);
  goto label_100;

DEFLABEL (label_106)
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.Obj) = (current_block [OBJECT_8_3]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_49]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_70)
  (Wrd53.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd121.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd121.Obj);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_47]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd135.Obj) = (Rsp [2]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 10))
    goto label_110;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd134.Lng))))
    goto label_110;
  (Wrd128.Obj) = ((Wrd132.pObj) [8]);
  (* (--Rsp)) = (Wrd128.Obj);

DEFLABEL (label_109)
  (Wrd142.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd143.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_43]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_8_47);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_110)
  (Wrd137.Obj) = (Rsp [2]);
  (Wrd138.Obj) = (current_block [OBJECT_8_10]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_48]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Obj) = (current_block [OBJECT_8_8]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_46]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_69)
  (Wrd36.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd32.Obj) = (current_block [OBJECT_8_8]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_45]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_8_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_44]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_67)
  (Wrd7.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd32.Obj) = (current_block [OBJECT_8_7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_39]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_8_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_64)
  (Wrd7.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_8_2]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_58)
  (Wrd54.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd49.pObj));

DEFLABEL (label_57)
  (Wrd48.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_8_2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_56)
  (Wrd31.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd26.pObj));

DEFLABEL (label_55)
  (Wrd25.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_8_26);
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (loop_78)
DEFLABEL (loop_51)
  INTERRUPT_CHECK (26, LABEL_8_15);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_139;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd13.Lng))))
    goto label_139;
  (Wrd7.Obj) = ((Wrd11.pObj) [24]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_138)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_132;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_33]));

DEFLABEL (label_131)
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_35]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_8_34);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_132)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_137;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_134;

DEFLABEL (label_133)
  (Wrd37.Obj) = (current_block [OBJECT_8_6]);
  (Rsp [5]) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd38.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (label_134)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_136;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_135)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_51;

DEFLABEL (label_136)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_60)
  (Wrd27.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_137)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_134;
  goto label_133;

DEFLABEL (label_139)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_138;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_8_53);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_58]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd32.Obj) = ((Wrd7.pObj) [4]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_141;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd29.Lng))))
    goto label_141;
  (Wrd21.Obj) = ((Wrd27.pObj) [10]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_140)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_31]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_58);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_8_12]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_13]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_60]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_57);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_141)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [4]);
  (Wrd37.Obj) = (current_block [OBJECT_8_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_59]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_8_55);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_8_11]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define TAG_9_8 2
#define LABEL_9_10 9
#define TAG_9_11 3
#define LABEL_9_12 11
#define LABEL_9_13 13
#define ENVIRONMENT_LABEL_9_3 20
#define DEBUGGING_LABEL_9_2 19
#define EXECUTE_CACHE_9_14 15
#define EXECUTE_CACHE_9_9 17
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_9_4);
      goto find_variable_no_tricks_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_variable_no_tricks_8)
DEFLABEL (find_variable_no_tricks_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_10])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_9_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define TAG_10_8 2
#define LABEL_10_12 9
#define LABEL_10_10 11
#define TAG_10_11 4
#define LABEL_10_13 13
#define TAG_10_14 5
#define ENVIRONMENT_LABEL_10_3 23
#define DEBUGGING_LABEL_10_2 22
#define OBJECT_10_2 21
#define OBJECT_10_1 20
#define OBJECT_10_0 19
#define EXECUTE_CACHE_10_15 15
#define EXECUTE_CACHE_10_9 17
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto find_definition_variable_6;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_10_12);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_10_13);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_definition_variable_10)
DEFLABEL (find_definition_variable_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_16;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd18.Lng))))
    goto label_16;
  (Wrd6.Obj) = ((Wrd16.pObj) [16]);

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_13])));
  Rhp += 2;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd35 = Wrd32;
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  Rvl = (Wrd31.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd26.Obj) = (current_block [OBJECT_10_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_10_2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_10_13);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_11 5
#define LABEL_11_5 7
#define TAG_11_6 2
#define LABEL_11_12 9
#define LABEL_11_13 11
#define LABEL_11_14 13
#define LABEL_11_15 15
#define LABEL_11_16 17
#define LABEL_11_17 19
#define LABEL_11_7 21
#define LABEL_11_19 23
#define LABEL_11_8 25
#define TAG_11_9 11
#define LABEL_11_21 27
#define LABEL_11_20 29
#define LABEL_11_23 31
#define LABEL_11_24 33
#define ENVIRONMENT_LABEL_11_3 56
#define DEBUGGING_LABEL_11_2 55
#define OBJECT_11_7 54
#define OBJECT_11_6 53
#define OBJECT_11_5 52
#define OBJECT_11_4 51
#define OBJECT_11_3 50
#define OBJECT_11_2 49
#define OBJECT_11_1 48
#define OBJECT_11_0 47
#define EXECUTE_CACHE_11_22 35
#define EXECUTE_CACHE_11_18 37
#define EXECUTE_CACHE_11_10 39
#define FREE_REFERENCE_11_4 42
#define FREE_REFERENCE_11_3 43
#define FREE_REFERENCE_11_2 44
#define FREE_REFERENCE_11_1 45
#define FREE_REFERENCE_11_0 46
#define FREE_REFERENCES_LABEL_11_0 34
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd51;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      goto find_block_variable_15;

    case 1:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_28;

    case 3:
      current_block = (Rpc - LABEL_11_12);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_11_13);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_11_14);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_11_15);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_11_16);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_11_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_11_8);
      goto lambda_29;

    case 12:
      current_block = (Rpc - LABEL_11_21);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_11_23);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_11_24);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_block_variable_27)
DEFLABEL (find_block_variable_15)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_8])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_45;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_45;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_44)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_43;
  Wrd25 = Wrd29;

DEFLABEL (label_42)
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == (Wrd25.Obj))
    goto label_39;
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_38;
  Wrd33 = Wrd37;

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (Wrd33.Obj))
    goto label_34;
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_4]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_33;
  Wrd41 = Wrd45;

DEFLABEL (label_32)
  (Wrd47.Obj) = (Rsp [0]);
  if ((Wrd47.Obj) == (Wrd41.Obj))
    goto label_30;
  (Wrd48.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (label_30)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [2]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd51.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_17])), (Wrd42.pObj));

DEFLABEL (label_20)
  (Wrd41.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_36;
  Wrd58 = Wrd62;

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd58.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_16])), (Wrd59.pObj));

DEFLABEL (label_21)
  (Wrd58.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_15])), (Wrd34.pObj));

DEFLABEL (label_19)
  (Wrd33.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [3]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd72.Obj) = ((Wrd69.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_41;
  Wrd68 = Wrd72;

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd68.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_14])), (Wrd69.pObj));

DEFLABEL (label_22)
  (Wrd68.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_13])), (Wrd26.pObj));

DEFLABEL (label_18)
  (Wrd25.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_11_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd51.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_11_8);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_55;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_19);

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_54;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_54;
  (Wrd12.Obj) = ((Wrd16.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  Rvl = Rvl;

DEFLABEL (label_46)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_52;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_52;
  (Wrd11.Obj) = ((Wrd38.pObj) [4]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_49)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_51;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd24.Lng))))
    goto label_51;
  (Wrd16.Obj) = ((Wrd22.pObj) [10]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (label_51)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_11_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_24)
  (Wrd16.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_11_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_48;

DEFLABEL (label_54)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_11_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_9 9
#define LABEL_12_8 11
#define LABEL_12_12 13
#define LABEL_12_10 15
#define ENVIRONMENT_LABEL_12_3 29
#define DEBUGGING_LABEL_12_2 28
#define OBJECT_12_4 27
#define OBJECT_12_3 26
#define OBJECT_12_2 25
#define OBJECT_12_1 24
#define OBJECT_12_0 23
#define EXECUTE_CACHE_12_13 17
#define EXECUTE_CACHE_12_11 19
#define EXECUTE_CACHE_12_7 21
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto nearest_ic_block_expression_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_ic_block_expression_10)
DEFLABEL (nearest_ic_block_expression_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_12_6);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_17;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd16.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_12_3]);

DEFLABEL (label_13)
DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_12_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (lambda_12)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_12_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_12);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define TAG_13_7 2
#define LABEL_13_9 9
#define LABEL_13_12 11
#define LABEL_13_10 13
#define ENVIRONMENT_LABEL_13_3 25
#define DEBUGGING_LABEL_13_2 24
#define OBJECT_13_2 23
#define OBJECT_13_1 22
#define OBJECT_13_0 21
#define EXECUTE_CACHE_13_13 15
#define EXECUTE_CACHE_13_11 17
#define EXECUTE_CACHE_13_8 19
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
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
      goto closure_ic_locative_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ic_locative_8)
DEFLABEL (closure_ic_locative_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_13_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if ((Wrd6.Obj) == (Wrd9.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_13_1]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_13_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_12);
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_13 7
#define LABEL_14_6 9
#define TAG_14_7 3
#define LABEL_14_8 11
#define LABEL_14_9 13
#define TAG_14_10 5
#define ENVIRONMENT_LABEL_14_3 24
#define DEBUGGING_LABEL_14_2 23
#define OBJECT_14_1 22
#define OBJECT_14_0 21
#define EXECUTE_CACHE_14_14 15
#define EXECUTE_CACHE_14_12 17
#define EXECUTE_CACHE_14_11 19
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto block_ancestor_or_self__locative_6;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_6);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_ancestor_or_self__locative_9)
DEFLABEL (block_ancestor_or_self__locative_6)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_9])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  ((Wrd18.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_14_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if (! ((Wrd5.Obj) == (Wrd8.Obj)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_13);
  goto label_12;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_14_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if ((Wrd6.Obj) == (Wrd9.Obj))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_14_1]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_7 7
#define LABEL_15_5 9
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_3 16
#define OBJECT_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 11
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_15_4);
      goto popping_limit_locative_4;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (popping_limit_locative_9)
DEFLABEL (popping_limit_locative_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd8.Obj) = ((Wrd14.pObj) [7]);

DEFLABEL (label_12)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_11;
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_11;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd33.Lng) + (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_11;
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_10)
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd9.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_15_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_15_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define ENVIRONMENT_LABEL_16_3 25
#define DEBUGGING_LABEL_16_2 24
#define OBJECT_16_4 23
#define OBJECT_16_3 22
#define OBJECT_16_2 21
#define OBJECT_16_1 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_11 13
#define EXECUTE_CACHE_16_8 15
#define EXECUTE_CACHE_16_6 17
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto block_closure_locative_6;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_closure_locative_11)
DEFLABEL (block_closure_locative_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd12.Lng))))
    goto label_15;
  (Wrd6.Obj) = ((Wrd10.pObj) [20]);

DEFLABEL (label_14)
  (Wrd19.Obj) = (* (Rsp++));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_13;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_13;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd28.Lng) = ((Wrd29.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_13;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (label_13)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_9)
  (Wrd25.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd15.Obj) = (current_block [OBJECT_16_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 2);

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 5
#define DEBUGGING_LABEL_17_2 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndvar_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto register_locative_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_locative_3)
DEFLABEL (register_locative_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
fndvar_so_6aba4427d5b758b4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 17)
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

static const struct liarc_code_S arr_decl_fndvar_so_6aba4427d5b758b4 [17] =
  {
    { "fndvar_so_code_1", 1, fndvar_so_code_1 },
    { "fndvar_so_code_2", 1, fndvar_so_code_2 },
    { "fndvar_so_code_3", 4, fndvar_so_code_3 },
    { "fndvar_so_code_4", 4, fndvar_so_code_4 },
    { "fndvar_so_code_5", 4, fndvar_so_code_5 },
    { "fndvar_so_code_6", 3, fndvar_so_code_6 },
    { "fndvar_so_code_7", 25, fndvar_so_code_7 },
    { "fndvar_so_code_8", 42, fndvar_so_code_8 },
    { "fndvar_so_code_9", 6, fndvar_so_code_9 },
    { "fndvar_so_code_10", 6, fndvar_so_code_10 },
    { "fndvar_so_code_11", 16, fndvar_so_code_11 },
    { "fndvar_so_code_12", 7, fndvar_so_code_12 },
    { "fndvar_so_code_13", 6, fndvar_so_code_13 },
    { "fndvar_so_code_14", 6, fndvar_so_code_14 },
    { "fndvar_so_code_15", 4, fndvar_so_code_15 },
    { "fndvar_so_code_16", 5, fndvar_so_code_16 },
    { "fndvar_so_code_17", 1, fndvar_so_code_17 }
  };

int
decl_fndvar_so_6aba4427d5b758b4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_fndvar_so_6aba4427d5b758b4);
  return (0);
}

DECLARE_COMPILED_CODE ("fndvar.so", 3, decl_fndvar_so_6aba4427d5b758b4, fndvar_so_6aba4427d5b758b4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_fndvar_so_data_6aba4427d5b758b4 [3359] =
  "\x8e\x01\x1b\xce\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x23\x22\x29\x21\x9f\x2b\xba\x1d\xb0\x82\x88\x07\x28\xb1\x23\x22"
  "\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x07\x0d\xbc\x24\x28\xb1\x28"
  "\x0d\xbd\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d"
  "\xb0\x84\x88\x0c\x07\xb4\x24\x28\xb1\x28\xb5\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x85\x88\x0c\x0d\x1c\x08"
  "\xb4\x24\x28\x0d\xbc\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0c\x28\x0d\x1c\x28\xb5\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x82\x80"
  "\x02\x0d\x02\x02\x1b\x08\x0c\x0d\xc2\x1c\x02\x0d\x0d\x1c\x24\x28"
  "\xb5\x28\x0d\x28\xb4\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0c\x02\x0c\x02\x83\x0c\xc1"
  "\xc1\x02\x80\x1b\x02\x0d\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x28\xb5"
  "\x28\xb5\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x02\x28\x1b\x28"
  "\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x02\x83\x02\x0c\x0c\x1b\x82\x80\x0d\x0d"
  "\x0d\x0d\x0d\x24\x28\x0d\x1c\x28\xb5\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x07\x1b\x83\x80\x28\x1b\x28\x0d\x1c\x28\xb5"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x07\x80\x28\x1b\x28\x1b\x28\xb5"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x0c\x28\x1b\x28\x1b\x28\xb5\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x08\x1b\x86\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x08\x0d\x28"
  "\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x17\x1c"
  "\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a"
  "\xb3\x2a\xb2\x2a\x17\x1b\x0d\x0d\xb5\x0d\x0d\x1b\x0d\x1b\xb4\xb1"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c"
  "\x67\x65\x6e\x2f\x66\x6e\x64\x76\x61\x72\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x08\x0e\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x02\x04\x04\x87\x0c\x03\x02\x08\x02\x05\x04\x87\x0c"
  "\x03\x0a\x02\x13\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x02\x08\x04\x06\x65\x72\x72\x6f\x72\x03"
  "\x09\x0a\x81\x85\x02\x08\x08\x81\x87\x02\x07\x06\x81\x8d\x02\x06"
  "\x04\x85\x08\x09\x14\x02\x36\x66\x69\x6e\x64\x2d\x6b\x6e\x6f\x77"
  "\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3a\x20\x4b\x6e\x6f\x77"
  "\x6e\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x66\x6f\x75\x6e\x64"
  "\x20\x69\x6e\x20\x49\x43\x20\x66\x72\x61\x6d\x65\x02\x08\x04\x03"
  "\x0d\x0a\x83\x04\x0c\x08\x84\x06\x0b\x06\x81\x85\x02\x0a\x04\x84"
  "\x06\x09\x15\x02\x1d\x43\x6c\x6f\x73\x75\x72\x65\x20\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x20\x69\x6e\x20\x49\x43\x20\x66\x72\x61\x6d"
  "\x65\x06\x66\x65\x74\x63\x68\x09\x02\x07\x17\x66\x69\x6e\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x04\x03\x11\x0a\x85\x08\x10\x08\x84\x06\x0f\x06\x81\x85\x02"
  "\x0e\x04\x84\x06\x09\x16\x0a\x02\x21\x53\x74\x61\x63\x6b\x20\x6f"
  "\x76\x65\x72\x77\x72\x69\x74\x65\x20\x73\x6c\x6f\x74\x20\x69\x6e"
  "\x20\x49\x43\x20\x66\x72\x61\x6d\x65\x06\x18\x66\x69\x6e\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x6f\x2d\x74\x72\x69\x63"
  "\x6b\x73\x0b\x04\x03\x14\x08\x85\x08\x13\x06\x84\x06\x12\x04\x84"
  "\x06\x07\x10\x0c\x02\x08\x22\x69\x6c\x6c\x65\x67\x61\x6c\x20\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x0a\x06\x76\x61\x6c\x75\x65\x11"
  "\x12\x09\x26\x43\x61\x6e\x27\x74\x20\x74\x61\x6b\x65\x20\x6c\x6f"
  "\x63\x61\x74\x69\x76\x65\x20\x6f\x66\x20\x76\x61\x6c\x75\x65\x20"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x09\x23\x5b\x76\x61\x6c\x75\x65"
  "\x5d\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0d\x10\x0d\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x0e\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x0e\x03\x04\x03\x13\x6c\x76"
  "\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x3f"
  "\x07\x04\x1c\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x2d\x6b"
  "\x6e\x6f\x77\x6e\x2d\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x3f\x03\x16"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x03\x1a\x6d\x61\x6b\x65\x2d\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x73"
  "\x0f\x03\x1c\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x10\x03"
  "\x12\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x03\x1e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72"
  "\x69\x76\x69\x61\x6c\x2d\x6f\x72\x2d\x76\x69\x72\x74\x75\x61\x6c"
  "\x3f\x11\x03\x15\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2f\x75\x73\x65"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x3f\x04\x10\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x6f\x66\x66\x73\x65\x74\x12\x04\x1b\x72\x74\x6c\x3a"
  "\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x6f\x66\x66\x73\x65\x74\x13\x0d\x2d\x34\x81\x89\x02\x2c\x32\x81"
  "\x89\x02\x2b\x30\x81\x89\x02\x2a\x2e\x81\x8b\x02\x29\x2c\x81\x89"
  "\x02\x28\x2a\x81\x89\x02\x27\x28\x81\x85\x02\x26\x26\x81\x83\x02"
  "\x25\x24\x81\x83\x02\x24\x22\x81\x85\x02\x23\x20\x81\x83\x02\x22"
  "\x1e\x81\x8f\x02\x21\x1c\x81\x8f\x02\x20\x1a\x81\x83\x02\x1f\x18"
  "\x81\x8d\x02\x1e\x16\x81\x8f\x02\x1d\x14\x81\x83\x02\x1c\x12\x81"
  "\x91\x02\x1b\x10\x81\x87\x02\x1a\x0e\x81\x87\x02\x19\x0c\x81\x89"
  "\x02\x18\x0a\x81\x85\x02\x17\x08\x81\x8d\x02\x16\x06\x88\x0e\x15"
  "\x04\x81\x8d\x02\x33\x5f\x14\x02\x09\x09\x28\x66\x69\x6e\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x3a\x20\x42\x61\x64\x20\x69\x6e\x64\x69\x72\x65\x63\x74\x69"
  "\x6f\x6e\x08\x34\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3a\x20\x52\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x20\x74\x6f\x20\x6f\x70\x65\x6e\x20\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x11\x32\x66\x69\x6e\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3a"
  "\x20\x49\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6e\x6f\x74"
  "\x20\x66\x6f\x72\x20\x76\x61\x6c\x75\x65\x04\x63\x61\x72\x04\x63"
  "\x64\x72\x18\x0d\x0a\x0a\x62\x6c\x6f\x63\x6b\x2d\x74\x61\x67\x0e"
  "\x03\x03\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x03\x11\x03\x12\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x04"
  "\x05\x03\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f"
  "\x73\x75\x72\x65\x3f\x03\x0f\x03\x1c\x69\x6e\x64\x69\x72\x65\x63"
  "\x74\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x03\x1f\x62\x6c\x6f\x63\x6b\x2d\x6e\x65\x61\x72"
  "\x65\x73\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x61\x6e\x63\x65"
  "\x73\x74\x6f\x72\x06\x0b\x03\x12\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x11\x06\x11\x72\x65\x64\x69"
  "\x72\x65\x63\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x05\x19\x6d\x61"
  "\x6b\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72\x65\x64\x69\x72"
  "\x65\x63\x74\x69\x6f\x6e\x0e\x57\x56\x81\x8b\x02\x56\x54\x81\x87"
  "\x02\x55\x52\x81\x91\x02\x54\x50\x81\x89\x02\x53\x4e\x81\x8d\x02"
  "\x52\x4c\x81\x87\x02\x51\x4a\x81\x8d\x02\x50\x48\x81\x91\x02\x4f"
  "\x46\x81\x8f\x02\x4e\x44\x81\x8f\x02\x4d\x42\x81\x8f\x02\x4c\x40"
  "\x81\x91\x02\x4b\x3e\x81\x95\x02\x4a\x3c\x81\x93\x02\x49\x3a\x81"
  "\x91\x02\x48\x38\x81\x91\x02\x47\x36\x81\x8f\x02\x46\x34\x81\x8f"
  "\x02\x45\x32\x81\x95\x02\x44\x30\x81\x93\x02\x43\x2e\x81\x91\x02"
  "\x42\x2c\x81\x8d\x02\x41\x2a\x81\x8d\x02\x40\x28\x81\x8d\x02\x3f"
  "\x26\x81\x8d\x02\x3e\x24\x81\x8f\x02\x3d\x22\x81\x8f\x02\x3c\x20"
  "\x81\x91\x02\x3b\x1e\x81\x91\x02\x3a\x1c\x81\x8d\x02\x39\x1a\x81"
  "\x8f\x02\x38\x18\x81\x8d\x02\x37\x16\x81\x8f\x02\x36\x14\x81\x8f"
  "\x02\x35\x12\x81\x8d\x02\x34\x10\x81\x8d\x02\x33\x0e\x81\x8f\x02"
  "\x32\x0c\x81\x8d\x02\x31\x0a\x81\x8f\x02\x30\x08\x81\x8d\x02\x2f"
  "\x06\x81\x8b\x02\x2e\x04\x87\x0c\x55\x84\x01\x0f\x02\x0a\x06\x14"
  "\x66\x69\x6e\x64\x2d\x62\x6c\x6f\x63\x6b\x2f\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x0e\x04\x12\x03\x5d\x0e\x81\x89\x02\x5c\x0c\x81\x87"
  "\x02\x5b\x0a\x81\x87\x02\x5a\x08\x81\x87\x02\x59\x06\x81\x85\x02"
  "\x58\x04\x86\x0a\x0d\x15\x12\x02\x0b\x20\x44\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x20\x6f\x66\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x0d\x10\x06\x0e\x04\x03\x63"
  "\x0e\x81\x85\x02\x62\x0c\x81\x87\x02\x61\x0a\x81\x87\x02\x60\x08"
  "\x81\x87\x02\x5f\x06\x81\x85\x02\x5e\x04\x84\x06\x0d\x18\x15\x02"
  "\x0c\x0a\x09\x18\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x66\x69"
  "\x6e\x64\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x14\x49\x6c\x6c\x65"
  "\x67\x61\x6c\x20\x72\x65\x73\x75\x6c\x74\x20\x74\x79\x70\x65\x0d"
  "\x11\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63"
  "\x6b\x16\x73\x74\x61\x63\x6b\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65"
  "\x2d\x6f\x66\x66\x73\x65\x74\x13\x62\x6c\x6f\x63\x6b\x2d\x74\x79"
  "\x70\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x14\x72\x74\x6c\x3a\x6c"
  "\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x66\x66\x73\x65\x74\x0e\x62"
  "\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x69\x63\x06\x05\x0b\x66"
  "\x69\x6e\x64\x2d\x62\x6c\x6f\x63\x6b\x16\x04\x04\x05\x6d\x65\x6d"
  "\x71\x04\x73\x22\x81\x87\x02\x72\x20\x81\x87\x02\x71\x1e\x81\x85"
  "\x02\x70\x1c\x81\x87\x02\x6f\x1a\x81\x85\x02\x6e\x18\x81\x85\x02"
  "\x6d\x16\x81\x89\x02\x6c\x14\x81\x83\x02\x6b\x12\x81\x85\x02\x6a"
  "\x10\x81\x83\x02\x69\x0e\x81\x85\x02\x68\x0c\x81\x83\x02\x67\x0a"
  "\x81\x89\x02\x66\x08\x81\x87\x02\x65\x06\x81\x87\x02\x64\x04\x86"
  "\x0a\x21\x39\x17\x02\x0d\x29\x4e\x45\x41\x52\x45\x53\x54\x2d\x49"
  "\x43\x2d\x42\x4c\x4f\x43\x4b\x2d\x45\x58\x50\x52\x45\x53\x53\x49"
  "\x4f\x4e\x3a\x20\x4e\x6f\x20\x49\x43\x20\x62\x6c\x6f\x63\x6b\x0d"
  "\x05\x16\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f\x18\x03\x04"
  "\x7a\x10\x81\x85\x02\x79\x0e\x81\x85\x02\x78\x0c\x84\x06\x77\x0a"
  "\x81\x83\x02\x76\x08\x83\x04\x75\x06\x81\x83\x02\x74\x04\x83\x04"
  "\x0f\x1e\x19\x02\x0e\x1c\x43\x6c\x6f\x73\x75\x72\x65\x20\x70\x61"
  "\x72\x65\x6e\x74\x20\x6e\x6f\x74\x20\x49\x43\x20\x62\x6c\x6f\x63"
  "\x6b\x05\x16\x03\x18\x03\x04\x80\x01\x0e\x81\x85\x02\x7f\x0c\x81"
  "\x85\x02\x7e\x0a\x84\x06\x7d\x08\x81\x85\x02\x7c\x06\x81\x85\x02"
  "\x7b\x04\x84\x06\x0d\x1a\x18\x02\x0f\x19\x42\x6c\x6f\x63\x6b\x20"
  "\x69\x73\x20\x6e\x6f\x74\x20\x61\x6e\x20\x61\x6e\x63\x65\x73\x74"
  "\x6f\x72\x05\x16\x04\x13\x05\x04\x86\x01\x0e\x81\x85\x02\x85\x01"
  "\x0c\x81\x8d\x02\x84\x01\x0a\x81\x87\x02\x83\x01\x08\x81\x87\x02"
  "\x82\x01\x06\x81\x89\x02\x81\x01\x04\x86\x0a\x0d\x19\x16\x02\x10"
  "\x08\x61\x64\x64\x72\x65\x73\x73\x0d\x06\x21\x62\x6c\x6f\x63\x6b"
  "\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f\x72\x2d\x73\x65\x6c"
  "\x66\x2d\x3e\x6c\x6f\x63\x61\x74\x69\x76\x65\x02\x8a\x01\x0a\x81"
  "\x89\x02\x89\x01\x08\x81\x8b\x02\x88\x01\x06\x81\x8b\x02\x87\x01"
  "\x04\x86\x0a\x09\x13\x1a\x02\x11\x0d\x14\x09\x0e\x73\x74\x61\x63"
  "\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x03\x19\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66"
  "\x73\x65\x74\x03\x10\x04\x13\x04\x8f\x01\x0c\x81\x85\x02\x8e\x01"
  "\x0a\x81\x87\x02\x8d\x01\x08\x81\x87\x02\x8c\x01\x06\x81\x85\x02"
  "\x8b\x01\x04\x83\x04\x0b\x1a\x13\x02\x12\x90\x01\x04\x83\x04\x03"
  "\x10\x12\x0d\x0d\x10\x04\x13\x04\x1a\x04\x16\x04\x18\x04\x19\x04"
  "\x17\x04\x15\x04\x12\x04\x0f\x04\x14\x06\x0c\x04\x0a\x04\x04\x04"
  "\x04\x04\x12\x11\x17\x62\x6c\x6f\x63\x6b\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x17\x70\x6f\x70\x70"
  "\x69\x6e\x67\x2d\x6c\x69\x6d\x69\x74\x2f\x6c\x6f\x63\x61\x74\x69"
  "\x76\x65\x14\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69\x63\x2d\x6c\x6f"
  "\x63\x61\x74\x69\x76\x65\x1c\x6e\x65\x61\x72\x65\x73\x74\x2d\x69"
  "\x63\x2d\x62\x6c\x6f\x63\x6b\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x0e\x19\x66\x69\x6e\x64\x2d\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x0b\x1e\x66\x69"
  "\x6e\x64\x2d\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69"
  "\x74\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x16\x66\x69\x6e\x64"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x14\x66\x69\x6e\x64\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x1b\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\x2f\x73\x69\x6d\x70\x6c\x65"
  "\x14\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x76"
  "\x61\x6c\x75\x65\x17\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2f\x6c\x6f\x63\x61\x74\x69\x76\x65\x12\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
fndvar_so_data_6aba4427d5b758b4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_fndvar_so_data_6aba4427d5b758b4 [0]))), (sizeof (prog_fndvar_so_data_6aba4427d5b758b4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("fndvar.so", fndvar_so_data_6aba4427d5b758b4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("fndvar.so", "a460cb91aef900f2")
