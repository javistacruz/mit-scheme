/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define OBJECT_1_1 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto Z__typed_singleton_cons_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__typed_singleton_cons_4)
DEFLABEL (Z__typed_singleton_cons_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [2]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define EXECUTE_CACHE_2_7 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__singleton_element_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__singleton_element_4)
DEFLABEL (Z__singleton_element_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__singleton_set_elementB_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__singleton_set_elementB_4)
DEFLABEL (Z__singleton_set_elementB_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto Z__typed_pair_cons_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__typed_pair_cons_5)
DEFLABEL (Z__typed_pair_cons_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 3);

INVOKE_INTERFACE_TARGET_1
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
sdata_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto Z__pair_car_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pair_car_4)
DEFLABEL (Z__pair_car_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto Z__pair_set_carB_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pair_set_carB_4)
DEFLABEL (Z__pair_set_carB_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define ENVIRONMENT_LABEL_7_3 10
#define DEBUGGING_LABEL_7_2 9
#define EXECUTE_CACHE_7_7 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto Z__pair_cdr_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pair_cdr_4)
DEFLABEL (Z__pair_cdr_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto Z__pair_set_cdrB_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pair_set_cdrB_4)
DEFLABEL (Z__pair_set_cdrB_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define ENVIRONMENT_LABEL_9_3 18
#define DEBUGGING_LABEL_9_2 17
#define OBJECT_9_1 16
#define OBJECT_9_0 15
#define EXECUTE_CACHE_9_7 13
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_9_4);
      goto Z__typed_triple_cons_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__typed_triple_cons_7)
DEFLABEL (Z__typed_triple_cons_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define ENVIRONMENT_LABEL_10_3 10
#define DEBUGGING_LABEL_10_2 9
#define EXECUTE_CACHE_10_7 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto Z__triple_first_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__triple_first_4)
DEFLABEL (Z__triple_first_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 11
#define DEBUGGING_LABEL_11_2 10
#define OBJECT_11_0 9
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto Z__triple_set_firstB_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__triple_set_firstB_4)
DEFLABEL (Z__triple_set_firstB_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define ENVIRONMENT_LABEL_12_3 10
#define DEBUGGING_LABEL_12_2 9
#define EXECUTE_CACHE_12_7 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto Z__triple_second_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__triple_second_4)
DEFLABEL (Z__triple_second_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_0 9
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto Z__triple_set_secondB_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__triple_set_secondB_4)
DEFLABEL (Z__triple_set_secondB_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define ENVIRONMENT_LABEL_14_3 10
#define DEBUGGING_LABEL_14_2 9
#define EXECUTE_CACHE_14_7 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto Z__triple_third_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__triple_third_4)
DEFLABEL (Z__triple_third_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 11
#define DEBUGGING_LABEL_15_2 10
#define OBJECT_15_0 9
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto Z__triple_set_thirdB_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__triple_set_thirdB_4)
DEFLABEL (Z__triple_set_thirdB_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_8 9
#define LABEL_16_7 11
#define LABEL_16_10 13
#define LABEL_16_9 15
#define ENVIRONMENT_LABEL_16_3 24
#define DEBUGGING_LABEL_16_2 23
#define OBJECT_16_3 22
#define OBJECT_16_2 21
#define OBJECT_16_1 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_11 17
#define FREE_REFERENCES_LABEL_16_0 16
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto Z__typed_vector_cons_9;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__typed_vector_cons_14)
DEFLABEL (Z__typed_vector_cons_9)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_7;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_16_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_16_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_16;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_19)
  goto loop_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_18;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
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
sdata_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto Z__vector_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vector_length_3)
DEFLABEL (Z__vector_length_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define ENVIRONMENT_LABEL_18_3 11
#define DEBUGGING_LABEL_18_2 10
#define OBJECT_18_0 9
#define EXECUTE_CACHE_18_7 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_18_4);
      goto Z__vector_ref_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vector_ref_4)
DEFLABEL (Z__vector_ref_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

DEFLABEL (label_7)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_6;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_8 9
#define LABEL_19_7 11
#define LABEL_19_9 13
#define LABEL_19_10 15
#define TAG_19_11 6
#define ENVIRONMENT_LABEL_19_3 24
#define DEBUGGING_LABEL_19_2 23
#define OBJECT_19_3 22
#define OBJECT_19_2 21
#define OBJECT_19_1 20
#define OBJECT_19_0 19
#define EXECUTE_CACHE_19_12 17
#define FREE_REFERENCES_LABEL_19_0 16
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sdata_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_19_4);
      goto Z__subvector__list_9;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_19_10);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__subvector__list_13)
DEFLABEL (Z__subvector__list_9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_19_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_19_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_16;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_17)
  goto loop_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_10])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_19_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
sdata_so_8c346346e6062f6d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
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
    if (counter > 19)
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

static const struct liarc_code_S arr_decl_sdata_so_8c346346e6062f6d [19] =
  {
    { "sdata_so_code_1", 2, sdata_so_code_1 },
    { "sdata_so_code_2", 2, sdata_so_code_2 },
    { "sdata_so_code_3", 2, sdata_so_code_3 },
    { "sdata_so_code_4", 3, sdata_so_code_4 },
    { "sdata_so_code_5", 2, sdata_so_code_5 },
    { "sdata_so_code_6", 2, sdata_so_code_6 },
    { "sdata_so_code_7", 2, sdata_so_code_7 },
    { "sdata_so_code_8", 2, sdata_so_code_8 },
    { "sdata_so_code_9", 5, sdata_so_code_9 },
    { "sdata_so_code_10", 2, sdata_so_code_10 },
    { "sdata_so_code_11", 2, sdata_so_code_11 },
    { "sdata_so_code_12", 2, sdata_so_code_12 },
    { "sdata_so_code_13", 2, sdata_so_code_13 },
    { "sdata_so_code_14", 2, sdata_so_code_14 },
    { "sdata_so_code_15", 2, sdata_so_code_15 },
    { "sdata_so_code_16", 7, sdata_so_code_16 },
    { "sdata_so_code_17", 1, sdata_so_code_17 },
    { "sdata_so_code_18", 2, sdata_so_code_18 },
    { "sdata_so_code_19", 7, sdata_so_code_19 }
  };

int
decl_sdata_so_8c346346e6062f6d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_sdata_so_8c346346e6062f6d);
  return (0);
}

DECLARE_COMPILED_CODE ("sdata.so", 3, decl_sdata_so_8c346346e6062f6d, sdata_so_8c346346e6062f6d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_sdata_so_data_8c346346e6062f6d [1535] =
  "\x2e\x17\x9d\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x08\x28"
  "\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x28"
  "\x0d\xbc\x23\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\xc2"
  "\xbe\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88"
  "\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0"
  "\x85\x88\x28\xb4\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\xb6\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02"
  "\x88\x28\xb4\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc3\xc2\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb4\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\xb2\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\xb4\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\xb4\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\xc1\x1c\x08\xc2\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\xb4"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08"
  "\xc3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb2\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\xb1\x2a\xb7\x2a\xb5\x2a\xb3\x2a"
  "\x17\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x64\x61\x74"
  "\x61\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11\x73\x79\x73\x74"
  "\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x03\x15\x75\x6e"
  "\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72"
  "\x61\x70\x02\x05\x06\x81\x87\x02\x04\x04\x84\x06\x05\x0d\x02\x03"
  "\x13\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74"
  "\x72\x61\x70\x02\x07\x06\x81\x83\x02\x06\x04\x83\x04\x05\x0b\x02"
  "\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74"
  "\x2d\x63\x61\x72\x21\x03\x02\x09\x06\x81\x85\x02\x08\x04\x84\x06"
  "\x05\x0c\x02\x03\x02\x0c\x08\x81\x87\x02\x0b\x06\x81\x87\x02\x0a"
  "\x04\x85\x08\x07\x0e\x02\x03\x02\x0e\x06\x81\x83\x02\x0d\x04\x83"
  "\x04\x05\x0b\x09\x02\x03\x02\x10\x06\x81\x85\x02\x0f\x04\x84\x06"
  "\x05\x0c\x02\x08\x03\x02\x12\x06\x81\x83\x02\x11\x04\x83\x04\x05"
  "\x0b\x0a\x02\x09\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72"
  "\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x03\x02\x14\x06\x81\x85\x02"
  "\x13\x04\x84\x06\x05\x0c\x0b\x02\x0a\x0b\x68\x75\x6e\x6b\x33\x2d"
  "\x63\x6f\x6e\x73\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d"
  "\x74\x79\x70\x65\x03\x02\x19\x0c\x81\x8f\x02\x18\x0a\x81\x8d\x02"
  "\x17\x08\x81\x8b\x02\x16\x06\x81\x89\x02\x15\x04\x86\x0a\x0b\x13"
  "\x0c\x02\x0b\x03\x02\x1b\x06\x81\x83\x02\x1a\x04\x83\x04\x05\x0b"
  "\x0d\x02\x0c\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33"
  "\x2d\x73\x65\x74\x2d\x63\x78\x72\x30\x21\x03\x02\x1d\x06\x81\x85"
  "\x02\x1c\x04\x84\x06\x05\x0c\x0e\x02\x0d\x03\x02\x1f\x06\x81\x83"
  "\x02\x1e\x04\x83\x04\x05\x0b\x0f\x02\x0e\x17\x73\x79\x73\x74\x65"
  "\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x31"
  "\x21\x03\x02\x21\x06\x81\x85\x02\x20\x04\x84\x06\x05\x0c\x10\x02"
  "\x0f\x03\x02\x23\x06\x81\x83\x02\x22\x04\x83\x04\x05\x0b\x11\x02"
  "\x10\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73"
  "\x65\x74\x2d\x63\x78\x72\x32\x21\x03\x02\x25\x06\x81\x85\x02\x24"
  "\x04\x84\x06\x05\x0c\x12\x02\x11\x04\x63\x61\x72\x13\x04\x63\x64"
  "\x72\x14\x16\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x73\x74\x2d\x74"
  "\x6f\x2d\x76\x65\x63\x74\x6f\x72\x03\x02\x2c\x10\x81\x85\x02\x2b"
  "\x0e\x81\x87\x02\x2a\x0c\x81\x83\x02\x29\x0a\x81\x85\x02\x28\x08"
  "\x81\x83\x02\x27\x06\x81\x85\x02\x26\x04\x84\x06\x0f\x19\x02\x12"
  "\x2d\x04\x83\x04\x03\x15\x02\x13\x12\x73\x79\x73\x74\x65\x6d\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x03\x02\x2f\x06\x81\x83"
  "\x02\x2e\x04\x84\x06\x05\x0c\x16\x02\x14\x13\x14\x19\x73\x79\x73"
  "\x74\x65\x6d\x2d\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x74\x6f"
  "\x2d\x6c\x69\x73\x74\x03\x02\x36\x10\x81\x83\x02\x35\x0e\x81\x85"
  "\x02\x34\x0c\x81\x83\x02\x33\x0a\x81\x85\x02\x32\x08\x81\x83\x02"
  "\x31\x06\x81\x87\x02\x30\x04\x85\x08\x0f\x19\x14\x14\x13\x13\x14"
  "\x04\x16\x04\x15\x04\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04"
  "\x0d\x04\x0c\x04\x0b\x04\x0a\x04\x04\x09\x04\x04\x04\x04\x04\x14"
  "\x11\x26\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73"
  "\x74\x0c\x26\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0f\x26\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x13\x26\x74\x79"
  "\x70\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x13"
  "\x26\x74\x72\x69\x70\x6c\x65\x2d\x73\x65\x74\x2d\x74\x68\x69\x72"
  "\x64\x21\x0e\x26\x74\x72\x69\x70\x6c\x65\x2d\x74\x68\x69\x72\x64"
  "\x14\x26\x74\x72\x69\x70\x6c\x65\x2d\x73\x65\x74\x2d\x73\x65\x63"
  "\x6f\x6e\x64\x21\x0f\x26\x74\x72\x69\x70\x6c\x65\x2d\x73\x65\x63"
  "\x6f\x6e\x64\x13\x26\x74\x72\x69\x70\x6c\x65\x2d\x73\x65\x74\x2d"
  "\x66\x69\x72\x73\x74\x21\x0e\x26\x74\x72\x69\x70\x6c\x65\x2d\x66"
  "\x69\x72\x73\x74\x13\x26\x74\x79\x70\x65\x64\x2d\x74\x72\x69\x70"
  "\x6c\x65\x2d\x63\x6f\x6e\x73\x0f\x26\x70\x61\x69\x72\x2d\x73\x65"
  "\x74\x2d\x63\x64\x72\x21\x0a\x26\x70\x61\x69\x72\x2d\x63\x64\x72"
  "\x0f\x26\x70\x61\x69\x72\x2d\x73\x65\x74\x2d\x63\x61\x72\x21\x0a"
  "\x26\x70\x61\x69\x72\x2d\x63\x61\x72\x11\x26\x74\x79\x70\x65\x64"
  "\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x18\x26\x73\x69\x6e\x67"
  "\x6c\x65\x74\x6f\x6e\x2d\x73\x65\x74\x2d\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x21\x13\x26\x73\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x16\x26\x74\x79\x70\x65\x64\x2d\x73\x69\x6e"
  "\x67\x6c\x65\x74\x6f\x6e\x2d\x63\x6f\x6e\x73\x14\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
sdata_so_data_8c346346e6062f6d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_sdata_so_data_8c346346e6062f6d [0]))), (sizeof (prog_sdata_so_data_8c346346e6062f6d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("sdata.so", sdata_so_data_8c346346e6062f6d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("sdata.so", "a04a1434d044e2b4")
