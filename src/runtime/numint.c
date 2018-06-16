/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define TAG_1_8 3
#define LABEL_1_9 11
#define TAG_1_10 4
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_12 13
#define EXECUTE_CACHE_1_11 15
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto make___operator_4;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_8;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make___operator_7)
DEFLABEL (make___operator_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_5);
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_6);
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define TAG_2_7 2
#define LABEL_2_8 9
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_10 11
#define EXECUTE_CACHE_2_9 13
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_2_4);
      goto make_comparison_operator_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_comparison_operator_6)
DEFLABEL (make_comparison_operator_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_6])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_2_5);
  Rvl = (current_block [OBJECT_2_0]);
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_2_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_8);
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto make___operator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make___operator_3)
DEFLABEL (make___operator_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define ENVIRONMENT_LABEL_4_3 11
#define DEBUGGING_LABEL_4_2 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_7 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      goto make___operator_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make___operator_4)
DEFLABEL (make___operator_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_8 7
#define ENVIRONMENT_LABEL_5_3 14
#define DEBUGGING_LABEL_5_2 13
#define OBJECT_5_1 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 9
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      goto make____operator_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make____operator_5)
DEFLABEL (make____operator_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_5_1]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_8 7
#define ENVIRONMENT_LABEL_6_3 14
#define DEBUGGING_LABEL_6_2 13
#define OBJECT_6_1 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 9
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto make____operator_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make____operator_5)
DEFLABEL (make____operator_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_6_1]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define TAG_7_7 2
#define ENVIRONMENT_LABEL_7_3 15
#define DEBUGGING_LABEL_7_2 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_9 9
#define EXECUTE_CACHE_7_8 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_7_4);
      goto make_max_min_operator_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_max_min_operator_5)
DEFLABEL (make_max_min_operator_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x3fc, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_7_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_7_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [3]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto make_atan_operator_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_atan_operator_4)
DEFLABEL (make_atan_operator_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define TAG_9_8 2
#define LABEL_9_9 9
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define EXECUTE_CACHE_9_11 11
#define EXECUTE_CACHE_9_10 13
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto make_accumulation_operator_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_accumulation_operator_6)
DEFLABEL (make_accumulation_operator_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  ((Wrd13.pObj) [2]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_8 7
#define ENVIRONMENT_LABEL_10_3 14
#define DEBUGGING_LABEL_10_2 13
#define EXECUTE_CACHE_10_9 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_10_4);
      goto make_inverse_accumulation_operator_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_inverse_accumulation_operator_5)
DEFLABEL (make_inverse_accumulation_operator_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x3fc, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_12 11
#define ENVIRONMENT_LABEL_11_3 28
#define DEBUGGING_LABEL_11_2 27
#define OBJECT_11_5 26
#define OBJECT_11_4 25
#define OBJECT_11_3 24
#define OBJECT_11_2 23
#define OBJECT_11_1 22
#define OBJECT_11_0 21
#define EXECUTE_CACHE_11_11 13
#define EXECUTE_CACHE_11_10 15
#define EXECUTE_CACHE_11_8 17
#define FREE_REFERENCE_11_0 20
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd5;
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
      goto make_arithmetic_package_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_arithmetic_package_12)
DEFLABEL (make_arithmetic_package_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_11_0]))
    goto label_22;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_1])))
    goto label_14;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  Rvl = ((Wrd18.pObj) [3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_16)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  Rvl = ((Wrd18.pObj) [0]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd23.Obj) = (Rsp [3]);
  if (! ((Wrd23.Obj) == (current_block [OBJECT_11_2])))
    goto label_21;
  (Wrd32.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd32.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [3]);
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_11_3]);
  (Rsp [1]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_21)
  Rsp = (& (Rsp [3]));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_15;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  Rvl = ((Wrd27.pObj) [0]);
  goto label_17;

DEFLABEL (label_22)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_24;
  Wrd21 = Wrd25;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_7])), (Wrd22.pObj));

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_0 9
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_12_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 9
#define DEBUGGING_LABEL_13_2 8
#define OBJECT_13_0 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numint_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_6 7
#define LABEL_13 9
#define LABEL_14 11
#define LABEL_15 13
#define LABEL_16 15
#define LABEL_17 17
#define LABEL_18 19
#define LABEL_19 21
#define LABEL_21 23
#define LABEL_22 25
#define LABEL_23 27
#define LABEL_7 29
#define LABEL_8 31
#define LABEL_26 33
#define LABEL_11 35
#define LABEL_29 37
#define LABEL_30 39
#define LABEL_32 41
#define LABEL_33 43
#define LABEL_12 45
#define LABEL_20 47
#define LABEL_36 49
#define LABEL_25 51
#define LABEL_37 53
#define LABEL_38 55
#define LABEL_39 57
#define LABEL_40 59
#define LABEL_41 61
#define LABEL_42 63
#define LABEL_43 65
#define LABEL_45 67
#define LABEL_27 69
#define LABEL_47 71
#define LABEL_48 73
#define LABEL_49 75
#define LABEL_50 77
#define LABEL_51 79
#define LABEL_52 81
#define LABEL_53 83
#define LABEL_54 85
#define LABEL_55 87
#define LABEL_57 89
#define LABEL_58 91
#define LABEL_28 93
#define LABEL_31 95
#define LABEL_59 97
#define LABEL_60 99
#define LABEL_61 101
#define LABEL_62 103
#define LABEL_63 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_66 111
#define LABEL_67 113
#define LABEL_68 115
#define LABEL_70 117
#define LABEL_71 119
#define LABEL_72 121
#define LABEL_35 123
#define LABEL_74 125
#define LABEL_75 127
#define LABEL_76 129
#define LABEL_44 131
#define LABEL_78 133
#define LABEL_79 135
#define LABEL_80 137
#define LABEL_46 139
#define LABEL_56 141
#define LABEL_81 143
#define LABEL_82 145
#define LABEL_83 147
#define LABEL_84 149
#define LABEL_85 151
#define LABEL_86 153
#define LABEL_87 155
#define LABEL_88 157
#define LABEL_89 159
#define LABEL_90 161
#define LABEL_92 163
#define LABEL_93 165
#define LABEL_94 167
#define LABEL_69 169
#define LABEL_96 171
#define LABEL_73 173
#define LABEL_98 175
#define LABEL_77 177
#define LABEL_99 179
#define LABEL_100 181
#define LABEL_102 183
#define LABEL_91 185
#define LABEL_104 187
#define LABEL_95 189
#define LABEL_106 191
#define LABEL_107 193
#define LABEL_108 195
#define LABEL_97 197
#define LABEL_109 199
#define LABEL_110 201
#define LABEL_112 203
#define LABEL_101 205
#define LABEL_115 207
#define LABEL_103 209
#define LABEL_117 211
#define LABEL_118 213
#define LABEL_119 215
#define LABEL_105 217
#define LABEL_121 219
#define LABEL_111 221
#define LABEL_123 223
#define LABEL_114 225
#define LABEL_125 227
#define LABEL_116 229
#define LABEL_127 231
#define LABEL_120 233
#define LABEL_128 235
#define LABEL_129 237
#define LABEL_131 239
#define LABEL_122 241
#define LABEL_132 243
#define LABEL_133 245
#define LABEL_135 247
#define LABEL_124 249
#define LABEL_137 251
#define LABEL_138 253
#define LABEL_139 255
#define LABEL_140 257
#define LABEL_142 259
#define LABEL_126 261
#define LABEL_143 263
#define LABEL_144 265
#define LABEL_145 267
#define LABEL_147 269
#define LABEL_130 271
#define LABEL_150 273
#define LABEL_134 275
#define LABEL_152 277
#define LABEL_141 279
#define LABEL_155 281
#define LABEL_146 283
#define LABEL_156 285
#define LABEL_157 287
#define LABEL_158 289
#define LABEL_159 291
#define LABEL_160 293
#define LABEL_149 295
#define LABEL_162 297
#define LABEL_163 299
#define LABEL_164 301
#define LABEL_166 303
#define LABEL_151 305
#define LABEL_168 307
#define LABEL_154 309
#define LABEL_171 311
#define LABEL_165 313
#define LABEL_173 315
#define LABEL_167 317
#define LABEL_175 319
#define LABEL_170 321
#define LABEL_178 323
#define LABEL_172 325
#define LABEL_180 327
#define LABEL_174 329
#define LABEL_182 331
#define LABEL_177 333
#define LABEL_184 335
#define LABEL_179 337
#define LABEL_186 339
#define LABEL_181 341
#define LABEL_187 343
#define LABEL_188 345
#define LABEL_189 347
#define LABEL_183 349
#define LABEL_191 351
#define LABEL_192 353
#define LABEL_185 355
#define LABEL_195 357
#define LABEL_194 359
#define LABEL_196 361
#define LABEL_197 363
#define LABEL_198 365
#define LABEL_199 367
#define LABEL_201 369
#define LABEL_202 371
#define LABEL_203 373
#define ENVIRONMENT_LABEL_3 585
#define DEBUGGING_LABEL_2 584
#define PURIFICATION_ROOT 583
#define OBJECT_70 582
#define OBJECT_69 581
#define OBJECT_68 580
#define OBJECT_67 579
#define OBJECT_66 578
#define OBJECT_65 577
#define OBJECT_64 576
#define OBJECT_63 575
#define OBJECT_62 574
#define OBJECT_61 573
#define OBJECT_60 572
#define OBJECT_59 571
#define OBJECT_58 570
#define OBJECT_57 569
#define OBJECT_56 568
#define OBJECT_55 567
#define OBJECT_54 566
#define OBJECT_53 565
#define OBJECT_52 564
#define OBJECT_51 563
#define OBJECT_50 562
#define OBJECT_49 561
#define OBJECT_48 560
#define OBJECT_47 559
#define OBJECT_46 558
#define OBJECT_45 557
#define OBJECT_44 556
#define OBJECT_43 555
#define OBJECT_42 554
#define OBJECT_41 553
#define OBJECT_40 552
#define OBJECT_39 551
#define OBJECT_38 550
#define OBJECT_37 549
#define OBJECT_36 548
#define OBJECT_35 547
#define OBJECT_34 546
#define OBJECT_33 545
#define OBJECT_32 544
#define OBJECT_31 543
#define OBJECT_30 542
#define OBJECT_29 541
#define OBJECT_28 540
#define OBJECT_27 539
#define OBJECT_26 538
#define OBJECT_25 537
#define OBJECT_24 536
#define OBJECT_23 535
#define OBJECT_22 534
#define OBJECT_21 533
#define OBJECT_20 532
#define OBJECT_19 531
#define OBJECT_18 530
#define OBJECT_17 529
#define OBJECT_16 528
#define OBJECT_15 527
#define OBJECT_14 526
#define OBJECT_13 525
#define OBJECT_12 524
#define OBJECT_11 523
#define OBJECT_10 522
#define OBJECT_9 521
#define OBJECT_8 520
#define OBJECT_7 519
#define OBJECT_6 518
#define OBJECT_5 517
#define OBJECT_4 516
#define OBJECT_3 515
#define OBJECT_2 514
#define OBJECT_1 513
#define OBJECT_0 512
#define EXECUTE_CACHE_176 375
#define EXECUTE_CACHE_169 377
#define EXECUTE_CACHE_200 379
#define EXECUTE_CACHE_193 381
#define EXECUTE_CACHE_190 383
#define EXECUTE_CACHE_161 385
#define EXECUTE_CACHE_153 387
#define EXECUTE_CACHE_148 389
#define EXECUTE_CACHE_136 391
#define EXECUTE_CACHE_113 393
#define EXECUTE_CACHE_34 395
#define EXECUTE_CACHE_24 397
#define EXECUTE_CACHE_10 399
#define FREE_REFERENCE_106 402
#define FREE_REFERENCE_105 403
#define FREE_REFERENCE_104 404
#define FREE_REFERENCE_103 405
#define FREE_REFERENCE_102 406
#define FREE_REFERENCE_101 407
#define FREE_REFERENCE_100 408
#define FREE_REFERENCE_99 409
#define FREE_REFERENCE_98 410
#define FREE_REFERENCE_97 411
#define FREE_REFERENCE_96 412
#define FREE_REFERENCE_95 413
#define FREE_REFERENCE_94 414
#define FREE_REFERENCE_93 415
#define FREE_REFERENCE_92 416
#define FREE_REFERENCE_91 417
#define FREE_REFERENCE_90 418
#define FREE_REFERENCE_89 419
#define FREE_REFERENCE_88 420
#define FREE_REFERENCE_87 421
#define FREE_REFERENCE_86 422
#define FREE_REFERENCE_85 423
#define FREE_REFERENCE_84 424
#define FREE_REFERENCE_83 425
#define FREE_REFERENCE_82 426
#define FREE_REFERENCE_81 427
#define FREE_REFERENCE_80 428
#define FREE_REFERENCE_79 429
#define FREE_REFERENCE_78 430
#define FREE_REFERENCE_77 431
#define FREE_REFERENCE_76 432
#define FREE_REFERENCE_75 433
#define FREE_REFERENCE_74 434
#define FREE_REFERENCE_73 435
#define FREE_REFERENCE_72 436
#define FREE_REFERENCE_71 437
#define FREE_REFERENCE_70 438
#define FREE_REFERENCE_69 439
#define FREE_REFERENCE_68 440
#define FREE_REFERENCE_67 441
#define FREE_REFERENCE_66 442
#define FREE_REFERENCE_65 443
#define FREE_REFERENCE_64 444
#define FREE_REFERENCE_63 445
#define FREE_REFERENCE_62 446
#define FREE_REFERENCE_61 447
#define FREE_REFERENCE_60 448
#define FREE_REFERENCE_59 449
#define FREE_REFERENCE_58 450
#define FREE_REFERENCE_57 451
#define FREE_REFERENCE_56 452
#define FREE_REFERENCE_55 453
#define FREE_REFERENCE_54 454
#define FREE_REFERENCE_53 455
#define FREE_REFERENCE_52 456
#define FREE_REFERENCE_51 457
#define FREE_REFERENCE_50 458
#define FREE_REFERENCE_49 459
#define FREE_REFERENCE_48 460
#define FREE_REFERENCE_47 461
#define FREE_REFERENCE_46 462
#define FREE_REFERENCE_45 463
#define FREE_REFERENCE_44 464
#define FREE_REFERENCE_43 465
#define FREE_REFERENCE_42 466
#define FREE_REFERENCE_41 467
#define FREE_REFERENCE_40 468
#define FREE_REFERENCE_39 469
#define FREE_REFERENCE_38 470
#define FREE_REFERENCE_37 471
#define FREE_REFERENCE_36 472
#define FREE_REFERENCE_35 473
#define FREE_REFERENCE_34 474
#define FREE_REFERENCE_33 475
#define FREE_REFERENCE_32 476
#define FREE_REFERENCE_31 477
#define FREE_REFERENCE_30 478
#define FREE_REFERENCE_29 479
#define FREE_REFERENCE_28 480
#define FREE_REFERENCE_27 481
#define FREE_REFERENCE_26 482
#define FREE_REFERENCE_25 483
#define FREE_REFERENCE_24 484
#define FREE_REFERENCE_23 485
#define FREE_REFERENCE_22 486
#define FREE_REFERENCE_21 487
#define FREE_REFERENCE_20 488
#define FREE_REFERENCE_19 489
#define FREE_REFERENCE_18 490
#define FREE_REFERENCE_17 491
#define FREE_REFERENCE_16 492
#define FREE_REFERENCE_15 493
#define FREE_REFERENCE_14 494
#define FREE_REFERENCE_13 495
#define FREE_REFERENCE_12 496
#define FREE_REFERENCE_11 497
#define FREE_REFERENCE_10 498
#define FREE_REFERENCE_9 499
#define FREE_REFERENCE_8 500
#define FREE_REFERENCE_7 501
#define FREE_REFERENCE_6 502
#define FREE_REFERENCE_5 503
#define FREE_REFERENCE_4 504
#define FREE_REFERENCE_3 505
#define FREE_REFERENCE_2 506
#define FREE_REFERENCE_1 507
#define FREE_REFERENCE_0 508
#define GLOBAL_EXECUTE_CACHE_5 510
#define FREE_REFERENCES_LABEL_0 374
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
numint_so_92a38308f3a78bff (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd89;
  machine_word Wrd74;
  machine_word Wrd59;
  machine_word Wrd29;
  machine_word Wrd180;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd179;
  machine_word Wrd173;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd167;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd166;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd156;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd146;
  machine_word Wrd141;
  machine_word Wrd154;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd135;
  machine_word Wrd112;
  machine_word Wrd97;
  machine_word Wrd82;
  machine_word Wrd67;
  machine_word Wrd52;
  machine_word Wrd37;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd101;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd132;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd119;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_293;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_70;

    case 3:
      current_block = (Rpc - LABEL_13);
      goto label_294;

    case 4:
      current_block = (Rpc - LABEL_14);
      goto label_295;

    case 5:
      current_block = (Rpc - LABEL_15);
      goto label_296;

    case 6:
      current_block = (Rpc - LABEL_16);
      goto label_297;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_298;

    case 8:
      current_block = (Rpc - LABEL_18);
      goto label_299;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto label_300;

    case 10:
      current_block = (Rpc - LABEL_21);
      goto label_301;

    case 11:
      current_block = (Rpc - LABEL_22);
      goto label_302;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_303;

    case 13:
      current_block = (Rpc - LABEL_7);
      goto continuation_69;

    case 14:
      current_block = (Rpc - LABEL_8);
      goto continuation_66;

    case 15:
      current_block = (Rpc - LABEL_26);
      goto label_304;

    case 16:
      current_block = (Rpc - LABEL_11);
      goto continuation_135;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_305;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_306;

    case 19:
      current_block = (Rpc - LABEL_32);
      goto label_307;

    case 20:
      current_block = (Rpc - LABEL_33);
      goto label_308;

    case 21:
      current_block = (Rpc - LABEL_12);
      goto continuation_134;

    case 22:
      current_block = (Rpc - LABEL_20);
      goto continuation_117;

    case 23:
      current_block = (Rpc - LABEL_36);
      goto label_309;

    case 24:
      current_block = (Rpc - LABEL_25);
      goto continuation_63;

    case 25:
      current_block = (Rpc - LABEL_37);
      goto label_310;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto label_311;

    case 27:
      current_block = (Rpc - LABEL_39);
      goto label_312;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_313;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto label_314;

    case 30:
      current_block = (Rpc - LABEL_42);
      goto label_315;

    case 31:
      current_block = (Rpc - LABEL_43);
      goto label_316;

    case 32:
      current_block = (Rpc - LABEL_45);
      goto label_317;

    case 33:
      current_block = (Rpc - LABEL_27);
      goto continuation_215;

    case 34:
      current_block = (Rpc - LABEL_47);
      goto label_318;

    case 35:
      current_block = (Rpc - LABEL_48);
      goto label_319;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto label_320;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto label_321;

    case 38:
      current_block = (Rpc - LABEL_51);
      goto label_322;

    case 39:
      current_block = (Rpc - LABEL_52);
      goto label_323;

    case 40:
      current_block = (Rpc - LABEL_53);
      goto label_324;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto label_325;

    case 42:
      current_block = (Rpc - LABEL_55);
      goto label_326;

    case 43:
      current_block = (Rpc - LABEL_57);
      goto label_327;

    case 44:
      current_block = (Rpc - LABEL_58);
      goto label_328;

    case 45:
      current_block = (Rpc - LABEL_28);
      goto continuation_214;

    case 46:
      current_block = (Rpc - LABEL_31);
      goto continuation_207;

    case 47:
      current_block = (Rpc - LABEL_59);
      goto label_329;

    case 48:
      current_block = (Rpc - LABEL_60);
      goto label_330;

    case 49:
      current_block = (Rpc - LABEL_61);
      goto label_331;

    case 50:
      current_block = (Rpc - LABEL_62);
      goto label_332;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto label_333;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto label_334;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto label_335;

    case 54:
      current_block = (Rpc - LABEL_66);
      goto label_336;

    case 55:
      current_block = (Rpc - LABEL_67);
      goto label_337;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto label_338;

    case 57:
      current_block = (Rpc - LABEL_70);
      goto label_339;

    case 58:
      current_block = (Rpc - LABEL_71);
      goto label_340;

    case 59:
      current_block = (Rpc - LABEL_72);
      goto label_341;

    case 60:
      current_block = (Rpc - LABEL_35);
      goto continuation_114;

    case 61:
      current_block = (Rpc - LABEL_74);
      goto label_342;

    case 62:
      current_block = (Rpc - LABEL_75);
      goto label_343;

    case 63:
      current_block = (Rpc - LABEL_76);
      goto label_344;

    case 64:
      current_block = (Rpc - LABEL_44);
      goto continuation_46;

    case 65:
      current_block = (Rpc - LABEL_78);
      goto label_345;

    case 66:
      current_block = (Rpc - LABEL_79);
      goto label_346;

    case 67:
      current_block = (Rpc - LABEL_80);
      goto label_347;

    case 68:
      current_block = (Rpc - LABEL_46);
      goto continuation_290;

    case 69:
      current_block = (Rpc - LABEL_56);
      goto continuation_269;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto label_348;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto label_349;

    case 72:
      current_block = (Rpc - LABEL_83);
      goto label_350;

    case 73:
      current_block = (Rpc - LABEL_84);
      goto label_351;

    case 74:
      current_block = (Rpc - LABEL_85);
      goto label_352;

    case 75:
      current_block = (Rpc - LABEL_86);
      goto label_353;

    case 76:
      current_block = (Rpc - LABEL_87);
      goto label_354;

    case 77:
      current_block = (Rpc - LABEL_88);
      goto label_355;

    case 78:
      current_block = (Rpc - LABEL_89);
      goto label_356;

    case 79:
      current_block = (Rpc - LABEL_90);
      goto label_357;

    case 80:
      current_block = (Rpc - LABEL_92);
      goto label_358;

    case 81:
      current_block = (Rpc - LABEL_93);
      goto label_359;

    case 82:
      current_block = (Rpc - LABEL_94);
      goto label_360;

    case 83:
      current_block = (Rpc - LABEL_69);
      goto continuation_184;

    case 84:
      current_block = (Rpc - LABEL_96);
      goto label_361;

    case 85:
      current_block = (Rpc - LABEL_73);
      goto continuation_111;

    case 86:
      current_block = (Rpc - LABEL_98);
      goto label_362;

    case 87:
      current_block = (Rpc - LABEL_77);
      goto continuation_43;

    case 88:
      current_block = (Rpc - LABEL_99);
      goto label_363;

    case 89:
      current_block = (Rpc - LABEL_100);
      goto label_364;

    case 90:
      current_block = (Rpc - LABEL_102);
      goto label_365;

    case 91:
      current_block = (Rpc - LABEL_91);
      goto continuation_246;

    case 92:
      current_block = (Rpc - LABEL_104);
      goto label_366;

    case 93:
      current_block = (Rpc - LABEL_95);
      goto continuation_181;

    case 94:
      current_block = (Rpc - LABEL_106);
      goto label_367;

    case 95:
      current_block = (Rpc - LABEL_107);
      goto label_368;

    case 96:
      current_block = (Rpc - LABEL_108);
      goto label_369;

    case 97:
      current_block = (Rpc - LABEL_97);
      goto continuation_108;

    case 98:
      current_block = (Rpc - LABEL_109);
      goto label_370;

    case 99:
      current_block = (Rpc - LABEL_110);
      goto label_371;

    case 100:
      current_block = (Rpc - LABEL_112);
      goto label_372;

    case 101:
      current_block = (Rpc - LABEL_101);
      goto continuation_36;

    case 102:
      current_block = (Rpc - LABEL_115);
      goto label_373;

    case 103:
      current_block = (Rpc - LABEL_103);
      goto continuation_243;

    case 104:
      current_block = (Rpc - LABEL_117);
      goto label_374;

    case 105:
      current_block = (Rpc - LABEL_118);
      goto label_375;

    case 106:
      current_block = (Rpc - LABEL_119);
      goto label_376;

    case 107:
      current_block = (Rpc - LABEL_105);
      goto continuation_178;

    case 108:
      current_block = (Rpc - LABEL_121);
      goto label_377;

    case 109:
      current_block = (Rpc - LABEL_111);
      goto continuation_101;

    case 110:
      current_block = (Rpc - LABEL_123);
      goto label_378;

    case 111:
      current_block = (Rpc - LABEL_114);
      goto continuation_33;

    case 112:
      current_block = (Rpc - LABEL_125);
      goto label_379;

    case 113:
      current_block = (Rpc - LABEL_116);
      goto continuation_240;

    case 114:
      current_block = (Rpc - LABEL_127);
      goto label_380;

    case 115:
      current_block = (Rpc - LABEL_120);
      goto continuation_175;

    case 116:
      current_block = (Rpc - LABEL_128);
      goto label_381;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto label_382;

    case 118:
      current_block = (Rpc - LABEL_131);
      goto label_383;

    case 119:
      current_block = (Rpc - LABEL_122);
      goto continuation_98;

    case 120:
      current_block = (Rpc - LABEL_132);
      goto label_384;

    case 121:
      current_block = (Rpc - LABEL_133);
      goto label_385;

    case 122:
      current_block = (Rpc - LABEL_135);
      goto label_386;

    case 123:
      current_block = (Rpc - LABEL_124);
      goto continuation_30;

    case 124:
      current_block = (Rpc - LABEL_137);
      goto label_387;

    case 125:
      current_block = (Rpc - LABEL_138);
      goto label_388;

    case 126:
      current_block = (Rpc - LABEL_139);
      goto label_389;

    case 127:
      current_block = (Rpc - LABEL_140);
      goto label_390;

    case 128:
      current_block = (Rpc - LABEL_142);
      goto label_391;

    case 129:
      current_block = (Rpc - LABEL_126);
      goto continuation_237;

    case 130:
      current_block = (Rpc - LABEL_143);
      goto label_392;

    case 131:
      current_block = (Rpc - LABEL_144);
      goto label_393;

    case 132:
      current_block = (Rpc - LABEL_145);
      goto label_394;

    case 133:
      current_block = (Rpc - LABEL_147);
      goto label_395;

    case 134:
      current_block = (Rpc - LABEL_130);
      goto continuation_168;

    case 135:
      current_block = (Rpc - LABEL_150);
      goto label_396;

    case 136:
      current_block = (Rpc - LABEL_134);
      goto continuation_89;

    case 137:
      current_block = (Rpc - LABEL_152);
      goto label_397;

    case 138:
      current_block = (Rpc - LABEL_141);
      goto continuation_17;

    case 139:
      current_block = (Rpc - LABEL_155);
      goto label_398;

    case 140:
      current_block = (Rpc - LABEL_146);
      goto continuation_228;

    case 141:
      current_block = (Rpc - LABEL_156);
      goto label_399;

    case 142:
      current_block = (Rpc - LABEL_157);
      goto label_400;

    case 143:
      current_block = (Rpc - LABEL_158);
      goto label_401;

    case 144:
      current_block = (Rpc - LABEL_159);
      goto label_402;

    case 145:
      current_block = (Rpc - LABEL_160);
      goto label_403;

    case 146:
      current_block = (Rpc - LABEL_149);
      goto continuation_165;

    case 147:
      current_block = (Rpc - LABEL_162);
      goto label_404;

    case 148:
      current_block = (Rpc - LABEL_163);
      goto label_405;

    case 149:
      current_block = (Rpc - LABEL_164);
      goto label_406;

    case 150:
      current_block = (Rpc - LABEL_166);
      goto label_407;

    case 151:
      current_block = (Rpc - LABEL_151);
      goto continuation_86;

    case 152:
      current_block = (Rpc - LABEL_168);
      goto label_408;

    case 153:
      current_block = (Rpc - LABEL_154);
      goto continuation_14;

    case 154:
      current_block = (Rpc - LABEL_171);
      goto label_409;

    case 155:
      current_block = (Rpc - LABEL_165);
      goto continuation_156;

    case 156:
      current_block = (Rpc - LABEL_173);
      goto label_410;

    case 157:
      current_block = (Rpc - LABEL_167);
      goto continuation_83;

    case 158:
      current_block = (Rpc - LABEL_175);
      goto label_411;

    case 159:
      current_block = (Rpc - LABEL_170);
      goto continuation_11;

    case 160:
      current_block = (Rpc - LABEL_178);
      goto label_412;

    case 161:
      current_block = (Rpc - LABEL_172);
      goto continuation_153;

    case 162:
      current_block = (Rpc - LABEL_180);
      goto label_413;

    case 163:
      current_block = (Rpc - LABEL_174);
      goto continuation_80;

    case 164:
      current_block = (Rpc - LABEL_182);
      goto label_414;

    case 165:
      current_block = (Rpc - LABEL_177);
      goto continuation_8;

    case 166:
      current_block = (Rpc - LABEL_184);
      goto label_415;

    case 167:
      current_block = (Rpc - LABEL_179);
      goto continuation_150;

    case 168:
      current_block = (Rpc - LABEL_186);
      goto label_416;

    case 169:
      current_block = (Rpc - LABEL_181);
      goto continuation_77;

    case 170:
      current_block = (Rpc - LABEL_187);
      goto label_417;

    case 171:
      current_block = (Rpc - LABEL_188);
      goto label_418;

    case 172:
      current_block = (Rpc - LABEL_189);
      goto label_419;

    case 173:
      current_block = (Rpc - LABEL_183);
      goto continuation_5;

    case 174:
      current_block = (Rpc - LABEL_191);
      goto label_420;

    case 175:
      current_block = (Rpc - LABEL_192);
      goto label_421;

    case 176:
      current_block = (Rpc - LABEL_185);
      goto continuation_147;

    case 177:
      current_block = (Rpc - LABEL_195);
      goto label_422;

    case 178:
      current_block = (Rpc - LABEL_194);
      goto continuation_144;

    case 179:
      current_block = (Rpc - LABEL_196);
      goto label_423;

    case 180:
      current_block = (Rpc - LABEL_197);
      goto label_424;

    case 181:
      current_block = (Rpc - LABEL_198);
      goto label_425;

    case 182:
      current_block = (Rpc - LABEL_199);
      goto label_426;

    case 183:
      current_block = (Rpc - LABEL_201);
      goto label_429;

    case 184:
      current_block = (Rpc - LABEL_202);
      goto label_430;

    case 185:
      current_block = (Rpc - LABEL_203);
      goto expression_292;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_292)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_202])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_430)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_429)
  {
    static const short sections [] =
      {
	0,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
      goto label_428;
    blocks = (current_block [OBJECT_70]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_201])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_428)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_698;
  Wrd15 = Wrd19;

DEFLABEL (label_697)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_696;
  Wrd18 = Wrd22;

DEFLABEL (label_695)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_694;
  Wrd15 = Wrd19;

DEFLABEL (label_693)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_692;
  Wrd30 = Wrd34;

DEFLABEL (label_691)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_690;
  Wrd45 = Wrd49;

DEFLABEL (label_689)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_21]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_688;
  Wrd60 = Wrd64;

DEFLABEL (label_687)
  (Wrd69.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_686;
  Wrd75 = Wrd79;

DEFLABEL (label_685)
  (Wrd84.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd94.Obj) = ((Wrd91.pObj) [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 50)
    goto label_684;
  Wrd90 = Wrd94;

DEFLABEL (label_683)
  (Wrd99.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_682;
  Wrd105 = Wrd109;

DEFLABEL (label_681)
  (Wrd114.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd127.Obj) = ((Wrd124.pObj) [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if ((Wrd128.uLng) == 50)
    goto label_680;
  Wrd123 = Wrd127;

DEFLABEL (label_679)
  (* (--Rsp)) = (Wrd123.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_678;
  Wrd17 = Wrd21;

DEFLABEL (label_677)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_676;
  Wrd23 = Wrd27;

DEFLABEL (label_675)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_674;
  Wrd30 = Wrd34;

DEFLABEL (label_673)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_41]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_672;
  Wrd15 = Wrd19;

DEFLABEL (label_671)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_670;
  Wrd30 = Wrd34;

DEFLABEL (label_669)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_668;
  Wrd48 = Wrd52;

DEFLABEL (label_667)
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_666;
  Wrd17 = Wrd21;

DEFLABEL (label_665)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_664;
  Wrd17 = Wrd21;

DEFLABEL (label_663)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_53]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_662;
  Wrd24 = Wrd28;

DEFLABEL (label_661)
  (Wrd33.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_54]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_660;
  Wrd39 = Wrd43;

DEFLABEL (label_659)
  (Wrd48.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_55]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_658;
  Wrd54 = Wrd58;

DEFLABEL (label_657)
  (Wrd63.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd67.Obj) = (current_block [OBJECT_48]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_656;
  Wrd69 = Wrd73;

DEFLABEL (label_655)
  (Wrd78.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd82.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_654;
  Wrd86 = Wrd90;

DEFLABEL (label_653)
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_56]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_652;
  Wrd17 = Wrd21;

DEFLABEL (label_651)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_650;
  Wrd17 = Wrd21;

DEFLABEL (label_649)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_169]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_68]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_648;
  Wrd17 = Wrd21;

DEFLABEL (label_647)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_176]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_69]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_183]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_646;
  Wrd17 = Wrd21;

DEFLABEL (label_645)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_183);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_102]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_644;
  Wrd15 = Wrd19;

DEFLABEL (label_643)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_58]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_102]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_642;
  Wrd30 = Wrd34;

DEFLABEL (label_641)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_62]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_640;
  Wrd12 = Wrd16;

DEFLABEL (label_639)
  (Wrd21.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_638;
  Wrd27 = Wrd31;

DEFLABEL (label_637)
  (Wrd36.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_636;
  Wrd42 = Wrd46;

DEFLABEL (label_635)
  (Wrd51.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_634;
  Wrd57 = Wrd61;

DEFLABEL (label_633)
  (Wrd66.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd70.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_632;
  Wrd72 = Wrd76;

DEFLABEL (label_631)
  (Wrd81.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (Wrd85.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd88.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd91.Obj) = ((Wrd88.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_630;
  Wrd87 = Wrd91;

DEFLABEL (label_629)
  (Wrd96.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd100.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd106.Obj) = ((Wrd103.pObj) [0]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd107.uLng) == 50)
    goto label_628;
  Wrd102 = Wrd106;

DEFLABEL (label_627)
  (Wrd111.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (Wrd115.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd120.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd123.Obj) = ((Wrd120.pObj) [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if ((Wrd124.uLng) == 50)
    goto label_626;
  Wrd119 = Wrd123;

DEFLABEL (label_625)
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_624;
  Wrd125 = Wrd129;

DEFLABEL (label_623)
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd131.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd133.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd136.Obj) = ((Wrd133.pObj) [0]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if ((Wrd137.uLng) == 50)
    goto label_622;
  Wrd132 = Wrd136;

DEFLABEL (label_621)
  (* (--Rsp)) = (Wrd132.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_620;
  Wrd18 = Wrd22;

DEFLABEL (label_619)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_618;
  Wrd17 = Wrd21;

DEFLABEL (label_617)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_616;
  Wrd23 = Wrd27;

DEFLABEL (label_615)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_614;
  Wrd30 = Wrd34;

DEFLABEL (label_613)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_41]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_612;
  Wrd18 = Wrd22;

DEFLABEL (label_611)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_610;
  Wrd15 = Wrd19;

DEFLABEL (label_609)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_608;
  Wrd30 = Wrd34;

DEFLABEL (label_607)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_606;
  Wrd47 = Wrd51;

DEFLABEL (label_605)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_604;
  Wrd17 = Wrd21;

DEFLABEL (label_603)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_602;
  Wrd16 = Wrd20;

DEFLABEL (label_601)
  (Wrd25.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_48]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_49]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_50]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_600;
  Wrd40 = Wrd44;

DEFLABEL (label_599)
  (Wrd49.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_598;
  Wrd57 = Wrd61;

DEFLABEL (label_597)
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_56]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_596;
  Wrd17 = Wrd21;

DEFLABEL (label_595)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_594;
  Wrd17 = Wrd21;

DEFLABEL (label_593)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_169]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_68]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_592;
  Wrd17 = Wrd21;

DEFLABEL (label_591)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_176]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_69]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_98]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_590;
  Wrd17 = Wrd21;

DEFLABEL (label_589)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_100]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_588;
  Wrd15 = Wrd19;

DEFLABEL (label_587)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_58]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_100]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_586;
  Wrd30 = Wrd34;

DEFLABEL (label_585)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_61]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_584;
  Wrd45 = Wrd49;

DEFLABEL (label_583)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_62]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_190]));

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_582;
  Wrd12 = Wrd16;

DEFLABEL (label_581)
  (Wrd21.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_580;
  Wrd27 = Wrd31;

DEFLABEL (label_579)
  (Wrd36.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_578;
  Wrd44 = Wrd48;

DEFLABEL (label_577)
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_576;
  Wrd50 = Wrd54;

DEFLABEL (label_575)
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_207)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_32]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_574;
  Wrd15 = Wrd19;

DEFLABEL (label_573)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_572;
  Wrd30 = Wrd34;

DEFLABEL (label_571)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_570;
  Wrd45 = Wrd49;

DEFLABEL (label_569)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_568;
  Wrd60 = Wrd64;

DEFLABEL (label_567)
  (Wrd69.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_566;
  Wrd75 = Wrd79;

DEFLABEL (label_565)
  (Wrd84.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_37]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39]));
  (Wrd94.Obj) = ((Wrd91.pObj) [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 50)
    goto label_564;
  Wrd90 = Wrd94;

DEFLABEL (label_563)
  (Wrd99.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_38]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_562;
  Wrd105 = Wrd109;

DEFLABEL (label_561)
  (Wrd114.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_39]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd124.Obj) = ((Wrd121.pObj) [0]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd125.uLng) == 50)
    goto label_560;
  Wrd120 = Wrd124;

DEFLABEL (label_559)
  (Wrd129.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  (Wrd133.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd126.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (* (--Rsp)) = (Wrd132.Obj);
  (Wrd136.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42]));
  (Wrd139.Obj) = ((Wrd136.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_558;
  Wrd135 = Wrd139;

DEFLABEL (label_557)
  (Wrd144.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd144.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (Wrd148.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd148.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd151.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43]));
  (Wrd154.Obj) = ((Wrd151.pObj) [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if ((Wrd155.uLng) == 50)
    goto label_556;
  Wrd150 = Wrd154;

DEFLABEL (label_555)
  (Wrd159.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd150.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  (Wrd163.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd163.Obj);
  (* (Rhp++)) = (Wrd156.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd168.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44]));
  (Wrd171.Obj) = ((Wrd168.pObj) [0]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if ((Wrd172.uLng) == 50)
    goto label_554;
  Wrd167 = Wrd171;

DEFLABEL (label_553)
  (* (--Rsp)) = (Wrd167.Obj);
  (Wrd174.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42]));
  (Wrd177.Obj) = ((Wrd174.pObj) [0]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if ((Wrd178.uLng) == 50)
    goto label_552;
  Wrd173 = Wrd177;

DEFLABEL (label_551)
  (* (--Rsp)) = (Wrd173.Obj);
  (Wrd179.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_550;
  Wrd180 = Wrd184;

DEFLABEL (label_549)
  (* (--Rsp)) = (Wrd180.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_548;
  Wrd18 = Wrd22;

DEFLABEL (label_547)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_546;
  Wrd17 = Wrd21;

DEFLABEL (label_545)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_544;
  Wrd23 = Wrd27;

DEFLABEL (label_543)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_542;
  Wrd30 = Wrd34;

DEFLABEL (label_541)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_41]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_540;
  Wrd18 = Wrd22;

DEFLABEL (label_539)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_538;
  Wrd15 = Wrd19;

DEFLABEL (label_537)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_536;
  Wrd30 = Wrd34;

DEFLABEL (label_535)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_534;
  Wrd47 = Wrd51;

DEFLABEL (label_533)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113]));

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_532;
  Wrd17 = Wrd21;

DEFLABEL (label_531)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113]));

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_530;
  Wrd15 = Wrd19;

DEFLABEL (label_529)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_55]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_95]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_528;
  Wrd30 = Wrd34;

DEFLABEL (label_527)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_48]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_526;
  Wrd45 = Wrd49;

DEFLABEL (label_525)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_524;
  Wrd62 = Wrd66;

DEFLABEL (label_523)
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136]));

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_56]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_522;
  Wrd17 = Wrd21;

DEFLABEL (label_521)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_153]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_520;
  Wrd17 = Wrd21;

DEFLABEL (label_519)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_169]));

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_179);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_68]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_518;
  Wrd17 = Wrd21;

DEFLABEL (label_517)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_176]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_69]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_516;
  Wrd17 = Wrd21;

DEFLABEL (label_515)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_514;
  Wrd15 = Wrd19;

DEFLABEL (label_513)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_58]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_512;
  Wrd30 = Wrd34;

DEFLABEL (label_511)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_60]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_510;
  Wrd45 = Wrd49;

DEFLABEL (label_509)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_61]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_508;
  Wrd60 = Wrd64;

DEFLABEL (label_507)
  (Wrd69.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_62]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_200]));

DEFLABEL (continuation_214)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (continuation_215)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_506;
  Wrd11 = Wrd15;

DEFLABEL (label_505)
  (Wrd20.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_504;
  Wrd26 = Wrd30;

DEFLABEL (label_503)
  (Wrd35.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_502;
  Wrd41 = Wrd45;

DEFLABEL (label_501)
  (Wrd50.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_500;
  Wrd56 = Wrd60;

DEFLABEL (label_499)
  (Wrd65.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd69.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_498;
  Wrd71 = Wrd75;

DEFLABEL (label_497)
  (Wrd80.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_28]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_496;
  Wrd86 = Wrd90;

DEFLABEL (label_495)
  (Wrd95.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (current_block [OBJECT_29]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd102.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd105.Obj) = ((Wrd102.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_494;
  Wrd101 = Wrd105;

DEFLABEL (label_493)
  (Wrd110.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (Wrd114.Obj) = (current_block [OBJECT_30]);
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_492;
  Wrd116 = Wrd120;

DEFLABEL (label_491)
  (Wrd125.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (Wrd124.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd124.pObj)));
  (Wrd129.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd129.Obj);
  (* (Rhp++)) = (Wrd122.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd132.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31]));
  (Wrd135.Obj) = ((Wrd132.pObj) [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if ((Wrd136.uLng) == 50)
    goto label_490;
  Wrd131 = Wrd135;

DEFLABEL (label_489)
  (Wrd140.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd131.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (Wrd144.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32]));
  (Wrd152.Obj) = ((Wrd149.pObj) [0]);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if ((Wrd153.uLng) == 50)
    goto label_488;
  Wrd148 = Wrd152;

DEFLABEL (label_487)
  (* (--Rsp)) = (Wrd148.Obj);
  (Wrd155.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33]));
  (Wrd158.Obj) = ((Wrd155.pObj) [0]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if ((Wrd159.uLng) == 50)
    goto label_486;
  Wrd154 = Wrd158;

DEFLABEL (label_485)
  (* (--Rsp)) = (Wrd154.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_269)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_32]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_484;
  Wrd15 = Wrd19;

DEFLABEL (label_483)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_482;
  Wrd30 = Wrd34;

DEFLABEL (label_481)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_480;
  Wrd45 = Wrd49;

DEFLABEL (label_479)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_478;
  Wrd60 = Wrd64;

DEFLABEL (label_477)
  (Wrd69.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_476;
  Wrd75 = Wrd79;

DEFLABEL (label_475)
  (Wrd84.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_37]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55]));
  (Wrd94.Obj) = ((Wrd91.pObj) [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 50)
    goto label_474;
  Wrd90 = Wrd94;

DEFLABEL (label_473)
  (Wrd99.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_38]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_472;
  Wrd105 = Wrd109;

DEFLABEL (label_471)
  (Wrd114.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_39]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57]));
  (Wrd124.Obj) = ((Wrd121.pObj) [0]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd125.uLng) == 50)
    goto label_470;
  Wrd120 = Wrd124;

DEFLABEL (label_469)
  (Wrd129.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  (Wrd133.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd126.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (* (--Rsp)) = (Wrd132.Obj);
  (Wrd136.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58]));
  (Wrd139.Obj) = ((Wrd136.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_468;
  Wrd135 = Wrd139;

DEFLABEL (label_467)
  (Wrd144.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd144.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (Wrd148.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd148.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd151.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59]));
  (Wrd154.Obj) = ((Wrd151.pObj) [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if ((Wrd155.uLng) == 50)
    goto label_466;
  Wrd150 = Wrd154;

DEFLABEL (label_465)
  (Wrd159.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd150.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  (Wrd163.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd163.Obj);
  (* (Rhp++)) = (Wrd156.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd168.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60]));
  (Wrd171.Obj) = ((Wrd168.pObj) [0]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if ((Wrd172.uLng) == 50)
    goto label_464;
  Wrd167 = Wrd171;

DEFLABEL (label_463)
  (* (--Rsp)) = (Wrd167.Obj);
  (Wrd174.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58]));
  (Wrd177.Obj) = ((Wrd174.pObj) [0]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if ((Wrd178.uLng) == 50)
    goto label_462;
  Wrd173 = Wrd177;

DEFLABEL (label_461)
  (* (--Rsp)) = (Wrd173.Obj);
  (Wrd179.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_460;
  Wrd180 = Wrd184;

DEFLABEL (label_459)
  (* (--Rsp)) = (Wrd180.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_246)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_458;
  Wrd18 = Wrd22;

DEFLABEL (label_457)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_243)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_456;
  Wrd17 = Wrd21;

DEFLABEL (label_455)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_454;
  Wrd23 = Wrd27;

DEFLABEL (label_453)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_452;
  Wrd30 = Wrd34;

DEFLABEL (label_451)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_240)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_41]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_450;
  Wrd18 = Wrd22;

DEFLABEL (label_449)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_237)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_448;
  Wrd15 = Wrd19;

DEFLABEL (label_447)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_446;
  Wrd30 = Wrd34;

DEFLABEL (label_445)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_444;
  Wrd45 = Wrd49;

DEFLABEL (label_443)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_442;
  Wrd62 = Wrd66;

DEFLABEL (label_441)
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_228)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_90]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_440;
  Wrd15 = Wrd19;

DEFLABEL (label_439)
  (Wrd24.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_58]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_90]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_438;
  Wrd30 = Wrd34;

DEFLABEL (label_437)
  (Wrd39.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_59]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_436;
  Wrd45 = Wrd49;

DEFLABEL (label_435)
  (Wrd54.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (current_block [OBJECT_60]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_434;
  Wrd60 = Wrd64;

DEFLABEL (label_433)
  (Wrd69.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_61]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_93]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_432;
  Wrd75 = Wrd79;

DEFLABEL (label_431)
  (Wrd84.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_62]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd92.Obj) = (current_block [OBJECT_63]);
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd97.Obj) = (current_block [OBJECT_64]);
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd98.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_161]));

DEFLABEL (continuation_290)
  INTERRUPT_CHECK (27, LABEL_46);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (label_432)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_160])), (Wrd76.pObj));

DEFLABEL (label_403)
  (Wrd75.Obj) = Rvl;
  goto label_431;

DEFLABEL (label_434)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_159])), (Wrd61.pObj));

DEFLABEL (label_402)
  (Wrd60.Obj) = Rvl;
  goto label_433;

DEFLABEL (label_436)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_158])), (Wrd46.pObj));

DEFLABEL (label_401)
  (Wrd45.Obj) = Rvl;
  goto label_435;

DEFLABEL (label_438)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_157])), (Wrd31.pObj));

DEFLABEL (label_400)
  (Wrd30.Obj) = Rvl;
  goto label_437;

DEFLABEL (label_440)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_156])), (Wrd16.pObj));

DEFLABEL (label_399)
  (Wrd15.Obj) = Rvl;
  goto label_439;

DEFLABEL (label_442)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_147])), (Wrd63.pObj));

DEFLABEL (label_395)
  (Wrd62.Obj) = Rvl;
  goto label_441;

DEFLABEL (label_444)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145])), (Wrd46.pObj));

DEFLABEL (label_394)
  (Wrd45.Obj) = Rvl;
  goto label_443;

DEFLABEL (label_446)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_144])), (Wrd31.pObj));

DEFLABEL (label_393)
  (Wrd30.Obj) = Rvl;
  goto label_445;

DEFLABEL (label_448)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_143])), (Wrd16.pObj));

DEFLABEL (label_392)
  (Wrd15.Obj) = Rvl;
  goto label_447;

DEFLABEL (label_450)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd19.pObj));

DEFLABEL (label_380)
  (Wrd18.Obj) = Rvl;
  goto label_449;

DEFLABEL (label_452)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd31.pObj));

DEFLABEL (label_376)
  (Wrd30.Obj) = Rvl;
  goto label_451;

DEFLABEL (label_454)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd24.pObj));

DEFLABEL (label_375)
  (Wrd23.Obj) = Rvl;
  goto label_453;

DEFLABEL (label_456)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd18.pObj));

DEFLABEL (label_374)
  (Wrd17.Obj) = Rvl;
  goto label_455;

DEFLABEL (label_458)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd19.pObj));

DEFLABEL (label_366)
  (Wrd18.Obj) = Rvl;
  goto label_457;

DEFLABEL (label_460)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd181.pObj));

DEFLABEL (label_360)
  (Wrd180.Obj) = Rvl;
  goto label_459;

DEFLABEL (label_462)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd174.pObj));

DEFLABEL (label_359)
  (Wrd173.Obj) = Rvl;
  goto label_461;

DEFLABEL (label_464)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd168.pObj));

DEFLABEL (label_358)
  (Wrd167.Obj) = Rvl;
  goto label_463;

DEFLABEL (label_466)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd151.pObj));

DEFLABEL (label_357)
  (Wrd150.Obj) = Rvl;
  goto label_465;

DEFLABEL (label_468)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd136.pObj));

DEFLABEL (label_356)
  (Wrd135.Obj) = Rvl;
  goto label_467;

DEFLABEL (label_470)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd121.pObj));

DEFLABEL (label_355)
  (Wrd120.Obj) = Rvl;
  goto label_469;

DEFLABEL (label_472)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd106.pObj));

DEFLABEL (label_354)
  (Wrd105.Obj) = Rvl;
  goto label_471;

DEFLABEL (label_474)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd91.pObj));

DEFLABEL (label_353)
  (Wrd90.Obj) = Rvl;
  goto label_473;

DEFLABEL (label_476)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd76.pObj));

DEFLABEL (label_352)
  (Wrd75.Obj) = Rvl;
  goto label_475;

DEFLABEL (label_478)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd61.pObj));

DEFLABEL (label_351)
  (Wrd60.Obj) = Rvl;
  goto label_477;

DEFLABEL (label_480)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd46.pObj));

DEFLABEL (label_350)
  (Wrd45.Obj) = Rvl;
  goto label_479;

DEFLABEL (label_482)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd31.pObj));

DEFLABEL (label_349)
  (Wrd30.Obj) = Rvl;
  goto label_481;

DEFLABEL (label_484)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd16.pObj));

DEFLABEL (label_348)
  (Wrd15.Obj) = Rvl;
  goto label_483;

DEFLABEL (label_486)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd155.pObj));

DEFLABEL (label_328)
  (Wrd154.Obj) = Rvl;
  goto label_485;

DEFLABEL (label_488)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd149.pObj));

DEFLABEL (label_327)
  (Wrd148.Obj) = Rvl;
  goto label_487;

DEFLABEL (label_490)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd132.pObj));

DEFLABEL (label_326)
  (Wrd131.Obj) = Rvl;
  goto label_489;

DEFLABEL (label_492)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd117.pObj));

DEFLABEL (label_325)
  (Wrd116.Obj) = Rvl;
  goto label_491;

DEFLABEL (label_494)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd102.pObj));

DEFLABEL (label_324)
  (Wrd101.Obj) = Rvl;
  goto label_493;

DEFLABEL (label_496)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd87.pObj));

DEFLABEL (label_323)
  (Wrd86.Obj) = Rvl;
  goto label_495;

DEFLABEL (label_498)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd72.pObj));

DEFLABEL (label_322)
  (Wrd71.Obj) = Rvl;
  goto label_497;

DEFLABEL (label_500)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd57.pObj));

DEFLABEL (label_321)
  (Wrd56.Obj) = Rvl;
  goto label_499;

DEFLABEL (label_502)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49])), (Wrd42.pObj));

DEFLABEL (label_320)
  (Wrd41.Obj) = Rvl;
  goto label_501;

DEFLABEL (label_504)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd27.pObj));

DEFLABEL (label_319)
  (Wrd26.Obj) = Rvl;
  goto label_503;

DEFLABEL (label_506)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd12.pObj));

DEFLABEL (label_318)
  (Wrd11.Obj) = Rvl;
  goto label_505;

DEFLABEL (label_508)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_199])), (Wrd61.pObj));

DEFLABEL (label_426)
  (Wrd60.Obj) = Rvl;
  goto label_507;

DEFLABEL (label_510)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_198])), (Wrd46.pObj));

DEFLABEL (label_425)
  (Wrd45.Obj) = Rvl;
  goto label_509;

DEFLABEL (label_512)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_197])), (Wrd31.pObj));

DEFLABEL (label_424)
  (Wrd30.Obj) = Rvl;
  goto label_511;

DEFLABEL (label_514)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_196])), (Wrd16.pObj));

DEFLABEL (label_423)
  (Wrd15.Obj) = Rvl;
  goto label_513;

DEFLABEL (label_516)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_195])), (Wrd18.pObj));

DEFLABEL (label_422)
  (Wrd17.Obj) = Rvl;
  goto label_515;

DEFLABEL (label_518)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_186])), (Wrd18.pObj));

DEFLABEL (label_416)
  (Wrd17.Obj) = Rvl;
  goto label_517;

DEFLABEL (label_520)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_180])), (Wrd18.pObj));

DEFLABEL (label_413)
  (Wrd17.Obj) = Rvl;
  goto label_519;

DEFLABEL (label_522)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_173])), (Wrd18.pObj));

DEFLABEL (label_410)
  (Wrd17.Obj) = Rvl;
  goto label_521;

DEFLABEL (label_524)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_166])), (Wrd63.pObj));

DEFLABEL (label_407)
  (Wrd62.Obj) = Rvl;
  goto label_523;

DEFLABEL (label_526)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_164])), (Wrd46.pObj));

DEFLABEL (label_406)
  (Wrd45.Obj) = Rvl;
  goto label_525;

DEFLABEL (label_528)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_163])), (Wrd31.pObj));

DEFLABEL (label_405)
  (Wrd30.Obj) = Rvl;
  goto label_527;

DEFLABEL (label_530)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_162])), (Wrd16.pObj));

DEFLABEL (label_404)
  (Wrd15.Obj) = Rvl;
  goto label_529;

DEFLABEL (label_532)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_150])), (Wrd18.pObj));

DEFLABEL (label_396)
  (Wrd17.Obj) = Rvl;
  goto label_531;

DEFLABEL (label_534)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131])), (Wrd48.pObj));

DEFLABEL (label_383)
  (Wrd47.Obj) = Rvl;
  goto label_533;

DEFLABEL (label_536)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd31.pObj));

DEFLABEL (label_382)
  (Wrd30.Obj) = Rvl;
  goto label_535;

DEFLABEL (label_538)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128])), (Wrd16.pObj));

DEFLABEL (label_381)
  (Wrd15.Obj) = Rvl;
  goto label_537;

DEFLABEL (label_540)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_121])), (Wrd19.pObj));

DEFLABEL (label_377)
  (Wrd18.Obj) = Rvl;
  goto label_539;

DEFLABEL (label_542)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108])), (Wrd31.pObj));

DEFLABEL (label_369)
  (Wrd30.Obj) = Rvl;
  goto label_541;

DEFLABEL (label_544)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107])), (Wrd24.pObj));

DEFLABEL (label_368)
  (Wrd23.Obj) = Rvl;
  goto label_543;

DEFLABEL (label_546)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106])), (Wrd18.pObj));

DEFLABEL (label_367)
  (Wrd17.Obj) = Rvl;
  goto label_545;

DEFLABEL (label_548)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd19.pObj));

DEFLABEL (label_361)
  (Wrd18.Obj) = Rvl;
  goto label_547;

DEFLABEL (label_550)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd181.pObj));

DEFLABEL (label_341)
  (Wrd180.Obj) = Rvl;
  goto label_549;

DEFLABEL (label_552)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd174.pObj));

DEFLABEL (label_340)
  (Wrd173.Obj) = Rvl;
  goto label_551;

DEFLABEL (label_554)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd168.pObj));

DEFLABEL (label_339)
  (Wrd167.Obj) = Rvl;
  goto label_553;

DEFLABEL (label_556)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd151.pObj));

DEFLABEL (label_338)
  (Wrd150.Obj) = Rvl;
  goto label_555;

DEFLABEL (label_558)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd136.pObj));

DEFLABEL (label_337)
  (Wrd135.Obj) = Rvl;
  goto label_557;

DEFLABEL (label_560)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd121.pObj));

DEFLABEL (label_336)
  (Wrd120.Obj) = Rvl;
  goto label_559;

DEFLABEL (label_562)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65])), (Wrd106.pObj));

DEFLABEL (label_335)
  (Wrd105.Obj) = Rvl;
  goto label_561;

DEFLABEL (label_564)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd91.pObj));

DEFLABEL (label_334)
  (Wrd90.Obj) = Rvl;
  goto label_563;

DEFLABEL (label_566)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd76.pObj));

DEFLABEL (label_333)
  (Wrd75.Obj) = Rvl;
  goto label_565;

DEFLABEL (label_568)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd61.pObj));

DEFLABEL (label_332)
  (Wrd60.Obj) = Rvl;
  goto label_567;

DEFLABEL (label_570)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd46.pObj));

DEFLABEL (label_331)
  (Wrd45.Obj) = Rvl;
  goto label_569;

DEFLABEL (label_572)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd31.pObj));

DEFLABEL (label_330)
  (Wrd30.Obj) = Rvl;
  goto label_571;

DEFLABEL (label_574)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd16.pObj));

DEFLABEL (label_329)
  (Wrd15.Obj) = Rvl;
  goto label_573;

DEFLABEL (label_576)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd51.pObj));

DEFLABEL (label_308)
  (Wrd50.Obj) = Rvl;
  goto label_575;

DEFLABEL (label_578)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd45.pObj));

DEFLABEL (label_307)
  (Wrd44.Obj) = Rvl;
  goto label_577;

DEFLABEL (label_580)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd28.pObj));

DEFLABEL (label_306)
  (Wrd27.Obj) = Rvl;
  goto label_579;

DEFLABEL (label_582)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd13.pObj));

DEFLABEL (label_305)
  (Wrd12.Obj) = Rvl;
  goto label_581;

DEFLABEL (label_584)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_189])), (Wrd46.pObj));

DEFLABEL (label_419)
  (Wrd45.Obj) = Rvl;
  goto label_583;

DEFLABEL (label_586)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_188])), (Wrd31.pObj));

DEFLABEL (label_418)
  (Wrd30.Obj) = Rvl;
  goto label_585;

DEFLABEL (label_588)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_187])), (Wrd16.pObj));

DEFLABEL (label_417)
  (Wrd15.Obj) = Rvl;
  goto label_587;

DEFLABEL (label_590)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_182])), (Wrd18.pObj));

DEFLABEL (label_414)
  (Wrd17.Obj) = Rvl;
  goto label_589;

DEFLABEL (label_592)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175])), (Wrd18.pObj));

DEFLABEL (label_411)
  (Wrd17.Obj) = Rvl;
  goto label_591;

DEFLABEL (label_594)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_168])), (Wrd18.pObj));

DEFLABEL (label_408)
  (Wrd17.Obj) = Rvl;
  goto label_593;

DEFLABEL (label_596)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_152])), (Wrd18.pObj));

DEFLABEL (label_397)
  (Wrd17.Obj) = Rvl;
  goto label_595;

DEFLABEL (label_598)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_135])), (Wrd58.pObj));

DEFLABEL (label_386)
  (Wrd57.Obj) = Rvl;
  goto label_597;

DEFLABEL (label_600)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_133])), (Wrd41.pObj));

DEFLABEL (label_385)
  (Wrd40.Obj) = Rvl;
  goto label_599;

DEFLABEL (label_602)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_132])), (Wrd17.pObj));

DEFLABEL (label_384)
  (Wrd16.Obj) = Rvl;
  goto label_601;

DEFLABEL (label_604)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd18.pObj));

DEFLABEL (label_378)
  (Wrd17.Obj) = Rvl;
  goto label_603;

DEFLABEL (label_606)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112])), (Wrd48.pObj));

DEFLABEL (label_372)
  (Wrd47.Obj) = Rvl;
  goto label_605;

DEFLABEL (label_608)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd31.pObj));

DEFLABEL (label_371)
  (Wrd30.Obj) = Rvl;
  goto label_607;

DEFLABEL (label_610)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd16.pObj));

DEFLABEL (label_370)
  (Wrd15.Obj) = Rvl;
  goto label_609;

DEFLABEL (label_612)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98])), (Wrd19.pObj));

DEFLABEL (label_362)
  (Wrd18.Obj) = Rvl;
  goto label_611;

DEFLABEL (label_614)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd31.pObj));

DEFLABEL (label_344)
  (Wrd30.Obj) = Rvl;
  goto label_613;

DEFLABEL (label_616)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd24.pObj));

DEFLABEL (label_343)
  (Wrd23.Obj) = Rvl;
  goto label_615;

DEFLABEL (label_618)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd18.pObj));

DEFLABEL (label_342)
  (Wrd17.Obj) = Rvl;
  goto label_617;

DEFLABEL (label_620)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd19.pObj));

DEFLABEL (label_309)
  (Wrd18.Obj) = Rvl;
  goto label_619;

DEFLABEL (label_622)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd133.pObj));

DEFLABEL (label_303)
  (Wrd132.Obj) = Rvl;
  goto label_621;

DEFLABEL (label_624)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd126.pObj));

DEFLABEL (label_302)
  (Wrd125.Obj) = Rvl;
  goto label_623;

DEFLABEL (label_626)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd120.pObj));

DEFLABEL (label_301)
  (Wrd119.Obj) = Rvl;
  goto label_625;

DEFLABEL (label_628)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd103.pObj));

DEFLABEL (label_300)
  (Wrd102.Obj) = Rvl;
  goto label_627;

DEFLABEL (label_630)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd88.pObj));

DEFLABEL (label_299)
  (Wrd87.Obj) = Rvl;
  goto label_629;

DEFLABEL (label_632)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd73.pObj));

DEFLABEL (label_298)
  (Wrd72.Obj) = Rvl;
  goto label_631;

DEFLABEL (label_634)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd58.pObj));

DEFLABEL (label_297)
  (Wrd57.Obj) = Rvl;
  goto label_633;

DEFLABEL (label_636)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd43.pObj));

DEFLABEL (label_296)
  (Wrd42.Obj) = Rvl;
  goto label_635;

DEFLABEL (label_638)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd28.pObj));

DEFLABEL (label_295)
  (Wrd27.Obj) = Rvl;
  goto label_637;

DEFLABEL (label_640)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd13.pObj));

DEFLABEL (label_294)
  (Wrd12.Obj) = Rvl;
  goto label_639;

DEFLABEL (label_642)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_192])), (Wrd31.pObj));

DEFLABEL (label_421)
  (Wrd30.Obj) = Rvl;
  goto label_641;

DEFLABEL (label_644)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_191])), (Wrd16.pObj));

DEFLABEL (label_420)
  (Wrd15.Obj) = Rvl;
  goto label_643;

DEFLABEL (label_646)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_184])), (Wrd18.pObj));

DEFLABEL (label_415)
  (Wrd17.Obj) = Rvl;
  goto label_645;

DEFLABEL (label_648)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_178])), (Wrd18.pObj));

DEFLABEL (label_412)
  (Wrd17.Obj) = Rvl;
  goto label_647;

DEFLABEL (label_650)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_171])), (Wrd18.pObj));

DEFLABEL (label_409)
  (Wrd17.Obj) = Rvl;
  goto label_649;

DEFLABEL (label_652)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_155])), (Wrd18.pObj));

DEFLABEL (label_398)
  (Wrd17.Obj) = Rvl;
  goto label_651;

DEFLABEL (label_654)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_142])), (Wrd87.pObj));

DEFLABEL (label_391)
  (Wrd86.Obj) = Rvl;
  goto label_653;

DEFLABEL (label_656)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140])), (Wrd70.pObj));

DEFLABEL (label_390)
  (Wrd69.Obj) = Rvl;
  goto label_655;

DEFLABEL (label_658)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139])), (Wrd55.pObj));

DEFLABEL (label_389)
  (Wrd54.Obj) = Rvl;
  goto label_657;

DEFLABEL (label_660)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_138])), (Wrd40.pObj));

DEFLABEL (label_388)
  (Wrd39.Obj) = Rvl;
  goto label_659;

DEFLABEL (label_662)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137])), (Wrd25.pObj));

DEFLABEL (label_387)
  (Wrd24.Obj) = Rvl;
  goto label_661;

DEFLABEL (label_664)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_125])), (Wrd18.pObj));

DEFLABEL (label_379)
  (Wrd17.Obj) = Rvl;
  goto label_663;

DEFLABEL (label_666)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd18.pObj));

DEFLABEL (label_373)
  (Wrd17.Obj) = Rvl;
  goto label_665;

DEFLABEL (label_668)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd49.pObj));

DEFLABEL (label_365)
  (Wrd48.Obj) = Rvl;
  goto label_667;

DEFLABEL (label_670)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd31.pObj));

DEFLABEL (label_364)
  (Wrd30.Obj) = Rvl;
  goto label_669;

DEFLABEL (label_672)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd16.pObj));

DEFLABEL (label_363)
  (Wrd15.Obj) = Rvl;
  goto label_671;

DEFLABEL (label_674)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80])), (Wrd31.pObj));

DEFLABEL (label_347)
  (Wrd30.Obj) = Rvl;
  goto label_673;

DEFLABEL (label_676)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd24.pObj));

DEFLABEL (label_346)
  (Wrd23.Obj) = Rvl;
  goto label_675;

DEFLABEL (label_678)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd18.pObj));

DEFLABEL (label_345)
  (Wrd17.Obj) = Rvl;
  goto label_677;

DEFLABEL (label_680)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd124.pObj));

DEFLABEL (label_317)
  (Wrd123.Obj) = Rvl;
  goto label_679;

DEFLABEL (label_682)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd106.pObj));

DEFLABEL (label_316)
  (Wrd105.Obj) = Rvl;
  goto label_681;

DEFLABEL (label_684)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd91.pObj));

DEFLABEL (label_315)
  (Wrd90.Obj) = Rvl;
  goto label_683;

DEFLABEL (label_686)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd76.pObj));

DEFLABEL (label_314)
  (Wrd75.Obj) = Rvl;
  goto label_685;

DEFLABEL (label_688)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd61.pObj));

DEFLABEL (label_313)
  (Wrd60.Obj) = Rvl;
  goto label_687;

DEFLABEL (label_690)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd46.pObj));

DEFLABEL (label_312)
  (Wrd45.Obj) = Rvl;
  goto label_689;

DEFLABEL (label_692)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd31.pObj));

DEFLABEL (label_311)
  (Wrd30.Obj) = Rvl;
  goto label_691;

DEFLABEL (label_694)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd16.pObj));

DEFLABEL (label_310)
  (Wrd15.Obj) = Rvl;
  goto label_693;

DEFLABEL (label_696)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd19.pObj));

DEFLABEL (label_304)
  (Wrd18.Obj) = Rvl;
  goto label_695;

DEFLABEL (label_698)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd16.pObj));

DEFLABEL (label_293)
  (Wrd15.Obj) = Rvl;
  goto label_697;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_numint_so_92a38308f3a78bff [13] =
  {
    { "numint_so_code_1", 5, numint_so_code_1 },
    { "numint_so_code_2", 4, numint_so_code_2 },
    { "numint_so_code_3", 1, numint_so_code_3 },
    { "numint_so_code_4", 2, numint_so_code_4 },
    { "numint_so_code_5", 3, numint_so_code_5 },
    { "numint_so_code_6", 3, numint_so_code_6 },
    { "numint_so_code_7", 3, numint_so_code_7 },
    { "numint_so_code_8", 2, numint_so_code_8 },
    { "numint_so_code_9", 4, numint_so_code_9 },
    { "numint_so_code_10", 3, numint_so_code_10 },
    { "numint_so_code_11", 5, numint_so_code_11 },
    { "numint_so_code_12", 2, numint_so_code_12 },
    { "numint_so_code_13", 1, numint_so_code_13 }
  };

int
decl_numint_so_92a38308f3a78bff (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_numint_so_92a38308f3a78bff);
  return (0);
}

DECLARE_COMPILED_CODE ("numint.so", 186, decl_numint_so_92a38308f3a78bff, numint_so_92a38308f3a78bff)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_numint_so_data_92a38308f3a78bff [4588] =
  "\xca\x04\x1a\x90\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x07"
  "\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x07\x28\xb2\x28\xb3\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x0d"
  "\xbd\x28\x0d\xbe\x23\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88\x0d"
  "\x1c\x28\xb6\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\x07\x0d\x1c\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x07\x0d\x1c\x28\xb6\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\xb2\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\xb2"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xc1\x0c\x08\x0d\x0d\x0d"
  "\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\xba\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x0d\xb8\x23"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x0d\x0d\x0d\x0d\x80\x08"
  "\x89\x0d\x81\x08\x89\x0d\x80\x81\x0b\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x1c\x0d\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x0d\x08\x89\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x80"
  "\x0d\xc3\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x0d\x0d\x08\x81\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x1b\xb5\xb6\xb1\x17\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb3"
  "\x2a\xb4\x2a\x17\x28\x0d\x26\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb2\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb0\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb1\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb5\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x6e\x75\x6d\x69\x6e\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x10\x6d\x61\x6b\x65\x2d\x3d\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72"
  "\x06\x20\x6d\x61\x6b\x65\x2d\x61\x72\x69\x74\x79\x2d\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x05\x12\x72\x65\x64\x75\x63\x65\x2d\x63\x6f\x6d\x70\x61\x72"
  "\x61\x74\x6f\x72\x03\xbf\x01\x0c\x81\x87\x02\xbe\x01\x0a\x81\x87"
  "\x02\xbd\x01\x08\x82\x02\xbc\x01\x06\x83\x04\xbb\x01\x04\x83\x04"
  "\x0b\x15\x02\x06\x05\x03\xc3\x01\x0a\x83\x04\xc2\x01\x08\x81\x87"
  "\x02\xc1\x01\x06\x82\x02\xc0\x01\x04\x84\x06\x09\x12\x02\x10\x6d"
  "\x61\x6b\x65\x2d\x3c\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x04\x19"
  "\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x2d"
  "\x6f\x70\x65\x72\x61\x74\x6f\x72\x02\xc4\x01\x04\x83\x04\x03\x0a"
  "\x02\x10\x6d\x61\x6b\x65\x2d\x3e\x2d\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x09\x04\x02\xc6\x01\x06\x81\x87\x02\xc5\x01\x04\x83\x04\x05"
  "\x0c\x0a\x02\x11\x6d\x61\x6b\x65\x2d\x3c\x3d\x2d\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x0b\x04\x02\xc9\x01\x08\x81\x87\x02\xc8\x01\x06"
  "\x81\x87\x02\xc7\x01\x04\x83\x04\x07\x0f\x0c\x02\x11\x6d\x61\x6b"
  "\x65\x2d\x3e\x3d\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x0d\x04\x02"
  "\xcc\x01\x08\x81\x87\x02\xcb\x01\x06\x81\x87\x02\xca\x01\x04\x83"
  "\x04\x07\x0f\x0e\x02\x08\x16\x6d\x61\x6b\x65\x2d\x6d\x61\x78\x2f"
  "\x6d\x69\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x0f\x06\x06\x0f"
  "\x72\x65\x64\x75\x63\x65\x2d\x6d\x61\x78\x2f\x6d\x69\x6e\x03\xcf"
  "\x01\x08\x81\x89\x02\xce\x01\x06\x83\x04\xcd\x01\x04\x83\x04\x07"
  "\x10\x10\x02\x09\x2d\x41\x54\x41\x4e\x20\x6f\x70\x65\x72\x61\x74"
  "\x6f\x72\x3a\x20\x73\x68\x6f\x75\x6c\x64\x20\x6e\x65\x76\x65\x72"
  "\x20\x67\x65\x74\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x63\x61\x73"
  "\x65\x06\x06\x06\x65\x72\x72\x6f\x72\x11\x03\xd1\x01\x06\x85\x06"
  "\xd0\x01\x04\x84\x06\x05\x0e\x12\x02\x0a\x06\x05\x07\x72\x65\x64"
  "\x75\x63\x65\x13\x03\xd5\x01\x0a\x83\x04\xd4\x01\x08\x81\x87\x02"
  "\xd3\x01\x06\x81\x83\x02\xd2\x01\x04\x84\x06\x09\x11\x14\x02\x0b"
  "\x06\x05\x13\x03\xd8\x01\x08\x81\x89\x02\xd7\x01\x06\x81\x89\x02"
  "\xd6\x01\x04\x86\x0a\x07\x0f\x13\x02\x0c\x04\x63\x61\x72\x04\x63"
  "\x64\x72\x15\x4f\x62\x6a\x65\x63\x74\x20\x6e\x6f\x74\x20\x61\x76"
  "\x61\x69\x6c\x61\x62\x6c\x65\x0d\x70\x61\x63\x6b\x61\x67\x65\x2d"
  "\x6e\x61\x6d\x65\x0c\x62\x6f\x75\x6e\x64\x2d\x6e\x61\x6d\x65\x73"
  "\x04\x63\x61\x72\x02\x04\x04\x6d\x61\x70\x04\x05\x61\x73\x73\x71"
  "\x05\x11\x04\xdd\x01\x0c\x81\x89\x02\xdc\x01\x0a\x81\x87\x02\xdb"
  "\x01\x08\x81\x87\x02\xda\x01\x06\x81\x87\x02\xd9\x01\x04\xfe\x05"
  "\x0b\x1d\x11\x02\x0d\x03\x0a\x69\x6e\x74\x3a\x65\x76\x65\x6e\x3f"
  "\x02\xdf\x01\x06\x81\x83\x02\xde\x01\x04\x83\x04\x05\x0c\x15\x02"
  "\x0e\x04\x06\x72\x61\x74\x3a\x3d\x02\xe0\x01\x04\x83\x04\x03\x0a"
  "\x16\x0e\x17\x17\x02\x3c\x02\x3e\x03\x3c\x3d\x05\x7a\x65\x72\x6f"
  "\x04\x6f\x6e\x65\x0a\x69\x6d\x61\x67\x2d\x75\x6e\x69\x74\x09\x69"
  "\x6e\x74\x65\x67\x65\x72\x3f\x0a\x72\x61\x74\x69\x6f\x6e\x61\x6c"
  "\x3f\x06\x72\x65\x61\x6c\x3f\x09\x63\x6f\x6d\x70\x6c\x65\x78\x3f"
  "\x19\x63\x68\x61\x72\x61\x63\x74\x65\x72\x69\x73\x74\x69\x63\x2d"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x02\x3d\x03\x3e\x3d\x0a\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x3f\x17\x06\x65\x76\x65\x6e\x3f\x05"
  "\x6f\x64\x64\x3f\x15\x04\x06\x7a\x65\x72\x6f\x3f\x05\x6f\x6e\x65"
  "\x3f\x16\x04\x0a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x17\x0e\x72"
  "\x61\x74\x3a\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x04\x6d\x61\x78"
  "\x04\x6d\x69\x6e\x02\x2b\x03\x31\x2b\x04\x2d\x31\x2b\x02\x2d\x02"
  "\x2a\x04\x65\x78\x70\x04\x6c\x6f\x67\x04\x73\x69\x6e\x04\x63\x6f"
  "\x73\x04\x74\x61\x6e\x05\x61\x73\x69\x6e\x05\x61\x63\x6f\x73\x05"
  "\x61\x74\x61\x6e\x0d\x72\x65\x61\x6c\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x74\x61\x6e\x67\x75\x6c"
  "\x61\x72\x0b\x6d\x61\x6b\x65\x2d\x70\x6f\x6c\x61\x72\x0a\x72\x65"
  "\x61\x6c\x2d\x70\x61\x72\x74\x0a\x69\x6d\x61\x67\x2d\x70\x61\x72"
  "\x74\x0a\x6d\x61\x67\x6e\x69\x74\x75\x64\x65\x06\x61\x6e\x67\x6c"
  "\x65\x0a\x63\x6f\x6e\x6a\x75\x67\x61\x74\x65\x10\x63\x6f\x6d\x70"
  "\x6c\x65\x78\x2d\x70\x61\x63\x6b\x61\x67\x65\x09\x71\x75\x6f\x74"
  "\x69\x65\x6e\x74\x0a\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x07\x6d"
  "\x6f\x64\x75\x6c\x6f\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69"
  "\x76\x69\x64\x65\x04\x67\x63\x64\x02\x2f\x11\x72\x61\x74\x69\x6f"
  "\x6e\x61\x6c\x2d\x70\x61\x63\x6b\x61\x67\x65\x05\x73\x71\x72\x74"
  "\x04\x6c\x63\x6d\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x10\x69\x6e\x74\x65\x67\x65\x72\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x07\x6e\x65\x67\x61\x74\x65\x07\x69\x6e\x76"
  "\x65\x72\x74\x04\x61\x62\x73\x05\x65\x78\x70\x74\x0e\x6d\x61\x6b"
  "\x65\x2d\x72\x61\x74\x69\x6f\x6e\x61\x6c\x17\x0a\x6e\x75\x6d\x65"
  "\x72\x61\x74\x6f\x72\x0c\x64\x65\x6e\x6f\x6d\x69\x6e\x61\x74\x6f"
  "\x72\x18\x6d\x61\x6b\x65\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69"
  "\x63\x2d\x70\x61\x63\x6b\x61\x67\x65\x16\x23\x6d\x61\x6b\x65\x2d"
  "\x69\x6e\x76\x65\x72\x73\x65\x2d\x61\x63\x63\x75\x6d\x75\x6c\x61"
  "\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x15\x1b\x6d"
  "\x61\x6b\x65\x2d\x61\x63\x63\x75\x6d\x75\x6c\x61\x74\x69\x6f\x6e"
  "\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x18\x13\x6d\x61\x6b\x65\x2d"
  "\x61\x74\x61\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x19\x0f\x0d"
  "\x0b\x09\x0c\x11\x04\x13\x04\x14\x04\x12\x04\x10\x04\x0e\x04\x0c"
  "\x04\x0a\x04\x04\x04\x04\x0c\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x08\x69\x6e\x74\x3a\x6c\x63"
  "\x6d\x10\x72\x61\x74\x3a\x64\x65\x6e\x6f\x6d\x69\x6e\x61\x74\x6f"
  "\x72\x0e\x72\x61\x74\x3a\x6e\x75\x6d\x65\x72\x61\x74\x6f\x72\x17"
  "\x09\x72\x61\x74\x3a\x65\x78\x70\x74\x08\x72\x61\x74\x3a\x61\x62"
  "\x73\x0b\x72\x61\x74\x3a\x69\x6e\x76\x65\x72\x74\x0b\x72\x61\x74"
  "\x3a\x6e\x65\x67\x61\x74\x65\x06\x72\x61\x74\x3a\x2f\x06\x72\x61"
  "\x74\x3a\x2a\x08\x69\x6e\x74\x3a\x67\x63\x64\x0a\x72\x65\x61\x6c"
  "\x3a\x65\x78\x70\x74\x0a\x72\x65\x61\x6c\x3a\x73\x71\x72\x74\x0b"
  "\x72\x65\x61\x6c\x3a\x61\x74\x61\x6e\x32\x0a\x72\x65\x61\x6c\x3a"
  "\x61\x74\x61\x6e\x0b\x69\x6e\x74\x3a\x64\x69\x76\x69\x64\x65\x0b"
  "\x69\x6e\x74\x3a\x6d\x6f\x64\x75\x6c\x6f\x0e\x69\x6e\x74\x3a\x72"
  "\x65\x6d\x61\x69\x6e\x64\x65\x72\x0d\x69\x6e\x74\x3a\x71\x75\x6f"
  "\x74\x69\x65\x6e\x74\x09\x69\x6e\x74\x3a\x65\x78\x70\x74\x08\x69"
  "\x6e\x74\x3a\x61\x62\x73\x0b\x69\x6e\x74\x3a\x6e\x65\x67\x61\x74"
  "\x65\x06\x69\x6e\x74\x3a\x2a\x12\x63\x6f\x6d\x70\x6c\x65\x78\x3a"
  "\x63\x6f\x6e\x6a\x75\x67\x61\x74\x65\x0e\x63\x6f\x6d\x70\x6c\x65"
  "\x78\x3a\x61\x6e\x67\x6c\x65\x12\x63\x6f\x6d\x70\x6c\x65\x78\x3a"
  "\x6d\x61\x67\x6e\x69\x74\x75\x64\x65\x12\x63\x6f\x6d\x70\x6c\x65"
  "\x78\x3a\x69\x6d\x61\x67\x2d\x70\x61\x72\x74\x12\x63\x6f\x6d\x70"
  "\x6c\x65\x78\x3a\x72\x65\x61\x6c\x2d\x70\x61\x72\x74\x13\x63\x6f"
  "\x6d\x70\x6c\x65\x78\x3a\x6d\x61\x6b\x65\x2d\x70\x6f\x6c\x61\x72"
  "\x19\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x63\x74\x61\x6e\x67\x75\x6c\x61\x72\x0d\x63\x6f\x6d\x70\x6c\x65"
  "\x78\x3a\x65\x78\x70\x74\x0d\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x73"
  "\x71\x72\x74\x0e\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x61\x74\x61\x6e"
  "\x32\x0d\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x61\x74\x61\x6e\x0a\x72"
  "\x65\x61\x6c\x3a\x61\x63\x6f\x73\x0a\x72\x65\x61\x6c\x3a\x61\x73"
  "\x69\x6e\x09\x72\x65\x61\x6c\x3a\x74\x61\x6e\x09\x72\x65\x61\x6c"
  "\x3a\x63\x6f\x73\x09\x72\x65\x61\x6c\x3a\x73\x69\x6e\x09\x72\x65"
  "\x61\x6c\x3a\x6c\x6f\x67\x09\x72\x65\x61\x6c\x3a\x65\x78\x70\x09"
  "\x72\x65\x61\x6c\x3a\x61\x62\x73\x0c\x72\x65\x61\x6c\x3a\x69\x6e"
  "\x76\x65\x72\x74\x0c\x72\x65\x61\x6c\x3a\x6e\x65\x67\x61\x74\x65"
  "\x07\x72\x65\x61\x6c\x3a\x2f\x07\x72\x65\x61\x6c\x3a\x2a\x06\x72"
  "\x61\x74\x3a\x2d\x06\x72\x61\x74\x3a\x2b\x06\x69\x6e\x74\x3a\x2d"
  "\x06\x69\x6e\x74\x3a\x2b\x0d\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x61"
  "\x63\x6f\x73\x0d\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x61\x73\x69\x6e"
  "\x0c\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x74\x61\x6e\x0c\x63\x6f\x6d"
  "\x70\x6c\x65\x78\x3a\x63\x6f\x73\x0c\x63\x6f\x6d\x70\x6c\x65\x78"
  "\x3a\x73\x69\x6e\x0c\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x6c\x6f\x67"
  "\x0c\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x65\x78\x70\x0c\x63\x6f\x6d"
  "\x70\x6c\x65\x78\x3a\x61\x62\x73\x0f\x63\x6f\x6d\x70\x6c\x65\x78"
  "\x3a\x69\x6e\x76\x65\x72\x74\x0f\x63\x6f\x6d\x70\x6c\x65\x78\x3a"
  "\x6e\x65\x67\x61\x74\x65\x0a\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x2f"
  "\x0a\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x2a\x08\x69\x6e\x74\x3a\x2d"
  "\x31\x2b\x07\x69\x6e\x74\x3a\x31\x2b\x07\x72\x65\x61\x6c\x3a\x2d"
  "\x07\x72\x65\x61\x6c\x3a\x2b\x08\x72\x61\x74\x3a\x2d\x31\x2b\x07"
  "\x72\x61\x74\x3a\x31\x2b\x08\x72\x61\x74\x3a\x6d\x69\x6e\x08\x69"
  "\x6e\x74\x3a\x6d\x69\x6e\x0a\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x2d"
  "\x0a\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x2b\x08\x72\x61\x74\x3a\x6d"
  "\x61\x78\x08\x69\x6e\x74\x3a\x6d\x61\x78\x09\x72\x65\x61\x6c\x3a"
  "\x2d\x31\x2b\x08\x72\x65\x61\x6c\x3a\x31\x2b\x09\x72\x65\x61\x6c"
  "\x3a\x6d\x69\x6e\x0e\x72\x61\x74\x3a\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x3f\x0a\x72\x61\x74\x3a\x7a\x65\x72\x6f\x3f\x06\x72\x61\x74"
  "\x3a\x3c\x0e\x69\x6e\x74\x3a\x6e\x65\x67\x61\x74\x69\x76\x65\x3f"
  "\x0e\x69\x6e\x74\x3a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x0a\x69"
  "\x6e\x74\x3a\x7a\x65\x72\x6f\x3f\x06\x69\x6e\x74\x3a\x3c\x0c\x63"
  "\x6f\x6d\x70\x6c\x65\x78\x3a\x2d\x31\x2b\x0b\x63\x6f\x6d\x70\x6c"
  "\x65\x78\x3a\x31\x2b\x0e\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x7a\x65"
  "\x72\x6f\x3f\x0a\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x3d\x09\x72\x65"
  "\x61\x6c\x3a\x6d\x61\x78\x11\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x63"
  "\x6f\x6d\x70\x6c\x65\x78\x3f\x0e\x63\x6f\x6d\x70\x6c\x65\x78\x3a"
  "\x72\x65\x61\x6c\x3f\x12\x63\x6f\x6d\x70\x6c\x65\x78\x3a\x72\x61"
  "\x74\x69\x6f\x6e\x61\x6c\x3f\x11\x63\x6f\x6d\x70\x6c\x65\x78\x3a"
  "\x69\x6e\x74\x65\x67\x65\x72\x3f\x0f\x72\x65\x61\x6c\x3a\x6e\x65"
  "\x67\x61\x74\x69\x76\x65\x3f\x0f\x72\x65\x61\x6c\x3a\x70\x6f\x73"
  "\x69\x74\x69\x76\x65\x3f\x0b\x72\x65\x61\x6c\x3a\x7a\x65\x72\x6f"
  "\x3f\x07\x72\x65\x61\x6c\x3a\x3c\x06\x69\x6e\x74\x3a\x3d\x0e\x72"
  "\x61\x74\x3a\x72\x61\x74\x69\x6f\x6e\x61\x6c\x3f\x0d\x72\x61\x74"
  "\x3a\x69\x6e\x74\x65\x67\x65\x72\x3f\x0d\x69\x6e\x74\x3a\x69\x6e"
  "\x74\x65\x67\x65\x72\x3f\x07\x72\x65\x61\x6c\x3a\x3d\x0b\x72\x65"
  "\x61\x6c\x3a\x72\x65\x61\x6c\x3f\x0f\x72\x65\x61\x6c\x3a\x72\x61"
  "\x74\x69\x6f\x6e\x61\x6c\x3f\x0e\x72\x65\x61\x6c\x3a\x69\x6e\x74"
  "\x65\x67\x65\x72\x3f\x6c\x04\x18\x06\x15\x04\x19\x03\x0f\x03\x0d"
  "\x03\x03\x0b\x27\x16\x20\x16\x21\x16\x26\x16\x03\x09\x03\x0e\xba"
  "\x01\xf6\x02\x80\x80\x04\xb9\x01\xf4\x02\x81\x81\x02\xb8\x01\xf2"
  "\x02\x81\x81\x02\xb7\x01\xf0\x02\x81\xc7\x02\xb6\x01\xee\x02\x81"
  "\xc5\x02\xb5\x01\xec\x02\x81\xc3\x02\xb4\x01\xea\x02\x81\xc1\x02"
  "\xb3\x01\xe8\x02\x81\xbf\x02\xb2\x01\xe6\x02\x81\xc1\x02\xb1\x01"
  "\xe4\x02\x81\xbd\x02\xb0\x01\xe2\x02\x81\xbd\x02\xaf\x01\xe0\x02"
  "\x81\xbb\x02\xae\x01\xde\x02\x81\xb9\x02\xad\x01\xdc\x02\x81\xbb"
  "\x02\xac\x01\xda\x02\x81\xb9\x02\xab\x01\xd8\x02\x81\xb7\x02\xaa"
  "\x01\xd6\x02\x81\xb5\x02\xa9\x01\xd4\x02\x81\xbf\x02\xa8\x01\xd2"
  "\x02\x81\xbb\x02\xa7\x01\xd0\x02\x81\xbb\x02\xa6\x01\xce\x02\x81"
  "\xb7\x02\xa5\x01\xcc\x02\x81\xb7\x02\xa4\x01\xca\x02\x81\xb3\x02"
  "\xa3\x01\xc8\x02\x81\xbd\x02\xa2\x01\xc6\x02\x81\xb9\x02\xa1\x01"
  "\xc4\x02\x81\xb9\x02\xa0\x01\xc2\x02\x81\xb5\x02\x9f\x01\xc0\x02"
  "\x81\xb5\x02\x9e\x01\xbe\x02\x81\xb1\x02\x9d\x01\xbc\x02\x81\xbb"
  "\x02\x9c\x01\xba\x02\x81\xb7\x02\x9b\x01\xb8\x02\x81\xb7\x02\x9a"
  "\x01\xb6\x02\x81\xb3\x02\x99\x01\xb4\x02\x81\xb3\x02\x98\x01\xb2"
  "\x02\x81\xaf\x02\x97\x01\xb0\x02\x81\xb9\x02\x96\x01\xae\x02\x81"
  "\xb5\x02\x95\x01\xac\x02\x81\xb3\x02\x94\x01\xaa\x02\x81\xb1\x02"
  "\x93\x01\xa8\x02\x81\xaf\x02\x92\x01\xa6\x02\x81\xc9\x02\x91\x01"
  "\xa4\x02\x81\xc7\x02\x90\x01\xa2\x02\x81\xc5\x02\x8f\x01\xa0\x02"
  "\x81\xc3\x02\x8e\x01\x9e\x02\x81\xc1\x02\x8d\x01\x9c\x02\x81\xbf"
  "\x02\x8c\x01\x9a\x02\x81\xb5\x02\x8b\x01\x98\x02\x81\xb1\x02\x8a"
  "\x01\x96\x02\x81\xb1\x02\x89\x01\x94\x02\x81\xad\x02\x88\x01\x92"
  "\x02\x81\xb1\x02\x87\x01\x90\x02\x81\xad\x02\x86\x01\x8e\x02\x81"
  "\xc1\x02\x85\x01\x8c\x02\x81\xbd\x02\x84\x01\x8a\x02\x81\xbb\x02"
  "\x83\x01\x88\x02\x81\xb9\x02\x82\x01\x86\x02\x81\xb7\x02\x81\x01"
  "\x84\x02\x81\xb3\x02\x80\x01\x82\x02\x81\xaf\x02\x7f\x80\x02\x81"
  "\xad\x02\x7e\xfe\x01\x81\xab\x02\x7d\xfc\x01\x81\xa9\x02\x7c\xfa"
  "\x01\x81\xa5\x02\x7b\xf8\x01\x81\xaf\x02\x7a\xf6\x01\x81\xab\x02"
  "\x79\xf4\x01\x81\xa7\x02\x78\xf2\x01\x81\xa3\x02\x77\xf0\x01\x81"
  "\xaf\x02\x76\xee\x01\x81\xab\x02\x75\xec\x01\x81\xa9\x02\x74\xea"
  "\x01\x81\xa7\x02\x73\xe8\x01\x81\xbb\x02\x72\xe6\x01\x81\xb5\x02"
  "\x71\xe4\x01\x81\xa7\x02\x70\xe2\x01\x81\xa3\x02\x6f\xe0\x01\x81"
  "\xa5\x02\x6e\xde\x01\x81\xa1\x02\x6d\xdc\x01\x81\xab\x02\x6c\xda"
  "\x01\x81\xa5\x02\x6b\xd8\x01\x81\xbd\x02\x6a\xd6\x01\x81\xb9\x02"
  "\x69\xd4\x01\x81\xb7\x02\x68\xd2\x01\x81\xb3\x02\x67\xd0\x01\x81"
  "\xa5\x02\x66\xce\x01\x81\xa1\x02\x65\xcc\x01\x81\xa3\x02\x64\xca"
  "\x01\x81\x9f\x02\x63\xc8\x01\x81\x9d\x02\x62\xc6\x01\x81\x9b\x02"
  "\x61\xc4\x01\x81\xad\x02\x60\xc2\x01\x81\xa9\x02\x5f\xc0\x01\x81"
  "\xa7\x02\x5e\xbe\x01\x81\xa3\x02\x5d\xbc\x01\x81\xb7\x02\x5c\xba"
  "\x01\x81\xb1\x02\x5b\xb8\x01\x81\xa5\x02\x5a\xb6\x01\x81\x9f\x02"
  "\x59\xb4\x01\x81\x9d\x02\x58\xb2\x01\x81\x9b\x02\x57\xb0\x01\x81"
  "\x9f\x02\x56\xae\x01\x81\x99\x02\x55\xac\x01\x81\xa7\x02\x54\xaa"
  "\x01\x81\xa1\x02\x53\xa8\x01\x81\xb9\x02\x52\xa6\x01\x81\xb5\x02"
  "\x51\xa4\x01\x81\xb3\x02\x50\xa2\x01\x81\xaf\x02\x4f\xa0\x01\x81"
  "\xad\x02\x4e\x9e\x01\x81\xab\x02\x4d\x9c\x01\x81\xa9\x02\x4c\x9a"
  "\x01\x81\xa7\x02\x4b\x98\x01\x81\xa5\x02\x4a\x96\x01\x81\xa3\x02"
  "\x49\x94\x01\x81\xa1\x02\x48\x92\x01\x81\x9f\x02\x47\x90\x01\x81"
  "\x9d\x02\x46\x8e\x01\x81\x9b\x02\x45\x8c\x01\x81\x87\x02\x44\x8a"
  "\x01\x81\xa3\x02\x43\x88\x01\x81\x9f\x02\x42\x86\x01\x81\x9d\x02"
  "\x41\x84\x01\x81\x99\x02\x40\x82\x01\x81\xa1\x02\x3f\x80\x01\x81"
  "\x9d\x02\x3e\x7e\x81\x9b\x02\x3d\x7c\x81\x97\x02\x3c\x7a\x81\xa9"
  "\x02\x3b\x78\x81\xa5\x02\x3a\x76\x81\xa3\x02\x39\x74\x81\x9f\x02"
  "\x38\x72\x81\x9d\x02\x37\x70\x81\x9b\x02\x36\x6e\x81\x99\x02\x35"
  "\x6c\x81\x97\x02\x34\x6a\x81\x95\x02\x33\x68\x81\x93\x02\x32\x66"
  "\x81\x91\x02\x31\x64\x81\x8f\x02\x30\x62\x81\x8d\x02\x2f\x60\x81"
  "\x8b\x02\x2e\x5e\x81\x85\x02\x2d\x5c\x81\x9f\x02\x2c\x5a\x81\x9d"
  "\x02\x2b\x58\x81\x99\x02\x2a\x56\x81\x97\x02\x29\x54\x81\x95\x02"
  "\x28\x52\x81\x93\x02\x27\x50\x81\x91\x02\x26\x4e\x81\x8f\x02\x25"
  "\x4c\x81\x8d\x02\x24\x4a\x81\x8b\x02\x23\x48\x81\x89\x02\x22\x46"
  "\x81\x83\x02\x21\x44\x81\x9d\x02\x20\x42\x81\x97\x02\x1f\x40\x81"
  "\x95\x02\x1e\x3e\x81\x93\x02\x1d\x3c\x81\x91\x02\x1c\x3a\x81\x8f"
  "\x02\x1b\x38\x81\x8d\x02\x1a\x36\x81\x8b\x02\x19\x34\x81\x89\x02"
  "\x18\x32\x81\x9b\x02\x17\x30\x81\x95\x02\x16\x2e\x81\x85\x02\x15"
  "\x2c\x81\x8f\x02\x14\x2a\x81\x8d\x02\x13\x28\x81\x89\x02\x12\x26"
  "\x81\x87\x02\x11\x24\x81\x83\x02\x10\x22\x81\x8d\x02\x0f\x20\x81"
  "\x87\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x9d\x02\x0c\x1a\x81\x99"
  "\x02\x0b\x18\x81\x97\x02\x0a\x16\x81\x93\x02\x09\x14\x81\x91\x02"
  "\x08\x12\x81\x8f\x02\x07\x10\x81\x8d\x02\x06\x0e\x81\x8b\x02\x05"
  "\x0c\x81\x89\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x83\x02\x02\x06"
  "\x81\x8b\x02\x01\x04\x81\x83\x02\xf5\x02\xca\x04";

SCHEME_OBJECT *
numint_so_data_92a38308f3a78bff (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_numint_so_data_92a38308f3a78bff [0]))), (sizeof (prog_numint_so_data_92a38308f3a78bff)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_203]));
}

DECLARE_COMPILED_DATA_NS ("numint.so", numint_so_data_92a38308f3a78bff)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("numint.so", "b1ff87d959b85b0c")
