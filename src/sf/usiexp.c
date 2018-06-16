/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:07-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto make_combination_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_combination_4)
DEFLABEL (make_combination_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_9 9
#define LABEL_2_11 11
#define LABEL_2_13 13
#define LABEL_2_14 15
#define LABEL_2_15 17
#define ENVIRONMENT_LABEL_2_3 37
#define DEBUGGING_LABEL_2_2 36
#define OBJECT_2_2 35
#define OBJECT_2_1 34
#define OBJECT_2_0 33
#define EXECUTE_CACHE_2_17 19
#define EXECUTE_CACHE_2_16 21
#define EXECUTE_CACHE_2_12 23
#define EXECUTE_CACHE_2_10 25
#define EXECUTE_CACHE_2_8 27
#define EXECUTE_CACHE_2_7 29
#define FREE_REFERENCE_2_0 32
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto make_operand_binding_10;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_operand_binding_14)
DEFLABEL (make_operand_binding_10)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_16;
  Wrd10 = Wrd14;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd11.pObj));

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [3]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_2 13
#define OBJECT_3_1 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto constant_eqP_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_eqP_6)
DEFLABEL (constant_eqP_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_12;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd24.Obj))
    goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_3_2]);

DEFLABEL (label_7)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_3_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define OBJECT_4_1 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_8 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_4_4);
      goto unary_arithmetic_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unary_arithmetic_8)
DEFLABEL (unary_arithmetic_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  if (! ((Wrd6.uLng) == 1))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_12)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_4_1])))
    goto label_10;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Rsp [2]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_13)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define OBJECT_5_1 16
#define OBJECT_5_0 15
#define EXECUTE_CACHE_5_10 13
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_5_4);
      goto binary_arithmetic_7;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binary_arithmetic_13)
DEFLABEL (binary_arithmetic_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
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

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_15;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_19)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_17)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_5_1])))
    goto label_15;
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd38.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [2]);
  (Rsp [2]) = (Wrd39.Obj);
  (Rsp [0]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_18)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_11)
  (Wrd28.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_10)
  (Wrd19.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_11 13
#define LABEL_6_10 15
#define LABEL_6_14 17
#define LABEL_6_15 19
#define LABEL_6_16 21
#define LABEL_6_17 23
#define LABEL_6_13 25
#define LABEL_6_19 27
#define ENVIRONMENT_LABEL_6_3 38
#define DEBUGGING_LABEL_6_2 37
#define OBJECT_6_3 36
#define OBJECT_6_2 35
#define OBJECT_6_1 34
#define OBJECT_6_0 33
#define EXECUTE_CACHE_6_18 29
#define EXECUTE_CACHE_6_12 31
#define FREE_REFERENCES_LABEL_6_0 28
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto pairwise_test_17;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_6_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_6_19);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pairwise_test_29)
DEFLABEL (pairwise_test_17)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;

DEFLABEL (label_31)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  if (! ((Wrd6.uLng) == 1))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_51)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_31;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_50;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_49)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_48;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_47)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_6_1])))
    goto label_31;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_46;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_35)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_34;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_33)
  (Wrd28.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [4]) = (Wrd25.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [3]);
  (Rsp [3]) = (Wrd29.Obj);
  (Wrd32.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_34)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_24)
  (Wrd18.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_44;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_43)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_42;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd28.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [4]);
  (Rsp [2]) = (Wrd29.Obj);
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_38)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_39)
  (Wrd21.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd25.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_27)
  (Wrd9.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_25)
  (Wrd37.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_21)
  (Wrd28.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_20)
  (Wrd19.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define OBJECT_7_1 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_8 9
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto pairwise_test_inverse_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pairwise_test_inverse_7)
DEFLABEL (pairwise_test_inverse_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_4 19
#define OBJECT_8_3 18
#define OBJECT_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_9 11
#define EXECUTE_CACHE_8_7 13
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto fix_zeroP_expansion_7;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_zeroP_expansion_12)
DEFLABEL (fix_zeroP_expansion_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_1])))
    goto label_13;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_16;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_15)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_8_4]);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_2 15
#define OBJECT_9_1 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_8 11
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_4);
      goto fix___expansion_6;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix___expansion_12)
DEFLABEL (fix___expansion_6)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_19)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_13;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_15)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_9_1])))
    goto label_13;
  (Wrd36.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_9_2]);
  (Rsp [2]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 20
#define DEBUGGING_LABEL_10_2 19
#define OBJECT_10_3 18
#define OBJECT_10_2 17
#define OBJECT_10_1 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_9 13
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto fix____expansion_8;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix____expansion_14)
DEFLABEL (fix____expansion_8)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_15;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_19)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_17)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_10_1])))
    goto label_15;
  (Wrd36.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10_3]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (label_18)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_12)
  (Wrd28.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_11)
  (Wrd19.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define OBJECT_11_3 18
#define OBJECT_11_2 17
#define OBJECT_11_1 16
#define OBJECT_11_0 15
#define EXECUTE_CACHE_11_9 13
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto fix____expansion_8;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix____expansion_14)
DEFLABEL (fix____expansion_8)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_15;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_19)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_17)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_11_1])))
    goto label_15;
  (Wrd36.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_3]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_18)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_12)
  (Wrd28.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_11)
  (Wrd19.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_7 7
#define LABEL_12_11 9
#define LABEL_12_9 11
#define LABEL_12_12 13
#define LABEL_12_13 15
#define LABEL_12_14 17
#define LABEL_12_15 19
#define LABEL_12_16 21
#define LABEL_12_18 23
#define LABEL_12_20 25
#define LABEL_12_21 27
#define LABEL_12_19 29
#define ENVIRONMENT_LABEL_12_3 44
#define DEBUGGING_LABEL_12_2 43
#define OBJECT_12_5 42
#define OBJECT_12_4 41
#define OBJECT_12_3 40
#define OBJECT_12_2 39
#define OBJECT_12_1 38
#define OBJECT_12_0 37
#define EXECUTE_CACHE_12_17 31
#define EXECUTE_CACHE_12_10 33
#define EXECUTE_CACHE_12_8 35
#define FREE_REFERENCES_LABEL_12_0 30
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd78;
  machine_word Wrd56;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto right_accumulation_17;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_12_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_12_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_12_16);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_12_18);
      goto loop_11;

    case 11:
      current_block = (Rpc - LABEL_12_20);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_12_21);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (right_accumulation_27)
DEFLABEL (right_accumulation_17)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
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

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_43;
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd78.Lng) == 0)
    goto label_38;

DEFLABEL (label_37)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_36;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd15.Lng) < 5L)
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_35;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_33;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd40.pObj) = (& (Rsp [4]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd40.pObj)));
  (Rsp [3]) = (Wrd42.Obj);
  Rdl = (& (Rsp [8]));
  goto loop_11;

DEFLABEL (label_33)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd45.Obj) = (current_block [OBJECT_12_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_38)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_41;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd64.Lng))))
    goto label_41;
  (Wrd56.Obj) = ((Wrd62.pObj) [2]);

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_39)
  (Rsp [4]) = (Wrd56.Obj);
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [3]);
  (Rsp [5]) = (Wrd72.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (label_41)
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.Obj) = (current_block [OBJECT_12_3]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 2);

DEFLABEL (label_23)
  (Wrd56.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd56.Obj) = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_43)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Wrd56.Obj) = Rvl;
  goto label_39;

DEFLABEL (loop_29)
DEFLABEL (loop_11)
  DLINK_INTERRUPT_CHECK (25, LABEL_12_18);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_12_5])))
    goto label_44;
  Rvl = (Rsp [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_44)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_48;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_47)
  (Wrd32.Obj) = (Rsp [6]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_46;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_45)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  Rdl = (& (Rsp [4]));
  goto loop_11;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [5]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_46)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_25)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_24)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 18
#define DEBUGGING_LABEL_13_2 17
#define OBJECT_13_3 16
#define OBJECT_13_2 15
#define OBJECT_13_1 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_6 11
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_10)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [3]) = (Wrd18.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_13_3]);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 10
#define DEBUGGING_LABEL_14_2 9
#define OBJECT_14_1 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_1]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_9 11
#define LABEL_15_10 13
#define LABEL_15_8 15
#define LABEL_15_13 17
#define LABEL_15_14 19
#define LABEL_15_12 21
#define LABEL_15_16 23
#define LABEL_15_17 25
#define LABEL_15_18 27
#define LABEL_15_20 29
#define LABEL_15_21 31
#define LABEL_15_15 33
#define LABEL_15_24 35
#define LABEL_15_25 37
#define LABEL_15_26 39
#define LABEL_15_23 41
#define LABEL_15_27 43
#define LABEL_15_28 45
#define LABEL_15_29 47
#define LABEL_15_30 49
#define ENVIRONMENT_LABEL_15_3 66
#define DEBUGGING_LABEL_15_2 65
#define OBJECT_15_7 64
#define OBJECT_15_6 63
#define OBJECT_15_5 62
#define OBJECT_15_4 61
#define OBJECT_15_3 60
#define OBJECT_15_2 59
#define OBJECT_15_1 58
#define OBJECT_15_0 57
#define EXECUTE_CACHE_15_22 51
#define EXECUTE_CACHE_15_19 53
#define EXECUTE_CACHE_15_11 55
#define FREE_REFERENCES_LABEL_15_0 50
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_15_4);
      goto expt_expansion_39;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_42;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_43;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_44;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto label_45;

    case 6:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_15_14);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_15_16);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_15_17);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_15_18);
      goto lambda_37;

    case 13:
      current_block = (Rpc - LABEL_15_20);
      goto lambda_1;

    case 14:
      current_block = (Rpc - LABEL_15_21);
      goto label_50;

    case 15:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_15_24);
      goto label_51;

    case 17:
      current_block = (Rpc - LABEL_15_25);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_15_26);
      goto lambda_34;

    case 19:
      current_block = (Rpc - LABEL_15_23);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_15_27);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_15_28);
      goto lambda_28;

    case 22:
      current_block = (Rpc - LABEL_15_29);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_15_30);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expt_expansion_54)
DEFLABEL (expt_expansion_39)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  if (! ((Wrd6.uLng) == 1))
    goto label_87;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_86)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_59;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_85;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_84)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_83;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_82)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_15_1])))
    goto label_59;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_81;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_80)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_79;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_61;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_61)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_62)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_77;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_76)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_75;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_1;

DEFLABEL (label_63)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_72)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_71;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_1;

DEFLABEL (label_64)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_69;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_68)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_67;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_15_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_1;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_51)
  (Wrd13.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_48)
  (Wrd13.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_46)
  (Wrd19.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_44)
  (Wrd40.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_43)
  (Wrd28.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_42)
  (Wrd19.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_41)
  (Wrd9.Obj) = Rvl;
  goto label_86;

DEFLABEL (lambda_55)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_15_18);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (current_block [OBJECT_15_6]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (lambda_56)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_15_20);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_89;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_88)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd16.Obj);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_89)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_57)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_15_26);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_15_27);
  (Wrd9.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15_6]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (lambda_58)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_15_28);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_15_29);
  (Wrd9.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_30]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_15_30);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_6]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_12 11
#define LABEL_16_11 13
#define LABEL_16_13 15
#define LABEL_16_9 17
#define LABEL_16_14 19
#define LABEL_16_15 21
#define ENVIRONMENT_LABEL_16_3 31
#define DEBUGGING_LABEL_16_2 30
#define OBJECT_16_2 29
#define OBJECT_16_1 28
#define OBJECT_16_0 27
#define EXECUTE_CACHE_16_16 23
#define EXECUTE_CACHE_16_10 25
#define FREE_REFERENCES_LABEL_16_0 22
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto right_accumulation_inverse_13;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_21;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_16_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_16_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_16_14);
      goto lambda_1;

    case 9:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (right_accumulation_inverse_20)
DEFLABEL (right_accumulation_inverse_13)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_0])))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_33;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_32)
  if ((Wrd7.Obj) == (current_block [OBJECT_16_0]))
    goto label_29;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_28;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_27)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_25)
  goto lambda_1;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_31;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_30)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  goto lambda_1;

DEFLABEL (label_31)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_22)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_16_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define OBJECT_17_3 14
#define OBJECT_17_2 13
#define OBJECT_17_1 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (current_block [OBJECT_17_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_17_3]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_17_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [3]) = (Wrd18.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17_2]);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 10
#define DEBUGGING_LABEL_18_2 9
#define OBJECT_18_1 8
#define OBJECT_18_0 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_1]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_9 9
#define LABEL_19_8 11
#define LABEL_19_12 13
#define ENVIRONMENT_LABEL_19_3 29
#define DEBUGGING_LABEL_19_2 28
#define OBJECT_19_4 27
#define OBJECT_19_3 26
#define OBJECT_19_2 25
#define OBJECT_19_1 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_13 15
#define EXECUTE_CACHE_19_11 17
#define EXECUTE_CACHE_19_10 19
#define EXECUTE_CACHE_19_6 21
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto apply__expansion_9;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply__expansion_15)
DEFLABEL (apply__expansion_9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_19_2]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_16)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  if (! ((Wrd12.uLng) == 1))
    goto label_24;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_23)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_17;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_22;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_21)
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd9.Obj) = (current_block [OBJECT_19_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_19)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_11)
  (Wrd15.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto cons__expansion_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cons__expansion_3)
DEFLABEL (cons__expansion_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_6 9
#define LABEL_21_9 11
#define ENVIRONMENT_LABEL_21_3 22
#define DEBUGGING_LABEL_21_2 21
#define OBJECT_21_3 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_10 13
#define EXECUTE_CACHE_21_8 15
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_21_4);
      goto cons__expansion_loop_7;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cons__expansion_loop_13)
DEFLABEL (cons__expansion_loop_7)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_20)
  if ((Wrd5.Obj) == (current_block [OBJECT_21_1]))
    goto label_18;
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_17;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (Wrd9.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_15;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_14)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_21_3]);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_19;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  Rvl = ((Wrd33.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto list_expansion_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_expansion_3)
DEFLABEL (list_expansion_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_4 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_6 11
#define LABEL_23_12 13
#define ENVIRONMENT_LABEL_23_3 31
#define DEBUGGING_LABEL_23_2 30
#define OBJECT_23_6 29
#define OBJECT_23_5 28
#define OBJECT_23_4 27
#define OBJECT_23_3 26
#define OBJECT_23_2 25
#define OBJECT_23_1 24
#define OBJECT_23_0 23
#define EXECUTE_CACHE_23_13 15
#define EXECUTE_CACHE_23_11 17
#define EXECUTE_CACHE_23_10 19
#define EXECUTE_CACHE_23_8 21
#define FREE_REFERENCES_LABEL_23_0 14
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_23_4);
      goto list_expansion_loop_8;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_expansion_loop_14)
DEFLABEL (list_expansion_loop_8)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  if ((Wrd5.Obj) == (current_block [OBJECT_23_1]))
    goto label_15;
  (Wrd9.Obj) = (current_block [OBJECT_23_4]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_18;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_18;
  (Wrd17.Obj) = ((Wrd23.pObj) [2]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_23_1]);
  (Rsp [2]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (label_18)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_23_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_10)
  (Wrd17.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd17.Obj) = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_20)
  (Wrd36.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_23)
  (Wrd50.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (Wrd9.Obj) = (current_block [OBJECT_23_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_21)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_23_6]);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_5]), 1);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd17.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_11 13
#define LABEL_24_12 15
#define LABEL_24_19 17
#define LABEL_24_13 19
#define LABEL_24_14 21
#define TAG_24_15 9
#define LABEL_24_21 23
#define LABEL_24_23 25
#define LABEL_24_24 27
#define LABEL_24_25 29
#define LABEL_24_27 31
#define LABEL_24_28 33
#define LABEL_24_29 35
#define LABEL_24_30 37
#define TAG_24_31 17
#define LABEL_24_34 39
#define LABEL_24_36 41
#define ENVIRONMENT_LABEL_24_3 78
#define DEBUGGING_LABEL_24_2 77
#define OBJECT_24_5 76
#define OBJECT_24_4 75
#define OBJECT_24_3 74
#define OBJECT_24_2 73
#define OBJECT_24_1 72
#define OBJECT_24_0 71
#define EXECUTE_CACHE_24_38 43
#define EXECUTE_CACHE_24_37 45
#define EXECUTE_CACHE_24_35 47
#define EXECUTE_CACHE_24_33 49
#define EXECUTE_CACHE_24_32 51
#define EXECUTE_CACHE_24_26 53
#define EXECUTE_CACHE_24_22 55
#define EXECUTE_CACHE_24_20 57
#define EXECUTE_CACHE_24_18 59
#define EXECUTE_CACHE_24_17 61
#define EXECUTE_CACHE_24_16 63
#define EXECUTE_CACHE_24_10 65
#define EXECUTE_CACHE_24_6 67
#define FREE_REFERENCE_24_0 70
#define FREE_REFERENCES_LABEL_24_0 42
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto values_expansion_23;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_20;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_24_19);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_24_14);
      goto lambda_28;

    case 10:
      current_block = (Rpc - LABEL_24_21);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_24_23);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_24_25);
      goto continuation_1;

    case 14:
      current_block = (Rpc - LABEL_24_27);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_24_28);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_24_29);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_24_30);
      goto lambda_29;

    case 18:
      current_block = (Rpc - LABEL_24_34);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_24_36);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (values_expansion_27)
DEFLABEL (values_expansion_23)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_14])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_30])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  ((Wrd25.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_37]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_35]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_34);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_38]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24_27);
  (Rsp [6]) = Rvl;
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_12);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_19])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_24_14);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_26]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_33]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_23);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_22]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_24_30);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_37]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define LABEL_25_10 13
#define LABEL_25_9 15
#define ENVIRONMENT_LABEL_25_3 23
#define DEBUGGING_LABEL_25_2 22
#define OBJECT_25_2 21
#define OBJECT_25_1 20
#define OBJECT_25_0 19
#define EXECUTE_CACHE_25_11 17
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto call_with_values_expansion_9;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_values_expansion_17)
DEFLABEL (call_with_values_expansion_9)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  if (! ((Wrd6.uLng) == 1))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_28)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_18;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_26)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_25;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_24)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_25_1])))
    goto label_18;
  (Wrd36.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_23;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_22)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_21;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_20)
  (Wrd60.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (label_21)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_13)
  (Wrd28.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_12)
  (Wrd19.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_8 7
#define LABEL_26_7 9
#define LABEL_26_10 11
#define ENVIRONMENT_LABEL_26_3 25
#define DEBUGGING_LABEL_26_2 24
#define OBJECT_26_4 23
#define OBJECT_26_3 22
#define OBJECT_26_2 21
#define OBJECT_26_1 20
#define OBJECT_26_0 19
#define EXECUTE_CACHE_26_11 13
#define EXECUTE_CACHE_26_9 15
#define EXECUTE_CACHE_26_6 17
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_26_4);
      goto call_to_carP_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_to_carP_9)
DEFLABEL (call_to_carP_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_15;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_12)
  (Wrd23.Obj) = (current_block [OBJECT_26_4]);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_26_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_26_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define LABEL_27_7 9
#define LABEL_27_10 11
#define ENVIRONMENT_LABEL_27_3 25
#define DEBUGGING_LABEL_27_2 24
#define OBJECT_27_4 23
#define OBJECT_27_3 22
#define OBJECT_27_2 21
#define OBJECT_27_1 20
#define OBJECT_27_0 19
#define EXECUTE_CACHE_27_11 13
#define EXECUTE_CACHE_27_9 15
#define EXECUTE_CACHE_27_6 17
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_27_4);
      goto call_to_cdrP_4;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_to_cdrP_9)
DEFLABEL (call_to_cdrP_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_15;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_12)
  (Wrd23.Obj) = (current_block [OBJECT_27_4]);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_27_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_27_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define LABEL_28_7 9
#define LABEL_28_11 11
#define LABEL_28_10 13
#define LABEL_28_13 15
#define LABEL_28_14 17
#define LABEL_28_15 19
#define ENVIRONMENT_LABEL_28_3 37
#define DEBUGGING_LABEL_28_2 36
#define OBJECT_28_6 35
#define OBJECT_28_5 34
#define OBJECT_28_4 33
#define OBJECT_28_3 32
#define OBJECT_28_2 31
#define OBJECT_28_1 30
#define OBJECT_28_0 29
#define EXECUTE_CACHE_28_16 21
#define EXECUTE_CACHE_28_12 23
#define EXECUTE_CACHE_28_9 25
#define EXECUTE_CACHE_28_6 27
#define FREE_REFERENCES_LABEL_28_0 20
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_28_4);
      goto call_to_general_car_cdrP_8;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_28_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_to_general_car_cdrP_16)
DEFLABEL (call_to_general_car_cdrP_8)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_29;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_29;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_27;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_27;
  (Wrd13.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_25;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_24)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_23;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_22)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (label_21)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_6]), 1);

DEFLABEL (label_14)
  (Wrd30.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_13)
  (Wrd23.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_28_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_28_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_28_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_9 9
#define LABEL_29_7 11
#define LABEL_29_13 13
#define LABEL_29_15 15
#define LABEL_29_16 17
#define LABEL_29_11 19
#define LABEL_29_20 21
#define LABEL_29_21 23
#define LABEL_29_22 25
#define LABEL_29_18 27
#define LABEL_29_26 29
#define LABEL_29_27 31
#define LABEL_29_28 33
#define LABEL_29_29 35
#define LABEL_29_23 37
#define LABEL_29_31 39
#define LABEL_29_32 41
#define LABEL_29_24 43
#define LABEL_29_25 45
#define ENVIRONMENT_LABEL_29_3 75
#define DEBUGGING_LABEL_29_2 74
#define OBJECT_29_10 73
#define OBJECT_29_9 72
#define OBJECT_29_8 71
#define OBJECT_29_7 70
#define OBJECT_29_6 69
#define OBJECT_29_5 68
#define OBJECT_29_4 67
#define OBJECT_29_3 66
#define OBJECT_29_2 65
#define OBJECT_29_1 64
#define OBJECT_29_0 63
#define EXECUTE_CACHE_29_33 47
#define EXECUTE_CACHE_29_30 49
#define EXECUTE_CACHE_29_19 51
#define EXECUTE_CACHE_29_17 53
#define EXECUTE_CACHE_29_14 55
#define EXECUTE_CACHE_29_12 57
#define EXECUTE_CACHE_29_10 59
#define EXECUTE_CACHE_29_8 61
#define FREE_REFERENCES_LABEL_29_0 46
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_29_4);
      goto car_expansion_31;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_27;

    case 6:
      current_block = (Rpc - LABEL_29_15);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_29_16);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_29_20);
      goto continuation_22;

    case 10:
      current_block = (Rpc - LABEL_29_21);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_29_22);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_29_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_29_26);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_29_27);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_29_28);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_29_29);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_29_23);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_29_31);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_29_32);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_29_24);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_29_25);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (car_expansion_46)
DEFLABEL (car_expansion_31)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_48;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  if (! ((Wrd6.uLng) == 1))
    goto label_75;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_74)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_29_1])))
    goto label_47;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_73;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_72)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd7.Obj) = (current_block [OBJECT_29_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (Wrd9.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_52;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_51)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_49)
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (label_50)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_36)
  (Wrd26.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_29_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 2);

DEFLABEL (label_35)
  (Wrd10.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd7.Obj) = (current_block [OBJECT_29_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_29_20);
  (Wrd9.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_57;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_57;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_56)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_55;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_54)
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (label_55)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_38)
  (Wrd26.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_29_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 2);

DEFLABEL (label_37)
  (Wrd10.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;
  (Wrd62.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_29_2]);
  (Rsp [2]) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (label_59)
  (Wrd7.Obj) = (current_block [OBJECT_29_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_71;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_71;
  (Wrd19.Obj) = ((Wrd25.pObj) [5]);

DEFLABEL (label_70)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_69;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_68)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_67;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_66)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_65;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd55.Lng))))
    goto label_65;
  (Wrd50.Obj) = ((Wrd53.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_25);
  (Wrd9.Obj) = (current_block [OBJECT_29_10]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29_24);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29_23);
  (Wrd9.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_63;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_63;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_62)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_61;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_60)
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_17]));

DEFLABEL (label_61)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_32]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_44)
  (Wrd26.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_29_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_31]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 2);

DEFLABEL (label_43)
  (Wrd10.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd58.Obj) = (current_block [OBJECT_29_9]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_29]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_28]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_41)
  (Wrd42.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_40)
  (Wrd35.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (current_block [OBJECT_29_6]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 2);

DEFLABEL (label_39)
  (Wrd19.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_9 9
#define LABEL_30_7 11
#define LABEL_30_13 13
#define LABEL_30_15 15
#define LABEL_30_16 17
#define LABEL_30_11 19
#define LABEL_30_19 21
#define LABEL_30_21 23
#define LABEL_30_22 25
#define LABEL_30_23 27
#define LABEL_30_18 29
#define LABEL_30_27 31
#define LABEL_30_28 33
#define LABEL_30_29 35
#define LABEL_30_30 37
#define LABEL_30_24 39
#define LABEL_30_32 41
#define LABEL_30_33 43
#define LABEL_30_25 45
#define LABEL_30_26 47
#define ENVIRONMENT_LABEL_30_3 76
#define DEBUGGING_LABEL_30_2 75
#define OBJECT_30_9 74
#define OBJECT_30_8 73
#define OBJECT_30_7 72
#define OBJECT_30_6 71
#define OBJECT_30_5 70
#define OBJECT_30_4 69
#define OBJECT_30_3 68
#define OBJECT_30_2 67
#define OBJECT_30_1 66
#define OBJECT_30_0 65
#define EXECUTE_CACHE_30_34 49
#define EXECUTE_CACHE_30_31 51
#define EXECUTE_CACHE_30_20 53
#define EXECUTE_CACHE_30_17 55
#define EXECUTE_CACHE_30_14 57
#define EXECUTE_CACHE_30_12 59
#define EXECUTE_CACHE_30_10 61
#define EXECUTE_CACHE_30_8 63
#define FREE_REFERENCES_LABEL_30_0 48
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_30_4);
      goto cdr_expansion_32;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_28;

    case 6:
      current_block = (Rpc - LABEL_30_15);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_30_16);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_30_19);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_30_21);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_30_22);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_30_23);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_30_27);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_30_28);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_30_29);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_30_30);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_30_24);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_30_32);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_30_33);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_30_26);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cdr_expansion_48)
DEFLABEL (cdr_expansion_32)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_50;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  if (! ((Wrd6.uLng) == 1))
    goto label_79;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_78)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_30_1])))
    goto label_49;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_77;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_76)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd7.Obj) = (current_block [OBJECT_30_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_54;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_54;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_53)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_52;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_51)
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (label_52)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_37)
  (Wrd26.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 2);

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd7.Obj) = (current_block [OBJECT_30_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30_21);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_59;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_59;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_58)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_57;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_56)
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (label_57)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_40)
  (Wrd26.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 2);

DEFLABEL (label_39)
  (Wrd10.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_75;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_61;
  (Wrd62.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [2]) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (label_61)
  (Wrd7.Obj) = (current_block [OBJECT_30_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_73;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_73;
  (Wrd19.Obj) = ((Wrd25.pObj) [5]);

DEFLABEL (label_72)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_71;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_70)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_69;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_68)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_67;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd55.Lng))))
    goto label_67;
  (Wrd50.Obj) = ((Wrd53.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_31]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_26);
  (Wrd9.Obj) = (current_block [OBJECT_30_9]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30_24);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_65;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_65;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_64)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_63;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_62)
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (label_63)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_46)
  (Wrd26.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 2);

DEFLABEL (label_45)
  (Wrd10.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd58.Obj) = (current_block [OBJECT_30_8]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_43)
  (Wrd42.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_42)
  (Wrd35.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (current_block [OBJECT_30_6]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 2);

DEFLABEL (label_41)
  (Wrd19.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_78;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_7 7
#define LABEL_31_9 9
#define LABEL_31_11 11
#define ENVIRONMENT_LABEL_31_3 24
#define DEBUGGING_LABEL_31_2 23
#define OBJECT_31_3 22
#define OBJECT_31_2 21
#define OBJECT_31_1 20
#define OBJECT_31_0 19
#define EXECUTE_CACHE_31_12 13
#define EXECUTE_CACHE_31_10 15
#define EXECUTE_CACHE_31_8 17
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_31_4);
      goto general_car_cdr_expansion_6;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (general_car_cdr_expansion_10)
DEFLABEL (general_car_cdr_expansion_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Wrd9.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_14;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_13)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_31_3]);
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [3]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (label_14)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define LABEL_32_9 11
#define LABEL_32_8 13
#define LABEL_32_12 15
#define LABEL_32_13 17
#define LABEL_32_15 19
#define LABEL_32_17 21
#define LABEL_32_14 23
#define LABEL_32_18 25
#define LABEL_32_19 27
#define LABEL_32_11 29
#define LABEL_32_22 31
#define LABEL_32_23 33
#define LABEL_32_21 35
#define LABEL_32_24 37
#define LABEL_32_25 39
#define LABEL_32_26 41
#define ENVIRONMENT_LABEL_32_3 57
#define DEBUGGING_LABEL_32_2 56
#define OBJECT_32_6 55
#define OBJECT_32_5 54
#define OBJECT_32_4 53
#define OBJECT_32_3 52
#define OBJECT_32_2 51
#define OBJECT_32_1 50
#define OBJECT_32_0 49
#define EXECUTE_CACHE_32_20 43
#define EXECUTE_CACHE_32_16 45
#define EXECUTE_CACHE_32_10 47
#define FREE_REFERENCES_LABEL_32_0 42
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_32_4);
      goto eqP_expansion_25;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_32_13);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_32_17);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_32_18);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_32_19);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_32_22);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_32_23);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_32_21);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_32_24);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_32_25);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_32_26);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqP_expansion_41)
DEFLABEL (eqP_expansion_25)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  if (! ((Wrd6.uLng) == 1))
    goto label_75;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_74)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_42;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_72)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_71;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_70)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_32_1])))
    goto label_42;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_69;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_50)
  (Wrd19.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_32_14);
  (Wrd9.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_49;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_48)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_46;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_46;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_20]));

DEFLABEL (label_46)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_32_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 2);

DEFLABEL (label_35)
  (Wrd29.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd29.Obj) = ((SCHEME_OBJECT) 0);
  goto label_45;

DEFLABEL (label_49)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_34)
  (Wrd10.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_67;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_66)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_65;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_53;
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_32_6]);
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (label_53)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_63;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_62)
  (Wrd22.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32_21);
  (Wrd9.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_61;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_60)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_59;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_58)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_56;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_56;
  (Wrd36.Obj) = ((Wrd42.pObj) [2]);

DEFLABEL (label_55)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_20]));

DEFLABEL (label_56)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_32_4]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 2);

DEFLABEL (label_39)
  (Wrd36.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd36.Obj) = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_59)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_38)
  (Wrd19.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_37)
  (Wrd10.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_32)
  (Wrd25.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_29)
  (Wrd28.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_28)
  (Wrd19.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_27)
  (Wrd9.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_32_17);
  (Wrd29.Obj) = Rvl;
  goto label_44;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_23);
  (Wrd36.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 13
#define DEBUGGING_LABEL_33_2 12
#define OBJECT_33_2 11
#define OBJECT_33_1 10
#define OBJECT_33_0 9
#define EXECUTE_CACHE_33_6 7
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_33_4);
      goto make_string_expansion_3;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_string_expansion_7)
DEFLABEL (make_string_expansion_3)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 1))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_33_1])))
    goto label_8;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_33_2]);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_6 9
#define LABEL_34_10 11
#define LABEL_34_14 13
#define LABEL_34_12 15
#define LABEL_34_15 17
#define LABEL_34_16 19
#define LABEL_34_9 21
#define LABEL_34_20 23
#define LABEL_34_19 25
#define LABEL_34_21 27
#define LABEL_34_22 29
#define ENVIRONMENT_LABEL_34_3 49
#define DEBUGGING_LABEL_34_2 48
#define OBJECT_34_6 47
#define OBJECT_34_5 46
#define OBJECT_34_4 45
#define OBJECT_34_3 44
#define OBJECT_34_2 43
#define OBJECT_34_1 42
#define OBJECT_34_0 41
#define EXECUTE_CACHE_34_18 31
#define EXECUTE_CACHE_34_17 33
#define EXECUTE_CACHE_34_13 35
#define EXECUTE_CACHE_34_11 37
#define EXECUTE_CACHE_34_8 39
#define FREE_REFERENCES_LABEL_34_0 30
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_34_4);
      goto not_expansion_17;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_34_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_34_14);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_34_15);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_34_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_34_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_34_21);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_34_22);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (not_expansion_27)
DEFLABEL (not_expansion_17)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;

DEFLABEL (label_28)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  if (! ((Wrd6.uLng) == 1))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_48)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_34_1])))
    goto label_28;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_47;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_35;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_34)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_32;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_32;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_17]));

DEFLABEL (label_32)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_34_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 2);

DEFLABEL (label_23)
  (Wrd29.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd29.Obj) = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_22)
  (Wrd10.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_45;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_34_6]);
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_19);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_42)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_40;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_40;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_17]));

DEFLABEL (label_40)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_34_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 2);

DEFLABEL (label_25)
  (Wrd29.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd29.Obj) = ((SCHEME_OBJECT) 0);
  goto label_39;

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_34_14);
  (Wrd29.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_20);
  (Wrd29.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_2 15
#define OBJECT_35_1 14
#define OBJECT_35_0 13
#define EXECUTE_CACHE_35_9 11
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_35_4);
      goto type_test_expansion_5;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (type_test_expansion_10)
DEFLABEL (type_test_expansion_5)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 1))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_16)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_35_1])))
    goto label_12;
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_15;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_14)
  (Rsp [4]) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [2]);
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd33.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (label_15)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define TAG_36_8 3
#define LABEL_36_10 11
#define LABEL_36_12 13
#define ENVIRONMENT_LABEL_36_3 27
#define DEBUGGING_LABEL_36_2 26
#define OBJECT_36_4 25
#define OBJECT_36_3 24
#define OBJECT_36_2 23
#define OBJECT_36_1 22
#define OBJECT_36_0 21
#define EXECUTE_CACHE_36_13 15
#define EXECUTE_CACHE_36_11 17
#define EXECUTE_CACHE_36_9 19
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto exact_integerP_expansion_7;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exact_integerP_expansion_12)
DEFLABEL (exact_integerP_expansion_7)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  if (! ((Wrd6.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_18)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_36_1])))
    goto label_14;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_7])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd34.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_17)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_36_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define TAG_37_8 3
#define LABEL_37_10 11
#define LABEL_37_12 13
#define LABEL_37_13 15
#define ENVIRONMENT_LABEL_37_3 30
#define DEBUGGING_LABEL_37_2 29
#define OBJECT_37_5 28
#define OBJECT_37_4 27
#define OBJECT_37_3 26
#define OBJECT_37_2 25
#define OBJECT_37_1 24
#define OBJECT_37_0 23
#define EXECUTE_CACHE_37_14 17
#define EXECUTE_CACHE_37_11 19
#define EXECUTE_CACHE_37_9 21
#define FREE_REFERENCES_LABEL_37_0 16
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_37_4);
      goto exact_rationalP_expansion_8;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exact_rationalP_expansion_13)
DEFLABEL (exact_rationalP_expansion_8)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  if (! ((Wrd6.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_19)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_37_1])))
    goto label_15;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_7])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd34.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (label_18)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_11)
  (Wrd20.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_37_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define TAG_38_8 3
#define LABEL_38_10 11
#define LABEL_38_12 13
#define LABEL_38_13 15
#define LABEL_38_14 17
#define LABEL_38_15 19
#define ENVIRONMENT_LABEL_38_3 36
#define DEBUGGING_LABEL_38_2 35
#define OBJECT_38_7 34
#define OBJECT_38_6 33
#define OBJECT_38_5 32
#define OBJECT_38_4 31
#define OBJECT_38_3 30
#define OBJECT_38_2 29
#define OBJECT_38_1 28
#define OBJECT_38_0 27
#define EXECUTE_CACHE_38_16 21
#define EXECUTE_CACHE_38_11 23
#define EXECUTE_CACHE_38_9 25
#define FREE_REFERENCES_LABEL_38_0 20
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_38_4);
      goto complexP_expansion_10;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_38_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_38_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (complexP_expansion_15)
DEFLABEL (complexP_expansion_10)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_38_1])))
    goto label_17;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_20;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_19)
  (Rsp [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_7])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd34.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (label_20)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_13)
  (Wrd20.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_38_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_38_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_15);
  (Rsp [7]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define TAG_39_8 3
#define LABEL_39_10 11
#define LABEL_39_12 13
#define ENVIRONMENT_LABEL_39_3 27
#define DEBUGGING_LABEL_39_2 26
#define OBJECT_39_4 25
#define OBJECT_39_3 24
#define OBJECT_39_2 23
#define OBJECT_39_1 22
#define OBJECT_39_0 21
#define EXECUTE_CACHE_39_13 15
#define EXECUTE_CACHE_39_11 17
#define EXECUTE_CACHE_39_9 19
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_39_4);
      goto symbolP_expansion_7;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbolP_expansion_12)
DEFLABEL (symbolP_expansion_7)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  if (! ((Wrd6.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_18)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_39_1])))
    goto label_14;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_7])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd34.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (label_17)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_39_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_9 9
#define LABEL_40_7 11
#define ENVIRONMENT_LABEL_40_3 24
#define DEBUGGING_LABEL_40_2 23
#define OBJECT_40_3 22
#define OBJECT_40_2 21
#define OBJECT_40_1 20
#define OBJECT_40_0 19
#define EXECUTE_CACHE_40_11 13
#define EXECUTE_CACHE_40_10 15
#define EXECUTE_CACHE_40_8 17
#define FREE_REFERENCES_LABEL_40_0 12
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_40_4);
      goto default_objectP_expansion_8;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_objectP_expansion_13)
DEFLABEL (default_objectP_expansion_8)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  if (! ((Wrd6.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_18)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_40_1])))
    goto label_14;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (Wrd9.Obj) = (current_block [OBJECT_40_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_17;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_16)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_40_3]);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 1);

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_8 9
#define LABEL_41_9 11
#define LABEL_41_7 13
#define LABEL_41_10 15
#define LABEL_41_11 17
#define ENVIRONMENT_LABEL_41_3 27
#define DEBUGGING_LABEL_41_2 26
#define OBJECT_41_4 25
#define OBJECT_41_3 24
#define OBJECT_41_2 23
#define OBJECT_41_1 22
#define OBJECT_41_0 21
#define EXECUTE_CACHE_41_12 19
#define FREE_REFERENCES_LABEL_41_0 18
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd60;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd64;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto make_disjunction_9;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_41_10);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_41_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_disjunction_16)
DEFLABEL (make_disjunction_9)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_7;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_41_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_28)
  if ((Wrd5.Obj) == (current_block [OBJECT_41_1]))
    goto label_26;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_25;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_24)
  Rdl = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_20;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_20;
  (Wrd32.Obj) = ((Wrd42.pObj) [2]);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (Wrd29.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd29.Obj));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_18)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (label_20)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [0]);
  (Wrd56.Obj) = (current_block [OBJECT_41_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_4]), 2);

DEFLABEL (label_14)
  (Wrd49.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd32.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 1);

DEFLABEL (label_13)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_12)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd42.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_27;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  Rvl = ((Wrd45.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 1);

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_11)
  (Wrd10.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_9);
  (Wrd64.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd64.Obj));
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 14
#define DEBUGGING_LABEL_42_2 13
#define OBJECT_42_1 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_7 7
#define EXECUTE_CACHE_42_6 9
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_42_4);
      goto make_type_test_3;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_type_test_6)
DEFLABEL (make_type_test_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_42_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_5 3
#define LABEL_43_6 5
#define LABEL_43_7 7
#define LABEL_43_8 9
#define LABEL_43_10 11
#define LABEL_43_11 13
#define LABEL_43_4 15
#define LABEL_43_13 17
#define LABEL_43_15 19
#define LABEL_43_9 21
#define LABEL_43_16 23
#define ENVIRONMENT_LABEL_43_3 38
#define DEBUGGING_LABEL_43_2 37
#define OBJECT_43_5 36
#define OBJECT_43_4 35
#define OBJECT_43_3 34
#define OBJECT_43_2 33
#define OBJECT_43_1 32
#define OBJECT_43_0 31
#define EXECUTE_CACHE_43_17 25
#define EXECUTE_CACHE_43_14 27
#define EXECUTE_CACHE_43_12 29
#define FREE_REFERENCES_LABEL_43_0 24
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_43_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_43_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_43_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_43_4);
      goto string__symbol_expansion_12;

    case 7:
      current_block = (Rpc - LABEL_43_13);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_43_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_43_16);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__symbol_expansion_22)
DEFLABEL (string__symbol_expansion_12)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_38;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_37)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_36;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_36;
  (Wrd32.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_35)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd45.uLng) == 30))
    goto label_23;
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_34;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_33)
  if (! ((Wrd46.Obj) == (current_block [OBJECT_43_4])))
    goto label_23;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_32;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_31)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_30;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd74.Lng))))
    goto label_30;
  (Wrd69.Obj) = ((Wrd72.pObj) [3]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_17]));

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_43_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd12.Obj) = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_30)
  (Wrd77.Obj) = (current_block [OBJECT_43_1]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_18)
  (Wrd59.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 1);

DEFLABEL (label_17)
  (Wrd46.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd41.Obj) = (current_block [OBJECT_43_1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_15)
  (Wrd23.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_43_15);
  (Wrd12.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_5 3
#define LABEL_44_6 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_10 11
#define LABEL_44_11 13
#define LABEL_44_4 15
#define LABEL_44_13 17
#define LABEL_44_15 19
#define LABEL_44_9 21
#define LABEL_44_16 23
#define ENVIRONMENT_LABEL_44_3 38
#define DEBUGGING_LABEL_44_2 37
#define OBJECT_44_5 36
#define OBJECT_44_4 35
#define OBJECT_44_3 34
#define OBJECT_44_2 33
#define OBJECT_44_1 32
#define OBJECT_44_0 31
#define EXECUTE_CACHE_44_17 25
#define EXECUTE_CACHE_44_14 27
#define EXECUTE_CACHE_44_12 29
#define FREE_REFERENCES_LABEL_44_0 24
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_44_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_44_4);
      goto intern_expansion_12;

    case 7:
      current_block = (Rpc - LABEL_44_13);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_44_16);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_expansion_22)
DEFLABEL (intern_expansion_12)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_38;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_37)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_36;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_36;
  (Wrd32.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_35)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd45.uLng) == 30))
    goto label_23;
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_34;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_33)
  if (! ((Wrd46.Obj) == (current_block [OBJECT_44_4])))
    goto label_23;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_32;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_31)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_30;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd74.Lng))))
    goto label_30;
  (Wrd69.Obj) = ((Wrd72.pObj) [3]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_17]));

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_44_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd12.Obj) = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_30)
  (Wrd77.Obj) = (current_block [OBJECT_44_1]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_18)
  (Wrd59.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 1);

DEFLABEL (label_17)
  (Wrd46.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd41.Obj) = (current_block [OBJECT_44_1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_15)
  (Wrd23.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_15);
  (Wrd12.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_8 9
#define ENVIRONMENT_LABEL_45_3 21
#define DEBUGGING_LABEL_45_2 20
#define OBJECT_45_4 19
#define OBJECT_45_3 18
#define OBJECT_45_2 17
#define OBJECT_45_1 16
#define OBJECT_45_0 15
#define EXECUTE_CACHE_45_9 11
#define EXECUTE_CACHE_45_7 13
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_45_4);
      goto int___flonum_expansion_7;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int___flonum_expansion_12)
DEFLABEL (int___flonum_expansion_7)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_45_1])))
    goto label_13;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_45_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (Wrd9.Obj) = (current_block [OBJECT_45_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_16;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_15)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_45_4]);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 1);

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define LABEL_46_7 7
#define LABEL_46_8 9
#define ENVIRONMENT_LABEL_46_3 18
#define DEBUGGING_LABEL_46_2 17
#define EXECUTE_CACHE_46_11 11
#define EXECUTE_CACHE_46_10 13
#define EXECUTE_CACHE_46_9 15
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_46_4);
      goto make_primitive_expander_3;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_primitive_expander_6)
DEFLABEL (make_primitive_expander_3)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_6 5
#define LABEL_47_7 7
#define LABEL_47_5 9
#define ENVIRONMENT_LABEL_47_3 18
#define DEBUGGING_LABEL_47_2 17
#define OBJECT_47_1 16
#define OBJECT_47_0 15
#define EXECUTE_CACHE_47_9 11
#define EXECUTE_CACHE_47_8 13
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_47_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_11)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (label_10)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 1);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define TAG_48_6 1
#define LABEL_48_10 7
#define LABEL_48_7 9
#define TAG_48_8 3
#define LABEL_48_9 11
#define LABEL_48_15 13
#define LABEL_48_12 15
#define LABEL_48_13 17
#define ENVIRONMENT_LABEL_48_3 31
#define DEBUGGING_LABEL_48_2 30
#define EXECUTE_CACHE_48_17 19
#define EXECUTE_CACHE_48_16 21
#define EXECUTE_CACHE_48_14 23
#define EXECUTE_CACHE_48_11 25
#define FREE_REFERENCE_48_1 28
#define FREE_REFERENCE_48_0 29
#define FREE_REFERENCES_LABEL_48_0 18
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usiexp_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_48_4);
      goto scode__scode_expander_5;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_48_10);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_48_15);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_48_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_48_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode__scode_expander_10)
DEFLABEL (scode__scode_expander_5)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_48_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_7])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_16;
  Wrd15 = Wrd19;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_14;
  Wrd7 = Wrd11;

DEFLABEL (label_13)
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_15])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_10])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_48_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_12);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_34 49
#define LABEL_31 51
#define LABEL_32 53
#define LABEL_38 55
#define LABEL_33 57
#define LABEL_36 59
#define LABEL_37 61
#define LABEL_39 63
#define LABEL_41 65
#define LABEL_40 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_46 75
#define LABEL_47 77
#define LABEL_48 79
#define LABEL_51 81
#define LABEL_49 83
#define LABEL_55 85
#define LABEL_50 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_56 93
#define LABEL_57 95
#define LABEL_58 97
#define LABEL_60 99
#define LABEL_61 101
#define LABEL_62 103
#define LABEL_63 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_66 111
#define LABEL_67 113
#define LABEL_68 115
#define LABEL_69 117
#define LABEL_70 119
#define LABEL_71 121
#define LABEL_72 123
#define LABEL_73 125
#define LABEL_74 127
#define LABEL_75 129
#define LABEL_76 131
#define LABEL_77 133
#define LABEL_78 135
#define LABEL_79 137
#define LABEL_80 139
#define LABEL_81 141
#define LABEL_82 143
#define LABEL_83 145
#define LABEL_84 147
#define LABEL_85 149
#define LABEL_86 151
#define LABEL_87 153
#define LABEL_88 155
#define LABEL_89 157
#define LABEL_90 159
#define LABEL_91 161
#define LABEL_92 163
#define LABEL_93 165
#define LABEL_94 167
#define LABEL_95 169
#define LABEL_96 171
#define LABEL_97 173
#define LABEL_98 175
#define LABEL_99 177
#define LABEL_100 179
#define LABEL_101 181
#define LABEL_102 183
#define LABEL_103 185
#define LABEL_104 187
#define LABEL_105 189
#define LABEL_106 191
#define LABEL_107 193
#define LABEL_108 195
#define LABEL_109 197
#define LABEL_110 199
#define LABEL_111 201
#define LABEL_112 203
#define LABEL_113 205
#define LABEL_114 207
#define LABEL_115 209
#define LABEL_116 211
#define LABEL_117 213
#define LABEL_118 215
#define LABEL_119 217
#define LABEL_120 219
#define LABEL_121 221
#define LABEL_122 223
#define LABEL_123 225
#define LABEL_124 227
#define LABEL_125 229
#define LABEL_126 231
#define LABEL_127 233
#define LABEL_128 235
#define LABEL_129 237
#define LABEL_130 239
#define LABEL_131 241
#define LABEL_132 243
#define LABEL_134 245
#define LABEL_138 247
#define LABEL_139 249
#define LABEL_135 251
#define LABEL_144 253
#define LABEL_136 255
#define LABEL_137 257
#define LABEL_141 259
#define LABEL_148 261
#define LABEL_149 263
#define LABEL_150 265
#define LABEL_142 267
#define LABEL_143 269
#define LABEL_152 271
#define LABEL_153 273
#define LABEL_154 275
#define LABEL_155 277
#define LABEL_156 279
#define LABEL_157 281
#define LABEL_158 283
#define LABEL_159 285
#define LABEL_160 287
#define LABEL_161 289
#define LABEL_162 291
#define LABEL_163 293
#define LABEL_164 295
#define LABEL_165 297
#define LABEL_166 299
#define LABEL_167 301
#define LABEL_168 303
#define LABEL_169 305
#define LABEL_170 307
#define LABEL_171 309
#define LABEL_172 311
#define LABEL_173 313
#define LABEL_174 315
#define LABEL_175 317
#define LABEL_176 319
#define LABEL_177 321
#define LABEL_178 323
#define LABEL_179 325
#define LABEL_180 327
#define LABEL_181 329
#define LABEL_182 331
#define LABEL_183 333
#define LABEL_184 335
#define LABEL_185 337
#define LABEL_186 339
#define LABEL_187 341
#define LABEL_188 343
#define LABEL_189 345
#define LABEL_190 347
#define LABEL_191 349
#define LABEL_192 351
#define LABEL_193 353
#define LABEL_194 355
#define LABEL_195 357
#define LABEL_196 359
#define LABEL_197 361
#define LABEL_198 363
#define LABEL_199 365
#define LABEL_200 367
#define LABEL_201 369
#define LABEL_202 371
#define LABEL_203 373
#define LABEL_204 375
#define LABEL_205 377
#define LABEL_206 379
#define LABEL_207 381
#define LABEL_208 383
#define LABEL_209 385
#define LABEL_210 387
#define LABEL_211 389
#define LABEL_212 391
#define LABEL_213 393
#define LABEL_214 395
#define LABEL_215 397
#define LABEL_216 399
#define LABEL_217 401
#define LABEL_218 403
#define LABEL_219 405
#define LABEL_220 407
#define LABEL_221 409
#define LABEL_222 411
#define LABEL_223 413
#define LABEL_224 415
#define LABEL_225 417
#define LABEL_226 419
#define LABEL_227 421
#define LABEL_228 423
#define LABEL_229 425
#define LABEL_230 427
#define LABEL_231 429
#define LABEL_146 431
#define LABEL_147 433
#define LABEL_232 435
#define LABEL_233 437
#define LABEL_235 439
#define LABEL_236 441
#define LABEL_237 443
#define ENVIRONMENT_LABEL_3 690
#define DEBUGGING_LABEL_2 689
#define PURIFICATION_ROOT 688
#define OBJECT_133 687
#define OBJECT_132 686
#define OBJECT_131 685
#define OBJECT_130 684
#define OBJECT_129 683
#define OBJECT_128 682
#define OBJECT_127 681
#define OBJECT_126 680
#define OBJECT_125 679
#define OBJECT_124 678
#define OBJECT_123 677
#define OBJECT_122 676
#define OBJECT_121 675
#define OBJECT_120 674
#define OBJECT_119 673
#define OBJECT_118 672
#define OBJECT_117 671
#define OBJECT_116 670
#define OBJECT_115 669
#define OBJECT_114 668
#define OBJECT_113 667
#define OBJECT_112 666
#define OBJECT_111 665
#define OBJECT_110 664
#define OBJECT_109 663
#define OBJECT_108 662
#define OBJECT_107 661
#define OBJECT_106 660
#define OBJECT_105 659
#define OBJECT_104 658
#define OBJECT_103 657
#define OBJECT_102 656
#define OBJECT_101 655
#define OBJECT_100 654
#define OBJECT_99 653
#define OBJECT_98 652
#define OBJECT_97 651
#define OBJECT_96 650
#define OBJECT_95 649
#define OBJECT_94 648
#define OBJECT_93 647
#define OBJECT_92 646
#define OBJECT_91 645
#define OBJECT_90 644
#define OBJECT_89 643
#define OBJECT_88 642
#define OBJECT_87 641
#define OBJECT_86 640
#define OBJECT_85 639
#define OBJECT_84 638
#define OBJECT_83 637
#define OBJECT_82 636
#define OBJECT_81 635
#define OBJECT_80 634
#define OBJECT_79 633
#define OBJECT_78 632
#define OBJECT_77 631
#define OBJECT_76 630
#define OBJECT_75 629
#define OBJECT_74 628
#define OBJECT_73 627
#define OBJECT_72 626
#define OBJECT_71 625
#define OBJECT_70 624
#define OBJECT_69 623
#define OBJECT_68 622
#define OBJECT_67 621
#define OBJECT_66 620
#define OBJECT_65 619
#define OBJECT_64 618
#define OBJECT_63 617
#define OBJECT_62 616
#define OBJECT_61 615
#define OBJECT_60 614
#define OBJECT_59 613
#define OBJECT_58 612
#define OBJECT_57 611
#define OBJECT_56 610
#define OBJECT_55 609
#define OBJECT_54 608
#define OBJECT_53 607
#define OBJECT_52 606
#define OBJECT_51 605
#define OBJECT_50 604
#define OBJECT_49 603
#define OBJECT_48 602
#define OBJECT_47 601
#define OBJECT_46 600
#define OBJECT_45 599
#define OBJECT_44 598
#define OBJECT_43 597
#define OBJECT_42 596
#define OBJECT_41 595
#define OBJECT_40 594
#define OBJECT_39 593
#define OBJECT_38 592
#define OBJECT_37 591
#define OBJECT_36 590
#define OBJECT_35 589
#define OBJECT_34 588
#define OBJECT_33 587
#define OBJECT_32 586
#define OBJECT_31 585
#define OBJECT_30 584
#define OBJECT_29 583
#define OBJECT_28 582
#define OBJECT_27 581
#define OBJECT_26 580
#define OBJECT_25 579
#define OBJECT_24 578
#define OBJECT_23 577
#define OBJECT_22 576
#define OBJECT_21 575
#define OBJECT_20 574
#define OBJECT_19 573
#define OBJECT_18 572
#define OBJECT_17 571
#define OBJECT_16 570
#define OBJECT_15 569
#define OBJECT_14 568
#define OBJECT_13 567
#define OBJECT_12 566
#define OBJECT_11 565
#define OBJECT_10 564
#define OBJECT_9 563
#define OBJECT_8 562
#define OBJECT_7 561
#define OBJECT_6 560
#define OBJECT_5 559
#define OBJECT_4 558
#define OBJECT_3 557
#define OBJECT_2 556
#define OBJECT_1 555
#define OBJECT_0 554
#define EXECUTE_CACHE_234 445
#define EXECUTE_CACHE_145 447
#define EXECUTE_CACHE_151 449
#define EXECUTE_CACHE_140 451
#define EXECUTE_CACHE_133 453
#define EXECUTE_CACHE_59 455
#define EXECUTE_CACHE_52 457
#define EXECUTE_CACHE_45 459
#define EXECUTE_CACHE_35 461
#define EXECUTE_CACHE_27 463
#define EXECUTE_CACHE_19 465
#define EXECUTE_CACHE_8 467
#define FREE_REFERENCE_80 470
#define FREE_REFERENCE_79 471
#define FREE_REFERENCE_78 472
#define FREE_REFERENCE_77 473
#define FREE_REFERENCE_76 474
#define FREE_REFERENCE_75 475
#define FREE_REFERENCE_74 476
#define FREE_REFERENCE_73 477
#define FREE_REFERENCE_72 478
#define FREE_REFERENCE_71 479
#define FREE_REFERENCE_70 480
#define FREE_REFERENCE_69 481
#define FREE_REFERENCE_68 482
#define FREE_REFERENCE_67 483
#define FREE_REFERENCE_66 484
#define FREE_REFERENCE_65 485
#define FREE_REFERENCE_64 486
#define FREE_REFERENCE_63 487
#define FREE_REFERENCE_62 488
#define FREE_REFERENCE_61 489
#define FREE_REFERENCE_60 490
#define FREE_REFERENCE_59 491
#define FREE_REFERENCE_58 492
#define FREE_REFERENCE_57 493
#define FREE_REFERENCE_56 494
#define FREE_REFERENCE_55 495
#define FREE_REFERENCE_54 496
#define FREE_REFERENCE_53 497
#define FREE_REFERENCE_52 498
#define FREE_REFERENCE_51 499
#define FREE_REFERENCE_50 500
#define FREE_REFERENCE_49 501
#define FREE_REFERENCE_48 502
#define FREE_REFERENCE_47 503
#define FREE_REFERENCE_46 504
#define FREE_REFERENCE_45 505
#define FREE_REFERENCE_44 506
#define FREE_REFERENCE_43 507
#define FREE_REFERENCE_42 508
#define FREE_REFERENCE_41 509
#define FREE_REFERENCE_40 510
#define FREE_REFERENCE_39 511
#define FREE_REFERENCE_38 512
#define FREE_REFERENCE_37 513
#define FREE_REFERENCE_36 514
#define FREE_REFERENCE_35 515
#define FREE_REFERENCE_34 516
#define FREE_REFERENCE_33 517
#define FREE_REFERENCE_32 518
#define FREE_REFERENCE_31 519
#define FREE_REFERENCE_30 520
#define FREE_REFERENCE_29 521
#define FREE_REFERENCE_28 522
#define FREE_REFERENCE_27 523
#define FREE_REFERENCE_26 524
#define FREE_REFERENCE_25 525
#define FREE_REFERENCE_24 526
#define FREE_REFERENCE_23 527
#define FREE_REFERENCE_22 528
#define FREE_REFERENCE_21 529
#define FREE_REFERENCE_20 530
#define FREE_REFERENCE_19 531
#define FREE_REFERENCE_18 532
#define FREE_REFERENCE_17 533
#define FREE_REFERENCE_16 534
#define FREE_REFERENCE_15 535
#define FREE_REFERENCE_14 536
#define FREE_REFERENCE_13 537
#define FREE_REFERENCE_12 538
#define FREE_REFERENCE_11 539
#define FREE_REFERENCE_10 540
#define FREE_REFERENCE_9 541
#define FREE_REFERENCE_8 542
#define FREE_REFERENCE_7 543
#define FREE_REFERENCE_6 544
#define FREE_REFERENCE_5 545
#define FREE_REFERENCE_4 546
#define FREE_REFERENCE_3 547
#define FREE_REFERENCE_2 548
#define FREE_REFERENCE_1 549
#define FREE_REFERENCE_0 550
#define GLOBAL_EXECUTE_CACHE_5 552
#define FREE_REFERENCES_LABEL_0 444
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
usiexp_so_c1a95deae0cae5cf (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd884;
  machine_word Wrd883;
  machine_word Wrd881;
  machine_word Wrd875;
  machine_word Wrd880;
  machine_word Wrd879;
  machine_word Wrd876;
  machine_word Wrd873;
  machine_word Wrd872;
  machine_word Wrd870;
  machine_word Wrd864;
  machine_word Wrd869;
  machine_word Wrd868;
  machine_word Wrd865;
  machine_word Wrd862;
  machine_word Wrd861;
  machine_word Wrd859;
  machine_word Wrd853;
  machine_word Wrd858;
  machine_word Wrd857;
  machine_word Wrd854;
  machine_word Wrd851;
  machine_word Wrd850;
  machine_word Wrd848;
  machine_word Wrd842;
  machine_word Wrd847;
  machine_word Wrd846;
  machine_word Wrd843;
  machine_word Wrd840;
  machine_word Wrd839;
  machine_word Wrd837;
  machine_word Wrd831;
  machine_word Wrd836;
  machine_word Wrd835;
  machine_word Wrd832;
  machine_word Wrd829;
  machine_word Wrd828;
  machine_word Wrd826;
  machine_word Wrd820;
  machine_word Wrd825;
  machine_word Wrd824;
  machine_word Wrd821;
  machine_word Wrd818;
  machine_word Wrd817;
  machine_word Wrd815;
  machine_word Wrd809;
  machine_word Wrd814;
  machine_word Wrd813;
  machine_word Wrd810;
  machine_word Wrd807;
  machine_word Wrd806;
  machine_word Wrd804;
  machine_word Wrd798;
  machine_word Wrd803;
  machine_word Wrd802;
  machine_word Wrd799;
  machine_word Wrd796;
  machine_word Wrd795;
  machine_word Wrd793;
  machine_word Wrd787;
  machine_word Wrd792;
  machine_word Wrd791;
  machine_word Wrd788;
  machine_word Wrd785;
  machine_word Wrd784;
  machine_word Wrd782;
  machine_word Wrd776;
  machine_word Wrd781;
  machine_word Wrd780;
  machine_word Wrd777;
  machine_word Wrd774;
  machine_word Wrd773;
  machine_word Wrd771;
  machine_word Wrd765;
  machine_word Wrd770;
  machine_word Wrd769;
  machine_word Wrd766;
  machine_word Wrd763;
  machine_word Wrd762;
  machine_word Wrd760;
  machine_word Wrd754;
  machine_word Wrd759;
  machine_word Wrd758;
  machine_word Wrd755;
  machine_word Wrd752;
  machine_word Wrd751;
  machine_word Wrd749;
  machine_word Wrd743;
  machine_word Wrd748;
  machine_word Wrd747;
  machine_word Wrd744;
  machine_word Wrd741;
  machine_word Wrd740;
  machine_word Wrd738;
  machine_word Wrd732;
  machine_word Wrd737;
  machine_word Wrd736;
  machine_word Wrd733;
  machine_word Wrd730;
  machine_word Wrd729;
  machine_word Wrd727;
  machine_word Wrd721;
  machine_word Wrd726;
  machine_word Wrd725;
  machine_word Wrd722;
  machine_word Wrd719;
  machine_word Wrd718;
  machine_word Wrd716;
  machine_word Wrd710;
  machine_word Wrd715;
  machine_word Wrd714;
  machine_word Wrd711;
  machine_word Wrd708;
  machine_word Wrd707;
  machine_word Wrd705;
  machine_word Wrd699;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd700;
  machine_word Wrd697;
  machine_word Wrd696;
  machine_word Wrd694;
  machine_word Wrd688;
  machine_word Wrd693;
  machine_word Wrd692;
  machine_word Wrd689;
  machine_word Wrd686;
  machine_word Wrd685;
  machine_word Wrd683;
  machine_word Wrd677;
  machine_word Wrd682;
  machine_word Wrd681;
  machine_word Wrd678;
  machine_word Wrd675;
  machine_word Wrd674;
  machine_word Wrd672;
  machine_word Wrd666;
  machine_word Wrd671;
  machine_word Wrd670;
  machine_word Wrd667;
  machine_word Wrd664;
  machine_word Wrd663;
  machine_word Wrd661;
  machine_word Wrd655;
  machine_word Wrd660;
  machine_word Wrd659;
  machine_word Wrd656;
  machine_word Wrd653;
  machine_word Wrd652;
  machine_word Wrd650;
  machine_word Wrd644;
  machine_word Wrd649;
  machine_word Wrd648;
  machine_word Wrd645;
  machine_word Wrd642;
  machine_word Wrd641;
  machine_word Wrd639;
  machine_word Wrd633;
  machine_word Wrd638;
  machine_word Wrd637;
  machine_word Wrd634;
  machine_word Wrd631;
  machine_word Wrd630;
  machine_word Wrd628;
  machine_word Wrd622;
  machine_word Wrd627;
  machine_word Wrd626;
  machine_word Wrd623;
  machine_word Wrd620;
  machine_word Wrd619;
  machine_word Wrd617;
  machine_word Wrd611;
  machine_word Wrd616;
  machine_word Wrd615;
  machine_word Wrd612;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd606;
  machine_word Wrd600;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd601;
  machine_word Wrd598;
  machine_word Wrd597;
  machine_word Wrd595;
  machine_word Wrd589;
  machine_word Wrd594;
  machine_word Wrd593;
  machine_word Wrd590;
  machine_word Wrd587;
  machine_word Wrd586;
  machine_word Wrd584;
  machine_word Wrd578;
  machine_word Wrd583;
  machine_word Wrd582;
  machine_word Wrd579;
  machine_word Wrd576;
  machine_word Wrd575;
  machine_word Wrd573;
  machine_word Wrd567;
  machine_word Wrd572;
  machine_word Wrd571;
  machine_word Wrd568;
  machine_word Wrd565;
  machine_word Wrd564;
  machine_word Wrd562;
  machine_word Wrd556;
  machine_word Wrd561;
  machine_word Wrd560;
  machine_word Wrd557;
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd551;
  machine_word Wrd545;
  machine_word Wrd550;
  machine_word Wrd549;
  machine_word Wrd546;
  machine_word Wrd543;
  machine_word Wrd542;
  machine_word Wrd540;
  machine_word Wrd534;
  machine_word Wrd539;
  machine_word Wrd538;
  machine_word Wrd535;
  machine_word Wrd532;
  machine_word Wrd531;
  machine_word Wrd529;
  machine_word Wrd523;
  machine_word Wrd528;
  machine_word Wrd527;
  machine_word Wrd524;
  machine_word Wrd521;
  machine_word Wrd520;
  machine_word Wrd518;
  machine_word Wrd512;
  machine_word Wrd517;
  machine_word Wrd516;
  machine_word Wrd513;
  machine_word Wrd510;
  machine_word Wrd509;
  machine_word Wrd507;
  machine_word Wrd501;
  machine_word Wrd506;
  machine_word Wrd505;
  machine_word Wrd502;
  machine_word Wrd499;
  machine_word Wrd498;
  machine_word Wrd496;
  machine_word Wrd490;
  machine_word Wrd495;
  machine_word Wrd494;
  machine_word Wrd491;
  machine_word Wrd488;
  machine_word Wrd487;
  machine_word Wrd485;
  machine_word Wrd479;
  machine_word Wrd484;
  machine_word Wrd483;
  machine_word Wrd480;
  machine_word Wrd477;
  machine_word Wrd476;
  machine_word Wrd474;
  machine_word Wrd468;
  machine_word Wrd473;
  machine_word Wrd472;
  machine_word Wrd469;
  machine_word Wrd466;
  machine_word Wrd465;
  machine_word Wrd463;
  machine_word Wrd457;
  machine_word Wrd462;
  machine_word Wrd461;
  machine_word Wrd458;
  machine_word Wrd455;
  machine_word Wrd454;
  machine_word Wrd452;
  machine_word Wrd446;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd447;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd441;
  machine_word Wrd435;
  machine_word Wrd440;
  machine_word Wrd439;
  machine_word Wrd436;
  machine_word Wrd433;
  machine_word Wrd432;
  machine_word Wrd430;
  machine_word Wrd424;
  machine_word Wrd429;
  machine_word Wrd428;
  machine_word Wrd425;
  machine_word Wrd422;
  machine_word Wrd421;
  machine_word Wrd419;
  machine_word Wrd413;
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd414;
  machine_word Wrd411;
  machine_word Wrd410;
  machine_word Wrd408;
  machine_word Wrd402;
  machine_word Wrd407;
  machine_word Wrd406;
  machine_word Wrd403;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd397;
  machine_word Wrd391;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd392;
  machine_word Wrd389;
  machine_word Wrd388;
  machine_word Wrd386;
  machine_word Wrd380;
  machine_word Wrd385;
  machine_word Wrd384;
  machine_word Wrd381;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd375;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
  machine_word Wrd367;
  machine_word Wrd366;
  machine_word Wrd364;
  machine_word Wrd358;
  machine_word Wrd363;
  machine_word Wrd362;
  machine_word Wrd359;
  machine_word Wrd356;
  machine_word Wrd355;
  machine_word Wrd353;
  machine_word Wrd347;
  machine_word Wrd352;
  machine_word Wrd351;
  machine_word Wrd348;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd342;
  machine_word Wrd336;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd337;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd331;
  machine_word Wrd325;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd326;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd320;
  machine_word Wrd314;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd315;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd309;
  machine_word Wrd303;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd304;
  machine_word Wrd301;
  machine_word Wrd300;
  machine_word Wrd298;
  machine_word Wrd292;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd289;
  machine_word Wrd287;
  machine_word Wrd281;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd282;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd276;
  machine_word Wrd270;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd271;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd265;
  machine_word Wrd259;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd254;
  machine_word Wrd248;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd249;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd243;
  machine_word Wrd237;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd226;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd227;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd221;
  machine_word Wrd215;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd210;
  machine_word Wrd204;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd199;
  machine_word Wrd193;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd188;
  machine_word Wrd182;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd177;
  machine_word Wrd171;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd166;
  machine_word Wrd160;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd155;
  machine_word Wrd149;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd144;
  machine_word Wrd138;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd133;
  machine_word Wrd127;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_34);
      goto label_209;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto label_210;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto continuation_24;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_28;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto label_211;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_30;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_32;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_31;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_34;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_33;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto continuation_35;

    case 39:
      current_block = (Rpc - LABEL_51);
      goto label_212;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_37;

    case 41:
      current_block = (Rpc - LABEL_55);
      goto label_213;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto continuation_36;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_39;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_38;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto continuation_40;

    case 46:
      current_block = (Rpc - LABEL_57);
      goto continuation_42;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto continuation_41;

    case 48:
      current_block = (Rpc - LABEL_60);
      goto continuation_44;

    case 49:
      current_block = (Rpc - LABEL_61);
      goto continuation_43;

    case 50:
      current_block = (Rpc - LABEL_62);
      goto continuation_46;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto continuation_45;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto continuation_48;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto continuation_47;

    case 54:
      current_block = (Rpc - LABEL_66);
      goto continuation_50;

    case 55:
      current_block = (Rpc - LABEL_67);
      goto continuation_49;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto continuation_52;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto continuation_51;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto continuation_54;

    case 59:
      current_block = (Rpc - LABEL_71);
      goto continuation_53;

    case 60:
      current_block = (Rpc - LABEL_72);
      goto continuation_56;

    case 61:
      current_block = (Rpc - LABEL_73);
      goto continuation_55;

    case 62:
      current_block = (Rpc - LABEL_74);
      goto continuation_58;

    case 63:
      current_block = (Rpc - LABEL_75);
      goto continuation_57;

    case 64:
      current_block = (Rpc - LABEL_76);
      goto continuation_60;

    case 65:
      current_block = (Rpc - LABEL_77);
      goto continuation_59;

    case 66:
      current_block = (Rpc - LABEL_78);
      goto continuation_62;

    case 67:
      current_block = (Rpc - LABEL_79);
      goto continuation_61;

    case 68:
      current_block = (Rpc - LABEL_80);
      goto continuation_64;

    case 69:
      current_block = (Rpc - LABEL_81);
      goto continuation_63;

    case 70:
      current_block = (Rpc - LABEL_82);
      goto continuation_66;

    case 71:
      current_block = (Rpc - LABEL_83);
      goto continuation_65;

    case 72:
      current_block = (Rpc - LABEL_84);
      goto continuation_68;

    case 73:
      current_block = (Rpc - LABEL_85);
      goto continuation_67;

    case 74:
      current_block = (Rpc - LABEL_86);
      goto continuation_70;

    case 75:
      current_block = (Rpc - LABEL_87);
      goto continuation_69;

    case 76:
      current_block = (Rpc - LABEL_88);
      goto continuation_72;

    case 77:
      current_block = (Rpc - LABEL_89);
      goto continuation_71;

    case 78:
      current_block = (Rpc - LABEL_90);
      goto continuation_74;

    case 79:
      current_block = (Rpc - LABEL_91);
      goto continuation_73;

    case 80:
      current_block = (Rpc - LABEL_92);
      goto continuation_76;

    case 81:
      current_block = (Rpc - LABEL_93);
      goto continuation_75;

    case 82:
      current_block = (Rpc - LABEL_94);
      goto continuation_78;

    case 83:
      current_block = (Rpc - LABEL_95);
      goto continuation_77;

    case 84:
      current_block = (Rpc - LABEL_96);
      goto continuation_80;

    case 85:
      current_block = (Rpc - LABEL_97);
      goto continuation_79;

    case 86:
      current_block = (Rpc - LABEL_98);
      goto continuation_82;

    case 87:
      current_block = (Rpc - LABEL_99);
      goto continuation_81;

    case 88:
      current_block = (Rpc - LABEL_100);
      goto continuation_84;

    case 89:
      current_block = (Rpc - LABEL_101);
      goto continuation_83;

    case 90:
      current_block = (Rpc - LABEL_102);
      goto continuation_86;

    case 91:
      current_block = (Rpc - LABEL_103);
      goto continuation_85;

    case 92:
      current_block = (Rpc - LABEL_104);
      goto continuation_88;

    case 93:
      current_block = (Rpc - LABEL_105);
      goto continuation_87;

    case 94:
      current_block = (Rpc - LABEL_106);
      goto continuation_90;

    case 95:
      current_block = (Rpc - LABEL_107);
      goto continuation_89;

    case 96:
      current_block = (Rpc - LABEL_108);
      goto continuation_92;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto continuation_91;

    case 98:
      current_block = (Rpc - LABEL_110);
      goto continuation_94;

    case 99:
      current_block = (Rpc - LABEL_111);
      goto continuation_93;

    case 100:
      current_block = (Rpc - LABEL_112);
      goto continuation_96;

    case 101:
      current_block = (Rpc - LABEL_113);
      goto continuation_95;

    case 102:
      current_block = (Rpc - LABEL_114);
      goto continuation_98;

    case 103:
      current_block = (Rpc - LABEL_115);
      goto continuation_97;

    case 104:
      current_block = (Rpc - LABEL_116);
      goto continuation_100;

    case 105:
      current_block = (Rpc - LABEL_117);
      goto continuation_99;

    case 106:
      current_block = (Rpc - LABEL_118);
      goto continuation_102;

    case 107:
      current_block = (Rpc - LABEL_119);
      goto continuation_101;

    case 108:
      current_block = (Rpc - LABEL_120);
      goto continuation_104;

    case 109:
      current_block = (Rpc - LABEL_121);
      goto continuation_103;

    case 110:
      current_block = (Rpc - LABEL_122);
      goto continuation_106;

    case 111:
      current_block = (Rpc - LABEL_123);
      goto continuation_105;

    case 112:
      current_block = (Rpc - LABEL_124);
      goto continuation_108;

    case 113:
      current_block = (Rpc - LABEL_125);
      goto continuation_107;

    case 114:
      current_block = (Rpc - LABEL_126);
      goto continuation_110;

    case 115:
      current_block = (Rpc - LABEL_127);
      goto continuation_109;

    case 116:
      current_block = (Rpc - LABEL_128);
      goto continuation_112;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto continuation_111;

    case 118:
      current_block = (Rpc - LABEL_130);
      goto continuation_113;

    case 119:
      current_block = (Rpc - LABEL_131);
      goto continuation_115;

    case 120:
      current_block = (Rpc - LABEL_132);
      goto continuation_114;

    case 121:
      current_block = (Rpc - LABEL_134);
      goto continuation_116;

    case 122:
      current_block = (Rpc - LABEL_138);
      goto label_214;

    case 123:
      current_block = (Rpc - LABEL_139);
      goto label_215;

    case 124:
      current_block = (Rpc - LABEL_135);
      goto continuation_119;

    case 125:
      current_block = (Rpc - LABEL_144);
      goto label_216;

    case 126:
      current_block = (Rpc - LABEL_136);
      goto continuation_118;

    case 127:
      current_block = (Rpc - LABEL_137);
      goto continuation_117;

    case 128:
      current_block = (Rpc - LABEL_141);
      goto continuation_202;

    case 129:
      current_block = (Rpc - LABEL_148);
      goto label_217;

    case 130:
      current_block = (Rpc - LABEL_149);
      goto label_218;

    case 131:
      current_block = (Rpc - LABEL_150);
      goto label_219;

    case 132:
      current_block = (Rpc - LABEL_142);
      goto continuation_201;

    case 133:
      current_block = (Rpc - LABEL_143);
      goto continuation_200;

    case 134:
      current_block = (Rpc - LABEL_152);
      goto label_220;

    case 135:
      current_block = (Rpc - LABEL_153);
      goto label_221;

    case 136:
      current_block = (Rpc - LABEL_154);
      goto label_222;

    case 137:
      current_block = (Rpc - LABEL_155);
      goto label_223;

    case 138:
      current_block = (Rpc - LABEL_156);
      goto label_224;

    case 139:
      current_block = (Rpc - LABEL_157);
      goto label_225;

    case 140:
      current_block = (Rpc - LABEL_158);
      goto label_226;

    case 141:
      current_block = (Rpc - LABEL_159);
      goto label_227;

    case 142:
      current_block = (Rpc - LABEL_160);
      goto label_228;

    case 143:
      current_block = (Rpc - LABEL_161);
      goto label_229;

    case 144:
      current_block = (Rpc - LABEL_162);
      goto label_230;

    case 145:
      current_block = (Rpc - LABEL_163);
      goto label_231;

    case 146:
      current_block = (Rpc - LABEL_164);
      goto label_232;

    case 147:
      current_block = (Rpc - LABEL_165);
      goto label_233;

    case 148:
      current_block = (Rpc - LABEL_166);
      goto label_234;

    case 149:
      current_block = (Rpc - LABEL_167);
      goto label_235;

    case 150:
      current_block = (Rpc - LABEL_168);
      goto label_236;

    case 151:
      current_block = (Rpc - LABEL_169);
      goto label_237;

    case 152:
      current_block = (Rpc - LABEL_170);
      goto label_238;

    case 153:
      current_block = (Rpc - LABEL_171);
      goto label_239;

    case 154:
      current_block = (Rpc - LABEL_172);
      goto label_240;

    case 155:
      current_block = (Rpc - LABEL_173);
      goto label_241;

    case 156:
      current_block = (Rpc - LABEL_174);
      goto label_242;

    case 157:
      current_block = (Rpc - LABEL_175);
      goto label_243;

    case 158:
      current_block = (Rpc - LABEL_176);
      goto label_244;

    case 159:
      current_block = (Rpc - LABEL_177);
      goto label_245;

    case 160:
      current_block = (Rpc - LABEL_178);
      goto label_246;

    case 161:
      current_block = (Rpc - LABEL_179);
      goto label_247;

    case 162:
      current_block = (Rpc - LABEL_180);
      goto label_248;

    case 163:
      current_block = (Rpc - LABEL_181);
      goto label_249;

    case 164:
      current_block = (Rpc - LABEL_182);
      goto label_250;

    case 165:
      current_block = (Rpc - LABEL_183);
      goto label_251;

    case 166:
      current_block = (Rpc - LABEL_184);
      goto label_252;

    case 167:
      current_block = (Rpc - LABEL_185);
      goto label_253;

    case 168:
      current_block = (Rpc - LABEL_186);
      goto label_254;

    case 169:
      current_block = (Rpc - LABEL_187);
      goto label_255;

    case 170:
      current_block = (Rpc - LABEL_188);
      goto label_256;

    case 171:
      current_block = (Rpc - LABEL_189);
      goto label_257;

    case 172:
      current_block = (Rpc - LABEL_190);
      goto label_258;

    case 173:
      current_block = (Rpc - LABEL_191);
      goto label_259;

    case 174:
      current_block = (Rpc - LABEL_192);
      goto label_260;

    case 175:
      current_block = (Rpc - LABEL_193);
      goto label_261;

    case 176:
      current_block = (Rpc - LABEL_194);
      goto label_262;

    case 177:
      current_block = (Rpc - LABEL_195);
      goto label_263;

    case 178:
      current_block = (Rpc - LABEL_196);
      goto label_264;

    case 179:
      current_block = (Rpc - LABEL_197);
      goto label_265;

    case 180:
      current_block = (Rpc - LABEL_198);
      goto label_266;

    case 181:
      current_block = (Rpc - LABEL_199);
      goto label_267;

    case 182:
      current_block = (Rpc - LABEL_200);
      goto label_268;

    case 183:
      current_block = (Rpc - LABEL_201);
      goto label_269;

    case 184:
      current_block = (Rpc - LABEL_202);
      goto label_270;

    case 185:
      current_block = (Rpc - LABEL_203);
      goto label_271;

    case 186:
      current_block = (Rpc - LABEL_204);
      goto label_272;

    case 187:
      current_block = (Rpc - LABEL_205);
      goto label_273;

    case 188:
      current_block = (Rpc - LABEL_206);
      goto label_274;

    case 189:
      current_block = (Rpc - LABEL_207);
      goto label_275;

    case 190:
      current_block = (Rpc - LABEL_208);
      goto label_276;

    case 191:
      current_block = (Rpc - LABEL_209);
      goto label_277;

    case 192:
      current_block = (Rpc - LABEL_210);
      goto label_278;

    case 193:
      current_block = (Rpc - LABEL_211);
      goto label_279;

    case 194:
      current_block = (Rpc - LABEL_212);
      goto label_280;

    case 195:
      current_block = (Rpc - LABEL_213);
      goto label_281;

    case 196:
      current_block = (Rpc - LABEL_214);
      goto label_282;

    case 197:
      current_block = (Rpc - LABEL_215);
      goto label_283;

    case 198:
      current_block = (Rpc - LABEL_216);
      goto label_284;

    case 199:
      current_block = (Rpc - LABEL_217);
      goto label_285;

    case 200:
      current_block = (Rpc - LABEL_218);
      goto label_286;

    case 201:
      current_block = (Rpc - LABEL_219);
      goto label_287;

    case 202:
      current_block = (Rpc - LABEL_220);
      goto label_288;

    case 203:
      current_block = (Rpc - LABEL_221);
      goto label_289;

    case 204:
      current_block = (Rpc - LABEL_222);
      goto label_290;

    case 205:
      current_block = (Rpc - LABEL_223);
      goto label_291;

    case 206:
      current_block = (Rpc - LABEL_224);
      goto label_292;

    case 207:
      current_block = (Rpc - LABEL_225);
      goto label_293;

    case 208:
      current_block = (Rpc - LABEL_226);
      goto label_294;

    case 209:
      current_block = (Rpc - LABEL_227);
      goto label_295;

    case 210:
      current_block = (Rpc - LABEL_228);
      goto label_296;

    case 211:
      current_block = (Rpc - LABEL_229);
      goto label_297;

    case 212:
      current_block = (Rpc - LABEL_230);
      goto label_298;

    case 213:
      current_block = (Rpc - LABEL_231);
      goto label_299;

    case 214:
      current_block = (Rpc - LABEL_146);
      goto continuation_204;

    case 215:
      current_block = (Rpc - LABEL_147);
      goto continuation_203;

    case 216:
      current_block = (Rpc - LABEL_232);
      goto continuation_205;

    case 217:
      current_block = (Rpc - LABEL_233);
      goto continuation_206;

    case 218:
      current_block = (Rpc - LABEL_235);
      goto label_302;

    case 219:
      current_block = (Rpc - LABEL_236);
      goto label_303;

    case 220:
      current_block = (Rpc - LABEL_237);
      goto expression_208;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_208)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_236])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_303)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_302)
  {
    static const short sections [] =
      {
	0,
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
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 48)
      goto label_301;
    blocks = (current_block [OBJECT_133]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_235])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_301)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_485;
  Wrd11 = Wrd15;

DEFLABEL (label_484)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_483;
  Wrd11 = Wrd15;

DEFLABEL (label_482)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_481;
  Wrd8 = Wrd12;

DEFLABEL (label_480)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_479;
  Wrd12 = Wrd16;

DEFLABEL (label_478)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_477;
  Wrd12 = Wrd16;

DEFLABEL (label_476)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_85);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_87);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_89);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_91);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_93);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_97);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_99);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_103);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_105);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_107);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_109);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_111);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_113);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_115);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_117);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_119);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_121);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_123);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_125);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_127);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_129);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_132);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_475;
  Wrd14 = Wrd18;

DEFLABEL (label_474)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_473;
  Wrd20 = Wrd24;

DEFLABEL (label_472)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_137);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_145]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_136);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_471;
  Wrd14 = Wrd18;

DEFLABEL (label_470)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140]));

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_143);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_469;
  Wrd6 = Wrd10;

DEFLABEL (label_468)
  (Wrd15.Obj) = (current_block [OBJECT_127]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_467;
  Wrd17 = Wrd21;

DEFLABEL (label_466)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_465;
  Wrd28 = Wrd32;

DEFLABEL (label_464)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_463;
  Wrd39 = Wrd43;

DEFLABEL (label_462)
  (Wrd45.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_461;
  Wrd50 = Wrd54;

DEFLABEL (label_460)
  (Wrd56.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_459;
  Wrd61 = Wrd65;

DEFLABEL (label_458)
  (Wrd67.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_457;
  Wrd72 = Wrd76;

DEFLABEL (label_456)
  (Wrd78.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd87.Obj) = ((Wrd84.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_455;
  Wrd83 = Wrd87;

DEFLABEL (label_454)
  (Wrd89.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_453;
  Wrd94 = Wrd98;

DEFLABEL (label_452)
  (Wrd100.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_451;
  Wrd105 = Wrd109;

DEFLABEL (label_450)
  (Wrd111.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_449;
  Wrd116 = Wrd120;

DEFLABEL (label_448)
  (Wrd122.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd122.Obj);
  (Wrd124.pObj) = (& (Rhp [-2]));
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd124.pObj)));
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd128.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd131.Obj) = ((Wrd128.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_447;
  Wrd127 = Wrd131;

DEFLABEL (label_446)
  (Wrd133.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd139.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd142.Obj) = ((Wrd139.pObj) [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if ((Wrd143.uLng) == 50)
    goto label_445;
  Wrd138 = Wrd142;

DEFLABEL (label_444)
  (Wrd144.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd144.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd150.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd153.Obj) = ((Wrd150.pObj) [0]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if ((Wrd154.uLng) == 50)
    goto label_443;
  Wrd149 = Wrd153;

DEFLABEL (label_442)
  (Wrd155.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd149.Obj);
  (* (Rhp++)) = (Wrd155.Obj);
  (Wrd157.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd157.pObj)));
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd164.Obj) = ((Wrd161.pObj) [0]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if ((Wrd165.uLng) == 50)
    goto label_441;
  Wrd160 = Wrd164;

DEFLABEL (label_440)
  (Wrd166.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd160.Obj);
  (* (Rhp++)) = (Wrd166.Obj);
  (Wrd168.pObj) = (& (Rhp [-2]));
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd168.pObj)));
  (* (--Rsp)) = (Wrd169.Obj);
  (Wrd172.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd175.Obj) = ((Wrd172.pObj) [0]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if ((Wrd176.uLng) == 50)
    goto label_439;
  Wrd171 = Wrd175;

DEFLABEL (label_438)
  (Wrd177.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd171.Obj);
  (* (Rhp++)) = (Wrd177.Obj);
  (Wrd179.pObj) = (& (Rhp [-2]));
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd179.pObj)));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd183.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd186.Obj) = ((Wrd183.pObj) [0]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if ((Wrd187.uLng) == 50)
    goto label_437;
  Wrd182 = Wrd186;

DEFLABEL (label_436)
  (Wrd188.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd182.Obj);
  (* (Rhp++)) = (Wrd188.Obj);
  (Wrd190.pObj) = (& (Rhp [-2]));
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd190.pObj)));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd194.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd197.Obj) = ((Wrd194.pObj) [0]);
  (Wrd198.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if ((Wrd198.uLng) == 50)
    goto label_435;
  Wrd193 = Wrd197;

DEFLABEL (label_434)
  (Wrd199.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd199.Obj);
  (Wrd201.pObj) = (& (Rhp [-2]));
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd201.pObj)));
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd205.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd208.Obj) = ((Wrd205.pObj) [0]);
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if ((Wrd209.uLng) == 50)
    goto label_433;
  Wrd204 = Wrd208;

DEFLABEL (label_432)
  (Wrd210.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd204.Obj);
  (* (Rhp++)) = (Wrd210.Obj);
  (Wrd212.pObj) = (& (Rhp [-2]));
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd212.pObj)));
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd216.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd219.Obj) = ((Wrd216.pObj) [0]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if ((Wrd220.uLng) == 50)
    goto label_431;
  Wrd215 = Wrd219;

DEFLABEL (label_430)
  (Wrd221.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd215.Obj);
  (* (Rhp++)) = (Wrd221.Obj);
  (Wrd223.pObj) = (& (Rhp [-2]));
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd223.pObj)));
  (* (--Rsp)) = (Wrd224.Obj);
  (Wrd227.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd230.Obj) = ((Wrd227.pObj) [0]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if ((Wrd231.uLng) == 50)
    goto label_429;
  Wrd226 = Wrd230;

DEFLABEL (label_428)
  (Wrd232.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd226.Obj);
  (* (Rhp++)) = (Wrd232.Obj);
  (Wrd234.pObj) = (& (Rhp [-2]));
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd234.pObj)));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_427;
  Wrd237 = Wrd241;

DEFLABEL (label_426)
  (Wrd243.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd243.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (* (--Rsp)) = (Wrd246.Obj);
  (Wrd249.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31]));
  (Wrd252.Obj) = ((Wrd249.pObj) [0]);
  (Wrd253.uLng) = (OBJECT_TYPE (Wrd252.Obj));
  if ((Wrd253.uLng) == 50)
    goto label_425;
  Wrd248 = Wrd252;

DEFLABEL (label_424)
  (Wrd254.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd248.Obj);
  (* (Rhp++)) = (Wrd254.Obj);
  (Wrd256.pObj) = (& (Rhp [-2]));
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd256.pObj)));
  (* (--Rsp)) = (Wrd257.Obj);
  (Wrd260.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32]));
  (Wrd263.Obj) = ((Wrd260.pObj) [0]);
  (Wrd264.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if ((Wrd264.uLng) == 50)
    goto label_423;
  Wrd259 = Wrd263;

DEFLABEL (label_422)
  (Wrd265.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd259.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd267.pObj) = (& (Rhp [-2]));
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd267.pObj)));
  (* (--Rsp)) = (Wrd268.Obj);
  (Wrd271.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd274.Obj) = ((Wrd271.pObj) [0]);
  (Wrd275.uLng) = (OBJECT_TYPE (Wrd274.Obj));
  if ((Wrd275.uLng) == 50)
    goto label_421;
  Wrd270 = Wrd274;

DEFLABEL (label_420)
  (Wrd276.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd270.Obj);
  (* (Rhp++)) = (Wrd276.Obj);
  (Wrd278.pObj) = (& (Rhp [-2]));
  (Wrd279.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd278.pObj)));
  (* (--Rsp)) = (Wrd279.Obj);
  (Wrd282.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33]));
  (Wrd285.Obj) = ((Wrd282.pObj) [0]);
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd285.Obj));
  if ((Wrd286.uLng) == 50)
    goto label_419;
  Wrd281 = Wrd285;

DEFLABEL (label_418)
  (Wrd287.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd281.Obj);
  (* (Rhp++)) = (Wrd287.Obj);
  (Wrd289.pObj) = (& (Rhp [-2]));
  (Wrd290.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd289.pObj)));
  (* (--Rsp)) = (Wrd290.Obj);
  (Wrd293.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34]));
  (Wrd296.Obj) = ((Wrd293.pObj) [0]);
  (Wrd297.uLng) = (OBJECT_TYPE (Wrd296.Obj));
  if ((Wrd297.uLng) == 50)
    goto label_417;
  Wrd292 = Wrd296;

DEFLABEL (label_416)
  (Wrd298.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd292.Obj);
  (* (Rhp++)) = (Wrd298.Obj);
  (Wrd300.pObj) = (& (Rhp [-2]));
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd300.pObj)));
  (* (--Rsp)) = (Wrd301.Obj);
  (Wrd304.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35]));
  (Wrd307.Obj) = ((Wrd304.pObj) [0]);
  (Wrd308.uLng) = (OBJECT_TYPE (Wrd307.Obj));
  if ((Wrd308.uLng) == 50)
    goto label_415;
  Wrd303 = Wrd307;

DEFLABEL (label_414)
  (Wrd309.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd303.Obj);
  (* (Rhp++)) = (Wrd309.Obj);
  (Wrd311.pObj) = (& (Rhp [-2]));
  (Wrd312.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd311.pObj)));
  (* (--Rsp)) = (Wrd312.Obj);
  (Wrd315.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36]));
  (Wrd318.Obj) = ((Wrd315.pObj) [0]);
  (Wrd319.uLng) = (OBJECT_TYPE (Wrd318.Obj));
  if ((Wrd319.uLng) == 50)
    goto label_413;
  Wrd314 = Wrd318;

DEFLABEL (label_412)
  (Wrd320.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd314.Obj);
  (* (Rhp++)) = (Wrd320.Obj);
  (Wrd322.pObj) = (& (Rhp [-2]));
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd322.pObj)));
  (* (--Rsp)) = (Wrd323.Obj);
  (Wrd326.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37]));
  (Wrd329.Obj) = ((Wrd326.pObj) [0]);
  (Wrd330.uLng) = (OBJECT_TYPE (Wrd329.Obj));
  if ((Wrd330.uLng) == 50)
    goto label_411;
  Wrd325 = Wrd329;

DEFLABEL (label_410)
  (Wrd331.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd325.Obj);
  (* (Rhp++)) = (Wrd331.Obj);
  (Wrd333.pObj) = (& (Rhp [-2]));
  (Wrd334.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd333.pObj)));
  (* (--Rsp)) = (Wrd334.Obj);
  (Wrd337.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd340.Obj) = ((Wrd337.pObj) [0]);
  (Wrd341.uLng) = (OBJECT_TYPE (Wrd340.Obj));
  if ((Wrd341.uLng) == 50)
    goto label_409;
  Wrd336 = Wrd340;

DEFLABEL (label_408)
  (Wrd342.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd336.Obj);
  (* (Rhp++)) = (Wrd342.Obj);
  (Wrd344.pObj) = (& (Rhp [-2]));
  (Wrd345.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd344.pObj)));
  (* (--Rsp)) = (Wrd345.Obj);
  (Wrd348.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd351.Obj) = ((Wrd348.pObj) [0]);
  (Wrd352.uLng) = (OBJECT_TYPE (Wrd351.Obj));
  if ((Wrd352.uLng) == 50)
    goto label_407;
  Wrd347 = Wrd351;

DEFLABEL (label_406)
  (Wrd353.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd347.Obj);
  (* (Rhp++)) = (Wrd353.Obj);
  (Wrd355.pObj) = (& (Rhp [-2]));
  (Wrd356.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd355.pObj)));
  (* (--Rsp)) = (Wrd356.Obj);
  (Wrd359.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39]));
  (Wrd362.Obj) = ((Wrd359.pObj) [0]);
  (Wrd363.uLng) = (OBJECT_TYPE (Wrd362.Obj));
  if ((Wrd363.uLng) == 50)
    goto label_405;
  Wrd358 = Wrd362;

DEFLABEL (label_404)
  (Wrd364.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd358.Obj);
  (* (Rhp++)) = (Wrd364.Obj);
  (Wrd366.pObj) = (& (Rhp [-2]));
  (Wrd367.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd366.pObj)));
  (* (--Rsp)) = (Wrd367.Obj);
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_403;
  Wrd369 = Wrd373;

DEFLABEL (label_402)
  (Wrd375.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd369.Obj);
  (* (Rhp++)) = (Wrd375.Obj);
  (Wrd377.pObj) = (& (Rhp [-2]));
  (Wrd378.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd377.pObj)));
  (* (--Rsp)) = (Wrd378.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd384.Obj) = ((Wrd381.pObj) [0]);
  (Wrd385.uLng) = (OBJECT_TYPE (Wrd384.Obj));
  if ((Wrd385.uLng) == 50)
    goto label_401;
  Wrd380 = Wrd384;

DEFLABEL (label_400)
  (Wrd386.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd380.Obj);
  (* (Rhp++)) = (Wrd386.Obj);
  (Wrd388.pObj) = (& (Rhp [-2]));
  (Wrd389.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd388.pObj)));
  (* (--Rsp)) = (Wrd389.Obj);
  (Wrd392.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd395.Obj) = ((Wrd392.pObj) [0]);
  (Wrd396.uLng) = (OBJECT_TYPE (Wrd395.Obj));
  if ((Wrd396.uLng) == 50)
    goto label_399;
  Wrd391 = Wrd395;

DEFLABEL (label_398)
  (Wrd397.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd391.Obj);
  (* (Rhp++)) = (Wrd397.Obj);
  (Wrd399.pObj) = (& (Rhp [-2]));
  (Wrd400.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd399.pObj)));
  (* (--Rsp)) = (Wrd400.Obj);
  (Wrd403.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42]));
  (Wrd406.Obj) = ((Wrd403.pObj) [0]);
  (Wrd407.uLng) = (OBJECT_TYPE (Wrd406.Obj));
  if ((Wrd407.uLng) == 50)
    goto label_397;
  Wrd402 = Wrd406;

DEFLABEL (label_396)
  (Wrd408.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd402.Obj);
  (* (Rhp++)) = (Wrd408.Obj);
  (Wrd410.pObj) = (& (Rhp [-2]));
  (Wrd411.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd410.pObj)));
  (* (--Rsp)) = (Wrd411.Obj);
  (Wrd414.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43]));
  (Wrd417.Obj) = ((Wrd414.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_395;
  Wrd413 = Wrd417;

DEFLABEL (label_394)
  (Wrd419.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd413.Obj);
  (* (Rhp++)) = (Wrd419.Obj);
  (Wrd421.pObj) = (& (Rhp [-2]));
  (Wrd422.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd421.pObj)));
  (* (--Rsp)) = (Wrd422.Obj);
  (Wrd425.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44]));
  (Wrd428.Obj) = ((Wrd425.pObj) [0]);
  (Wrd429.uLng) = (OBJECT_TYPE (Wrd428.Obj));
  if ((Wrd429.uLng) == 50)
    goto label_393;
  Wrd424 = Wrd428;

DEFLABEL (label_392)
  (Wrd430.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd424.Obj);
  (* (Rhp++)) = (Wrd430.Obj);
  (Wrd432.pObj) = (& (Rhp [-2]));
  (Wrd433.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd432.pObj)));
  (* (--Rsp)) = (Wrd433.Obj);
  (Wrd436.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45]));
  (Wrd439.Obj) = ((Wrd436.pObj) [0]);
  (Wrd440.uLng) = (OBJECT_TYPE (Wrd439.Obj));
  if ((Wrd440.uLng) == 50)
    goto label_391;
  Wrd435 = Wrd439;

DEFLABEL (label_390)
  (Wrd441.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd435.Obj);
  (* (Rhp++)) = (Wrd441.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd444.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (* (--Rsp)) = (Wrd444.Obj);
  (Wrd447.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46]));
  (Wrd450.Obj) = ((Wrd447.pObj) [0]);
  (Wrd451.uLng) = (OBJECT_TYPE (Wrd450.Obj));
  if ((Wrd451.uLng) == 50)
    goto label_389;
  Wrd446 = Wrd450;

DEFLABEL (label_388)
  (Wrd452.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd446.Obj);
  (* (Rhp++)) = (Wrd452.Obj);
  (Wrd454.pObj) = (& (Rhp [-2]));
  (Wrd455.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd454.pObj)));
  (* (--Rsp)) = (Wrd455.Obj);
  (Wrd458.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47]));
  (Wrd461.Obj) = ((Wrd458.pObj) [0]);
  (Wrd462.uLng) = (OBJECT_TYPE (Wrd461.Obj));
  if ((Wrd462.uLng) == 50)
    goto label_387;
  Wrd457 = Wrd461;

DEFLABEL (label_386)
  (Wrd463.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd457.Obj);
  (* (Rhp++)) = (Wrd463.Obj);
  (Wrd465.pObj) = (& (Rhp [-2]));
  (Wrd466.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd465.pObj)));
  (* (--Rsp)) = (Wrd466.Obj);
  (Wrd469.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48]));
  (Wrd472.Obj) = ((Wrd469.pObj) [0]);
  (Wrd473.uLng) = (OBJECT_TYPE (Wrd472.Obj));
  if ((Wrd473.uLng) == 50)
    goto label_385;
  Wrd468 = Wrd472;

DEFLABEL (label_384)
  (Wrd474.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd468.Obj);
  (* (Rhp++)) = (Wrd474.Obj);
  (Wrd476.pObj) = (& (Rhp [-2]));
  (Wrd477.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd476.pObj)));
  (* (--Rsp)) = (Wrd477.Obj);
  (Wrd480.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49]));
  (Wrd483.Obj) = ((Wrd480.pObj) [0]);
  (Wrd484.uLng) = (OBJECT_TYPE (Wrd483.Obj));
  if ((Wrd484.uLng) == 50)
    goto label_383;
  Wrd479 = Wrd483;

DEFLABEL (label_382)
  (Wrd485.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd479.Obj);
  (* (Rhp++)) = (Wrd485.Obj);
  (Wrd487.pObj) = (& (Rhp [-2]));
  (Wrd488.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd487.pObj)));
  (* (--Rsp)) = (Wrd488.Obj);
  (Wrd491.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50]));
  (Wrd494.Obj) = ((Wrd491.pObj) [0]);
  (Wrd495.uLng) = (OBJECT_TYPE (Wrd494.Obj));
  if ((Wrd495.uLng) == 50)
    goto label_381;
  Wrd490 = Wrd494;

DEFLABEL (label_380)
  (Wrd496.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd490.Obj);
  (* (Rhp++)) = (Wrd496.Obj);
  (Wrd498.pObj) = (& (Rhp [-2]));
  (Wrd499.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd498.pObj)));
  (* (--Rsp)) = (Wrd499.Obj);
  (Wrd502.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51]));
  (Wrd505.Obj) = ((Wrd502.pObj) [0]);
  (Wrd506.uLng) = (OBJECT_TYPE (Wrd505.Obj));
  if ((Wrd506.uLng) == 50)
    goto label_379;
  Wrd501 = Wrd505;

DEFLABEL (label_378)
  (Wrd507.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd501.Obj);
  (* (Rhp++)) = (Wrd507.Obj);
  (Wrd509.pObj) = (& (Rhp [-2]));
  (Wrd510.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd509.pObj)));
  (* (--Rsp)) = (Wrd510.Obj);
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52]));
  (Wrd516.Obj) = ((Wrd513.pObj) [0]);
  (Wrd517.uLng) = (OBJECT_TYPE (Wrd516.Obj));
  if ((Wrd517.uLng) == 50)
    goto label_377;
  Wrd512 = Wrd516;

DEFLABEL (label_376)
  (Wrd518.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd512.Obj);
  (* (Rhp++)) = (Wrd518.Obj);
  (Wrd520.pObj) = (& (Rhp [-2]));
  (Wrd521.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd520.pObj)));
  (* (--Rsp)) = (Wrd521.Obj);
  (Wrd524.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53]));
  (Wrd527.Obj) = ((Wrd524.pObj) [0]);
  (Wrd528.uLng) = (OBJECT_TYPE (Wrd527.Obj));
  if ((Wrd528.uLng) == 50)
    goto label_375;
  Wrd523 = Wrd527;

DEFLABEL (label_374)
  (Wrd529.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd523.Obj);
  (* (Rhp++)) = (Wrd529.Obj);
  (Wrd531.pObj) = (& (Rhp [-2]));
  (Wrd532.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd531.pObj)));
  (* (--Rsp)) = (Wrd532.Obj);
  (Wrd535.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54]));
  (Wrd538.Obj) = ((Wrd535.pObj) [0]);
  (Wrd539.uLng) = (OBJECT_TYPE (Wrd538.Obj));
  if ((Wrd539.uLng) == 50)
    goto label_373;
  Wrd534 = Wrd538;

DEFLABEL (label_372)
  (Wrd540.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd534.Obj);
  (* (Rhp++)) = (Wrd540.Obj);
  (Wrd542.pObj) = (& (Rhp [-2]));
  (Wrd543.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd542.pObj)));
  (* (--Rsp)) = (Wrd543.Obj);
  (Wrd546.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55]));
  (Wrd549.Obj) = ((Wrd546.pObj) [0]);
  (Wrd550.uLng) = (OBJECT_TYPE (Wrd549.Obj));
  if ((Wrd550.uLng) == 50)
    goto label_371;
  Wrd545 = Wrd549;

DEFLABEL (label_370)
  (Wrd551.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd545.Obj);
  (* (Rhp++)) = (Wrd551.Obj);
  (Wrd553.pObj) = (& (Rhp [-2]));
  (Wrd554.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd553.pObj)));
  (* (--Rsp)) = (Wrd554.Obj);
  (Wrd557.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56]));
  (Wrd560.Obj) = ((Wrd557.pObj) [0]);
  (Wrd561.uLng) = (OBJECT_TYPE (Wrd560.Obj));
  if ((Wrd561.uLng) == 50)
    goto label_369;
  Wrd556 = Wrd560;

DEFLABEL (label_368)
  (Wrd562.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd556.Obj);
  (* (Rhp++)) = (Wrd562.Obj);
  (Wrd564.pObj) = (& (Rhp [-2]));
  (Wrd565.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd564.pObj)));
  (* (--Rsp)) = (Wrd565.Obj);
  (Wrd568.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57]));
  (Wrd571.Obj) = ((Wrd568.pObj) [0]);
  (Wrd572.uLng) = (OBJECT_TYPE (Wrd571.Obj));
  if ((Wrd572.uLng) == 50)
    goto label_367;
  Wrd567 = Wrd571;

DEFLABEL (label_366)
  (Wrd573.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd567.Obj);
  (* (Rhp++)) = (Wrd573.Obj);
  (Wrd575.pObj) = (& (Rhp [-2]));
  (Wrd576.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd575.pObj)));
  (* (--Rsp)) = (Wrd576.Obj);
  (Wrd579.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58]));
  (Wrd582.Obj) = ((Wrd579.pObj) [0]);
  (Wrd583.uLng) = (OBJECT_TYPE (Wrd582.Obj));
  if ((Wrd583.uLng) == 50)
    goto label_365;
  Wrd578 = Wrd582;

DEFLABEL (label_364)
  (Wrd584.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd578.Obj);
  (* (Rhp++)) = (Wrd584.Obj);
  (Wrd586.pObj) = (& (Rhp [-2]));
  (Wrd587.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd586.pObj)));
  (* (--Rsp)) = (Wrd587.Obj);
  (Wrd590.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd593.Obj) = ((Wrd590.pObj) [0]);
  (Wrd594.uLng) = (OBJECT_TYPE (Wrd593.Obj));
  if ((Wrd594.uLng) == 50)
    goto label_363;
  Wrd589 = Wrd593;

DEFLABEL (label_362)
  (Wrd595.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd589.Obj);
  (* (Rhp++)) = (Wrd595.Obj);
  (Wrd597.pObj) = (& (Rhp [-2]));
  (Wrd598.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd597.pObj)));
  (* (--Rsp)) = (Wrd598.Obj);
  (Wrd601.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59]));
  (Wrd604.Obj) = ((Wrd601.pObj) [0]);
  (Wrd605.uLng) = (OBJECT_TYPE (Wrd604.Obj));
  if ((Wrd605.uLng) == 50)
    goto label_361;
  Wrd600 = Wrd604;

DEFLABEL (label_360)
  (Wrd606.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd600.Obj);
  (* (Rhp++)) = (Wrd606.Obj);
  (Wrd608.pObj) = (& (Rhp [-2]));
  (Wrd609.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd608.pObj)));
  (* (--Rsp)) = (Wrd609.Obj);
  (Wrd612.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60]));
  (Wrd615.Obj) = ((Wrd612.pObj) [0]);
  (Wrd616.uLng) = (OBJECT_TYPE (Wrd615.Obj));
  if ((Wrd616.uLng) == 50)
    goto label_359;
  Wrd611 = Wrd615;

DEFLABEL (label_358)
  (Wrd617.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd611.Obj);
  (* (Rhp++)) = (Wrd617.Obj);
  (Wrd619.pObj) = (& (Rhp [-2]));
  (Wrd620.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd619.pObj)));
  (* (--Rsp)) = (Wrd620.Obj);
  (Wrd623.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61]));
  (Wrd626.Obj) = ((Wrd623.pObj) [0]);
  (Wrd627.uLng) = (OBJECT_TYPE (Wrd626.Obj));
  if ((Wrd627.uLng) == 50)
    goto label_357;
  Wrd622 = Wrd626;

DEFLABEL (label_356)
  (Wrd628.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd622.Obj);
  (* (Rhp++)) = (Wrd628.Obj);
  (Wrd630.pObj) = (& (Rhp [-2]));
  (Wrd631.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd630.pObj)));
  (* (--Rsp)) = (Wrd631.Obj);
  (Wrd634.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62]));
  (Wrd637.Obj) = ((Wrd634.pObj) [0]);
  (Wrd638.uLng) = (OBJECT_TYPE (Wrd637.Obj));
  if ((Wrd638.uLng) == 50)
    goto label_355;
  Wrd633 = Wrd637;

DEFLABEL (label_354)
  (Wrd639.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd633.Obj);
  (* (Rhp++)) = (Wrd639.Obj);
  (Wrd641.pObj) = (& (Rhp [-2]));
  (Wrd642.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd641.pObj)));
  (* (--Rsp)) = (Wrd642.Obj);
  (Wrd645.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63]));
  (Wrd648.Obj) = ((Wrd645.pObj) [0]);
  (Wrd649.uLng) = (OBJECT_TYPE (Wrd648.Obj));
  if ((Wrd649.uLng) == 50)
    goto label_353;
  Wrd644 = Wrd648;

DEFLABEL (label_352)
  (Wrd650.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd644.Obj);
  (* (Rhp++)) = (Wrd650.Obj);
  (Wrd652.pObj) = (& (Rhp [-2]));
  (Wrd653.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd652.pObj)));
  (* (--Rsp)) = (Wrd653.Obj);
  (Wrd656.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64]));
  (Wrd659.Obj) = ((Wrd656.pObj) [0]);
  (Wrd660.uLng) = (OBJECT_TYPE (Wrd659.Obj));
  if ((Wrd660.uLng) == 50)
    goto label_351;
  Wrd655 = Wrd659;

DEFLABEL (label_350)
  (Wrd661.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd655.Obj);
  (* (Rhp++)) = (Wrd661.Obj);
  (Wrd663.pObj) = (& (Rhp [-2]));
  (Wrd664.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd663.pObj)));
  (* (--Rsp)) = (Wrd664.Obj);
  (Wrd667.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65]));
  (Wrd670.Obj) = ((Wrd667.pObj) [0]);
  (Wrd671.uLng) = (OBJECT_TYPE (Wrd670.Obj));
  if ((Wrd671.uLng) == 50)
    goto label_349;
  Wrd666 = Wrd670;

DEFLABEL (label_348)
  (Wrd672.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd666.Obj);
  (* (Rhp++)) = (Wrd672.Obj);
  (Wrd674.pObj) = (& (Rhp [-2]));
  (Wrd675.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd674.pObj)));
  (* (--Rsp)) = (Wrd675.Obj);
  (Wrd678.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66]));
  (Wrd681.Obj) = ((Wrd678.pObj) [0]);
  (Wrd682.uLng) = (OBJECT_TYPE (Wrd681.Obj));
  if ((Wrd682.uLng) == 50)
    goto label_347;
  Wrd677 = Wrd681;

DEFLABEL (label_346)
  (Wrd683.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd677.Obj);
  (* (Rhp++)) = (Wrd683.Obj);
  (Wrd685.pObj) = (& (Rhp [-2]));
  (Wrd686.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd685.pObj)));
  (* (--Rsp)) = (Wrd686.Obj);
  (Wrd689.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67]));
  (Wrd692.Obj) = ((Wrd689.pObj) [0]);
  (Wrd693.uLng) = (OBJECT_TYPE (Wrd692.Obj));
  if ((Wrd693.uLng) == 50)
    goto label_345;
  Wrd688 = Wrd692;

DEFLABEL (label_344)
  (Wrd694.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd688.Obj);
  (* (Rhp++)) = (Wrd694.Obj);
  (Wrd696.pObj) = (& (Rhp [-2]));
  (Wrd697.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd696.pObj)));
  (* (--Rsp)) = (Wrd697.Obj);
  (Wrd700.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68]));
  (Wrd703.Obj) = ((Wrd700.pObj) [0]);
  (Wrd704.uLng) = (OBJECT_TYPE (Wrd703.Obj));
  if ((Wrd704.uLng) == 50)
    goto label_343;
  Wrd699 = Wrd703;

DEFLABEL (label_342)
  (Wrd705.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd699.Obj);
  (* (Rhp++)) = (Wrd705.Obj);
  (Wrd707.pObj) = (& (Rhp [-2]));
  (Wrd708.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd707.pObj)));
  (* (--Rsp)) = (Wrd708.Obj);
  (Wrd711.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69]));
  (Wrd714.Obj) = ((Wrd711.pObj) [0]);
  (Wrd715.uLng) = (OBJECT_TYPE (Wrd714.Obj));
  if ((Wrd715.uLng) == 50)
    goto label_341;
  Wrd710 = Wrd714;

DEFLABEL (label_340)
  (Wrd716.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd710.Obj);
  (* (Rhp++)) = (Wrd716.Obj);
  (Wrd718.pObj) = (& (Rhp [-2]));
  (Wrd719.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd718.pObj)));
  (* (--Rsp)) = (Wrd719.Obj);
  (Wrd722.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70]));
  (Wrd725.Obj) = ((Wrd722.pObj) [0]);
  (Wrd726.uLng) = (OBJECT_TYPE (Wrd725.Obj));
  if ((Wrd726.uLng) == 50)
    goto label_339;
  Wrd721 = Wrd725;

DEFLABEL (label_338)
  (Wrd727.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd721.Obj);
  (* (Rhp++)) = (Wrd727.Obj);
  (Wrd729.pObj) = (& (Rhp [-2]));
  (Wrd730.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd729.pObj)));
  (* (--Rsp)) = (Wrd730.Obj);
  (Wrd733.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71]));
  (Wrd736.Obj) = ((Wrd733.pObj) [0]);
  (Wrd737.uLng) = (OBJECT_TYPE (Wrd736.Obj));
  if ((Wrd737.uLng) == 50)
    goto label_337;
  Wrd732 = Wrd736;

DEFLABEL (label_336)
  (Wrd738.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd732.Obj);
  (* (Rhp++)) = (Wrd738.Obj);
  (Wrd740.pObj) = (& (Rhp [-2]));
  (Wrd741.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd740.pObj)));
  (* (--Rsp)) = (Wrd741.Obj);
  (Wrd744.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72]));
  (Wrd747.Obj) = ((Wrd744.pObj) [0]);
  (Wrd748.uLng) = (OBJECT_TYPE (Wrd747.Obj));
  if ((Wrd748.uLng) == 50)
    goto label_335;
  Wrd743 = Wrd747;

DEFLABEL (label_334)
  (Wrd749.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd743.Obj);
  (* (Rhp++)) = (Wrd749.Obj);
  (Wrd751.pObj) = (& (Rhp [-2]));
  (Wrd752.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd751.pObj)));
  (* (--Rsp)) = (Wrd752.Obj);
  (Wrd755.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73]));
  (Wrd758.Obj) = ((Wrd755.pObj) [0]);
  (Wrd759.uLng) = (OBJECT_TYPE (Wrd758.Obj));
  if ((Wrd759.uLng) == 50)
    goto label_333;
  Wrd754 = Wrd758;

DEFLABEL (label_332)
  (Wrd760.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd754.Obj);
  (* (Rhp++)) = (Wrd760.Obj);
  (Wrd762.pObj) = (& (Rhp [-2]));
  (Wrd763.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd762.pObj)));
  (* (--Rsp)) = (Wrd763.Obj);
  (Wrd766.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74]));
  (Wrd769.Obj) = ((Wrd766.pObj) [0]);
  (Wrd770.uLng) = (OBJECT_TYPE (Wrd769.Obj));
  if ((Wrd770.uLng) == 50)
    goto label_331;
  Wrd765 = Wrd769;

DEFLABEL (label_330)
  (Wrd771.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd765.Obj);
  (* (Rhp++)) = (Wrd771.Obj);
  (Wrd773.pObj) = (& (Rhp [-2]));
  (Wrd774.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd773.pObj)));
  (* (--Rsp)) = (Wrd774.Obj);
  (Wrd777.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd780.Obj) = ((Wrd777.pObj) [0]);
  (Wrd781.uLng) = (OBJECT_TYPE (Wrd780.Obj));
  if ((Wrd781.uLng) == 50)
    goto label_329;
  Wrd776 = Wrd780;

DEFLABEL (label_328)
  (Wrd782.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd776.Obj);
  (* (Rhp++)) = (Wrd782.Obj);
  (Wrd784.pObj) = (& (Rhp [-2]));
  (Wrd785.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd784.pObj)));
  (* (--Rsp)) = (Wrd785.Obj);
  (Wrd788.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75]));
  (Wrd791.Obj) = ((Wrd788.pObj) [0]);
  (Wrd792.uLng) = (OBJECT_TYPE (Wrd791.Obj));
  if ((Wrd792.uLng) == 50)
    goto label_327;
  Wrd787 = Wrd791;

DEFLABEL (label_326)
  (Wrd793.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd787.Obj);
  (* (Rhp++)) = (Wrd793.Obj);
  (Wrd795.pObj) = (& (Rhp [-2]));
  (Wrd796.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd795.pObj)));
  (* (--Rsp)) = (Wrd796.Obj);
  (Wrd799.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76]));
  (Wrd802.Obj) = ((Wrd799.pObj) [0]);
  (Wrd803.uLng) = (OBJECT_TYPE (Wrd802.Obj));
  if ((Wrd803.uLng) == 50)
    goto label_325;
  Wrd798 = Wrd802;

DEFLABEL (label_324)
  (Wrd804.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd798.Obj);
  (* (Rhp++)) = (Wrd804.Obj);
  (Wrd806.pObj) = (& (Rhp [-2]));
  (Wrd807.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd806.pObj)));
  (* (--Rsp)) = (Wrd807.Obj);
  (Wrd810.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd813.Obj) = ((Wrd810.pObj) [0]);
  (Wrd814.uLng) = (OBJECT_TYPE (Wrd813.Obj));
  if ((Wrd814.uLng) == 50)
    goto label_323;
  Wrd809 = Wrd813;

DEFLABEL (label_322)
  (Wrd815.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd809.Obj);
  (* (Rhp++)) = (Wrd815.Obj);
  (Wrd817.pObj) = (& (Rhp [-2]));
  (Wrd818.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd817.pObj)));
  (* (--Rsp)) = (Wrd818.Obj);
  (Wrd821.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77]));
  (Wrd824.Obj) = ((Wrd821.pObj) [0]);
  (Wrd825.uLng) = (OBJECT_TYPE (Wrd824.Obj));
  if ((Wrd825.uLng) == 50)
    goto label_321;
  Wrd820 = Wrd824;

DEFLABEL (label_320)
  (Wrd826.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd820.Obj);
  (* (Rhp++)) = (Wrd826.Obj);
  (Wrd828.pObj) = (& (Rhp [-2]));
  (Wrd829.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd828.pObj)));
  (* (--Rsp)) = (Wrd829.Obj);
  (Wrd832.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78]));
  (Wrd835.Obj) = ((Wrd832.pObj) [0]);
  (Wrd836.uLng) = (OBJECT_TYPE (Wrd835.Obj));
  if ((Wrd836.uLng) == 50)
    goto label_319;
  Wrd831 = Wrd835;

DEFLABEL (label_318)
  (Wrd837.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd831.Obj);
  (* (Rhp++)) = (Wrd837.Obj);
  (Wrd839.pObj) = (& (Rhp [-2]));
  (Wrd840.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd839.pObj)));
  (* (--Rsp)) = (Wrd840.Obj);
  (Wrd843.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79]));
  (Wrd846.Obj) = ((Wrd843.pObj) [0]);
  (Wrd847.uLng) = (OBJECT_TYPE (Wrd846.Obj));
  if ((Wrd847.uLng) == 50)
    goto label_317;
  Wrd842 = Wrd846;

DEFLABEL (label_316)
  (Wrd848.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd842.Obj);
  (* (Rhp++)) = (Wrd848.Obj);
  (Wrd850.pObj) = (& (Rhp [-2]));
  (Wrd851.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd850.pObj)));
  (* (--Rsp)) = (Wrd851.Obj);
  (Wrd854.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80]));
  (Wrd857.Obj) = ((Wrd854.pObj) [0]);
  (Wrd858.uLng) = (OBJECT_TYPE (Wrd857.Obj));
  if ((Wrd858.uLng) == 50)
    goto label_315;
  Wrd853 = Wrd857;

DEFLABEL (label_314)
  (Wrd859.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd853.Obj);
  (* (Rhp++)) = (Wrd859.Obj);
  (Wrd861.pObj) = (& (Rhp [-2]));
  (Wrd862.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd861.pObj)));
  (* (--Rsp)) = (Wrd862.Obj);
  (Wrd865.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd868.Obj) = ((Wrd865.pObj) [0]);
  (Wrd869.uLng) = (OBJECT_TYPE (Wrd868.Obj));
  if ((Wrd869.uLng) == 50)
    goto label_313;
  Wrd864 = Wrd868;

DEFLABEL (label_312)
  (Wrd870.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd864.Obj);
  (* (Rhp++)) = (Wrd870.Obj);
  (Wrd872.pObj) = (& (Rhp [-2]));
  (Wrd873.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd872.pObj)));
  (* (--Rsp)) = (Wrd873.Obj);
  (Wrd876.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd879.Obj) = ((Wrd876.pObj) [0]);
  (Wrd880.uLng) = (OBJECT_TYPE (Wrd879.Obj));
  if ((Wrd880.uLng) == 50)
    goto label_311;
  Wrd875 = Wrd879;

DEFLABEL (label_310)
  (Wrd881.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd875.Obj);
  (* (Rhp++)) = (Wrd881.Obj);
  (Wrd883.pObj) = (& (Rhp [-2]));
  (Wrd884.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd883.pObj)));
  (* (--Rsp)) = (Wrd884.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_145]));

DEFLABEL (continuation_201)
  INTERRUPT_CHECK (27, LABEL_142);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_202)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_309;
  Wrd11 = Wrd15;

DEFLABEL (label_308)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_307;
  Wrd17 = Wrd21;

DEFLABEL (label_306)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_305;
  Wrd23 = Wrd27;

DEFLABEL (label_304)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151]));

DEFLABEL (continuation_203)
  INTERRUPT_CHECK (27, LABEL_147);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_232]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_232);
  (Wrd5.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_233]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_234]));

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_233);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (label_305)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_150])), (Wrd24.pObj));

DEFLABEL (label_219)
  (Wrd23.Obj) = Rvl;
  goto label_304;

DEFLABEL (label_307)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_149])), (Wrd18.pObj));

DEFLABEL (label_218)
  (Wrd17.Obj) = Rvl;
  goto label_306;

DEFLABEL (label_309)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_148])), (Wrd12.pObj));

DEFLABEL (label_217)
  (Wrd11.Obj) = Rvl;
  goto label_308;

DEFLABEL (label_311)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_231])), (Wrd876.pObj));

DEFLABEL (label_299)
  (Wrd875.Obj) = Rvl;
  goto label_310;

DEFLABEL (label_313)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_230])), (Wrd865.pObj));

DEFLABEL (label_298)
  (Wrd864.Obj) = Rvl;
  goto label_312;

DEFLABEL (label_315)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_229])), (Wrd854.pObj));

DEFLABEL (label_297)
  (Wrd853.Obj) = Rvl;
  goto label_314;

DEFLABEL (label_317)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_228])), (Wrd843.pObj));

DEFLABEL (label_296)
  (Wrd842.Obj) = Rvl;
  goto label_316;

DEFLABEL (label_319)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_227])), (Wrd832.pObj));

DEFLABEL (label_295)
  (Wrd831.Obj) = Rvl;
  goto label_318;

DEFLABEL (label_321)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_226])), (Wrd821.pObj));

DEFLABEL (label_294)
  (Wrd820.Obj) = Rvl;
  goto label_320;

DEFLABEL (label_323)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_225])), (Wrd810.pObj));

DEFLABEL (label_293)
  (Wrd809.Obj) = Rvl;
  goto label_322;

DEFLABEL (label_325)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_224])), (Wrd799.pObj));

DEFLABEL (label_292)
  (Wrd798.Obj) = Rvl;
  goto label_324;

DEFLABEL (label_327)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_223])), (Wrd788.pObj));

DEFLABEL (label_291)
  (Wrd787.Obj) = Rvl;
  goto label_326;

DEFLABEL (label_329)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_222])), (Wrd777.pObj));

DEFLABEL (label_290)
  (Wrd776.Obj) = Rvl;
  goto label_328;

DEFLABEL (label_331)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_221])), (Wrd766.pObj));

DEFLABEL (label_289)
  (Wrd765.Obj) = Rvl;
  goto label_330;

DEFLABEL (label_333)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_220])), (Wrd755.pObj));

DEFLABEL (label_288)
  (Wrd754.Obj) = Rvl;
  goto label_332;

DEFLABEL (label_335)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_219])), (Wrd744.pObj));

DEFLABEL (label_287)
  (Wrd743.Obj) = Rvl;
  goto label_334;

DEFLABEL (label_337)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_218])), (Wrd733.pObj));

DEFLABEL (label_286)
  (Wrd732.Obj) = Rvl;
  goto label_336;

DEFLABEL (label_339)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_217])), (Wrd722.pObj));

DEFLABEL (label_285)
  (Wrd721.Obj) = Rvl;
  goto label_338;

DEFLABEL (label_341)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_216])), (Wrd711.pObj));

DEFLABEL (label_284)
  (Wrd710.Obj) = Rvl;
  goto label_340;

DEFLABEL (label_343)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_215])), (Wrd700.pObj));

DEFLABEL (label_283)
  (Wrd699.Obj) = Rvl;
  goto label_342;

DEFLABEL (label_345)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_214])), (Wrd689.pObj));

DEFLABEL (label_282)
  (Wrd688.Obj) = Rvl;
  goto label_344;

DEFLABEL (label_347)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_213])), (Wrd678.pObj));

DEFLABEL (label_281)
  (Wrd677.Obj) = Rvl;
  goto label_346;

DEFLABEL (label_349)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_212])), (Wrd667.pObj));

DEFLABEL (label_280)
  (Wrd666.Obj) = Rvl;
  goto label_348;

DEFLABEL (label_351)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_211])), (Wrd656.pObj));

DEFLABEL (label_279)
  (Wrd655.Obj) = Rvl;
  goto label_350;

DEFLABEL (label_353)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_210])), (Wrd645.pObj));

DEFLABEL (label_278)
  (Wrd644.Obj) = Rvl;
  goto label_352;

DEFLABEL (label_355)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_209])), (Wrd634.pObj));

DEFLABEL (label_277)
  (Wrd633.Obj) = Rvl;
  goto label_354;

DEFLABEL (label_357)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_208])), (Wrd623.pObj));

DEFLABEL (label_276)
  (Wrd622.Obj) = Rvl;
  goto label_356;

DEFLABEL (label_359)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_207])), (Wrd612.pObj));

DEFLABEL (label_275)
  (Wrd611.Obj) = Rvl;
  goto label_358;

DEFLABEL (label_361)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_206])), (Wrd601.pObj));

DEFLABEL (label_274)
  (Wrd600.Obj) = Rvl;
  goto label_360;

DEFLABEL (label_363)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_205])), (Wrd590.pObj));

DEFLABEL (label_273)
  (Wrd589.Obj) = Rvl;
  goto label_362;

DEFLABEL (label_365)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_204])), (Wrd579.pObj));

DEFLABEL (label_272)
  (Wrd578.Obj) = Rvl;
  goto label_364;

DEFLABEL (label_367)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_203])), (Wrd568.pObj));

DEFLABEL (label_271)
  (Wrd567.Obj) = Rvl;
  goto label_366;

DEFLABEL (label_369)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_202])), (Wrd557.pObj));

DEFLABEL (label_270)
  (Wrd556.Obj) = Rvl;
  goto label_368;

DEFLABEL (label_371)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_201])), (Wrd546.pObj));

DEFLABEL (label_269)
  (Wrd545.Obj) = Rvl;
  goto label_370;

DEFLABEL (label_373)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_200])), (Wrd535.pObj));

DEFLABEL (label_268)
  (Wrd534.Obj) = Rvl;
  goto label_372;

DEFLABEL (label_375)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_199])), (Wrd524.pObj));

DEFLABEL (label_267)
  (Wrd523.Obj) = Rvl;
  goto label_374;

DEFLABEL (label_377)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_198])), (Wrd513.pObj));

DEFLABEL (label_266)
  (Wrd512.Obj) = Rvl;
  goto label_376;

DEFLABEL (label_379)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_197])), (Wrd502.pObj));

DEFLABEL (label_265)
  (Wrd501.Obj) = Rvl;
  goto label_378;

DEFLABEL (label_381)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_196])), (Wrd491.pObj));

DEFLABEL (label_264)
  (Wrd490.Obj) = Rvl;
  goto label_380;

DEFLABEL (label_383)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_195])), (Wrd480.pObj));

DEFLABEL (label_263)
  (Wrd479.Obj) = Rvl;
  goto label_382;

DEFLABEL (label_385)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_194])), (Wrd469.pObj));

DEFLABEL (label_262)
  (Wrd468.Obj) = Rvl;
  goto label_384;

DEFLABEL (label_387)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_193])), (Wrd458.pObj));

DEFLABEL (label_261)
  (Wrd457.Obj) = Rvl;
  goto label_386;

DEFLABEL (label_389)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_192])), (Wrd447.pObj));

DEFLABEL (label_260)
  (Wrd446.Obj) = Rvl;
  goto label_388;

DEFLABEL (label_391)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_191])), (Wrd436.pObj));

DEFLABEL (label_259)
  (Wrd435.Obj) = Rvl;
  goto label_390;

DEFLABEL (label_393)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_190])), (Wrd425.pObj));

DEFLABEL (label_258)
  (Wrd424.Obj) = Rvl;
  goto label_392;

DEFLABEL (label_395)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_189])), (Wrd414.pObj));

DEFLABEL (label_257)
  (Wrd413.Obj) = Rvl;
  goto label_394;

DEFLABEL (label_397)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_188])), (Wrd403.pObj));

DEFLABEL (label_256)
  (Wrd402.Obj) = Rvl;
  goto label_396;

DEFLABEL (label_399)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_187])), (Wrd392.pObj));

DEFLABEL (label_255)
  (Wrd391.Obj) = Rvl;
  goto label_398;

DEFLABEL (label_401)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_186])), (Wrd381.pObj));

DEFLABEL (label_254)
  (Wrd380.Obj) = Rvl;
  goto label_400;

DEFLABEL (label_403)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_185])), (Wrd370.pObj));

DEFLABEL (label_253)
  (Wrd369.Obj) = Rvl;
  goto label_402;

DEFLABEL (label_405)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_184])), (Wrd359.pObj));

DEFLABEL (label_252)
  (Wrd358.Obj) = Rvl;
  goto label_404;

DEFLABEL (label_407)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_183])), (Wrd348.pObj));

DEFLABEL (label_251)
  (Wrd347.Obj) = Rvl;
  goto label_406;

DEFLABEL (label_409)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_182])), (Wrd337.pObj));

DEFLABEL (label_250)
  (Wrd336.Obj) = Rvl;
  goto label_408;

DEFLABEL (label_411)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_181])), (Wrd326.pObj));

DEFLABEL (label_249)
  (Wrd325.Obj) = Rvl;
  goto label_410;

DEFLABEL (label_413)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_180])), (Wrd315.pObj));

DEFLABEL (label_248)
  (Wrd314.Obj) = Rvl;
  goto label_412;

DEFLABEL (label_415)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_179])), (Wrd304.pObj));

DEFLABEL (label_247)
  (Wrd303.Obj) = Rvl;
  goto label_414;

DEFLABEL (label_417)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_178])), (Wrd293.pObj));

DEFLABEL (label_246)
  (Wrd292.Obj) = Rvl;
  goto label_416;

DEFLABEL (label_419)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_177])), (Wrd282.pObj));

DEFLABEL (label_245)
  (Wrd281.Obj) = Rvl;
  goto label_418;

DEFLABEL (label_421)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_176])), (Wrd271.pObj));

DEFLABEL (label_244)
  (Wrd270.Obj) = Rvl;
  goto label_420;

DEFLABEL (label_423)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_175])), (Wrd260.pObj));

DEFLABEL (label_243)
  (Wrd259.Obj) = Rvl;
  goto label_422;

DEFLABEL (label_425)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_174])), (Wrd249.pObj));

DEFLABEL (label_242)
  (Wrd248.Obj) = Rvl;
  goto label_424;

DEFLABEL (label_427)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_173])), (Wrd238.pObj));

DEFLABEL (label_241)
  (Wrd237.Obj) = Rvl;
  goto label_426;

DEFLABEL (label_429)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_172])), (Wrd227.pObj));

DEFLABEL (label_240)
  (Wrd226.Obj) = Rvl;
  goto label_428;

DEFLABEL (label_431)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_171])), (Wrd216.pObj));

DEFLABEL (label_239)
  (Wrd215.Obj) = Rvl;
  goto label_430;

DEFLABEL (label_433)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_170])), (Wrd205.pObj));

DEFLABEL (label_238)
  (Wrd204.Obj) = Rvl;
  goto label_432;

DEFLABEL (label_435)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_169])), (Wrd194.pObj));

DEFLABEL (label_237)
  (Wrd193.Obj) = Rvl;
  goto label_434;

DEFLABEL (label_437)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_168])), (Wrd183.pObj));

DEFLABEL (label_236)
  (Wrd182.Obj) = Rvl;
  goto label_436;

DEFLABEL (label_439)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_167])), (Wrd172.pObj));

DEFLABEL (label_235)
  (Wrd171.Obj) = Rvl;
  goto label_438;

DEFLABEL (label_441)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_166])), (Wrd161.pObj));

DEFLABEL (label_234)
  (Wrd160.Obj) = Rvl;
  goto label_440;

DEFLABEL (label_443)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_165])), (Wrd150.pObj));

DEFLABEL (label_233)
  (Wrd149.Obj) = Rvl;
  goto label_442;

DEFLABEL (label_445)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_164])), (Wrd139.pObj));

DEFLABEL (label_232)
  (Wrd138.Obj) = Rvl;
  goto label_444;

DEFLABEL (label_447)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_163])), (Wrd128.pObj));

DEFLABEL (label_231)
  (Wrd127.Obj) = Rvl;
  goto label_446;

DEFLABEL (label_449)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_162])), (Wrd117.pObj));

DEFLABEL (label_230)
  (Wrd116.Obj) = Rvl;
  goto label_448;

DEFLABEL (label_451)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_161])), (Wrd106.pObj));

DEFLABEL (label_229)
  (Wrd105.Obj) = Rvl;
  goto label_450;

DEFLABEL (label_453)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_160])), (Wrd95.pObj));

DEFLABEL (label_228)
  (Wrd94.Obj) = Rvl;
  goto label_452;

DEFLABEL (label_455)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_159])), (Wrd84.pObj));

DEFLABEL (label_227)
  (Wrd83.Obj) = Rvl;
  goto label_454;

DEFLABEL (label_457)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_158])), (Wrd73.pObj));

DEFLABEL (label_226)
  (Wrd72.Obj) = Rvl;
  goto label_456;

DEFLABEL (label_459)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_157])), (Wrd62.pObj));

DEFLABEL (label_225)
  (Wrd61.Obj) = Rvl;
  goto label_458;

DEFLABEL (label_461)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_156])), (Wrd51.pObj));

DEFLABEL (label_224)
  (Wrd50.Obj) = Rvl;
  goto label_460;

DEFLABEL (label_463)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_155])), (Wrd40.pObj));

DEFLABEL (label_223)
  (Wrd39.Obj) = Rvl;
  goto label_462;

DEFLABEL (label_465)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_154])), (Wrd29.pObj));

DEFLABEL (label_222)
  (Wrd28.Obj) = Rvl;
  goto label_464;

DEFLABEL (label_467)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_153])), (Wrd18.pObj));

DEFLABEL (label_221)
  (Wrd17.Obj) = Rvl;
  goto label_466;

DEFLABEL (label_469)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_152])), (Wrd7.pObj));

DEFLABEL (label_220)
  (Wrd6.Obj) = Rvl;
  goto label_468;

DEFLABEL (label_471)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_144])), (Wrd15.pObj));

DEFLABEL (label_216)
  (Wrd14.Obj) = Rvl;
  goto label_470;

DEFLABEL (label_473)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139])), (Wrd21.pObj));

DEFLABEL (label_215)
  (Wrd20.Obj) = Rvl;
  goto label_472;

DEFLABEL (label_475)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_138])), (Wrd15.pObj));

DEFLABEL (label_214)
  (Wrd14.Obj) = Rvl;
  goto label_474;

DEFLABEL (label_477)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd13.pObj));

DEFLABEL (label_213)
  (Wrd12.Obj) = Rvl;
  goto label_476;

DEFLABEL (label_479)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd13.pObj));

DEFLABEL (label_212)
  (Wrd12.Obj) = Rvl;
  goto label_478;

DEFLABEL (label_481)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd9.pObj));

DEFLABEL (label_211)
  (Wrd8.Obj) = Rvl;
  goto label_480;

DEFLABEL (label_483)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd12.pObj));

DEFLABEL (label_210)
  (Wrd11.Obj) = Rvl;
  goto label_482;

DEFLABEL (label_485)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd12.pObj));

DEFLABEL (label_209)
  (Wrd11.Obj) = Rvl;
  goto label_484;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_usiexp_so_c1a95deae0cae5cf [48] =
  {
    { "usiexp_so_code_1", 2, usiexp_so_code_1 },
    { "usiexp_so_code_2", 8, usiexp_so_code_2 },
    { "usiexp_so_code_3", 3, usiexp_so_code_3 },
    { "usiexp_so_code_4", 3, usiexp_so_code_4 },
    { "usiexp_so_code_5", 5, usiexp_so_code_5 },
    { "usiexp_so_code_6", 13, usiexp_so_code_6 },
    { "usiexp_so_code_7", 3, usiexp_so_code_7 },
    { "usiexp_so_code_8", 4, usiexp_so_code_8 },
    { "usiexp_so_code_9", 4, usiexp_so_code_9 },
    { "usiexp_so_code_10", 5, usiexp_so_code_10 },
    { "usiexp_so_code_11", 5, usiexp_so_code_11 },
    { "usiexp_so_code_12", 14, usiexp_so_code_12 },
    { "usiexp_so_code_13", 3, usiexp_so_code_13 },
    { "usiexp_so_code_14", 1, usiexp_so_code_14 },
    { "usiexp_so_code_15", 24, usiexp_so_code_15 },
    { "usiexp_so_code_16", 10, usiexp_so_code_16 },
    { "usiexp_so_code_17", 2, usiexp_so_code_17 },
    { "usiexp_so_code_18", 1, usiexp_so_code_18 },
    { "usiexp_so_code_19", 6, usiexp_so_code_19 },
    { "usiexp_so_code_20", 1, usiexp_so_code_20 },
    { "usiexp_so_code_21", 5, usiexp_so_code_21 },
    { "usiexp_so_code_22", 1, usiexp_so_code_22 },
    { "usiexp_so_code_23", 6, usiexp_so_code_23 },
    { "usiexp_so_code_24", 20, usiexp_so_code_24 },
    { "usiexp_so_code_25", 7, usiexp_so_code_25 },
    { "usiexp_so_code_26", 5, usiexp_so_code_26 },
    { "usiexp_so_code_27", 5, usiexp_so_code_27 },
    { "usiexp_so_code_28", 9, usiexp_so_code_28 },
    { "usiexp_so_code_29", 22, usiexp_so_code_29 },
    { "usiexp_so_code_30", 23, usiexp_so_code_30 },
    { "usiexp_so_code_31", 5, usiexp_so_code_31 },
    { "usiexp_so_code_32", 20, usiexp_so_code_32 },
    { "usiexp_so_code_33", 2, usiexp_so_code_33 },
    { "usiexp_so_code_34", 14, usiexp_so_code_34 },
    { "usiexp_so_code_35", 4, usiexp_so_code_35 },
    { "usiexp_so_code_36", 6, usiexp_so_code_36 },
    { "usiexp_so_code_37", 7, usiexp_so_code_37 },
    { "usiexp_so_code_38", 9, usiexp_so_code_38 },
    { "usiexp_so_code_39", 6, usiexp_so_code_39 },
    { "usiexp_so_code_40", 5, usiexp_so_code_40 },
    { "usiexp_so_code_41", 8, usiexp_so_code_41 },
    { "usiexp_so_code_42", 2, usiexp_so_code_42 },
    { "usiexp_so_code_43", 11, usiexp_so_code_43 },
    { "usiexp_so_code_44", 11, usiexp_so_code_44 },
    { "usiexp_so_code_45", 4, usiexp_so_code_45 },
    { "usiexp_so_code_46", 4, usiexp_so_code_46 },
    { "usiexp_so_code_47", 4, usiexp_so_code_47 },
    { "usiexp_so_code_48", 8, usiexp_so_code_48 }
  };

int
decl_usiexp_so_c1a95deae0cae5cf (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_usiexp_so_c1a95deae0cae5cf);
  return (0);
}

DECLARE_COMPILED_CODE ("usiexp.so", 221, decl_usiexp_so_c1a95deae0cae5cf, usiexp_so_c1a95deae0cae5cf)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_usiexp_so_data_c1a95deae0cae5cf [10543] =
  "\xb3\x05\x64\xde\x14\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88"
  "\x07\x08\x0c\x0d\xbc\x24\x28\x0d\xbd\x28\xb2\x28\x0d\xbe\x28\x0d"
  "\xbf\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88"
  "\x07\xc2\x1c\x82\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x08\xc1\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x08\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\xc1\x1c\x80\x08\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\xc1\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x1b\x80\x08\x1b\x28\xb1\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\xc2\x08\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x08"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x81\x1b\x1b\x85\x28\x0d\x28\x0d"
  "\x1c\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x08\xc1\x1c\x81\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x08\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x84\x1b\x83\x82\x1b\x81\x08\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\xb1\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xc2\x08"
  "\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x08\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\xc2\x1b\x82\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x1b\x08\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c"
  "\x1b\x81\x08\x1b\x28\x1b\x28\xb1\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x0d\x1c\x08\x89\x08\x88\x0c\x0d\x1b\x07\x08\xb4\x24\x28"
  "\xb6\x28\x1b\x28\x0d\x1c\x28\x0d\x28\xb2\x28\x1b\x28\xb7\x28\x0d"
  "\x28\xb5\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x84\x1b\x83\x1b\x28\x0d\xbf\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbe\x1d\xb0\x02\x88\x81\x84\x1b\x83\x1b\x28\xb7\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd"
  "\x1d\xb0\x02\x88\x1b\x1b\x84\x82\x1b\x83\xc2\xbc\x28\xb7\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x0d"
  "\xba\x82\x86\x1b\x84\x02\xb4\x0c\x1b\x08\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\xb1\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x82\x1b\x84\x85\xb4\x0c\x1b\x08"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb1\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x08\x81\x28\x1b\x28\xb1"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x1b\x1b\x08\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbc\x1d\xb0\x02\x88\xc1\x08\x1b\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x07\x1b\x08\x1b\x28\x1b"
  "\x28\x0d\x28\xb1\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x02\x1b\x08\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x02\x02\x1b\x08\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x86\x02\x02\x02\x1b\x08\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x85\x02\x1b\x08\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x08\x1b\x28\x0d\x28\x1b\x28\xb1\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x1b\x08\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x08"
  "\x28\xb1\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x08\x1b\x1b\x82\x1b\x28\x0d\x1c\x28\x1b\x28\xb1\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x08\x1b"
  "\x1b\x82\x1b\x28\x0d\x1c\x28\x1b\x28\xb1\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x82\x08\x1b\x28\xb1"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x0d\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xb8\x17\x1c\x88\x1b\x0d\x0d\x08\x89\x0d\x0d\x0d\xb0\x2a\x08"
  "\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb2\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x08\x14\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x1b\x1b\x0d\x1c\x0d\x1c\x0d\xb8\x0d\x1c\x0d\x1c\x17\x1b\x2a"
  "\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x02\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x9b\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x9b\x0d\x1c\x02\x0d\x1c\x02"
  "\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x83\x0d"
  "\xbc\x02\x0d\xb9\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c"
  "\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02"
  "\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d"
  "\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c"
  "\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x84\x0d\x1c\x85\x0d\x1c\x86"
  "\x02\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x0d\x1c\x0d\x1c"
  "\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a"
  "\xb5\x2a\xb6\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x17\x0d\x1c\x1b\x2a\x1b\x2a\x0d\x1c\x0d\x1c\x0d\x1c\x99"
  "\x1b\x2a\x1b\x2a\x99\x0d\x1c\x81\x1b\x2a\x80\x1b\x2a\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c\x0d\x1c\x0d\x1c\xc2\x0d"
  "\x1c\xc2\xc2\x0d\x0d\x1c\x0d\x1c\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c"
  "\xc2\x0d\x1c\xc2\x0d\x1c\xc2\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\xc1"
  "\xc3\x0d\x1c\xc1\xc1\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x9c\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x9c\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b"
  "\x0d\xb2\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\xb0\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb4\x1b\xb1\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x50\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x75\x73\x69\x65\x78\x70\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x0e\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x2f\x6d\x61\x6b\x65\x06\x11\x63\x6f\x6d\x62\x69\x6e"
  "\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x03\xdf\x01\x06\x81\x89"
  "\x02\xde\x01\x04\x86\x0a\x05\x0d\x02\x08\x6f\x70\x65\x72\x61\x6e"
  "\x64\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c\x65\x74"
  "\x02\x03\x1a\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74"
  "\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x06\x05\x0b\x62"
  "\x6c\x6f\x63\x6b\x2f\x6d\x61\x6b\x65\x04\x14\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2f\x6d\x61\x6b\x65\x26\x62\x69\x6e\x64\x21\x05\x0f"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2f\x6d\x61\x6b\x65\x09\x09"
  "\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6d\x61\x6b\x65\x0a"
  "\x07\xe7\x01\x12\x81\x91\x02\xe6\x01\x10\x81\x8f\x02\xe5\x01\x0e"
  "\x81\x89\x02\xe4\x01\x0c\x81\x85\x02\xe3\x01\x0a\x81\x8d\x02\xe2"
  "\x01\x08\x81\x8b\x02\xe1\x01\x06\x81\x89\x02\xe0\x01\x04\x86\x0a"
  "\x11\x26\x0b\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0c"
  "\x03\x0a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x0d\x02\xea\x01\x08"
  "\x81\x85\x02\xe9\x01\x06\x81\x85\x02\xe8\x01\x04\x84\x06\x07\x10"
  "\x0e\x02\x04\x63\x64\x72\x0f\x06\x11\x6d\x61\x6b\x65\x2d\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x10\x02\xed\x01\x08\x81\x89"
  "\x02\xec\x01\x06\x81\x89\x02\xeb\x01\x04\x83\x04\x07\x0f\x11\x02"
  "\x0f\x06\x10\x02\xf2\x01\x0c\x81\x89\x02\xf1\x01\x0a\x81\x89\x02"
  "\xf0\x01\x08\x81\x89\x02\xef\x01\x06\x81\x89\x02\xee\x01\x04\x83"
  "\x04\x0b\x13\x12\x02\x04\x63\x61\x72\x13\x0f\x04\x0d\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2d\x65\x71\x3f\x14\x06\x10\x03\xff\x01\x1c"
  "\x81\x8b\x02\xfe\x01\x1a\x81\x89\x02\xfd\x01\x18\x81\x8b\x02\xfc"
  "\x01\x16\x81\x8b\x02\xfb\x01\x14\x81\x8d\x02\xfa\x01\x12\x81\x8d"
  "\x02\xf9\x01\x10\x81\x89\x02\xf8\x01\x0e\x81\x8d\x02\xf7\x01\x0c"
  "\x81\x89\x02\xf6\x01\x0a\x81\x89\x02\xf5\x01\x08\x81\x89\x02\xf4"
  "\x01\x06\x81\x89\x02\xf3\x01\x04\x85\x08\x1b\x27\x15\x02\x08\x04"
  "\x6e\x6f\x74\x16\x06\x10\x02\x82\x02\x08\x81\x89\x02\x81\x02\x06"
  "\x81\x89\x02\x80\x02\x04\x83\x04\x07\x0f\x17\x02\x09\x04\x65\x71"
  "\x3f\x18\x13\x0f\x04\x06\x10\x03\x86\x02\x0a\x81\x8b\x02\x85\x02"
  "\x08\x81\x89\x02\x84\x02\x06\x81\x87\x02\x83\x02\x04\x85\x08\x09"
  "\x16\x19\x02\x0a\x18\x0f\x06\x10\x02\x8a\x02\x0a\x81\x87\x02\x89"
  "\x02\x08\x81\x87\x02\x88\x02\x06\x81\x87\x02\x87\x02\x04\x85\x08"
  "\x09\x12\x1a\x02\x0b\x16\x15\x67\x72\x65\x61\x74\x65\x72\x2d\x74"
  "\x68\x61\x6e\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x0f\x06\x10\x02\x8f"
  "\x02\x0c\x81\x89\x02\x8e\x02\x0a\x81\x87\x02\x8d\x02\x08\x81\x87"
  "\x02\x8c\x02\x06\x81\x87\x02\x8b\x02\x04\x85\x08\x0b\x15\x1b\x02"
  "\x0c\x16\x12\x6c\x65\x73\x73\x2d\x74\x68\x61\x6e\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x3f\x0f\x06\x10\x02\x94\x02\x0c\x81\x89\x02\x93\x02"
  "\x0a\x81\x87\x02\x92\x02\x08\x81\x87\x02\x91\x02\x06\x81\x87\x02"
  "\x90\x02\x04\x85\x08\x0b\x15\x1c\x02\x0d\x0c\x0f\x13\x04\x05\x64"
  "\x65\x6c\x71\x03\x07\x6c\x65\x6e\x67\x74\x68\x1d\x04\x04\xa2\x02"
  "\x1e\xfd\xff\x03\xa1\x02\x1c\xfd\xff\x03\xa0\x02\x1a\xfd\xff\x03"
  "\x9f\x02\x18\xff\xff\x03\x9e\x02\x16\x81\x8f\x02\x9d\x02\x14\x81"
  "\x91\x02\x9c\x02\x12\x81\x8d\x02\x9b\x02\x10\x81\x8d\x02\x9a\x02"
  "\x0e\x81\x8d\x02\x99\x02\x0c\x81\x8b\x02\x98\x02\x0a\x81\x8d\x02"
  "\x97\x02\x08\x81\x89\x02\x96\x02\x06\x81\x89\x02\x95\x02\x04\x84"
  "\x06\x1d\x2d\x1e\x02\x0e\x03\x26\x2b\x03\x31\x2b\x1f\x04\x14\x06"
  "\x10\x03\xa5\x02\x08\x81\x89\x02\xa4\x02\x06\x81\x89\x02\xa3\x02"
  "\x04\x86\x0a\x07\x13\x20\x02\x0f\x03\x26\x2a\x21\x06\x10\x02\xa6"
  "\x02\x04\x86\x0a\x03\x0b\x22\x02\x10\x21\x13\x0f\x04\x14\x06\x10"
  "\x06\x15\x6d\x61\x6b\x65\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x21\x04\xbe\x02\x32\x81\x8b\x02\xbd\x02"
  "\x30\x81\x89\x02\xbc\x02\x2e\x84\x06\xbb\x02\x2c\x81\x89\x02\xba"
  "\x02\x2a\x81\x87\x02\xb9\x02\x28\x84\x06\xb8\x02\x26\x81\x8b\x02"
  "\xb7\x02\x24\x81\x8b\x02\xb6\x02\x22\x81\x87\x02\xb5\x02\x20\x81"
  "\x89\x02\xb4\x02\x1e\x81\x89\x02\xb3\x02\x1c\x84\x06\xb2\x02\x1a"
  "\x81\x8b\x02\xb1\x02\x18\x81\x8b\x02\xb0\x02\x16\x81\x87\x02\xaf"
  "\x02\x14\x81\x8b\x02\xae\x02\x12\x81\x8b\x02\xad\x02\x10\x81\x87"
  "\x02\xac\x02\x0e\x81\x8b\x02\xab\x02\x0c\x81\x8b\x02\xaa\x02\x0a"
  "\x81\x87\x02\xa9\x02\x08\x81\x87\x02\xa8\x02\x06\x81\x87\x02\xa7"
  "\x02\x04\x85\x08\x31\x43\x23\x02\x11\x13\x0f\x04\x04\x14\x03\xc8"
  "\x02\x16\x81\x8d\x02\xc7\x02\x14\x81\x8d\x02\xc6\x02\x12\x81\x8b"
  "\x02\xc5\x02\x10\x81\x8b\x02\xc4\x02\x0e\x81\x89\x02\xc3\x02\x0c"
  "\x81\x8d\x02\xc2\x02\x0a\x81\x89\x02\xc1\x02\x08\x81\x89\x02\xc0"
  "\x02\x06\x81\x89\x02\xbf\x02\x04\x85\x08\x15\x20\x24\x02\x12\x04"
  "\x2d\x31\x2b\x25\x03\x26\x2d\x04\x14\x06\x10\x03\xca\x02\x06\x81"
  "\x89\x02\xc9\x02\x04\x86\x0a\x05\x11\x26\x02\x13\x03\x26\x2f\x06"
  "\x10\x02\xcb\x02\x04\x86\x0a\x03\x0b\x27\x02\x14\x13\x06\x61\x70"
  "\x70\x6c\x79\x0f\x04\x09\x6c\x65\x6e\x67\x74\x68\x3d\x3f\x28\x05"
  "\x15\x63\x6f\x6e\x73\x2a\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x2d\x6c\x6f\x6f\x70\x29\x06\x10\x05\x11\x61\x70\x70\x6c\x79\x2a"
  "\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2a\x05\xd1\x02\x0e\x81"
  "\x89\x02\xd0\x02\x0c\x81\x87\x02\xcf\x02\x0a\x81\x89\x02\xce\x02"
  "\x08\x81\x87\x02\xcd\x02\x06\x81\x87\x02\xcc\x02\x04\x85\x08\x0d"
  "\x1e\x2b\x02\x15\x05\x29\x02\xd2\x02\x04\x85\x08\x03\x2c\x02\x16"
  "\x05\x63\x6f\x6e\x73\x2d\x13\x0f\x05\x29\x06\x10\x03\xd7\x02\x0c"
  "\x81\x8b\x02\xd6\x02\x0a\x81\x89\x02\xd5\x02\x08\x81\x8b\x02\xd4"
  "\x02\x06\x81\x87\x02\xd3\x02\x04\x85\x08\x0b\x17\x2e\x02\x17\x05"
  "\x14\x6c\x69\x73\x74\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2d"
  "\x6c\x6f\x6f\x70\x2f\x02\xd8\x02\x04\x85\x08\x03\x30\x02\x18\x2d"
  "\x13\x0f\x49\x6d\x70\x72\x6f\x70\x65\x72\x20\x6c\x69\x73\x74\x2e"
  "\x0c\x0f\x05\x2f\x04\x03\x06\x65\x72\x72\x6f\x72\x06\x10\x05\xde"
  "\x02\x0e\x81\x8b\x02\xdd\x02\x0c\x81\x89\x02\xdc\x02\x0a\x81\x89"
  "\x02\xdb\x02\x08\x81\x8b\x02\xda\x02\x06\x85\x08\xd9\x02\x04\x81"
  "\x87\x02\x0d\x20\x2d\x02\x19\x13\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x09\x72\x65\x63\x65\x69"
  "\x76\x65\x72\x31\x07\x76\x61\x6c\x75\x65\x2d\x15\x23\x5b\x75\x6e"
  "\x6e\x61\x6d\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d"
  "\x31\x02\x05\x03\x1d\x04\x04\x6d\x61\x70\x31\x03\x05\x69\x6f\x74"
  "\x61\x06\x09\x0a\x04\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73"
  "\x74\x72\x69\x6e\x67\x03\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x70\x70\x65\x6e\x64\x04\x13\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x73\x2f\x70\x61\x72\x73\x65\x05\x09\x05\x11\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x0e\xf2\x02"
  "\x2a\x81\x95\x02\xf1\x02\x28\x81\x93\x02\xf0\x02\x26\x81\x85\x02"
  "\xef\x02\x24\x81\x93\x02\xee\x02\x22\x81\x91\x02\xed\x02\x20\x81"
  "\x8f\x02\xec\x02\x1e\x81\x89\x02\xeb\x02\x1c\x81\x87\x02\xea\x02"
  "\x1a\x81\x85\x02\xe9\x02\x18\x81\x83\x02\xe8\x02\x16\x81\x85\x02"
  "\xe7\x02\x14\x81\x91\x02\xe6\x02\x12\x81\x97\x02\xe5\x02\x10\x81"
  "\x8f\x02\xe4\x02\x0e\x81\x8d\x02\xe3\x02\x0c\x81\x8d\x02\xe2\x02"
  "\x0a\x81\x8b\x02\xe1\x02\x08\x81\x89\x02\xe0\x02\x06\x81\x87\x02"
  "\xdf\x02\x04\x85\x08\x29\x4f\x0a\x02\x1a\x13\x0f\x06\x02\xf9\x02"
  "\x10\x81\x8b\x02\xf8\x02\x0e\x81\x8f\x02\xf7\x02\x0c\x81\x89\x02"
  "\xf6\x02\x0a\x81\x87\x02\xf5\x02\x08\x81\x87\x02\xf4\x02\x06\x81"
  "\x87\x02\xf3\x02\x04\x85\x08\x0f\x18\x09\x02\x1b\x0c\x13\x03\x0d"
  "\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x04\x14\x04\x28"
  "\x04\xfe\x02\x0c\x81\x83\x02\xfd\x02\x0a\x81\x83\x02\xfc\x02\x08"
  "\x81\x87\x02\xfb\x02\x06\x81\x83\x02\xfa\x02\x04\x83\x04\x0b\x1a"
  "\x02\x1c\x0c\x0f\x03\x04\x14\x04\x28\x04\x83\x03\x0c\x81\x83\x02"
  "\x82\x03\x0a\x81\x83\x02\x81\x03\x08\x81\x87\x02\x80\x03\x06\x81"
  "\x83\x02\xff\x02\x04\x83\x04\x0b\x1a\x02\x1d\x13\x0f\x0c\x10\x67"
  "\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x03\x04"
  "\x14\x04\x28\x03\x0d\x05\x8c\x03\x14\x81\x83\x02\x8b\x03\x12\x81"
  "\x83\x02\x8a\x03\x10\x81\x83\x02\x89\x03\x0e\x81\x83\x02\x88\x03"
  "\x0c\x81\x87\x02\x87\x03\x0a\x81\x83\x02\x86\x03\x08\x81\x87\x02"
  "\x85\x03\x06\x81\x83\x02\x84\x03\x04\x83\x04\x13\x26\x02\x1e\x04"
  "\x63\x61\x72\x0c\x08\x2a\x57\x72\x6f\x6e\x67\x20\x6e\x75\x6d\x62"
  "\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20"
  "\x69\x6e\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x43\x41\x52\x2e\x13"
  "\x0f\x03\x0d\x63\x61\x6c\x6c\x2d\x74\x6f\x2d\x63\x61\x72\x3f\x32"
  "\x03\x05\x77\x61\x72\x6e\x33\x03\x0d\x63\x61\x6c\x6c\x2d\x74\x6f"
  "\x2d\x63\x64\x72\x3f\x34\x04\x06\x10\x03\x19\x63\x61\x6c\x6c\x2d"
  "\x74\x6f\x2d\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63"
  "\x64\x72\x3f\x35\x03\x17\x64\x65\x63\x6f\x64\x65\x2d\x67\x65\x6e"
  "\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x36\x03\x17\x65"
  "\x6e\x63\x6f\x64\x65\x2d\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61"
  "\x72\x2d\x63\x64\x72\x37\x09\xa2\x03\x2e\x81\x8f\x02\xa1\x03\x2c"
  "\x81\x8d\x02\xa0\x03\x2a\x81\x8d\x02\x9f\x03\x28\x81\x8d\x02\x9e"
  "\x03\x26\x81\x8b\x02\x9d\x03\x24\x81\x91\x02\x9c\x03\x22\x81\x91"
  "\x02\x9b\x03\x20\x81\x91\x02\x9a\x03\x1e\x81\x91\x02\x99\x03\x1c"
  "\x81\x89\x02\x98\x03\x1a\x81\x8d\x02\x97\x03\x18\x81\x8d\x02\x96"
  "\x03\x16\x81\x8b\x02\x95\x03\x14\x81\x89\x02\x94\x03\x12\x81\x8d"
  "\x02\x93\x03\x10\x81\x8d\x02\x92\x03\x0e\x81\x8b\x02\x91\x03\x0c"
  "\x81\x89\x02\x90\x03\x0a\x81\x87\x02\x8f\x03\x08\x81\x87\x02\x8e"
  "\x03\x06\x81\x87\x02\x8d\x03\x04\x85\x08\x2d\x4c\x38\x02\x1f\x04"
  "\x63\x64\x72\x39\x0c\x2a\x57\x72\x6f\x6e\x67\x20\x6e\x75\x6d\x62"
  "\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20"
  "\x69\x6e\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x43\x44\x52\x2e\x13"
  "\x0f\x03\x32\x03\x33\x03\x34\x04\x06\x10\x03\x35\x03\x36\x03\x37"
  "\x09\xb9\x03\x30\x81\x8f\x02\xb8\x03\x2e\x81\x8d\x02\xb7\x03\x2c"
  "\x81\x8d\x02\xb6\x03\x2a\x81\x8d\x02\xb5\x03\x28\x81\x8b\x02\xb4"
  "\x03\x26\x81\x91\x02\xb3\x03\x24\x81\x91\x02\xb2\x03\x22\x81\x91"
  "\x02\xb1\x03\x20\x81\x91\x02\xb0\x03\x1e\x81\x89\x02\xaf\x03\x1c"
  "\x81\x8d\x02\xae\x03\x1a\x81\x8d\x02\xad\x03\x18\x81\x8b\x02\xac"
  "\x03\x16\x81\x8b\x02\xab\x03\x14\x81\x89\x02\xaa\x03\x12\x81\x8d"
  "\x02\xa9\x03\x10\x81\x8d\x02\xa8\x03\x0e\x81\x8b\x02\xa7\x03\x0c"
  "\x81\x89\x02\xa6\x03\x0a\x81\x87\x02\xa5\x03\x08\x81\x87\x02\xa4"
  "\x03\x06\x81\x87\x02\xa3\x03\x04\x85\x08\x2f\x4d\x37\x02\x20\x13"
  "\x04\x28\x04\x06\x10\x04\xbe\x03\x0c\x81\x8b\x02\xbd\x03\x0a\x81"
  "\x89\x02\xbc\x03\x08\x81\x89\x02\xbb\x03\x06\x81\x89\x02\xba\x03"
  "\x04\x83\x04\x0b\x19\x36\x02\x21\x18\x0c\x16\x13\x0f\x03\x19\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x61\x6c\x77\x61\x79\x73"
  "\x2d\x66\x61\x6c\x73\x65\x3f\x33\x06\x10\x04\x0e\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x2f\x6d\x61\x6b\x65\x28\x04\xd2\x03\x2a\x81\x89"
  "\x02\xd1\x03\x28\x81\x89\x02\xd0\x03\x26\x81\x89\x02\xcf\x03\x24"
  "\x81\x87\x02\xce\x03\x22\x81\x87\x02\xcd\x03\x20\x81\x89\x02\xcc"
  "\x03\x1e\x81\x87\x02\xcb\x03\x1c\x81\x89\x02\xca\x03\x1a\x81\x89"
  "\x02\xc9\x03\x18\x81\x87\x02\xc8\x03\x16\x81\x87\x02\xc7\x03\x14"
  "\x81\x89\x02\xc6\x03\x12\x81\x89\x02\xc5\x03\x10\x81\x89\x02\xc4"
  "\x03\x0e\x81\x87\x02\xc3\x03\x0c\x81\x89\x02\xc2\x03\x0a\x81\x87"
  "\x02\xc1\x03\x08\x81\x87\x02\xc0\x03\x06\x81\x87\x02\xbf\x03\x04"
  "\x85\x08\x29\x3a\x02\x22\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c"
  "\x6c\x6f\x63\x61\x74\x65\x0f\x06\x10\x02\xd4\x03\x06\x81\x87\x02"
  "\xd3\x03\x04\x85\x08\x05\x0e\x3a\x02\x23\x16\x0c\x13\x0f\x03\x33"
  "\x03\x18\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6e\x65\x76"
  "\x65\x72\x2d\x66\x61\x6c\x73\x65\x3f\x04\x04\x28\x06\x10\x06\xe2"
  "\x03\x1e\x81\x89\x02\xe1\x03\x1c\x81\x89\x02\xe0\x03\x1a\x81\x87"
  "\x02\xdf\x03\x18\x81\x87\x02\xde\x03\x16\x81\x87\x02\xdd\x03\x14"
  "\x81\x89\x02\xdc\x03\x12\x81\x89\x02\xdb\x03\x10\x81\x87\x02\xda"
  "\x03\x0e\x81\x87\x02\xd9\x03\x0c\x81\x89\x02\xd8\x03\x0a\x81\x87"
  "\x02\xd7\x03\x08\x81\x89\x02\xd6\x03\x06\x81\x87\x02\xd5\x03\x04"
  "\x85\x08\x1d\x32\x33\x02\x24\x13\x0f\x06\x0f\x6d\x61\x6b\x65\x2d"
  "\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x28\x02\xe6\x03\x0a\x81\x8b"
  "\x02\xe5\x03\x08\x81\x89\x02\xe4\x03\x06\x81\x89\x02\xe3\x03\x04"
  "\x83\x04\x09\x12\x16\x02\x25\x0f\x1b\x13\x0f\x06\x21\x06\x28\x05"
  "\x11\x6d\x61\x6b\x65\x2d\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x3b\x04\xec\x03\x0e\x81\x89\x02\xeb\x03\x0c\x81\x87\x02\xea"
  "\x03\x0a\x81\x87\x02\xe9\x03\x08\x81\x89\x02\xe8\x03\x06\x81\x87"
  "\x02\xe7\x03\x04\x85\x08\x0d\x1c\x3c\x02\x26\x3b\x0f\x1b\x13\x0f"
  "\x06\x21\x06\x28\x06\x3b\x04\xf3\x03\x10\x81\x8d\x02\xf2\x03\x0e"
  "\x81\x8b\x02\xf1\x03\x0c\x81\x89\x02\xf0\x03\x0a\x81\x87\x02\xef"
  "\x03\x08\x81\x89\x02\xee\x03\x06\x81\x87\x02\xed\x03\x04\x85\x08"
  "\x0f\x1f\x3d\x02\x27\x3d\x3b\x1b\x0f\x13\x0f\x06\x21\x06\x28\x08"
  "\x3b\x04\xfc\x03\x14\x81\x91\x02\xfb\x03\x12\x81\x8f\x02\xfa\x03"
  "\x10\x81\x8d\x02\xf9\x03\x0e\x81\x89\x02\xf8\x03\x0c\x81\x87\x02"
  "\xf7\x03\x0a\x81\x87\x02\xf6\x03\x08\x81\x89\x02\xf5\x03\x06\x81"
  "\x87\x02\xf4\x03\x04\x85\x08\x13\x25\x3e\x02\x28\x1e\x13\x0f\x06"
  "\x21\x06\x28\x05\x3b\x04\x82\x04\x0e\x81\x89\x02\x81\x04\x0c\x81"
  "\x87\x02\x80\x04\x0a\x81\x87\x02\xff\x03\x08\x81\x89\x02\xfe\x03"
  "\x06\x81\x87\x02\xfd\x03\x04\x85\x08\x0d\x1c\x3f\x02\x29\x18\x13"
  "\x0f\x02\x0f\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x06\x10\x04\x04\x87\x04\x0c\x81\x8b\x02\x86\x04\x0a\x81\x8b"
  "\x02\x85\x04\x08\x81\x89\x02\x84\x04\x06\x81\x87\x02\x83\x04\x04"
  "\x85\x08\x0b\x19\x18\x02\x2a\x0c\x13\x0f\x05\x11\x64\x69\x73\x6a"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x02\x8f\x04\x12"
  "\xfd\xff\x03\x8e\x04\x10\xfd\xff\x03\x8d\x04\x0e\xfd\xff\x03\x8c"
  "\x04\x0c\xfd\xff\x03\x8b\x04\x0a\xfd\xff\x03\x8a\x04\x08\xfd\xff"
  "\x03\x89\x04\x06\xff\xff\x03\x88\x04\x04\xfe\x05\x11\x1c\x40\x02"
  "\x2b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x04\x06"
  "\x10\x03\x91\x04\x06\x81\x89\x02\x90\x04\x04\x86\x0a\x05\x0f\x41"
  "\x02\x2c\x0f\x0c\x13\x03\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73"
  "\x79\x6d\x62\x6f\x6c\x42\x03\x0d\x04\x04\x9c\x04\x18\x81\x89\x02"
  "\x9b\x04\x16\x81\x87\x02\x9a\x04\x14\x81\x87\x02\x99\x04\x12\x81"
  "\x89\x02\x98\x04\x10\x85\x08\x97\x04\x0e\x81\x89\x02\x96\x04\x0c"
  "\x81\x89\x02\x95\x04\x0a\x81\x87\x02\x94\x04\x08\x81\x87\x02\x93"
  "\x04\x06\x81\x87\x02\x92\x04\x04\x81\x87\x02\x17\x27\x43\x02\x2d"
  "\x0f\x0c\x13\x03\x07\x69\x6e\x74\x65\x72\x6e\x0c\x03\x0d\x04\x04"
  "\xa7\x04\x18\x81\x89\x02\xa6\x04\x16\x81\x87\x02\xa5\x04\x14\x81"
  "\x87\x02\xa4\x04\x12\x81\x89\x02\xa3\x04\x10\x85\x08\xa2\x04\x0e"
  "\x81\x89\x02\xa1\x04\x0c\x81\x89\x02\xa0\x04\x0a\x81\x87\x02\x9f"
  "\x04\x08\x81\x87\x02\x9e\x04\x06\x81\x87\x02\x9d\x04\x04\x81\x87"
  "\x02\x17\x27\x0d\x02\x2e\x10\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e"
  "\x66\x6c\x6f\x6e\x75\x6d\x13\x0f\x04\x06\x10\x03\xab\x04\x0a\x81"
  "\x8b\x02\xaa\x04\x08\x81\x89\x02\xa9\x04\x06\x81\x87\x02\xa8\x04"
  "\x04\x85\x08\x09\x16\x02\x2f\x03\x1d\x06\x10\x04\x17\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x76\x61\x6c"
  "\x69\x64\x3f\x04\xaf\x04\x0a\x81\x8b\x02\xae\x04\x08\x81\x89\x02"
  "\xad\x04\x06\x81\x89\x02\xac\x04\x04\x83\x04\x09\x13\x1d\x02\x30"
  "\x13\x0f\x03\x19\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x18\x6d\x61"
  "\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x65\x78\x70"
  "\x61\x6e\x64\x65\x72\x13\x03\xb3\x04\x0a\x81\x83\x02\xb2\x04\x08"
  "\x81\x85\x02\xb1\x04\x06\x81\x85\x02\xb0\x04\x04\x83\x04\x09\x13"
  "\x0f\x02\x31\x20\x63\x67\x65\x6e\x2f\x65\x78\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x73\x10\x66\x61\x6c\x73\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x03\x04\x31\x02\x1e\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x2f\x67\x65\x74\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d"
  "\x62\x6c\x6f\x63\x6b\x04\x09\x72\x65\x61\x73\x73\x69\x67\x6e\x05"
  "\x14\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x72\x65\x63\x75\x72"
  "\x73\x69\x76\x65\x05\xbb\x04\x12\x81\x89\x02\xba\x04\x10\x81\x85"
  "\x02\xb9\x04\x0e\x81\x8b\x02\xb8\x04\x0c\x81\x8b\x02\xb7\x04\x0a"
  "\x81\x85\x02\xb6\x04\x08\x81\x8f\x02\xb5\x04\x06\x81\x89\x02\xb4"
  "\x04\x04\x83\x04\x11\x20\x31\x44\x44\x10\x73\x63\x6f\x64\x65\x2d"
  "\x6f\x70\x74\x69\x6d\x69\x7a\x65\x72\x0a\x65\x78\x70\x61\x6e\x73"
  "\x69\x6f\x6e\x20\x65\x78\x70\x61\x6e\x64\x65\x72\x2d\x65\x76\x61"
  "\x6c\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x23\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x69\x6f\x6e\x73\x2f\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x2d\x61\x6c\x69\x73\x74\x16\x73\x63\x6f\x64\x65\x2d\x3e\x73\x63"
  "\x6f\x64\x65\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x04\x24\x75\x73"
  "\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73"
  "\x2f\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2d\x76\x61\x6c\x75\x65"
  "\x73\x44\x02\x2a\x02\x2b\x02\x2d\x04\x2d\x31\x2b\x02\x2f\x03\x31"
  "\x2b\x02\x3c\x03\x3c\x3d\x02\x3d\x02\x3e\x03\x3e\x3d\x06\x61\x70"
  "\x70\x6c\x79\x07\x63\x61\x61\x61\x61\x72\x07\x63\x61\x61\x61\x64"
  "\x72\x06\x63\x61\x61\x61\x72\x07\x63\x61\x61\x64\x61\x72\x07\x63"
  "\x61\x61\x64\x64\x72\x06\x63\x61\x61\x64\x72\x05\x63\x61\x61\x72"
  "\x07\x63\x61\x64\x61\x61\x72\x07\x63\x61\x64\x61\x64\x72\x06\x63"
  "\x61\x64\x61\x72\x07\x63\x61\x64\x64\x61\x72\x07\x63\x61\x64\x64"
  "\x64\x72\x06\x63\x61\x64\x64\x72\x05\x63\x61\x64\x72\x11\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c\x75\x65\x73\x07\x63"
  "\x64\x61\x61\x61\x72\x07\x63\x64\x61\x61\x64\x72\x06\x63\x64\x61"
  "\x61\x72\x07\x63\x64\x61\x64\x61\x72\x07\x63\x64\x61\x64\x64\x72"
  "\x06\x63\x64\x61\x64\x72\x05\x63\x64\x61\x72\x07\x63\x64\x64\x61"
  "\x61\x72\x07\x63\x64\x64\x61\x64\x72\x06\x63\x64\x64\x61\x72\x07"
  "\x63\x64\x64\x64\x61\x72\x07\x63\x64\x64\x64\x64\x72\x06\x63\x64"
  "\x64\x64\x72\x05\x63\x64\x64\x72\x39\x07\x63\x68\x61\x72\x3d\x3f"
  "\x09\x63\x6f\x6d\x70\x6c\x65\x78\x3f\x06\x63\x6f\x6e\x73\x2a\x10"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x07"
  "\x65\x69\x67\x68\x74\x68\x0f\x65\x78\x61\x63\x74\x2d\x69\x6e\x74"
  "\x65\x67\x65\x72\x3f\x10\x65\x78\x61\x63\x74\x2d\x72\x61\x74\x69"
  "\x6f\x6e\x61\x6c\x3f\x05\x65\x78\x70\x74\x04\x65\x71\x3f\x06\x66"
  "\x69\x66\x74\x68\x06\x66\x69\x72\x73\x74\x07\x66\x69\x78\x3a\x3c"
  "\x3d\x06\x66\x69\x78\x3a\x3d\x07\x66\x69\x78\x3a\x3e\x3d\x07\x66"
  "\x6f\x75\x72\x74\x68\x0d\x69\x6e\x74\x3a\x2d\x3e\x66\x6c\x6f\x6e"
  "\x75\x6d\x0d\x69\x6e\x74\x3a\x69\x6e\x74\x65\x67\x65\x72\x3f\x0c"
  "\x05\x6c\x69\x73\x74\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x0f\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x38\x62"
  "\x0a\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x04\x6e\x6f\x74\x08\x6e"
  "\x75\x6d\x62\x65\x72\x3f\x0a\x70\x6f\x73\x69\x74\x69\x76\x65\x3f"
  "\x09\x71\x75\x6f\x74\x69\x65\x6e\x74\x0a\x72\x65\x6d\x61\x69\x6e"
  "\x64\x65\x72\x07\x73\x65\x63\x6f\x6e\x64\x08\x73\x65\x76\x65\x6e"
  "\x74\x68\x06\x73\x69\x78\x74\x68\x42\x08\x73\x79\x6d\x62\x6f\x6c"
  "\x3f\x06\x74\x68\x69\x72\x64\x07\x76\x61\x6c\x75\x65\x73\x0b\x77"
  "\x65\x61\x6b\x2d\x70\x61\x69\x72\x3f\x0c\x77\x69\x74\x68\x2d\x76"
  "\x61\x6c\x75\x65\x73\x06\x7a\x65\x72\x6f\x3f\x50\x23\x75\x73\x75"
  "\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x2f"
  "\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x73\x42"
  "\x0f\x04\x15\x77\x65\x61\x6b\x2d\x70\x61\x69\x72\x3f\x2d\x65\x78"
  "\x70\x61\x6e\x73\x69\x6f\x6e\x39\x13\x17\x69\x6e\x74\x3a\x2d\x3e"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x13\x11\x69\x6e\x74\x65\x72\x6e\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x0f\x19\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62"
  "\x6f\x6c\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x0c\x28\x3b\x1a"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x2d"
  "\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x3b\x12\x73\x79\x6d\x62\x6f"
  "\x6c\x3f\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x28\x13\x63\x6f"
  "\x6d\x70\x6c\x65\x78\x3f\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x1a\x65\x78\x61\x63\x74\x2d\x72\x61\x74\x69\x6f\x6e\x61\x6c\x3f"
  "\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x45\x19\x65\x78\x61\x63"
  "\x74\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x2d\x65\x78\x70\x61\x6e"
  "\x73\x69\x6f\x6e\x46\x0c\x1d\x04\x04\x0d\x10\x43\x10\x41\x04\x40"
  "\x04\x18\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x0c\x38\x11\x65\x69"
  "\x67\x68\x74\x68\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x43\x14"
  "\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x2d\x65\x78\x70\x61\x6e\x73"
  "\x69\x6f\x6e\x41\x0e\x6e\x6f\x74\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x40\x16\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x3f\x0e\x65\x71\x3f\x2d\x65"
  "\x78\x70\x61\x6e\x73\x69\x6f\x6e\x3e\x16\x04\x33\x04\x3a\x04\x04"
  "\x12\x73\x65\x76\x65\x6e\x74\x68\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x3d\x81\x03\x10\x73\x69\x78\x74\x68\x2d\x65\x78\x70\x61"
  "\x6e\x73\x69\x6f\x6e\x3c\xc1\x01\x10\x66\x69\x66\x74\x68\x2d\x65"
  "\x78\x70\x61\x6e\x73\x69\x6f\x6e\x3a\x61\x11\x66\x6f\x75\x72\x74"
  "\x68\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x33\x31\x10\x74\x68"
  "\x69\x72\x64\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x1d\x11\x73"
  "\x65\x63\x6f\x6e\x64\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x18"
  "\x10\x66\x69\x72\x73\x74\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x16\x11\x63\x64\x64\x64\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x0d\x11\x63\x64\x64\x64\x61\x72\x2d\x65\x78\x70\x61\x6e"
  "\x73\x69\x6f\x6e\x11\x11\x63\x64\x64\x61\x64\x72\x2d\x65\x78\x70"
  "\x61\x6e\x73\x69\x6f\x6e\x12\x11\x63\x64\x64\x61\x61\x72\x2d\x65"
  "\x78\x70\x61\x6e\x73\x69\x6f\x6e\x47\x13\x11\x63\x64\x61\x64\x64"
  "\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x48\x14\x11\x63\x64"
  "\x61\x64\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x49\x15"
  "\x11\x63\x64\x61\x61\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f"
  "\x6e\x4a\x16\x11\x63\x64\x61\x61\x61\x72\x2d\x65\x78\x70\x61\x6e"
  "\x73\x69\x6f\x6e\x4b\x17\x11\x63\x61\x64\x64\x64\x72\x2d\x65\x78"
  "\x70\x61\x6e\x73\x69\x6f\x6e\x4c\x18\x11\x63\x61\x64\x64\x61\x72"
  "\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x4d\x19\x11\x63\x61\x64"
  "\x61\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x4e\x1a\x11"
  "\x63\x61\x64\x61\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x4f\x1b\x11\x63\x61\x61\x64\x64\x72\x2d\x65\x78\x70\x61\x6e\x73"
  "\x69\x6f\x6e\x50\x1c\x11\x63\x61\x61\x64\x61\x72\x2d\x65\x78\x70"
  "\x61\x6e\x73\x69\x6f\x6e\x51\x1d\x11\x63\x61\x61\x61\x64\x72\x2d"
  "\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x52\x1e\x11\x63\x61\x61\x61"
  "\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x53\x1f\x10\x63"
  "\x64\x64\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x54\x20"
  "\x10\x63\x64\x64\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x55\x09\x10\x63\x64\x61\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x56\x0a\x10\x63\x64\x61\x61\x72\x2d\x65\x78\x70\x61\x6e"
  "\x73\x69\x6f\x6e\x57\x0b\x10\x63\x61\x64\x64\x72\x2d\x65\x78\x70"
  "\x61\x6e\x73\x69\x6f\x6e\x58\x0c\x10\x63\x61\x64\x61\x72\x2d\x65"
  "\x78\x70\x61\x6e\x73\x69\x6f\x6e\x59\x0d\x10\x63\x61\x61\x64\x72"
  "\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x5a\x0e\x10\x63\x61\x61"
  "\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x5b\x0f\x0f\x63"
  "\x64\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x5c\x10\x0f"
  "\x63\x64\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x5d\x0f"
  "\x63\x61\x64\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x5e\x0f"
  "\x63\x61\x61\x72\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x5f\x08"
  "\x0c\x2f\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x60\x1a\x67\x65"
  "\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x2d\x65\x78"
  "\x70\x61\x6e\x73\x69\x6f\x6e\x61\x0e\x63\x64\x72\x2d\x65\x78\x70"
  "\x61\x6e\x73\x69\x6f\x6e\x62\x0e\x63\x61\x72\x2d\x65\x78\x70\x61"
  "\x6e\x73\x69\x6f\x6e\x63\x35\x34\x32\x1b\x63\x61\x6c\x6c\x2d\x77"
  "\x69\x74\x68\x2d\x76\x61\x6c\x75\x65\x73\x2d\x65\x78\x70\x61\x6e"
  "\x73\x69\x6f\x6e\x35\x11\x76\x61\x6c\x75\x65\x73\x2d\x65\x78\x70"
  "\x61\x6e\x73\x69\x6f\x6e\x34\x2f\x0f\x6c\x69\x73\x74\x2d\x65\x78"
  "\x70\x61\x6e\x73\x69\x6f\x6e\x32\x29\x10\x63\x6f\x6e\x73\x2a\x2d"
  "\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2f\x2a\x0e\x36\x04\x37\x04"
  "\x38\x04\x04\x04\x04\x09\x04\x0a\x04\x2d\x06\x30\x04\x2e\x04\x2c"
  "\x04\x2b\x04\x0e\x0c\x2d\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x38\x27\x04\x26\x04\x0c\x2a\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f"
  "\x6e\x37\x1b\x72\x69\x67\x68\x74\x2d\x61\x63\x63\x75\x6d\x75\x6c"
  "\x61\x74\x69\x6f\x6e\x2d\x69\x6e\x76\x65\x72\x73\x65\x36\x0f\x65"
  "\x78\x70\x74\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x30\x24\x04"
  "\x23\x04\x0c\x2b\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2e\x22"
  "\x04\x20\x04\x13\x72\x69\x67\x68\x74\x2d\x61\x63\x63\x75\x6d\x75"
  "\x6c\x61\x74\x69\x6f\x6e\x2d\x11\x66\x69\x78\x3a\x3e\x3d\x2d\x65"
  "\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2c\x11\x66\x69\x78\x3a\x3c\x3d"
  "\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2b\x1e\x04\x1c\x04\x1b"
  "\x04\x11\x63\x68\x61\x72\x3d\x3f\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x29\x0d\x3e\x3d\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e"
  "\x27\x10\x66\x69\x78\x3a\x3d\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f"
  "\x6e\x26\x14\x66\x69\x78\x3a\x7a\x65\x72\x6f\x3f\x2d\x65\x78\x70"
  "\x61\x6e\x73\x69\x6f\x6e\x1a\x04\x19\x04\x0d\x3c\x3d\x2d\x65\x78"
  "\x70\x61\x6e\x73\x69\x6f\x6e\x24\x0c\x3e\x2d\x65\x78\x70\x61\x6e"
  "\x73\x69\x6f\x6e\x23\x0c\x3c\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f"
  "\x6e\x22\x03\x26\x3e\x0c\x3d\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f"
  "\x6e\x20\x03\x26\x3c\x03\x26\x3d\x11\x6d\x6f\x64\x75\x6c\x6f\x2d"
  "\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x16\x70\x61\x69\x72\x77\x69"
  "\x73\x65\x2d\x74\x65\x73\x74\x2d\x69\x6e\x76\x65\x72\x73\x65\x1e"
  "\x0e\x70\x61\x69\x72\x77\x69\x73\x65\x2d\x74\x65\x73\x74\x1c\x17"
  "\x04\x15\x04\x14\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x2d\x65\x78"
  "\x70\x61\x6e\x73\x69\x6f\x6e\x1b\x07\x6d\x6f\x64\x75\x6c\x6f\x13"
  "\x71\x75\x6f\x74\x69\x65\x6e\x74\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x1a\x0a\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x0e\x2d\x31"
  "\x2b\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x19\x09\x71\x75\x6f"
  "\x74\x69\x65\x6e\x74\x0d\x31\x2b\x2d\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x17\x25\x14\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x2d\x65"
  "\x78\x70\x61\x6e\x73\x69\x6f\x6e\x25\x1f\x14\x70\x6f\x73\x69\x74"
  "\x69\x76\x65\x3f\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x1f\x0a"
  "\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x11\x6c\x6f\x63\x61\x6c\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x7a\x65\x72\x6f\x3f"
  "\x2d\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x15\x0a\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x3f\x06\x7a\x65\x72\x6f\x3f\x12\x62\x69\x6e\x61"
  "\x72\x79\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x0a\x11\x75"
  "\x6e\x61\x72\x79\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x09"
  "\x14\x21\x10\x12\x04\x11\x04\x0e\x04\x0b\x04\x04\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x23\x22"
  "\x26\x2e\x37\x12\x67\x6c\x6f\x62\x61\x6c\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x73\x44\x42\x05\x63\x6f\x6e\x73\x15\x35\x39\x34"
  "\x1d\x28\x0c\x3c\x3d\x18\x1b\x1a\x1f\x40\x25\x3f\x32\x0f\x46\x13"
  "\x33\x2c\x2b\x16\x3a\x3e\x30\x45\x43\x3b\x2f\x29\x62\x5c\x54\x0d"
  "\x55\x47\x5d\x56\x48\x49\x57\x4a\x4b\x63\x5e\x58\x4c\x4d\x59\x4e"
  "\x4f\x5f\x5a\x50\x51\x5b\x52\x53\x2a\x27\x20\x24\x17\x60\x19\x38"
  "\x52\x03\x09\x03\x0a\x05\x1c\x03\x1e\x04\x2d\x05\x36\x03\x61\x03"
  "\x41\x04\x31\x05\x31\x04\x07\x61\x70\x70\x65\x6e\x64\x03\x0e\x2d"
  "\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0d\xdd\x01\xbc"
  "\x03\x80\x80\x04\xdc\x01\xba\x03\x81\x81\x02\xdb\x01\xb8\x03\x81"
  "\x81\x02\xda\x01\xb6\x03\x81\x87\x02\xd9\x01\xb4\x03\x81\x83\x02"
  "\xd8\x01\xb2\x03\x81\x85\x02\xd7\x01\xb0\x03\x81\x83\x02\xd6\x01"
  "\xae\x03\x81\x8b\x02\xd5\x01\xac\x03\x81\x8b\x02\xd4\x01\xaa\x03"
  "\x81\x8b\x02\xd3\x01\xa8\x03\x81\x8b\x02\xd2\x01\xa6\x03\x81\x8b"
  "\x02\xd1\x01\xa4\x03\x81\x8b\x02\xd0\x01\xa2\x03\x81\x8b\x02\xcf"
  "\x01\xa0\x03\x81\x8b\x02\xce\x01\x9e\x03\x81\x8b\x02\xcd\x01\x9c"
  "\x03\x81\x8b\x02\xcc\x01\x9a\x03\x81\x8b\x02\xcb\x01\x98\x03\x81"
  "\x8b\x02\xca\x01\x96\x03\x81\x8b\x02\xc9\x01\x94\x03\x81\x8b\x02"
  "\xc8\x01\x92\x03\x81\x8b\x02\xc7\x01\x90\x03\x81\x8b\x02\xc6\x01"
  "\x8e\x03\x81\x8b\x02\xc5\x01\x8c\x03\x81\x8b\x02\xc4\x01\x8a\x03"
  "\x81\x8b\x02\xc3\x01\x88\x03\x81\x8b\x02\xc2\x01\x86\x03\x81\x8b"
  "\x02\xc1\x01\x84\x03\x81\x8b\x02\xc0\x01\x82\x03\x81\x8b\x02\xbf"
  "\x01\x80\x03\x81\x8b\x02\xbe\x01\xfe\x02\x81\x8b\x02\xbd\x01\xfc"
  "\x02\x81\x8b\x02\xbc\x01\xfa\x02\x81\x8b\x02\xbb\x01\xf8\x02\x81"
  "\x8b\x02\xba\x01\xf6\x02\x81\x8b\x02\xb9\x01\xf4\x02\x81\x8b\x02"
  "\xb8\x01\xf2\x02\x81\x8b\x02\xb7\x01\xf0\x02\x81\x8b\x02\xb6\x01"
  "\xee\x02\x81\x8b\x02\xb5\x01\xec\x02\x81\x8b\x02\xb4\x01\xea\x02"
  "\x81\x8b\x02\xb3\x01\xe8\x02\x81\x8b\x02\xb2\x01\xe6\x02\x81\x8b"
  "\x02\xb1\x01\xe4\x02\x81\x8b\x02\xb0\x01\xe2\x02\x81\x8b\x02\xaf"
  "\x01\xe0\x02\x81\x8b\x02\xae\x01\xde\x02\x81\x8b\x02\xad\x01\xdc"
  "\x02\x81\x8b\x02\xac\x01\xda\x02\x81\x8b\x02\xab\x01\xd8\x02\x81"
  "\x8b\x02\xaa\x01\xd6\x02\x81\x8b\x02\xa9\x01\xd4\x02\x81\x8b\x02"
  "\xa8\x01\xd2\x02\x81\x8b\x02\xa7\x01\xd0\x02\x81\x8b\x02\xa6\x01"
  "\xce\x02\x81\x8b\x02\xa5\x01\xcc\x02\x81\x8b\x02\xa4\x01\xca\x02"
  "\x81\x8b\x02\xa3\x01\xc8\x02\x81\x8b\x02\xa2\x01\xc6\x02\x81\x8b"
  "\x02\xa1\x01\xc4\x02\x81\x8b\x02\xa0\x01\xc2\x02\x81\x8b\x02\x9f"
  "\x01\xc0\x02\x81\x8b\x02\x9e\x01\xbe\x02\x81\x8b\x02\x9d\x01\xbc"
  "\x02\x81\x8b\x02\x9c\x01\xba\x02\x81\x8b\x02\x9b\x01\xb8\x02\x81"
  "\x8b\x02\x9a\x01\xb6\x02\x81\x8b\x02\x99\x01\xb4\x02\x81\x8b\x02"
  "\x98\x01\xb2\x02\x81\x8b\x02\x97\x01\xb0\x02\x81\x8b\x02\x96\x01"
  "\xae\x02\x81\x8b\x02\x95\x01\xac\x02\x81\x8b\x02\x94\x01\xaa\x02"
  "\x81\x8b\x02\x93\x01\xa8\x02\x81\x8b\x02\x92\x01\xa6\x02\x81\x8b"
  "\x02\x91\x01\xa4\x02\x81\x8b\x02\x90\x01\xa2\x02\x81\x8b\x02\x8f"
  "\x01\xa0\x02\x81\x8b\x02\x8e\x01\x9e\x02\x81\x8b\x02\x8d\x01\x9c"
  "\x02\x81\x8b\x02\x8c\x01\x9a\x02\x81\x8b\x02\x8b\x01\x98\x02\x81"
  "\x8b\x02\x8a\x01\x96\x02\x81\x8b\x02\x89\x01\x94\x02\x81\x8b\x02"
  "\x88\x01\x92\x02\x81\x8b\x02\x87\x01\x90\x02\x81\x89\x02\x86\x01"
  "\x8e\x02\x81\x87\x02\x85\x01\x8c\x02\x81\x85\x02\x84\x01\x8a\x02"
  "\x81\x8b\x02\x83\x01\x88\x02\x81\x89\x02\x82\x01\x86\x02\x81\x87"
  "\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82\x02\x81\x87\x02\x7f"
  "\x80\x02\x81\x85\x02\x7e\xfe\x01\x81\x89\x02\x7d\xfc\x01\x81\x83"
  "\x02\x7c\xfa\x01\x81\x8b\x02\x7b\xf8\x01\x81\x89\x02\x7a\xf6\x01"
  "\x81\x83\x02\x79\xf4\x01\x81\x85\x02\x78\xf2\x01\x81\x83\x02\x77"
  "\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x85\x02\x75\xec\x01\x81\x83"
  "\x02\x74\xea\x01\x81\x85\x02\x73\xe8\x01\x81\x83\x02\x72\xe6\x01"
  "\x81\x85\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x85\x02\x6f"
  "\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x85\x02\x6d\xdc\x01\x81\x83"
  "\x02\x6c\xda\x01\x81\x85\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01"
  "\x81\x85\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x85\x02\x67"
  "\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x85\x02\x65\xcc\x01\x81\x83"
  "\x02\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x83\x02\x62\xc6\x01"
  "\x81\x85\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x85\x02\x5f"
  "\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x85\x02\x5d\xbc\x01\x81\x83"
  "\x02\x5c\xba\x01\x81\x85\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01"
  "\x81\x85\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x85\x02\x57"
  "\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x85\x02\x55\xac\x01\x81\x83"
  "\x02\x54\xaa\x01\x81\x85\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01"
  "\x81\x85\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x85\x02\x4f"
  "\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x85\x02\x4d\x9c\x01\x81\x83"
  "\x02\x4c\x9a\x01\x81\x85\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01"
  "\x81\x85\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x85\x02\x47"
  "\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x83"
  "\x02\x44\x8a\x01\x81\x85\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01"
  "\x81\x85\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x85\x02\x3f"
  "\x80\x01\x81\x83\x02\x3e\x7e\x81\x85\x02\x3d\x7c\x81\x83\x02\x3c"
  "\x7a\x81\x85\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x85\x02\x39\x74"
  "\x81\x83\x02\x38\x72\x81\x85\x02\x37\x70\x81\x83\x02\x36\x6e\x81"
  "\x85\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x83"
  "\x02\x32\x66\x81\x85\x02\x31\x64\x81\x83\x02\x30\x62\x81\x85\x02"
  "\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x85\x02\x2c"
  "\x5a\x81\x83\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x89\x02\x29\x54"
  "\x81\x83\x02\x28\x52\x81\x89\x02\x27\x50\x81\x83\x02\x26\x4e\x81"
  "\x85\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23\x48\x81\x83"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x85\x02"
  "\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x83\x02\x1c"
  "\x3a\x81\x85\x02\x1b\x38\x81\x87\x02\x1a\x36\x81\x83\x02\x19\x34"
  "\x81\x85\x02\x18\x32\x81\x87\x02\x17\x30\x81\x83\x02\x16\x2e\x81"
  "\x85\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x83"
  "\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02"
  "\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\xbb\x03\xb3\x05";

SCHEME_OBJECT *
usiexp_so_data_c1a95deae0cae5cf (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_usiexp_so_data_c1a95deae0cae5cf [0]))), (sizeof (prog_usiexp_so_data_c1a95deae0cae5cf)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_237]));
}

DECLARE_COMPILED_DATA_NS ("usiexp.so", usiexp_so_data_c1a95deae0cae5cf)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("usiexp.so", "1a3835b0afdcd423")
