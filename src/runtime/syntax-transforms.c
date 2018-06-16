/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_9 9
#define ENVIRONMENT_LABEL_1_3 18
#define DEBUGGING_LABEL_1_2 17
#define EXECUTE_CACHE_1_11 11
#define EXECUTE_CACHE_1_10 13
#define EXECUTE_CACHE_1_7 15
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto sc_macro_transformer__expander_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sc_macro_transformer__expander_6)
DEFLABEL (sc_macro_transformer__expander_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_8 7
#define LABEL_2_9 9
#define ENVIRONMENT_LABEL_2_3 18
#define DEBUGGING_LABEL_2_2 17
#define EXECUTE_CACHE_2_11 11
#define EXECUTE_CACHE_2_10 13
#define EXECUTE_CACHE_2_7 15
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto rsc_macro_transformer__expander_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rsc_macro_transformer__expander_6)
DEFLABEL (rsc_macro_transformer__expander_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_8 7
#define LABEL_3_9 9
#define LABEL_3_12 11
#define LABEL_3_13 13
#define ENVIRONMENT_LABEL_3_3 26
#define DEBUGGING_LABEL_3_2 25
#define EXECUTE_CACHE_3_15 15
#define EXECUTE_CACHE_3_14 17
#define EXECUTE_CACHE_3_11 19
#define EXECUTE_CACHE_3_10 21
#define EXECUTE_CACHE_3_7 23
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto er_macro_transformer__expander_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (er_macro_transformer__expander_8)
DEFLABEL (er_macro_transformer__expander_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_8 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto make_er_rename_8;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_er_rename_11)
DEFLABEL (make_er_rename_8)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  ((Wrd14.pObj) [3]) = (Wrd7.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  ((Wrd17.pObj) [0]) = (Wrd11.Obj);
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define ENVIRONMENT_LABEL_5_3 10
#define DEBUGGING_LABEL_5_2 9
#define EXECUTE_CACHE_5_7 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto make_er_compare_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_er_compare_4)
DEFLABEL (make_er_compare_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_9 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 18
#define DEBUGGING_LABEL_6_2 17
#define OBJECT_6_1 16
#define OBJECT_6_0 15
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_7 13
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_6_4);
      goto non_hygienic_macro_transformer__expander_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_hygienic_macro_transformer__expander_7)
DEFLABEL (non_hygienic_macro_transformer__expander_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_10;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_5 7
#define ENVIRONMENT_LABEL_7_3 15
#define DEBUGGING_LABEL_7_2 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_8 9
#define EXECUTE_CACHE_7_6 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_transforms_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto syntactic_keyword__item_3;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_keyword__item_6)
DEFLABEL (syntactic_keyword__item_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  goto label_7;

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
syntax_transforms_so_68d85f59c84c52f1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
    if (counter > 7)
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

static const struct liarc_code_S arr_decl_syntax_transforms_so_68d85f59c84c52f1 [7] =
  {
    { "syntax_transforms_so_code_1", 4, syntax_transforms_so_code_1 },
    { "syntax_transforms_so_code_2", 4, syntax_transforms_so_code_2 },
    { "syntax_transforms_so_code_3", 6, syntax_transforms_so_code_3 },
    { "syntax_transforms_so_code_4", 4, syntax_transforms_so_code_4 },
    { "syntax_transforms_so_code_5", 2, syntax_transforms_so_code_5 },
    { "syntax_transforms_so_code_6", 4, syntax_transforms_so_code_6 },
    { "syntax_transforms_so_code_7", 3, syntax_transforms_so_code_7 }
  };

int
decl_syntax_transforms_so_68d85f59c84c52f1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_transforms_so_68d85f59c84c52f1);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-transforms.so", 3, decl_syntax_transforms_so_68d85f59c84c52f1, syntax_transforms_so_68d85f59c84c52f1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_transforms_so_data_68d85f59c84c52f1 [878] =
  "\x20\x0c\xd0\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28"
  "\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbc\x1d\xb0\x82\x88\x28\xb1\x28\xb2\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x28\xb1\x28"
  "\x0d\xbe\x28\xb3\x28\xb2\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88\xc1\x1c"
  "\x08\x28\x0d\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\xc2\x1b\x28\xb1\x28\xb3\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\xbb\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x9e\xb8\x88"
  "\xb0\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb5\x2a\xb4\x2a\x9e"
  "\xb3\x0d\xb6\xb2\x0d\x0d\x0d\x9e\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x60\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73"
  "\x79\x6e\x74\x61\x78\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x73"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x13\x6d\x61\x6b\x65"
  "\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x2d\x69\x74\x65\x6d\x03\x18"
  "\x2d\x3e\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73"
  "\x79\x6e\x74\x61\x78\x04\x07\x0a\x81\x87\x02\x06\x08\x81\x87\x02"
  "\x05\x06\x81\x87\x02\x04\x04\x84\x06\x09\x13\x02\x03\x03\x04\x04"
  "\x0b\x0a\x81\x89\x02\x0a\x08\x81\x87\x02\x09\x06\x81\x87\x02\x08"
  "\x04\x84\x06\x09\x13\x02\x03\x03\x10\x6d\x61\x6b\x65\x2d\x65\x72"
  "\x2d\x63\x6f\x6d\x70\x61\x72\x65\x04\x03\x03\x0f\x6d\x61\x6b\x65"
  "\x2d\x65\x72\x2d\x72\x65\x6e\x61\x6d\x65\x06\x11\x0e\x81\x8d\x02"
  "\x10\x0c\x81\x8b\x02\x0f\x0a\x81\x89\x02\x0e\x08\x81\x87\x02\x0d"
  "\x06\x81\x87\x02\x0c\x04\x84\x06\x0d\x1b\x02\x04\x63\x64\x72\x09"
  "\x04\x05\x61\x73\x73\x71\x04\x03\x15\x0a\x81\x87\x02\x14\x08\x81"
  "\x85\x02\x13\x06\x81\x85\x02\x12\x04\x83\x04\x09\x13\x0a\x02\x06"
  "\x0d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3d\x3f\x02\x17\x06"
  "\x81\x87\x02\x16\x04\x83\x04\x05\x0b\x0b\x02\x06\x61\x70\x70\x6c"
  "\x79\x09\x03\x04\x03\x1b\x0a\x81\x87\x02\x1a\x08\x81\x89\x02\x19"
  "\x06\x81\x87\x02\x18\x04\x84\x06\x09\x13\x09\x02\x08\x18\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d"
  "\x3e\x69\x74\x65\x6d\x04\x19\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x6d\x61\x63\x72\x6f\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x1e\x08\x81\x85\x02\x1d"
  "\x06\x81\x87\x02\x1c\x04\x84\x06\x07\x10\x04\x09\x04\x0b\x04\x0a"
  "\x04\x04\x04\x04\x29\x6e\x6f\x6e\x2d\x68\x79\x67\x69\x65\x6e\x69"
  "\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x1f\x65\x72"
  "\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x20\x72\x73\x63"
  "\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x1f\x73\x63\x2d"
  "\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65"
  "\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
syntax_transforms_so_data_68d85f59c84c52f1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_transforms_so_data_68d85f59c84c52f1 [0]))), (sizeof (prog_syntax_transforms_so_data_68d85f59c84c52f1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("syntax-transforms.so", syntax_transforms_so_data_68d85f59c84c52f1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-transforms.so", "5006d80271db462f")
