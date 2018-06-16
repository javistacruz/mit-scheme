/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:00-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_13 13
#define LABEL_1_15 15
#define LABEL_1_17 17
#define LABEL_1_19 19
#define TAG_1_20 8
#define ENVIRONMENT_LABEL_1_3 42
#define DEBUGGING_LABEL_1_2 41
#define OBJECT_1_1 40
#define OBJECT_1_0 39
#define EXECUTE_CACHE_1_22 21
#define EXECUTE_CACHE_1_21 23
#define EXECUTE_CACHE_1_18 25
#define EXECUTE_CACHE_1_16 27
#define EXECUTE_CACHE_1_14 29
#define EXECUTE_CACHE_1_12 31
#define EXECUTE_CACHE_1_10 33
#define EXECUTE_CACHE_1_8 35
#define EXECUTE_CACHE_1_6 37
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto prompt_for_command_expression_10;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_command_expression_13)
DEFLABEL (prompt_for_command_expression_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_15)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_19])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_1_19);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_9 9
#define EXECUTE_CACHE_2_8 11
#define EXECUTE_CACHE_2_6 13
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto prompt_for_expression_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_expression_5)
DEFLABEL (prompt_for_expression_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define ENVIRONMENT_LABEL_3_3 21
#define DEBUGGING_LABEL_3_2 20
#define OBJECT_3_0 19
#define EXECUTE_CACHE_3_11 11
#define EXECUTE_CACHE_3_10 13
#define EXECUTE_CACHE_3_8 15
#define EXECUTE_CACHE_3_6 17
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto prompt_for_evaluated_expression_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_evaluated_expression_7)
DEFLABEL (prompt_for_evaluated_expression_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define LABEL_4_11 11
#define LABEL_4_12 13
#define TAG_4_13 5
#define LABEL_4_15 15
#define TAG_4_16 6
#define LABEL_4_18 17
#define LABEL_4_21 19
#define LABEL_4_23 21
#define ENVIRONMENT_LABEL_4_3 47
#define DEBUGGING_LABEL_4_2 46
#define OBJECT_4_2 45
#define OBJECT_4_1 44
#define OBJECT_4_0 43
#define EXECUTE_CACHE_4_25 23
#define EXECUTE_CACHE_4_24 25
#define EXECUTE_CACHE_4_22 27
#define EXECUTE_CACHE_4_20 29
#define EXECUTE_CACHE_4_19 31
#define EXECUTE_CACHE_4_17 33
#define EXECUTE_CACHE_4_14 35
#define EXECUTE_CACHE_4_10 37
#define EXECUTE_CACHE_4_8 39
#define EXECUTE_CACHE_4_6 41
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_4_4);
      goto Z__prompt_for_expression_11;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__prompt_for_expression_14)
DEFLABEL (Z__prompt_for_expression_11)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_12])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd5.Obj) = (current_block [OBJECT_4_2]);
  (Rsp [4]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_4_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_5 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto optional_port_2;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optional_port_5)
DEFLABEL (optional_port_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_0])))
    goto label_6;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_5 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto optional_environment_2;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optional_environment_5)
DEFLABEL (optional_environment_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_0])))
    goto label_6;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_5 7
#define LABEL_7_9 9
#define LABEL_7_11 11
#define ENVIRONMENT_LABEL_7_3 26
#define DEBUGGING_LABEL_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_13 13
#define EXECUTE_CACHE_7_12 15
#define EXECUTE_CACHE_7_10 17
#define EXECUTE_CACHE_7_8 19
#define EXECUTE_CACHE_7_6 21
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_4);
      goto prompt_for_command_char_7;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_command_char_10)
DEFLABEL (prompt_for_command_char_7)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_7_0])))
    goto label_13;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd11.Obj) = Rvl;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_11)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (label_13)
  Wrd11 = Wrd8;
  Rsp = (& (Rsp [1]));
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define TAG_8_10 4
#define LABEL_8_12 13
#define LABEL_8_15 15
#define LABEL_8_16 17
#define TAG_8_17 7
#define LABEL_8_19 19
#define ENVIRONMENT_LABEL_8_3 38
#define DEBUGGING_LABEL_8_2 37
#define OBJECT_8_1 36
#define OBJECT_8_0 35
#define EXECUTE_CACHE_8_21 21
#define EXECUTE_CACHE_8_20 23
#define EXECUTE_CACHE_8_18 25
#define EXECUTE_CACHE_8_14 27
#define EXECUTE_CACHE_8_13 29
#define EXECUTE_CACHE_8_11 31
#define EXECUTE_CACHE_8_6 33
#define FREE_REFERENCES_LABEL_8_0 20
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_8_4);
      goto default_prompt_for_command_char_11;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto lambda_16;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto lambda_17;

    case 8:
      current_block = (Rpc - LABEL_8_19);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_prompt_for_command_char_14)
DEFLABEL (default_prompt_for_command_char_11)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  goto loop_9;

DEFLABEL (loop_15)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_16])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_8_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_8_16);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_5 7
#define LABEL_9_9 9
#define ENVIRONMENT_LABEL_9_3 23
#define DEBUGGING_LABEL_9_2 22
#define OBJECT_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_11 11
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_8 15
#define EXECUTE_CACHE_9_6 17
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto prompt_for_confirmation_6;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_confirmation_9)
DEFLABEL (prompt_for_confirmation_6)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_1])))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd12.Obj) = Rvl;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (label_12)
  Wrd12 = Wrd9;
  Rsp = (& (Rsp [1]));
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define TAG_10_7 2
#define LABEL_10_10 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define TAG_10_13 5
#define LABEL_10_14 15
#define LABEL_10_15 17
#define TAG_10_16 7
#define LABEL_10_18 19
#define LABEL_10_26 21
#define LABEL_10_27 23
#define TAG_10_28 10
#define LABEL_10_23 25
#define LABEL_10_24 27
#define TAG_10_25 12
#define LABEL_10_20 29
#define LABEL_10_21 31
#define TAG_10_22 14
#define LABEL_10_30 33
#define LABEL_10_32 35
#define LABEL_10_34 37
#define LABEL_10_35 39
#define LABEL_10_37 41
#define ENVIRONMENT_LABEL_10_3 74
#define DEBUGGING_LABEL_10_2 73
#define OBJECT_10_11 72
#define OBJECT_10_10 71
#define OBJECT_10_9 70
#define OBJECT_10_8 69
#define OBJECT_10_7 68
#define OBJECT_10_6 67
#define OBJECT_10_5 66
#define OBJECT_10_4 65
#define OBJECT_10_3 64
#define OBJECT_10_2 63
#define OBJECT_10_1 62
#define OBJECT_10_0 61
#define EXECUTE_CACHE_10_38 43
#define EXECUTE_CACHE_10_36 45
#define EXECUTE_CACHE_10_33 47
#define EXECUTE_CACHE_10_31 49
#define EXECUTE_CACHE_10_29 51
#define EXECUTE_CACHE_10_19 53
#define EXECUTE_CACHE_10_17 55
#define EXECUTE_CACHE_10_9 57
#define EXECUTE_CACHE_10_8 59
#define FREE_REFERENCES_LABEL_10_0 42
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_10_4);
      goto default_prompt_for_confirmation_30;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto lambda_34;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto loop_28;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto lambda_36;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto lambda_37;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_10_26);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_10_27);
      goto lambda_40;

    case 11:
      current_block = (Rpc - LABEL_10_23);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_10_24);
      goto lambda_39;

    case 13:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_25;

    case 14:
      current_block = (Rpc - LABEL_10_21);
      goto lambda_38;

    case 15:
      current_block = (Rpc - LABEL_10_30);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_10_32);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_10_34);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_10_35);
      goto continuation_23;

    case 19:
      current_block = (Rpc - LABEL_10_37);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_prompt_for_confirmation_33)
DEFLABEL (default_prompt_for_confirmation_30)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  goto loop_28;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_10_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (loop_35)
DEFLABEL (loop_28)
  INTERRUPT_CHECK (26, LABEL_10_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_12])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_15])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_10_2])))
    goto label_42;

DEFLABEL (label_41)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_21])));
  Rhp += 1;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd46 = Wrd45;
  (Wrd47.Obj) = (Rsp [3]);
  ((Wrd46.pObj) [2]) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_10_20);
  Rvl = (current_block [OBJECT_10_10]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_42)
  if (Rvl == (current_block [OBJECT_10_3]))
    goto label_41;
  if (Rvl == (current_block [OBJECT_10_4]))
    goto label_41;
  if (! (Rvl == (current_block [OBJECT_10_5])))
    goto label_44;

DEFLABEL (label_43)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_24])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd37 = Wrd36;
  (Wrd38.Obj) = (Rsp [3]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_10_23);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  if (Rvl == (current_block [OBJECT_10_6]))
    goto label_43;
  if (Rvl == (current_block [OBJECT_10_7]))
    goto label_43;
  if (! (Rvl == (current_block [OBJECT_10_8])))
    goto label_45;
  Rsp = (& (Rsp [2]));
  goto loop_28;

DEFLABEL (label_45)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_26]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_27])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  (Wrd28.Obj) = (Rsp [3]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  ((Wrd27.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_26);
  Rsp = (& (Rsp [2]));
  goto loop_28;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_10_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_30);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_10_15);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_10_27);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_38]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_37);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_10_24);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10_34);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_10_21);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_10_35);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_5 3
#define LABEL_11_4 5
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 18
#define DEBUGGING_LABEL_11_2 17
#define OBJECT_11_1 16
#define OBJECT_11_0 15
#define EXECUTE_CACHE_11_9 9
#define EXECUTE_CACHE_11_8 11
#define EXECUTE_CACHE_11_6 13
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_11_4);
      goto prompt_for_string_5;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_string_8)
DEFLABEL (prompt_for_string_5)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_11_0])))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_10)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_9)
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define TAG_12_7 2
#define LABEL_12_9 9
#define TAG_12_10 3
#define LABEL_12_12 11
#define LABEL_12_15 13
#define LABEL_12_17 15
#define ENVIRONMENT_LABEL_12_3 33
#define DEBUGGING_LABEL_12_2 32
#define OBJECT_12_0 31
#define EXECUTE_CACHE_12_19 17
#define EXECUTE_CACHE_12_18 19
#define EXECUTE_CACHE_12_16 21
#define EXECUTE_CACHE_12_14 23
#define EXECUTE_CACHE_12_13 25
#define EXECUTE_CACHE_12_11 27
#define EXECUTE_CACHE_12_8 29
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_12_4);
      goto default_prompt_for_string_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_prompt_for_string_9)
DEFLABEL (default_prompt_for_string_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_12_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_12_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_4 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 18
#define DEBUGGING_LABEL_13_2 17
#define OBJECT_13_1 16
#define OBJECT_13_0 15
#define EXECUTE_CACHE_13_9 9
#define EXECUTE_CACHE_13_8 11
#define EXECUTE_CACHE_13_6 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_13_4);
      goto call_with_pass_phrase_5;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_pass_phrase_8)
DEFLABEL (call_with_pass_phrase_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_13_0])))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_10)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define TAG_14_9 3
#define LABEL_14_13 11
#define LABEL_14_11 13
#define LABEL_14_14 15
#define LABEL_14_15 17
#define TAG_14_16 7
#define LABEL_14_17 19
#define TAG_14_18 8
#define LABEL_14_19 21
#define TAG_14_20 9
#define LABEL_14_22 23
#define LABEL_14_35 25
#define LABEL_14_24 27
#define LABEL_14_36 29
#define LABEL_14_37 31
#define LABEL_14_26 33
#define TAG_14_27 15
#define LABEL_14_29 35
#define LABEL_14_31 37
#define LABEL_14_32 39
#define LABEL_14_33 41
#define LABEL_14_41 43
#define LABEL_14_51 45
#define LABEL_14_52 47
#define LABEL_14_55 49
#define LABEL_14_56 51
#define LABEL_14_39 53
#define LABEL_14_38 55
#define LABEL_14_57 57
#define LABEL_14_58 59
#define LABEL_14_59 61
#define LABEL_14_43 63
#define LABEL_14_45 65
#define LABEL_14_49 67
#define LABEL_14_61 69
#define LABEL_14_60 71
#define LABEL_14_62 73
#define LABEL_14_64 75
#define LABEL_14_65 77
#define TAG_14_66 37
#define LABEL_14_53 79
#define LABEL_14_67 81
#define LABEL_14_68 83
#define ENVIRONMENT_LABEL_14_3 139
#define DEBUGGING_LABEL_14_2 138
#define OBJECT_14_16 137
#define OBJECT_14_15 136
#define OBJECT_14_14 135
#define OBJECT_14_13 134
#define OBJECT_14_12 133
#define OBJECT_14_11 132
#define OBJECT_14_10 131
#define OBJECT_14_9 130
#define OBJECT_14_8 129
#define OBJECT_14_7 128
#define OBJECT_14_6 127
#define OBJECT_14_5 126
#define OBJECT_14_4 125
#define OBJECT_14_3 124
#define OBJECT_14_2 123
#define OBJECT_14_1 122
#define OBJECT_14_0 121
#define EXECUTE_CACHE_14_63 85
#define EXECUTE_CACHE_14_54 87
#define EXECUTE_CACHE_14_50 89
#define EXECUTE_CACHE_14_48 91
#define EXECUTE_CACHE_14_47 93
#define EXECUTE_CACHE_14_46 95
#define EXECUTE_CACHE_14_44 97
#define EXECUTE_CACHE_14_42 99
#define EXECUTE_CACHE_14_40 101
#define EXECUTE_CACHE_14_34 103
#define EXECUTE_CACHE_14_30 105
#define EXECUTE_CACHE_14_28 107
#define EXECUTE_CACHE_14_25 109
#define EXECUTE_CACHE_14_23 111
#define EXECUTE_CACHE_14_21 113
#define EXECUTE_CACHE_14_12 115
#define EXECUTE_CACHE_14_10 117
#define EXECUTE_CACHE_14_6 119
#define FREE_REFERENCES_LABEL_14_0 84
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd54;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd75;
  machine_word Wrd34;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd117;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd125;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd23;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd62;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto default_call_with_pass_phrase_74;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto lambda_87;

    case 4:
      current_block = (Rpc - LABEL_14_13);
      goto loop_36;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_14_15);
      goto lambda_89;

    case 8:
      current_block = (Rpc - LABEL_14_17);
      goto lambda_90;

    case 9:
      current_block = (Rpc - LABEL_14_19);
      goto lambda_91;

    case 10:
      current_block = (Rpc - LABEL_14_22);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_14_35);
      goto continuation_39;

    case 12:
      current_block = (Rpc - LABEL_14_24);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_14_36);
      goto label_77;

    case 14:
      current_block = (Rpc - LABEL_14_37);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_14_26);
      goto lambda_92;

    case 16:
      current_block = (Rpc - LABEL_14_29);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_14_31);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_14_32);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_14_33);
      goto continuation_3;

    case 20:
      current_block = (Rpc - LABEL_14_41);
      goto continuation_29;

    case 21:
      current_block = (Rpc - LABEL_14_51);
      goto continuation_54;

    case 22:
      current_block = (Rpc - LABEL_14_52);
      goto continuation_50;

    case 23:
      current_block = (Rpc - LABEL_14_55);
      goto label_83;

    case 24:
      current_block = (Rpc - LABEL_14_56);
      goto label_82;

    case 25:
      current_block = (Rpc - LABEL_14_39);
      goto continuation_45;

    case 26:
      current_block = (Rpc - LABEL_14_38);
      goto continuation_46;

    case 27:
      current_block = (Rpc - LABEL_14_57);
      goto label_78;

    case 28:
      current_block = (Rpc - LABEL_14_58);
      goto label_80;

    case 29:
      current_block = (Rpc - LABEL_14_59);
      goto label_79;

    case 30:
      current_block = (Rpc - LABEL_14_43);
      goto continuation_10;

    case 31:
      current_block = (Rpc - LABEL_14_45);
      goto continuation_15;

    case 32:
      current_block = (Rpc - LABEL_14_49);
      goto continuation_30;

    case 33:
      current_block = (Rpc - LABEL_14_61);
      goto label_81;

    case 34:
      current_block = (Rpc - LABEL_14_60);
      goto continuation_49;

    case 35:
      current_block = (Rpc - LABEL_14_62);
      goto continuation_32;

    case 36:
      current_block = (Rpc - LABEL_14_64);
      goto continuation_34;

    case 37:
      current_block = (Rpc - LABEL_14_65);
      goto lambda_93;

    case 38:
      current_block = (Rpc - LABEL_14_53);
      goto continuation_51;

    case 39:
      current_block = (Rpc - LABEL_14_67);
      goto continuation_52;

    case 40:
      current_block = (Rpc - LABEL_14_68);
      goto label_84;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_call_with_pass_phrase_86)
DEFLABEL (default_call_with_pass_phrase_74)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_8])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd5.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_36;

DEFLABEL (lambda_87)
  CLOSURE_HEADER (LABEL_14_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_34]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_48]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_32);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_47]));

DEFLABEL (loop_88)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_14_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_15])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_17])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  ((Wrd22.pObj) [2]) = (Wrd17.Obj);
  ((Wrd22.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_19])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  ((Wrd29.pObj) [2]) = (Wrd17.Obj);
  ((Wrd29.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_14_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;

DEFLABEL (label_96)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_14_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_50]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_14_49);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_95;
  if (! (INDEX_FIXNUM_P (Rvl)))
    goto label_95;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd15.uLng) = (OBJECT_DATUM (Rvl));
  ((Wrd14.pObj) [1]) = (Wrd15.Obj);

DEFLABEL (label_94)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_62]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_63]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_14_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_65])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_14_64);
  Rvl = (current_block [OBJECT_14_13]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_61]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_10]), 2);

DEFLABEL (label_81)
  goto label_94;

DEFLABEL (label_97)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (current_block [OBJECT_14_5]))
    goto label_96;
  if ((Wrd12.Obj) == (current_block [OBJECT_14_6]))
    goto label_96;
  if ((Wrd12.Obj) == (current_block [OBJECT_14_7]))
    goto label_118;
  if ((Wrd12.Obj) == (current_block [OBJECT_14_8]))
    goto label_118;
  if ((Wrd12.Obj) == (current_block [OBJECT_14_11]))
    goto label_115;
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_38]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_39]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_40]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_14_39);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_114;
  (Wrd75.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_50]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_14_38);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_113)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_112;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_111)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd17.Lng) < (Wrd19.Lng))
    goto label_106;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_60]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd27.Lng) = ((Wrd17.Lng) + 10L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_15]), 1);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_14_60);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_40]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_14_52);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_103;
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_53]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (current_block [OBJECT_14_12]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd125.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_54]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_14_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_50]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_14_67);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_105;
  if (! (INDEX_FIXNUM_P (Rvl)))
    goto label_105;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd15.uLng) = (OBJECT_DATUM (Rvl));
  ((Wrd14.pObj) [1]) = (Wrd15.Obj);

DEFLABEL (label_104)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_51]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_63]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_14_51);

DEFLABEL (label_103)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd81.Lng) = ((Wrd80.Lng) + 1L);
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 30))
    goto label_102;
  if (! (INDEX_FIXNUM_P (Wrd78.Obj)))
    goto label_102;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd112.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  ((Wrd111.pObj) [1]) = (Wrd112.Obj);

DEFLABEL (label_101)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 30))
    goto label_100;
  (Wrd92.Obj) = (Rsp [1]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 26))
    goto label_100;
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [1]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) (Wrd95.Lng)) < ((unsigned long) (Wrd99.Lng))))
    goto label_100;
  (Wrd90.Obj) = (Rsp [4]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 2))
    goto label_100;
  (Wrd84.uLng) = (OBJECT_DATUM (Wrd92.Obj));
  (Wrd87.pChr) = (& ((Wrd97.pChr) [(Wrd84.Lng)]));
  ((Wrd87.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd90.Obj)));

DEFLABEL (label_99)
  (Wrd34.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [5]));

DEFLABEL (label_98)
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_100)
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.Obj) = (Rsp [4]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_56]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_14]), 3);

DEFLABEL (label_82)
  goto label_99;

DEFLABEL (label_102)
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_55]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_10]), 2);

DEFLABEL (label_83)
  goto label_101;

DEFLABEL (label_105)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_68]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_10]), 2);

DEFLABEL (label_84)
  goto label_104;

DEFLABEL (label_106)
  (Wrd32.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 30))
    goto label_110;
  if (! (INDEX_FIXNUM_P (Wrd29.Obj)))
    goto label_110;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  ((Wrd64.pObj) [1]) = (Wrd65.Obj);

DEFLABEL (label_109)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_108;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_108;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd48.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_108;
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 2))
    goto label_108;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd40.pChr) = (& ((Wrd50.pChr) [(Wrd37.Lng)]));
  ((Wrd40.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd43.Obj)));

DEFLABEL (label_107)
  (Wrd34.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto label_98;

DEFLABEL (label_108)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_59]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_14]), 3);

DEFLABEL (label_79)
  goto label_107;

DEFLABEL (label_110)
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_58]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_10]), 2);

DEFLABEL (label_80)
  goto label_109;

DEFLABEL (label_112)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_57]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_9]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd74.Obj) = (current_block [OBJECT_14_12]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_113;

DEFLABEL (label_115)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_117;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.uLng) = (OBJECT_DATUM (current_block [OBJECT_14_12]));
  ((Wrd35.pObj) [1]) = (Wrd37.Obj);

DEFLABEL (label_116)
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_117)
  (Wrd39.Obj) = (current_block [OBJECT_14_12]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_37]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_10]), 2);

DEFLABEL (label_76)
  goto label_116;

DEFLABEL (label_118)
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_35]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd53.uLng) == 30))
    goto label_124;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [1]);
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_123)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if ((Wrd59.Lng) > 0)
    goto label_120;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_119)
  (Wrd62.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd62.Obj);
  goto label_116;

DEFLABEL (label_120)
  (Wrd64.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Lng) = ((Wrd59.Lng) - 1L);
  (Wrd65.Obj) = (LONG_TO_FIXNUM (Wrd68.Lng));
  (Rsp [1]) = (Wrd65.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd72.uLng) == 30)
    goto label_122;

DEFLABEL (label_121)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_10]), 2);

DEFLABEL (label_122)
  if (! (INDEX_FIXNUM_P (Wrd65.Obj)))
    goto label_121;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd76.uLng) = (OBJECT_DATUM (Wrd65.Obj));
  ((Wrd74.pObj) [1]) = (Wrd76.Obj);
  Rsp = (& (Rsp [3]));
  goto label_119;

DEFLABEL (label_124)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_36]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_9]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_14_35);
  goto label_119;

DEFLABEL (lambda_89)
  CLOSURE_HEADER (LABEL_14_15);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_26])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_28]));

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_14_17);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_29);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_125;
  Rvl = (current_block [OBJECT_14_13]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_125)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_43]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_44]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_43);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_16]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_46]));

DEFLABEL (lambda_91)
  CLOSURE_HEADER (LABEL_14_19);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_31);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_126;
  Rvl = (current_block [OBJECT_14_13]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_46]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_45);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd16.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_92)
  CLOSURE_HEADER (LABEL_14_26);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_42]));

DEFLABEL (lambda_93)
  CLOSURE_HEADER (LABEL_14_65);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_5 16
#define OBJECT_15_4 15
#define OBJECT_15_3 14
#define OBJECT_15_2 13
#define OBJECT_15_1 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto canonicalize_prompt_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_prompt_11)
DEFLABEL (canonicalize_prompt_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == (current_block [OBJECT_15_1]))
    goto label_18;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.Lng) = ((Wrd20.Lng) - 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 30))
    goto label_17;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_17;
  Wrd30 = Wrd21;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) (Wrd30.Lng)) < ((unsigned long) (Wrd34.Lng))))
    goto label_17;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd27.pChr) = (& ((Wrd32.pChr) [(Wrd24.Lng)]));
  (Wrd28.uLng) = ((unsigned long) (((unsigned char *) (Wrd27.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd28.uLng)));

DEFLABEL (label_16)
  if ((Wrd22.Obj) == (current_block [OBJECT_15_3]))
    goto label_13;
  (Wrd43.Obj) = (current_block [OBJECT_15_5]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd43.Obj) = (current_block [OBJECT_15_4]);

DEFLABEL (label_12)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto label_14;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_8 9
#define LABEL_16_7 11
#define LABEL_16_11 13
#define ENVIRONMENT_LABEL_16_3 25
#define DEBUGGING_LABEL_16_2 24
#define OBJECT_16_4 23
#define OBJECT_16_3 22
#define OBJECT_16_2 21
#define OBJECT_16_1 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_10 15
#define EXECUTE_CACHE_16_9 17
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_16_4);
      goto canonicalize_command_prompt_9;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_command_prompt_16)
DEFLABEL (canonicalize_command_prompt_9)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_17;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd6.uLng) == 1)
    goto label_19;

DEFLABEL (label_18)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_4]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (label_19)
  if (! ((Wrd6.uLng) == 1))
    goto label_27;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_26)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_16_1])))
    goto label_18;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_25;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_24)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 30))
    goto label_18;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_23;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_20)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define TAG_17_8 2
#define LABEL_17_10 9
#define LABEL_17_12 11
#define LABEL_17_14 13
#define LABEL_17_17 15
#define LABEL_17_15 17
#define LABEL_17_20 19
#define LABEL_17_21 21
#define ENVIRONMENT_LABEL_17_3 44
#define DEBUGGING_LABEL_17_2 43
#define OBJECT_17_5 42
#define OBJECT_17_4 41
#define OBJECT_17_3 40
#define OBJECT_17_2 39
#define OBJECT_17_1 38
#define OBJECT_17_0 37
#define EXECUTE_CACHE_17_19 23
#define EXECUTE_CACHE_17_18 25
#define EXECUTE_CACHE_17_16 27
#define EXECUTE_CACHE_17_13 29
#define EXECUTE_CACHE_17_11 31
#define EXECUTE_CACHE_17_9 33
#define EXECUTE_CACHE_17_6 35
#define FREE_REFERENCES_LABEL_17_0 22
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_17_4);
      goto write_command_prompt_11;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_17_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_17_17);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_17_21);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_command_prompt_16)
DEFLABEL (write_command_prompt_11)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_7])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_17_7);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (label_20)
  if (! ((Wrd8.uLng) == 1))
    goto label_24;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_23)
  if (! ((Wrd18.Obj) == (current_block [OBJECT_17_3])))
    goto label_19;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (label_22)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_13)
  (Wrd18.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_0 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto port_debugger_failure_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_debugger_failure_5)
DEFLABEL (port_debugger_failure_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto default_debugger_failure_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_debugger_failure_4)
DEFLABEL (default_debugger_failure_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 13
#define DEBUGGING_LABEL_20_2 12
#define OBJECT_20_0 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto port_debugger_message_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_debugger_message_5)
DEFLABEL (port_debugger_message_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_21_4);
      goto default_debugger_message_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_debugger_message_4)
DEFLABEL (default_debugger_message_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 13
#define DEBUGGING_LABEL_22_2 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto port_debugger_presentation_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_debugger_presentation_5)
DEFLABEL (port_debugger_presentation_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 10
#define DEBUGGING_LABEL_23_2 9
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto default_debugger_presentation_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_debugger_presentation_4)
DEFLABEL (default_debugger_presentation_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_7 5
#define LABEL_24_5 7
#define LABEL_24_9 9
#define ENVIRONMENT_LABEL_24_3 23
#define DEBUGGING_LABEL_24_2 22
#define OBJECT_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_11 11
#define EXECUTE_CACHE_24_10 13
#define EXECUTE_CACHE_24_8 15
#define EXECUTE_CACHE_24_6 17
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_24_4);
      goto port_write_result_5;

    case 1:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_write_result_8)
DEFLABEL (port_write_result_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_24_0])))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_10)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd7.Obj);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_9)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_11)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Wrd11.Obj) = (Rsp [5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define TAG_25_8 2
#define LABEL_25_10 9
#define LABEL_25_14 11
#define LABEL_25_12 13
#define LABEL_25_15 15
#define LABEL_25_18 17
#define LABEL_25_16 19
#define LABEL_25_20 21
#define LABEL_25_19 23
#define ENVIRONMENT_LABEL_25_3 47
#define DEBUGGING_LABEL_25_2 46
#define OBJECT_25_6 45
#define OBJECT_25_5 44
#define OBJECT_25_4 43
#define OBJECT_25_3 42
#define OBJECT_25_2 41
#define OBJECT_25_1 40
#define OBJECT_25_0 39
#define EXECUTE_CACHE_25_21 25
#define EXECUTE_CACHE_25_17 27
#define EXECUTE_CACHE_25_13 29
#define EXECUTE_CACHE_25_11 31
#define EXECUTE_CACHE_25_9 33
#define EXECUTE_CACHE_25_6 35
#define FREE_REFERENCE_25_0 38
#define FREE_REFERENCES_LABEL_25_0 24
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto default_write_result_9;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_25_15);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_25_18);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_25_16);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_write_result_13)
DEFLABEL (default_write_result_9)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_15)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_7])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd18 = Wrd11;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_25_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd27.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [5]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (label_16)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_25_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_25_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_18);

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_25_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_21]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_15])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define OBJECT_26_1 10
#define OBJECT_26_0 9
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto port_set_default_directory_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_default_directory_5)
DEFLABEL (port_set_default_directory_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_26_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define OBJECT_27_1 10
#define OBJECT_27_0 9
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto port_set_default_environment_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_set_default_environment_5)
DEFLABEL (port_set_default_environment_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_27_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define ENVIRONMENT_LABEL_28_3 16
#define DEBUGGING_LABEL_28_2 15
#define OBJECT_28_1 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCE_28_0 12
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_28_4);
      goto port_gc_start_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_gc_start_6)
DEFLABEL (port_gc_start_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_10;
  Wrd7 = Wrd11;

DEFLABEL (label_9)
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define OBJECT_29_1 14
#define OBJECT_29_0 13
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCE_29_0 12
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_29_4);
      goto port_gc_finish_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_gc_finish_6)
DEFLABEL (port_gc_finish_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_10;
  Wrd7 = Wrd11;

DEFLABEL (label_9)
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_7])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define OBJECT_30_1 10
#define OBJECT_30_0 9
#define EXECUTE_CACHE_30_6 7
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto port_read_start_2;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_read_start_5)
DEFLABEL (port_read_start_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define OBJECT_31_1 10
#define OBJECT_31_0 9
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_31_4);
      goto port_read_finish_2;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_read_finish_5)
DEFLABEL (port_read_finish_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_31_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_7 5
#define TAG_32_8 1
#define LABEL_32_9 7
#define TAG_32_10 2
#define LABEL_32_16 9
#define LABEL_32_17 11
#define LABEL_32_11 13
#define TAG_32_12 5
#define LABEL_32_5 15
#define LABEL_32_14 17
#define LABEL_32_15 19
#define LABEL_32_20 21
#define TAG_32_21 9
#define LABEL_32_18 23
#define TAG_32_19 10
#define LABEL_32_27 25
#define LABEL_32_28 27
#define LABEL_32_29 29
#define LABEL_32_23 31
#define LABEL_32_24 33
#define LABEL_32_26 35
#define LABEL_32_37 37
#define LABEL_32_30 39
#define LABEL_32_32 41
#define LABEL_32_38 43
#define LABEL_32_34 45
#define LABEL_32_36 47
#define LABEL_32_39 49
#define LABEL_32_41 51
#define LABEL_32_42 53
#define LABEL_32_44 55
#define LABEL_32_45 57
#define LABEL_32_47 59
#define LABEL_32_48 61
#define LABEL_32_49 63
#define ENVIRONMENT_LABEL_32_3 96
#define DEBUGGING_LABEL_32_2 95
#define OBJECT_32_5 94
#define OBJECT_32_4 93
#define OBJECT_32_3 92
#define OBJECT_32_2 91
#define OBJECT_32_1 90
#define OBJECT_32_0 89
#define EXECUTE_CACHE_32_46 65
#define EXECUTE_CACHE_32_43 67
#define EXECUTE_CACHE_32_40 69
#define EXECUTE_CACHE_32_35 71
#define EXECUTE_CACHE_32_33 73
#define EXECUTE_CACHE_32_31 75
#define EXECUTE_CACHE_32_25 77
#define EXECUTE_CACHE_32_22 79
#define EXECUTE_CACHE_32_13 81
#define EXECUTE_CACHE_32_6 83
#define FREE_REFERENCE_32_0 86
#define FREE_ASSIGNMENT_32_0 88
#define FREE_REFERENCES_LABEL_32_0 64
#define NUMBER_OF_LINKER_SECTIONS_32_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd12;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_32_4);
      goto with_notification_39;

    case 1:
      current_block = (Rpc - LABEL_32_7);
      goto lambda_49;

    case 2:
      current_block = (Rpc - LABEL_32_9);
      goto lambda_50;

    case 3:
      current_block = (Rpc - LABEL_32_16);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_32_17);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto lambda_51;

    case 6:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_34;

    case 7:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_32_20);
      goto lambda_53;

    case 10:
      current_block = (Rpc - LABEL_32_18);
      goto swapB_52;

    case 11:
      current_block = (Rpc - LABEL_32_27);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_32_28);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_32_29);
      goto label_45;

    case 14:
      current_block = (Rpc - LABEL_32_23);
      goto continuation_23;

    case 15:
      current_block = (Rpc - LABEL_32_24);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_32_26);
      goto continuation_2;

    case 17:
      current_block = (Rpc - LABEL_32_37);
      goto continuation_28;

    case 18:
      current_block = (Rpc - LABEL_32_30);
      goto continuation_24;

    case 19:
      current_block = (Rpc - LABEL_32_32);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_32_38);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_32_34);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_32_36);
      goto continuation_3;

    case 23:
      current_block = (Rpc - LABEL_32_39);
      goto continuation_30;

    case 24:
      current_block = (Rpc - LABEL_32_41);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_32_42);
      goto continuation_37;

    case 26:
      current_block = (Rpc - LABEL_32_44);
      goto continuation_5;

    case 27:
      current_block = (Rpc - LABEL_32_45);
      goto continuation_4;

    case 28:
      current_block = (Rpc - LABEL_32_47);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_32_48);
      goto continuation_6;

    case 30:
      current_block = (Rpc - LABEL_32_49);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_notification_48)
DEFLABEL (with_notification_39)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_32_0])))
    goto label_55;

DEFLABEL (label_54)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_25]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_32_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_35]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_32_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_43]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_32_42);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_55)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd14.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_7])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  ((Wrd24.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_9])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  ((Wrd31.pObj) [2]) = (Wrd5.Obj);
  ((Wrd31.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_11])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd38 = Wrd35;
  ((Wrd38.pObj) [2]) = (Wrd11.Obj);
  ((Wrd38.pObj) [3]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd34.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_32_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_25]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_35]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_43]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_40]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_49);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_32_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_32_9);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_59;
  Wrd9 = Wrd13;

DEFLABEL (label_58)
  Wrd8 = Wrd9;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_57;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_57;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_56)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_18])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (Rsp [1]) = (Wrd37.Obj);
  ((Wrd39.pObj) [2]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Rsp [2]) = (Wrd40.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_20])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (label_57)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_16])), (Wrd10.pObj));

DEFLABEL (label_41)
  (Wrd9.Obj) = Rvl;
  goto label_58;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_32_1]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_32_11);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_32_32);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_65;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_65;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! ((Wrd46.Lng) > (Wrd52.Lng)))
    goto label_63;

DEFLABEL (label_64)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_41]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_25]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_32_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_35]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_32_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_40]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32_37);

DEFLABEL (label_63)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd26.pObj) [0]) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_39]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd24.pObj) [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd40.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_60;

DEFLABEL (label_61)
  (Wrd41.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_60)
DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_40]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_32_39);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_46]));

DEFLABEL (label_65)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_38]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_46)
DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (label_67)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_30]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_31]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32_30);
  goto label_66;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_32_20);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_52)
  CLOSURE_HEADER (LABEL_32_18);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  Wrd5 = Wrd9;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_71)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_68)
  Rvl = (current_block [OBJECT_32_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_70)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_29])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_45)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_44)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_32_27])), (Wrd6.pObj));

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 12
#define DEBUGGING_LABEL_33_2 11
#define EXECUTE_CACHE_33_6 7
#define FREE_REFERENCE_33_0 10
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_33_4);
      goto wrap_notification_port_0;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_notification_port_4)
DEFLABEL (wrap_notification_port_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define ENVIRONMENT_LABEL_34_3 30
#define DEBUGGING_LABEL_34_2 29
#define OBJECT_34_5 28
#define OBJECT_34_4 27
#define OBJECT_34_3 26
#define OBJECT_34_2 25
#define OBJECT_34_1 24
#define OBJECT_34_0 23
#define EXECUTE_CACHE_34_10 15
#define FREE_REFERENCE_34_4 18
#define FREE_REFERENCE_34_3 19
#define FREE_REFERENCE_34_2 20
#define FREE_REFERENCE_34_1 21
#define FREE_REFERENCE_34_0 22
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_34_4);
      goto make_wrapped_notification_port_type_15;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_wrapped_notification_port_type_23)
DEFLABEL (make_wrapped_notification_port_type_15)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_33;
  Wrd7 = Wrd11;

DEFLABEL (label_32)
  (Wrd16.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_31;
  Wrd26 = Wrd30;

DEFLABEL (label_30)
  (Wrd35.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_34_2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_2]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_29;
  Wrd45 = Wrd49;

DEFLABEL (label_28)
  (Wrd54.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_34_3]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd59.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_3]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_27;
  Wrd64 = Wrd68;

DEFLABEL (label_26)
  (Wrd73.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd77.Obj) = (current_block [OBJECT_34_4]);
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd78.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_4]));
  (Wrd87.Obj) = ((Wrd84.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_25;
  Wrd83 = Wrd87;

DEFLABEL (label_24)
  (Wrd92.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd96.Obj) = (current_block [OBJECT_34_5]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd97.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_9])), (Wrd84.pObj));

DEFLABEL (label_21)
  (Wrd83.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_8])), (Wrd65.pObj));

DEFLABEL (label_20)
  (Wrd64.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_7])), (Wrd46.pObj));

DEFLABEL (label_19)
  (Wrd45.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd27.pObj));

DEFLABEL (label_18)
  (Wrd26.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd8.pObj));

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_9 7
#define LABEL_35_7 9
#define ENVIRONMENT_LABEL_35_3 19
#define DEBUGGING_LABEL_35_2 18
#define OBJECT_35_0 17
#define EXECUTE_CACHE_35_10 11
#define EXECUTE_CACHE_35_8 13
#define EXECUTE_CACHE_35_6 15
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_35_4);
      goto operation_write_char_6;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_write_char_9)
DEFLABEL (operation_write_char_6)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_35_0]))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_9);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_12 13
#define ENVIRONMENT_LABEL_36_3 26
#define DEBUGGING_LABEL_36_2 25
#define OBJECT_36_1 24
#define OBJECT_36_0 23
#define EXECUTE_CACHE_36_13 15
#define EXECUTE_CACHE_36_11 17
#define EXECUTE_CACHE_36_8 19
#define EXECUTE_CACHE_36_6 21
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_36_4);
      goto operation_x_size_8;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_x_size_12)
DEFLABEL (operation_x_size_8)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_10);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_16;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_16;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_16;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_15)
  (Wrd19.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (label_16)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_9 9
#define LABEL_37_10 11
#define LABEL_37_12 13
#define ENVIRONMENT_LABEL_37_3 26
#define DEBUGGING_LABEL_37_2 25
#define OBJECT_37_1 24
#define OBJECT_37_0 23
#define EXECUTE_CACHE_37_13 15
#define EXECUTE_CACHE_37_11 17
#define EXECUTE_CACHE_37_8 19
#define EXECUTE_CACHE_37_6 21
#define FREE_REFERENCES_LABEL_37_0 14
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_37_4);
      goto operation_column_8;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_37_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_column_12)
DEFLABEL (operation_column_8)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_16;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_16;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_16;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_15)
  (Wrd19.Obj) = (current_block [OBJECT_37_1]);
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

DEFLABEL (label_16)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_7 7
#define EXECUTE_CACHE_38_6 9
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto operation_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_flush_output_4)
DEFLABEL (operation_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 12
#define DEBUGGING_LABEL_39_2 11
#define EXECUTE_CACHE_39_7 7
#define EXECUTE_CACHE_39_6 9
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto operation_discretionary_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_discretionary_flush_output_4)
DEFLABEL (operation_discretionary_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_8 9
#define LABEL_40_9 11
#define LABEL_40_11 13
#define LABEL_40_10 15
#define LABEL_40_12 17
#define ENVIRONMENT_LABEL_40_3 28
#define DEBUGGING_LABEL_40_2 27
#define OBJECT_40_2 26
#define OBJECT_40_1 25
#define OBJECT_40_0 24
#define EXECUTE_CACHE_40_6 19
#define FREE_REFERENCE_40_1 22
#define FREE_REFERENCE_40_0 23
#define FREE_REFERENCES_LABEL_40_0 18
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_40_4);
      goto write_notification_prefix_9;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto do_loop_7;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_40_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_40_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_notification_prefix_16)
DEFLABEL (write_notification_prefix_9)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd5.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_7;

DEFLABEL (do_loop_17)
DEFLABEL (do_loop_7)
  INTERRUPT_CHECK (26, LABEL_40_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_29;
  Wrd6 = Wrd10;

DEFLABEL (label_28)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_27;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_27;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd38.Lng) < (Wrd39.Lng))
    goto label_19;

DEFLABEL (label_20)
  (Wrd21.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_18;

DEFLABEL (label_19)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_25;
  Wrd30 = Wrd34;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_23;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_23;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_7;

DEFLABEL (label_23)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_11])), (Wrd31.pObj));

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_8])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define ENVIRONMENT_LABEL_41_3 17
#define DEBUGGING_LABEL_41_2 16
#define OBJECT_41_0 15
#define FREE_REFERENCE_41_1 13
#define FREE_REFERENCE_41_0 14
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_41_4);
      goto notification_prefix_length_2;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (notification_prefix_length_9)
DEFLABEL (notification_prefix_length_2)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_15;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));

DEFLABEL (label_14)
  (Wrd27.Obj) = (* (Rsp++));
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_13;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_13;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (multiply_with_overflow ((Wrd36.Lng), (Wrd37.Lng), (& (Wrd35.Lng))))
    goto label_13;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_12)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_10;
  Rvl = (LONG_TO_FIXNUM (Wrd42.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_6)
  (Wrd18.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_6])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_7 9
#define LABEL_42_9 11
#define ENVIRONMENT_LABEL_42_3 23
#define DEBUGGING_LABEL_42_2 22
#define OBJECT_42_2 21
#define OBJECT_42_1 20
#define OBJECT_42_0 19
#define EXECUTE_CACHE_42_8 13
#define FREE_ASSIGNMENT_42_2 16
#define FREE_ASSIGNMENT_42_1 17
#define FREE_ASSIGNMENT_42_0 18
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usrint_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_42_4);
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_7)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_42_0]));
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_14)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_42_1]));
  (Wrd18.Obj) = (current_block [OBJECT_42_1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_11)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_42_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_42_2]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_42_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_42_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_4)
  goto label_11;

DEFLABEL (label_16)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_42_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_3)
  goto label_14;

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
usrint_so_0d312b296edbe286 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	3,
	1,
	1,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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
    if (counter > 42)
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

static const struct liarc_code_S arr_decl_usrint_so_0d312b296edbe286 [42] =
  {
    { "usrint_so_code_1", 9, usrint_so_code_1 },
    { "usrint_so_code_2", 3, usrint_so_code_2 },
    { "usrint_so_code_3", 4, usrint_so_code_3 },
    { "usrint_so_code_4", 10, usrint_so_code_4 },
    { "usrint_so_code_5", 2, usrint_so_code_5 },
    { "usrint_so_code_6", 2, usrint_so_code_6 },
    { "usrint_so_code_7", 5, usrint_so_code_7 },
    { "usrint_so_code_8", 9, usrint_so_code_8 },
    { "usrint_so_code_9", 4, usrint_so_code_9 },
    { "usrint_so_code_10", 20, usrint_so_code_10 },
    { "usrint_so_code_11", 3, usrint_so_code_11 },
    { "usrint_so_code_12", 7, usrint_so_code_12 },
    { "usrint_so_code_13", 3, usrint_so_code_13 },
    { "usrint_so_code_14", 41, usrint_so_code_14 },
    { "usrint_so_code_15", 3, usrint_so_code_15 },
    { "usrint_so_code_16", 6, usrint_so_code_16 },
    { "usrint_so_code_17", 10, usrint_so_code_17 },
    { "usrint_so_code_18", 2, usrint_so_code_18 },
    { "usrint_so_code_19", 2, usrint_so_code_19 },
    { "usrint_so_code_20", 2, usrint_so_code_20 },
    { "usrint_so_code_21", 2, usrint_so_code_21 },
    { "usrint_so_code_22", 2, usrint_so_code_22 },
    { "usrint_so_code_23", 2, usrint_so_code_23 },
    { "usrint_so_code_24", 4, usrint_so_code_24 },
    { "usrint_so_code_25", 11, usrint_so_code_25 },
    { "usrint_so_code_26", 2, usrint_so_code_26 },
    { "usrint_so_code_27", 2, usrint_so_code_27 },
    { "usrint_so_code_28", 3, usrint_so_code_28 },
    { "usrint_so_code_29", 3, usrint_so_code_29 },
    { "usrint_so_code_30", 2, usrint_so_code_30 },
    { "usrint_so_code_31", 2, usrint_so_code_31 },
    { "usrint_so_code_32", 31, usrint_so_code_32 },
    { "usrint_so_code_33", 2, usrint_so_code_33 },
    { "usrint_so_code_34", 6, usrint_so_code_34 },
    { "usrint_so_code_35", 4, usrint_so_code_35 },
    { "usrint_so_code_36", 6, usrint_so_code_36 },
    { "usrint_so_code_37", 6, usrint_so_code_37 },
    { "usrint_so_code_38", 2, usrint_so_code_38 },
    { "usrint_so_code_39", 2, usrint_so_code_39 },
    { "usrint_so_code_40", 8, usrint_so_code_40 },
    { "usrint_so_code_41", 5, usrint_so_code_41 },
    { "usrint_so_code_42", 5, usrint_so_code_42 }
  };

int
decl_usrint_so_0d312b296edbe286 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_usrint_so_0d312b296edbe286);
  return (0);
}

DECLARE_COMPILED_CODE ("usrint.so", 3, decl_usrint_so_0d312b296edbe286, usrint_so_0d312b296edbe286)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_usrint_so_data_0d312b296edbe286 [6106] =
  "\x9c\x01\x4f\x9c\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d"
  "\xba\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe\x28\x0d\xbf"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x82\x88\x0d\x1c\x28\xb4\x28\xb5\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d"
  "\x1c\x28\xb4\x28\xb5\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb1\x1b\x0c\x28\x0d\x1c"
  "\x28\xb7\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x1d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\x28\xb3"
  "\x28\x1b\x28\xb6\x28\xb7\x28\x0d\xbe\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\x0c\x28\x1b"
  "\x28\x1b\x28\xb7\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x07\x0c\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x1b\xb1\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\x28\x1b\x28\xb7"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\x28\x1b\x28\xb7\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\xc1\xc3\x1d\x80\x0f\xc2\xc1\x1c\x0f\x0f\x0f\x0f\x0c\x1b"
  "\x0c\xb1\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x07\x0f\xc2\x80\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\xc1\x1c\x0d\x1c"
  "\xc1\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b\x1b\x1d"
  "\xb1\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\xb7"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x28\xb7\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x28\xb7\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x1d\x28\x1b\x28\x1b\x28"
  "\xb7\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x1d\xb1\x0d\xb9\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x28\xb7\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x28\xb7\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x0d\x1c"
  "\x24\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0d\x1b\x24\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x28\xb7\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x28\xb7\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x1d\x07\x1d\x0d"
  "\x1c\x25\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0d\x1c\x0d\x1c\x1b\x0d\x08\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x28\x1b\x28\xb7\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x28\x1b\x28\xb7\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x80\x0c\x1b\x0d\xbf\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb7\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x0c\x80\x1b\xb7\x1b\x25\x28\x0d\xb8\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1e"
  "\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x07\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1b\xb7\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\xb0\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb1\x1b\x1b\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x1b\xb3\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb6\x1b\xb5\xb4"
  "\x1b\x1b\x1b\xb2\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x73\x72\x69"
  "\x6e\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x07\x63\x6f\x6f"
  "\x6b\x65\x64\x1e\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x03\x1c\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d"
  "\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x70\x72\x6f\x6d\x70\x74\x04\x0e"
  "\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x2d\x70\x6f\x72\x74\x04\x15\x6f"
  "\x70\x74\x69\x6f\x6e\x61\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x02\x13\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64"
  "\x6c\x2f\x6c\x65\x76\x65\x6c\x04\x0f\x70\x6f\x72\x74\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x04\x13\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x09\x05\x15\x77\x72"
  "\x69\x74\x65\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x70\x72\x6f\x6d"
  "\x70\x74\x0a\x05\x1e\x70\x6f\x72\x74\x2f\x77\x69\x74\x68\x2d\x69"
  "\x6e\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x6d\x6f"
  "\x64\x65\x0b\x04\x05\x72\x65\x61\x64\x0c\x0a\x0c\x14\x81\x83\x02"
  "\x0b\x12\x81\x8b\x02\x0a\x10\x81\x8b\x02\x09\x0e\x81\x89\x02\x08"
  "\x0c\x81\x89\x02\x07\x0a\x81\x89\x02\x06\x08\x81\x89\x02\x05\x06"
  "\x81\x87\x02\x04\x04\x85\x04\x13\x2b\x0d\x02\x16\x70\x72\x6f\x6d"
  "\x70\x74\x2d\x66\x6f\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x0e\x04\x04\x06\x17\x25\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f"
  "\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0f\x04\x0f\x08"
  "\x81\x89\x02\x0e\x06\x81\x87\x02\x0d\x04\x85\x04\x07\x12\x10\x02"
  "\x20\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x65\x76\x61\x6c"
  "\x75\x61\x74\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x11\x04\x04\x06\x0f\x04\x0a\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c"
  "\x05\x13\x0a\x81\x8b\x02\x12\x08\x81\x89\x02\x11\x06\x81\x87\x02"
  "\x10\x04\x85\x04\x09\x16\x12\x02\x0e\x03\x3a\x20\x04\x14\x63\x61"
  "\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x70\x72\x6f\x6d\x70"
  "\x74\x13\x04\x04\x09\x05\x1f\x70\x6f\x72\x74\x2f\x77\x69\x74\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c"
  "\x2d\x6d\x6f\x64\x65\x14\x05\x0b\x03\x0b\x66\x72\x65\x73\x68\x2d"
  "\x6c\x69\x6e\x65\x15\x04\x0c\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65"
  "\x0c\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x16"
  "\x03\x0d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x17\x0b"
  "\x1d\x16\x81\x83\x02\x1c\x14\x81\x83\x02\x1b\x12\x81\x83\x02\x1a"
  "\x10\x81\x83\x02\x19\x0e\x81\x83\x02\x18\x0c\x81\x8d\x02\x17\x0a"
  "\x81\x8d\x02\x16\x08\x81\x8b\x02\x15\x06\x81\x89\x02\x14\x04\x86"
  "\x0a\x15\x30\x18\x02\x08\x02\x15\x69\x6e\x74\x65\x72\x61\x63\x74"
  "\x69\x6f\x6e\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x19\x04\x0f\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x6f\x72\x74\x03\x1f\x06"
  "\x81\x85\x02\x1e\x04\x84\x06\x05\x0e\x1a\x02\x08\x02\x19\x6e\x65"
  "\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x1b\x04\x16\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1c\x03"
  "\x21\x06\x81\x85\x02\x20\x04\x84\x06\x05\x0e\x1d\x02\x08\x18\x70"
  "\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2d\x63\x68\x61\x72\x1e\x08\x03\x02\x19\x02\x04\x05\x20\x64"
  "\x65\x66\x61\x75\x6c\x74\x2f\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f"
  "\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x63\x68\x61\x72\x06\x26"
  "\x0c\x81\x87\x02\x25\x0a\x81\x87\x02\x24\x08\x81\x85\x02\x23\x06"
  "\x81\x87\x02\x22\x04\x84\x04\x0b\x1b\x1f\x02\x09\x04\x72\x61\x77"
  "\x20\x05\x0a\x05\x0b\x03\x0e\x63\x68\x61\x72\x2d\x67\x72\x61\x70"
  "\x68\x69\x63\x3f\x03\x0a\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x21"
  "\x05\x14\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x22\x03"
  "\x17\x08\x2f\x14\x81\x83\x02\x2e\x12\x81\x83\x02\x2d\x10\x81\x89"
  "\x02\x2c\x0e\x81\x89\x02\x2b\x0c\x81\x83\x02\x2a\x0a\x81\x87\x02"
  "\x29\x08\x81\x87\x02\x28\x06\x81\x87\x02\x27\x04\x85\x08\x13\x27"
  "\x23\x02\x0a\x18\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63"
  "\x6f\x6e\x66\x69\x72\x6d\x61\x74\x69\x6f\x6e\x24\x08\x0c\x20\x28"
  "\x79\x20\x6f\x72\x20\x6e\x29\x3f\x20\x04\x13\x02\x19\x04\x04\x20"
  "\x64\x65\x66\x61\x75\x6c\x74\x2f\x70\x72\x6f\x6d\x70\x74\x2d\x66"
  "\x6f\x72\x2d\x63\x6f\x6e\x66\x69\x72\x6d\x61\x74\x69\x6f\x6e\x25"
  "\x05\x33\x0a\x81\x85\x02\x32\x08\x81\x85\x02\x31\x06\x81\x85\x02"
  "\x30\x04\x84\x04\x09\x18\x26\x02\x0b\x04\x59\x65\x73\x03\x4e\x6f"
  "\x01\x0b\x01\x80\x01\x01\x4f\x01\x6f\x01\x21\x01\x5a\x01\x7a\x20"
  "\x05\x14\x03\x15\x05\x0b\x03\x0c\x03\x21\x04\x16\x04\x06\x77\x72"
  "\x69\x74\x65\x27\x03\x17\x03\x05\x62\x65\x65\x70\x28\x0a\x47\x2a"
  "\x81\x83\x02\x46\x28\x81\x83\x02\x45\x26\x81\x83\x02\x44\x24\x81"
  "\x83\x02\x43\x22\x81\x83\x02\x42\x20\x81\x83\x02\x41\x1e\x81\x89"
  "\x02\x40\x1c\x81\x83\x02\x3f\x1a\x81\x89\x02\x3e\x18\x81\x83\x02"
  "\x3d\x16\x81\x89\x02\x3c\x14\x81\x83\x02\x3b\x12\x81\x83\x02\x3a"
  "\x10\x81\x85\x02\x39\x0e\x81\x83\x02\x38\x0c\x81\x85\x02\x37\x0a"
  "\x81\x85\x02\x36\x08\x81\x83\x02\x35\x06\x81\x85\x02\x34\x04\x84"
  "\x06\x29\x4b\x29\x02\x0c\x12\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f"
  "\x72\x2d\x73\x74\x72\x69\x6e\x67\x2a\x08\x02\x19\x04\x04\x1a\x64"
  "\x65\x66\x61\x75\x6c\x74\x2f\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f"
  "\x72\x2d\x73\x74\x72\x69\x6e\x67\x2b\x04\x4a\x08\x81\x87\x02\x49"
  "\x06\x84\x04\x48\x04\x81\x85\x02\x07\x13\x2c\x02\x0d\x05\x14\x05"
  "\x0b\x03\x15\x03\x0a\x72\x65\x61\x64\x2d\x6c\x69\x6e\x65\x03\x0c"
  "\x04\x16\x03\x17\x08\x51\x10\x81\x83\x02\x50\x0e\x81\x83\x02\x4f"
  "\x0c\x81\x83\x02\x4e\x0a\x81\x83\x02\x4d\x08\x81\x83\x02\x4c\x06"
  "\x81\x85\x02\x4b\x04\x84\x06\x0f\x22\x2d\x02\x0e\x16\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x70\x61\x73\x73\x2d\x70\x68\x72\x61"
  "\x73\x65\x2e\x08\x02\x19\x04\x05\x1e\x64\x65\x66\x61\x75\x6c\x74"
  "\x2f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x70\x61\x73\x73\x2d"
  "\x70\x68\x72\x61\x73\x65\x19\x04\x54\x08\x81\x89\x02\x53\x06\x85"
  "\x06\x52\x04\x81\x87\x02\x07\x13\x2f\x02\x0f\x07\x62\x69\x6e\x61"
  "\x72\x79\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x02\x01"
  "\x16\x13\x73\x65\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x21\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x30\x01\x80\x01\x01\x09\x01\x0b\x01\x0e\x03\x3a\x20\x20"
  "\x01\x19\x04\x09\x05\x14\x03\x15\x05\x0d\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x77\x69\x6e\x64\x20\x03\x0c\x03\x0c\x65\x6f\x66\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x3f\x05\x0b\x03\x0b\x70\x6f\x72\x74\x2f\x6f"
  "\x70\x65\x6e\x3f\x04\x13\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e"
  "\x75\x6c\x6c\x3f\x03\x21\x03\x11\x70\x6f\x72\x74\x2f\x6c\x69\x6e"
  "\x65\x2d\x65\x6e\x64\x69\x6e\x67\x04\x15\x70\x6f\x72\x74\x2f\x73"
  "\x65\x74\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x03\x17"
  "\x04\x16\x03\x16\x73\x74\x72\x69\x6e\x67\x2d\x6d\x61\x78\x69\x6d"
  "\x75\x6d\x2d\x6c\x65\x6e\x67\x74\x68\x07\x10\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x04\x0d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x13\x7d\x54\x81\x95\x02\x7c\x52"
  "\x81\x95\x02\x7b\x50\x81\x95\x02\x7a\x4e\x81\x83\x02\x79\x4c\x81"
  "\x8b\x02\x78\x4a\x81\x8b\x02\x77\x48\x81\x93\x02\x76\x46\x81\x8b"
  "\x02\x75\x44\x81\x8b\x02\x74\x42\x81\x83\x02\x73\x40\x81\x83\x02"
  "\x72\x3e\x81\x93\x02\x71\x3c\x81\x93\x02\x70\x3a\x81\x91\x02\x6f"
  "\x38\x81\x8f\x02\x6e\x36\x81\x91\x02\x6d\x34\x81\x95\x02\x6c\x32"
  "\x81\x95\x02\x6b\x30\x81\x95\x02\x6a\x2e\x81\x95\x02\x69\x2c\x81"
  "\x8b\x02\x68\x2a\x81\x87\x02\x67\x28\x81\x83\x02\x66\x26\x81\x83"
  "\x02\x65\x24\x81\x83\x02\x64\x22\x81\x83\x02\x63\x20\x81\x8b\x02"
  "\x62\x1e\x81\x8f\x02\x61\x1c\x81\x8b\x02\x60\x1a\x81\x8d\x02\x5f"
  "\x18\x81\x83\x02\x5e\x16\x81\x83\x02\x5d\x14\x81\x83\x02\x5c\x12"
  "\x81\x83\x02\x5b\x10\x81\x89\x02\x5a\x0e\x81\x83\x02\x59\x0c\x81"
  "\x89\x02\x58\x0a\x81\x83\x02\x57\x08\x81\x87\x02\x56\x06\x81\x87"
  "\x02\x55\x04\x85\x08\x53\x8c\x01\x21\x02\x10\x01\x21\x0b\x73\x74"
  "\x72\x69\x6e\x67\x2d\x72\x65\x66\x30\x04\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x02\x80\x01\x08\x81\x87\x02\x7f"
  "\x06\x81\x85\x02\x7e\x04\x84\x06\x07\x13\x0b\x02\x11\x1c\x61\x20"
  "\x73\x74\x72\x69\x6e\x67\x20\x6f\x72\x20\x73\x74\x61\x6e\x64\x61"
  "\x72\x64\x20\x70\x72\x6f\x6d\x70\x74\x02\x20\x04\x63\x64\x72\x09"
  "\x09\x73\x74\x61\x6e\x64\x61\x72\x64\x31\x04\x63\x61\x72\x32\x04"
  "\x13\x04\x17\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74"
  "\x79\x70\x65\x2d\x64\x61\x74\x75\x6d\x03\x86\x01\x0e\x81\x85\x02"
  "\x85\x01\x0c\x81\x83\x02\x84\x01\x0a\x81\x87\x02\x83\x01\x08\x81"
  "\x83\x02\x82\x01\x06\x81\x83\x02\x81\x01\x04\x83\x04\x0d\x1a\x33"
  "\x02\x12\x09\x02\x20\x31\x32\x02\x02\x19\x6e\x65\x61\x72\x65\x73"
  "\x74\x2d\x63\x6d\x64\x6c\x2f\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64"
  "\x65\x3f\x32\x05\x14\x03\x15\x03\x0c\x04\x27\x04\x16\x03\x17\x08"
  "\x90\x01\x16\x81\x87\x02\x8f\x01\x14\x81\x83\x02\x8e\x01\x12\x81"
  "\x83\x02\x8d\x01\x10\x81\x83\x02\x8c\x01\x0e\x81\x83\x02\x8b\x01"
  "\x0c\x81\x83\x02\x8a\x01\x0a\x81\x83\x02\x89\x01\x08\x81\x83\x02"
  "\x88\x01\x06\x81\x87\x02\x87\x01\x04\x85\x08\x15\x2d\x31\x02\x13"
  "\x11\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x66\x61\x69\x6c\x75\x72"
  "\x65\x04\x04\x19\x64\x65\x66\x61\x75\x6c\x74\x2f\x64\x65\x62\x75"
  "\x67\x67\x65\x72\x2d\x66\x61\x69\x6c\x75\x72\x65\x09\x03\x92\x01"
  "\x06\x81\x85\x02\x91\x01\x04\x84\x06\x05\x0e\x34\x02\x14\x03\x28"
  "\x04\x19\x64\x65\x66\x61\x75\x6c\x74\x2f\x64\x65\x62\x75\x67\x67"
  "\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x28\x03\x94\x01\x06\x81"
  "\x85\x02\x93\x01\x04\x84\x06\x05\x0d\x35\x02\x15\x11\x64\x65\x62"
  "\x75\x67\x67\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x04\x04\x28"
  "\x03\x96\x01\x06\x81\x85\x02\x95\x01\x04\x84\x06\x05\x0e\x36\x02"
  "\x16\x03\x15\x04\x16\x03\x98\x01\x06\x81\x85\x02\x97\x01\x04\x84"
  "\x06\x05\x0d\x37\x02\x17\x16\x64\x65\x62\x75\x67\x67\x65\x72\x2d"
  "\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x04\x04\x1e\x64"
  "\x65\x66\x61\x75\x6c\x74\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d"
  "\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x38\x03\x9a\x01"
  "\x06\x81\x85\x02\x99\x01\x04\x84\x06\x05\x0e\x39\x02\x18\x03\x15"
  "\x02\x9c\x01\x06\x81\x85\x02\x9b\x01\x04\x84\x06\x05\x0b\x3a\x02"
  "\x19\x0d\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c\x74\x12\x70"
  "\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c\x74"
  "\x3b\x08\x02\x1b\x04\x1c\x04\x07\x15\x64\x65\x66\x61\x75\x6c\x74"
  "\x2f\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c\x74\x1c\x05\xa0"
  "\x01\x0a\x81\x8d\x02\x9f\x01\x08\x81\x8b\x02\x9e\x01\x06\x81\x8d"
  "\x02\x9d\x01\x04\x87\x0a\x09\x18\x1b\x02\x1a\x02\x20\x03\x3a\x20"
  "\x06\x56\x61\x6c\x75\x65\x19\x55\x6e\x73\x70\x65\x63\x69\x66\x69"
  "\x65\x64\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x02"
  "\x3b\x02\x29\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c\x74\x3a"
  "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x69\x73\x2d\x73\x70\x65\x63\x69\x61\x6c\x3f\x02\x02\x32\x05\x14"
  "\x03\x15\x04\x16\x03\x11\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d"
  "\x76\x61\x6c\x75\x65\x3f\x05\x27\x07\xab\x01\x18\x81\x83\x02\xaa"
  "\x01\x16\x81\x83\x02\xa9\x01\x14\x81\x83\x02\xa8\x01\x12\x81\x83"
  "\x02\xa7\x01\x10\x81\x83\x02\xa6\x01\x0e\x81\x83\x02\xa5\x01\x0c"
  "\x81\x83\x02\xa4\x01\x0a\x81\x83\x02\xa3\x01\x08\x81\x83\x02\xa2"
  "\x01\x06\x81\x8b\x02\xa1\x01\x04\x87\x0c\x17\x30\x32\x02\x1b\x02"
  "\x16\x73\x65\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x04\x02\xad\x01\x06\x81\x85\x02\xac\x01"
  "\x04\x84\x06\x05\x0d\x27\x02\x1c\x02\x18\x73\x65\x74\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x04\x02\xaf\x01\x06\x81\x85\x02\xae\x01\x04\x84\x06\x05\x0d"
  "\x14\x02\x1d\x02\x09\x67\x63\x2d\x73\x74\x61\x72\x74\x19\x2a\x77"
  "\x69\x74\x68\x69\x6e\x2d\x72\x65\x73\x74\x6f\x72\x65\x2d\x77\x69"
  "\x6e\x64\x6f\x77\x3f\x2a\x3c\x02\x04\x02\xb2\x01\x08\x81\x85\x02"
  "\xb1\x01\x06\x81\x83\x02\xb0\x01\x04\x83\x04\x07\x11\x3d\x02\x1e"
  "\x02\x0a\x67\x63\x2d\x66\x69\x6e\x69\x73\x68\x3c\x02\x04\x02\xb5"
  "\x01\x08\x81\x85\x02\xb4\x01\x06\x81\x83\x02\xb3\x01\x04\x83\x04"
  "\x07\x11\x3c\x02\x1f\x02\x0b\x72\x65\x61\x64\x2d\x73\x74\x61\x72"
  "\x74\x04\x02\xb7\x01\x06\x81\x83\x02\xb6\x01\x04\x83\x04\x05\x0d"
  "\x3e\x02\x20\x02\x0c\x72\x65\x61\x64\x2d\x66\x69\x6e\x69\x73\x68"
  "\x04\x02\xb9\x01\x06\x81\x83\x02\xb8\x01\x04\x83\x04\x05\x0d\x3f"
  "\x02\x21\x04\x2e\x2e\x2e\x06\x20\x64\x6f\x6e\x65\x09\x20\x61\x62"
  "\x6f\x72\x74\x65\x64\x02\x08\x15\x2a\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x64\x65\x70\x74\x68\x2a\x40\x02\x40\x02"
  "\x02\x19\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x05\x20\x05\x13\x73\x68"
  "\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64"
  "\x03\x15\x03\x18\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x6c\x69\x6e\x65\x2d\x73\x74\x61\x72\x74\x3f\x03\x1a\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x62\x79\x74\x65\x73\x2d\x77"
  "\x72\x69\x74\x74\x65\x6e\x03\x1a\x77\x72\x69\x74\x65\x2d\x6e\x6f"
  "\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69"
  "\x78\x20\x04\x16\x03\x17\x77\x72\x61\x70\x2d\x6e\x6f\x74\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x70\x6f\x72\x74\x15\x03\x0c\x0b"
  "\xd8\x01\x40\x81\x85\x02\xd7\x01\x3e\x81\x85\x02\xd6\x01\x3c\x81"
  "\x85\x02\xd5\x01\x3a\x81\x87\x02\xd4\x01\x38\x81\x85\x02\xd3\x01"
  "\x36\x81\x87\x02\xd2\x01\x34\x81\x85\x02\xd1\x01\x32\x81\x85\x02"
  "\xd0\x01\x30\x81\x85\x02\xcf\x01\x2e\x81\x87\x02\xce\x01\x2c\x81"
  "\x85\x02\xcd\x01\x2a\x81\x85\x02\xcc\x01\x28\x81\x85\x02\xcb\x01"
  "\x26\x81\x85\x02\xca\x01\x24\x81\x85\x02\xc9\x01\x22\x81\x87\x02"
  "\xc8\x01\x20\x81\x83\x02\xc7\x01\x1e\x81\x83\x02\xc6\x01\x1c\x81"
  "\x85\x02\xc5\x01\x1a\x81\x83\x02\xc4\x01\x18\x81\x83\x02\xc3\x01"
  "\x16\x81\x83\x02\xc2\x01\x14\x81\x83\x02\xc1\x01\x12\x81\x83\x02"
  "\xc0\x01\x10\x81\x85\x02\xbf\x01\x0e\x81\x83\x02\xbe\x01\x0c\x81"
  "\x85\x02\xbd\x01\x0a\x81\x85\x02\xbc\x01\x08\x81\x83\x02\xbb\x01"
  "\x06\x81\x83\x02\xba\x01\x04\x84\x04\x3f\x61\x0c\x02\x22\x1f\x77"
  "\x72\x61\x70\x70\x65\x64\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x41\x02\x04"
  "\x0a\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x02\xda\x01\x06\x81\x83"
  "\x02\xd9\x01\x04\x83\x04\x05\x0d\x42\x02\x23\x22\x07\x78\x2d\x73"
  "\x69\x7a\x65\x22\x07\x63\x6f\x6c\x75\x6d\x6e\x43\x17\x1b\x64\x69"
  "\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73"
  "\x68\x2d\x6f\x75\x74\x70\x75\x74\x25\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79"
  "\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x17\x17\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x66\x6c\x75\x73\x68\x2d\x6f"
  "\x75\x74\x70\x75\x74\x44\x11\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x63\x6f\x6c\x75\x6d\x6e\x45\x11\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x78\x2d\x73\x69\x7a\x65\x46\x15\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x47"
  "\x06\x04\x0f\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70"
  "\x65\x02\xe0\x01\x0e\x81\x85\x02\xdf\x01\x0c\x81\x85\x02\xde\x01"
  "\x0a\x81\x85\x02\xdd\x01\x08\x81\x85\x02\xdc\x01\x06\x81\x83\x02"
  "\xdb\x01\x04\x82\x02\x0d\x1f\x48\x02\x24\x01\x0b\x03\x0b\x70\x6f"
  "\x72\x74\x2f\x73\x74\x61\x74\x65\x49\x04\x17\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61"
  "\x72\x03\x20\x04\xe4\x01\x0a\x81\x87\x02\xe3\x01\x08\x81\x89\x02"
  "\xe2\x01\x06\x81\x85\x02\xe1\x01\x04\x84\x06\x09\x14\x4a\x02\x25"
  "\x22\x03\x49\x04\x02\x1b\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x22\x04\x04\x6d\x61\x78\x4b\x05\xea\x01\x0e\x81\x83\x02\xe9\x01"
  "\x0c\x81\x83\x02\xe8\x01\x0a\x81\x85\x02\xe7\x01\x08\x81\x83\x02"
  "\xe6\x01\x06\x81\x83\x02\xe5\x01\x04\x83\x04\x0d\x1b\x4c\x02\x26"
  "\x43\x03\x49\x04\x02\x22\x04\x4b\x05\xf0\x01\x0e\x81\x83\x02\xef"
  "\x01\x0c\x81\x83\x02\xee\x01\x0a\x81\x85\x02\xed\x01\x08\x81\x83"
  "\x02\xec\x01\x06\x81\x83\x02\xeb\x01\x04\x83\x04\x0d\x1b\x4b\x02"
  "\x27\x03\x49\x03\x19\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x03\xf2\x01"
  "\x06\x81\x83\x02\xf1\x01\x04\x83\x04\x05\x0d\x43\x02\x28\x03\x49"
  "\x03\x20\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x64\x69"
  "\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66\x6c\x75\x73"
  "\x68\x03\xf4\x01\x06\x81\x83\x02\xf3\x01\x04\x83\x04\x05\x0d\x49"
  "\x02\x29\x02\x3b\x40\x11\x69\x6e\x64\x65\x6e\x74\x61\x74\x69\x6f"
  "\x6e\x2d\x61\x74\x6f\x6d\x03\x04\x16\x02\xfc\x01\x12\x81\x87\x02"
  "\xfb\x01\x10\x81\x87\x02\xfa\x01\x0e\x81\x8b\x02\xf9\x01\x0c\x81"
  "\x85\x02\xf8\x01\x0a\x81\x85\x02\xf7\x01\x08\x81\x85\x02\xf6\x01"
  "\x06\x81\x83\x02\xf5\x01\x04\x83\x04\x11\x1d\x16\x02\x2a\x30\x40"
  "\x03\x81\x02\x0c\x81\x81\x02\x80\x02\x0a\x81\x83\x02\xff\x01\x08"
  "\x81\x83\x02\xfe\x01\x06\x81\x81\x02\xfd\x01\x04\x82\x02\x0b\x12"
  "\x30\x02\x2b\x02\x03\x20\x20\x40\x41\x04\x02\x24\x6d\x61\x6b\x65"
  "\x2d\x77\x72\x61\x70\x70\x65\x64\x2d\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x02"
  "\x86\x02\x0c\x81\x81\x02\x85\x02\x0a\x81\x81\x02\x84\x02\x08\x81"
  "\x81\x02\x83\x02\x06\x81\x81\x02\x82\x02\x04\x82\x02\x0b\x18\x4d"
  "\x2b\x4e\x4e\x4d\x04\x30\x04\x16\x04\x49\x04\x43\x04\x4b\x04\x4c"
  "\x04\x4a\x04\x48\x04\x42\x04\x0c\x04\x3f\x04\x3e\x04\x3c\x04\x3d"
  "\x04\x14\x04\x27\x04\x32\x04\x1b\x04\x3a\x04\x39\x04\x37\x04\x36"
  "\x04\x35\x04\x34\x04\x31\x04\x33\x04\x0b\x04\x21\x04\x2f\x06\x2d"
  "\x04\x2c\x06\x29\x04\x26\x04\x23\x04\x1f\x04\x1d\x04\x1a\x04\x18"
  "\x04\x12\x04\x10\x04\x0d\x04\x2f\x14\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x41\x40\x22\x20"
  "\x17\x44\x45\x46\x47\x15\x12\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x11\x70\x6f\x72\x74\x2f\x72\x65"
  "\x61\x64\x2d\x66\x69\x6e\x69\x73\x68\x10\x70\x6f\x72\x74\x2f\x72"
  "\x65\x61\x64\x2d\x73\x74\x61\x72\x74\x0f\x70\x6f\x72\x74\x2f\x67"
  "\x63\x2d\x66\x69\x6e\x69\x73\x68\x0e\x70\x6f\x72\x74\x2f\x67\x63"
  "\x2d\x73\x74\x61\x72\x74\x1d\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x1b\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x1c\x3b"
  "\x38\x1b\x70\x6f\x72\x74\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d"
  "\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x28\x16\x70\x6f"
  "\x72\x74\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x6d\x65\x73\x73"
  "\x61\x67\x65\x09\x16\x70\x6f\x72\x74\x2f\x64\x65\x62\x75\x67\x67"
  "\x65\x72\x2d\x66\x61\x69\x6c\x75\x72\x65\x0a\x13\x19\x2e\x2b\x2a"
  "\x25\x24\x1e\x0f\x11\x0e\x2f\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
usrint_so_data_0d312b296edbe286 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_usrint_so_data_0d312b296edbe286 [0]))), (sizeof (prog_usrint_so_data_0d312b296edbe286)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("usrint.so", usrint_so_data_0d312b296edbe286)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("usrint.so", "970a3fd02f78f53a")
