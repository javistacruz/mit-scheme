/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:55-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 9
#define DEBUGGING_LABEL_1_2 8
#define OBJECT_1_0 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto syntax_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_4)
DEFLABEL (syntax_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_13 11
#define TAG_2_14 4
#define LABEL_2_11 13
#define TAG_2_12 5
#define LABEL_2_19 15
#define LABEL_2_20 17
#define LABEL_2_21 19
#define LABEL_2_16 21
#define LABEL_2_17 23
#define LABEL_2_25 25
#define LABEL_2_26 27
#define LABEL_2_23 29
#define ENVIRONMENT_LABEL_2_3 60
#define DEBUGGING_LABEL_2_2 59
#define OBJECT_2_1 58
#define OBJECT_2_0 57
#define EXECUTE_CACHE_2_30 31
#define EXECUTE_CACHE_2_29 33
#define EXECUTE_CACHE_2_28 35
#define EXECUTE_CACHE_2_27 37
#define EXECUTE_CACHE_2_24 39
#define EXECUTE_CACHE_2_22 41
#define EXECUTE_CACHE_2_18 43
#define EXECUTE_CACHE_2_15 45
#define EXECUTE_CACHE_2_10 47
#define EXECUTE_CACHE_2_8 49
#define EXECUTE_CACHE_2_6 51
#define FREE_REFERENCE_2_0 54
#define FREE_ASSIGNMENT_2_0 56
#define FREE_REFERENCES_LABEL_2_0 30
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
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
      goto syntax__19;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_27;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto swapB_26;

    case 6:
      current_block = (Rpc - LABEL_2_19);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_2_20);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_2_21);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax__25)
DEFLABEL (syntax__19)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd19.pObj) = (& (Rhp [-1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd19.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  ((Wrd22.pObj) [2]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_13])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_2_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (label_28)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (swapB_26)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (swapB_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_32)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_21])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_23)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_22)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_19])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define EXECUTE_CACHE_3_7 7
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto compile_expression_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_expression_4)
DEFLABEL (compile_expression_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_8 7
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
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
      goto compile_expressions_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_expressions_4)
DEFLABEL (compile_expressions_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto guarantee_syntactic_closure_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_syntactic_closure_4)
DEFLABEL (guarantee_syntactic_closure_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_2 9
#define OBJECT_6_1 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_syntactic_closure_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_syntactic_closure_5)
DEFLABEL (error_not_syntactic_closure_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_6_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_6_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_7 9
#define LABEL_7_12 11
#define LABEL_7_13 13
#define LABEL_7_14 15
#define LABEL_7_15 17
#define LABEL_7_17 19
#define LABEL_7_20 21
#define LABEL_7_10 23
#define LABEL_7_18 25
#define ENVIRONMENT_LABEL_7_3 54
#define DEBUGGING_LABEL_7_2 53
#define OBJECT_7_7 52
#define OBJECT_7_6 51
#define OBJECT_7_5 50
#define OBJECT_7_4 49
#define OBJECT_7_3 48
#define OBJECT_7_2 47
#define OBJECT_7_1 46
#define OBJECT_7_0 45
#define EXECUTE_CACHE_7_23 27
#define EXECUTE_CACHE_7_22 29
#define EXECUTE_CACHE_7_21 31
#define EXECUTE_CACHE_7_19 33
#define EXECUTE_CACHE_7_16 35
#define EXECUTE_CACHE_7_11 37
#define EXECUTE_CACHE_7_9 39
#define EXECUTE_CACHE_7_6 41
#define FREE_REFERENCE_7_0 44
#define FREE_REFERENCES_LABEL_7_0 26
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd67;
  machine_word Wrd43;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_4);
      goto make_syntactic_closure_14;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_syntactic_closure_19)
DEFLABEL (make_syntactic_closure_14)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_24;
  Wrd10 = Wrd14;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_8])), (Wrd11.pObj));

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_23;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_17);
  if (! (Rvl == (current_block [OBJECT_7_7])))
    goto label_25;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_25)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_22;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_26)
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (label_27)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_26;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_7_2]);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd62.Lng))))
    goto label_34;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  if ((Wrd43.Obj) == (Wrd37.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd46.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd56.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd56.Lng)))
    goto label_28;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_28)
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_30;
  (Wrd48.Obj) = (current_block [OBJECT_7_6]);
  goto label_29;

DEFLABEL (label_30)
  (Wrd48.Obj) = (current_block [OBJECT_7_5]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_26;

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto label_26;

DEFLABEL (label_34)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define LABEL_8_10 11
#define LABEL_8_12 13
#define LABEL_8_7 15
#define LABEL_8_14 17
#define LABEL_8_13 19
#define LABEL_8_11 21
#define LABEL_8_18 23
#define LABEL_8_15 25
#define LABEL_8_17 27
#define ENVIRONMENT_LABEL_8_3 36
#define DEBUGGING_LABEL_8_2 35
#define OBJECT_8_1 34
#define OBJECT_8_0 33
#define EXECUTE_CACHE_8_16 29
#define EXECUTE_CACHE_8_9 31
#define FREE_REFERENCES_LABEL_8_0 28
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto strip_syntactic_closures_19;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto loop_17;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_8_18);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (strip_syntactic_closures_26)
DEFLABEL (strip_syntactic_closures_19)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_7;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto loop_17;

DEFLABEL (label_29)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_27)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_8_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_34)
  goto loop_7;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = Rvl;
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_33;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_7;

DEFLABEL (label_33)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_23)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (loop_28)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_8_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_37;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (Rsp [0]) = Rvl;
  goto loop_17;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_41;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_40)
  goto loop_17;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  goto loop_17;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto close_syntax_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_syntax_3)
DEFLABEL (close_syntax_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_5 3
#define LABEL_10_6 5
#define LABEL_10_4 7
#define LABEL_10_7 9
#define ENVIRONMENT_LABEL_10_3 21
#define DEBUGGING_LABEL_10_2 20
#define OBJECT_10_4 19
#define OBJECT_10_3 18
#define OBJECT_10_2 17
#define OBJECT_10_1 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_9 11
#define EXECUTE_CACHE_10_8 13
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_10_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_4);
      goto identifierP_6;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identifierP_10)
DEFLABEL (identifierP_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_10_1]);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd39.Lng))))
    goto label_23;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_22;

DEFLABEL (label_21)
  (Wrd13.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_11)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_13;
  (Wrd15.Obj) = (current_block [OBJECT_10_4]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd15.Obj) = (current_block [OBJECT_10_0]);

DEFLABEL (label_12)
DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_19)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_16)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  (Wrd51.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_14)
DEFLABEL (label_18)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (Wrd26.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto label_19;

DEFLABEL (label_23)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define EXECUTE_CACHE_11_9 9
#define EXECUTE_CACHE_11_8 11
#define EXECUTE_CACHE_11_6 13
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto synthetic_identifierP_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (synthetic_identifierP_5)
DEFLABEL (synthetic_identifierP_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 13
#define DEBUGGING_LABEL_12_2 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_7 7
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_identifier_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_identifier_4)
DEFLABEL (guarantee_identifier_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_2 9
#define OBJECT_13_1 8
#define OBJECT_13_0 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto error_not_identifier_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_identifier_5)
DEFLABEL (error_not_identifier_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_13_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_13_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 13
#define DEBUGGING_LABEL_14_2 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto guarantee_synthetic_identifier_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_synthetic_identifier_4)
DEFLABEL (guarantee_synthetic_identifier_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_14_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 11
#define DEBUGGING_LABEL_15_2 10
#define OBJECT_15_2 9
#define OBJECT_15_1 8
#define OBJECT_15_0 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto error_not_synthetic_identifier_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_synthetic_identifier_5)
DEFLABEL (error_not_synthetic_identifier_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_15_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_15_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCE_16_0 10
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto make_synthetic_identifier_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_synthetic_identifier_4)
DEFLABEL (make_synthetic_identifier_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_8 7
#define LABEL_17_6 9
#define LABEL_17_9 11
#define LABEL_17_11 13
#define ENVIRONMENT_LABEL_17_3 28
#define DEBUGGING_LABEL_17_2 27
#define OBJECT_17_5 26
#define OBJECT_17_4 25
#define OBJECT_17_3 24
#define OBJECT_17_2 23
#define OBJECT_17_1 22
#define OBJECT_17_0 21
#define EXECUTE_CACHE_17_12 15
#define EXECUTE_CACHE_17_10 17
#define EXECUTE_CACHE_17_7 19
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd50;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto identifier__symbol_10;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identifier__symbol_14)
DEFLABEL (identifier__symbol_10)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_17_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Rsp [0]) = Rvl;
  goto loop_7;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_17_0]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_28;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_27;

DEFLABEL (label_26)
  (Wrd19.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng)))
    goto label_17;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_17)
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_19;
  (Wrd21.Obj) = (current_block [OBJECT_17_4]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd21.Obj) = (current_block [OBJECT_17_3]);

DEFLABEL (label_18)
DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_22)
  (Wrd40.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_20;

DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd37.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_17_5]);
  (Rsp [1]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));
  goto label_22;

DEFLABEL (label_28)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_10 11
#define LABEL_18_11 13
#define LABEL_18_13 15
#define ENVIRONMENT_LABEL_18_3 25
#define DEBUGGING_LABEL_18_2 24
#define OBJECT_18_0 23
#define EXECUTE_CACHE_18_12 17
#define EXECUTE_CACHE_18_9 19
#define EXECUTE_CACHE_18_6 21
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto identifier_P_8;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identifier_P_11)
DEFLABEL (identifier_P_8)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd6.Obj) == (Wrd7.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_18_0]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_5 7
#define LABEL_19_8 9
#define LABEL_19_12 11
#define LABEL_19_9 13
#define LABEL_19_16 15
#define LABEL_19_18 17
#define ENVIRONMENT_LABEL_19_3 45
#define DEBUGGING_LABEL_19_2 44
#define OBJECT_19_6 43
#define OBJECT_19_5 42
#define OBJECT_19_4 41
#define OBJECT_19_3 40
#define OBJECT_19_2 39
#define OBJECT_19_1 38
#define OBJECT_19_0 37
#define EXECUTE_CACHE_19_20 19
#define EXECUTE_CACHE_19_19 21
#define EXECUTE_CACHE_19_17 23
#define EXECUTE_CACHE_19_15 25
#define EXECUTE_CACHE_19_14 27
#define EXECUTE_CACHE_19_13 29
#define EXECUTE_CACHE_19_11 31
#define EXECUTE_CACHE_19_10 33
#define EXECUTE_CACHE_19_6 35
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd46;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto lookup_identifier_9;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_identifier_13)
DEFLABEL (lookup_identifier_9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_5]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_19_0]);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd41.Lng))))
    goto label_25;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_24;

DEFLABEL (label_23)
  (Wrd19.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng)))
    goto label_16;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_16)
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_18;
  (Wrd21.Obj) = (current_block [OBJECT_19_4]);
  goto label_17;

DEFLABEL (label_18)
  (Wrd21.Obj) = (current_block [OBJECT_19_3]);

DEFLABEL (label_17)
DEFLABEL (label_22)
  Rsp = (& (Rsp [3]));
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_20)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd11.Obj) = (current_block [OBJECT_19_6]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto label_19;

DEFLABEL (label_25)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 10
#define DEBUGGING_LABEL_20_2 9
#define OBJECT_20_0 8
#define FREE_REFERENCE_20_0 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto syntax_error_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_error_4)
DEFLABEL (syntax_error_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 2);

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
syntax_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto classifier__keyword_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classifier__keyword_4)
DEFLABEL (classifier__keyword_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto compiler__keyword_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler__keyword_4)
DEFLABEL (compiler__keyword_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 21
#define DEBUGGING_LABEL_23_2 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_10 11
#define EXECUTE_CACHE_23_9 13
#define EXECUTE_CACHE_23_7 15
#define FREE_REFERENCE_23_0 18
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto item__keyword_3;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (item__keyword_7)
DEFLABEL (item__keyword_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define TAG_24_7 2
#define LABEL_24_9 9
#define ENVIRONMENT_LABEL_24_3 17
#define DEBUGGING_LABEL_24_2 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_10 11
#define EXECUTE_CACHE_24_8 13
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto capture_syntactic_environment_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (capture_syntactic_environment_6)
DEFLABEL (capture_syntactic_environment_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd10.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_24_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define ENVIRONMENT_LABEL_25_3 14
#define DEBUGGING_LABEL_25_2 13
#define EXECUTE_CACHE_25_9 9
#define EXECUTE_CACHE_25_7 11
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_25_4);
      goto reverse_syntactic_environments_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reverse_syntactic_environments_5)
DEFLABEL (reverse_syntactic_environments_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_15 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_19 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_23 25
#define LABEL_18 27
#define LABEL_21 29
#define LABEL_26 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_29 43
#define ENVIRONMENT_LABEL_3 76
#define DEBUGGING_LABEL_2 75
#define PURIFICATION_ROOT 74
#define OBJECT_15 73
#define OBJECT_14 72
#define OBJECT_13 71
#define OBJECT_12 70
#define OBJECT_11 69
#define OBJECT_10 68
#define OBJECT_9 67
#define OBJECT_8 66
#define OBJECT_7 65
#define OBJECT_6 64
#define OBJECT_5 63
#define OBJECT_4 62
#define OBJECT_3 61
#define OBJECT_2 60
#define OBJECT_1 59
#define OBJECT_0 58
#define EXECUTE_CACHE_20 45
#define EXECUTE_CACHE_16 47
#define EXECUTE_CACHE_12 49
#define EXECUTE_CACHE_8 51
#define FREE_REFERENCE_0 54
#define GLOBAL_EXECUTE_CACHE_5 56
#define FREE_REFERENCES_LABEL_0 44
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_so_f053c446eb50685d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_23);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_19;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto label_22;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto label_23;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto expression_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_14)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_28])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_23)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_22)
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
	2,
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
	3,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
      goto label_21;
    blocks = (current_block [OBJECT_15]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_27])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_21)
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
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_33;
  Wrd12 = Wrd16;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_31;
  Wrd11 = Wrd15;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_29;
  Wrd12 = Wrd16;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_27;
  Wrd12 = Wrd16;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_25;
  Wrd12 = Wrd16;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd13.pObj));

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_18)
  (Wrd12.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd13.pObj));

DEFLABEL (label_17)
  (Wrd12.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd13.pObj));

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syntax_so_f053c446eb50685d [25] =
  {
    { "syntax_so_code_1", 1, syntax_so_code_1 },
    { "syntax_so_code_2", 14, syntax_so_code_2 },
    { "syntax_so_code_3", 2, syntax_so_code_3 },
    { "syntax_so_code_4", 2, syntax_so_code_4 },
    { "syntax_so_code_5", 2, syntax_so_code_5 },
    { "syntax_so_code_6", 1, syntax_so_code_6 },
    { "syntax_so_code_7", 12, syntax_so_code_7 },
    { "syntax_so_code_8", 13, syntax_so_code_8 },
    { "syntax_so_code_9", 1, syntax_so_code_9 },
    { "syntax_so_code_10", 4, syntax_so_code_10 },
    { "syntax_so_code_11", 3, syntax_so_code_11 },
    { "syntax_so_code_12", 2, syntax_so_code_12 },
    { "syntax_so_code_13", 1, syntax_so_code_13 },
    { "syntax_so_code_14", 2, syntax_so_code_14 },
    { "syntax_so_code_15", 1, syntax_so_code_15 },
    { "syntax_so_code_16", 2, syntax_so_code_16 },
    { "syntax_so_code_17", 6, syntax_so_code_17 },
    { "syntax_so_code_18", 7, syntax_so_code_18 },
    { "syntax_so_code_19", 8, syntax_so_code_19 },
    { "syntax_so_code_20", 2, syntax_so_code_20 },
    { "syntax_so_code_21", 2, syntax_so_code_21 },
    { "syntax_so_code_22", 2, syntax_so_code_22 },
    { "syntax_so_code_23", 4, syntax_so_code_23 },
    { "syntax_so_code_24", 4, syntax_so_code_24 },
    { "syntax_so_code_25", 3, syntax_so_code_25 }
  };

int
decl_syntax_so_f053c446eb50685d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_so_f053c446eb50685d);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax.so", 21, decl_syntax_so_f053c446eb50685d, syntax_so_f053c446eb50685d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_so_data_f053c446eb50685d [3418] =
  "\x4d\x30\xad\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x28\x0d\xb9"
  "\x23\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x1d\xb1\x0d\xbb\x25"
  "\xb3\x24\x28\x0d\x28\x0d\xbb\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xbc\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88"
  "\x28\x0d\x28\x0d\xbf\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x86\x88\x06\x1d\x0c\x28\x0d\x1c\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x06\x07\x85\xc2\x1c\x02\x0c\x0d"
  "\x1c\x0d\x1c\x24\x28\xb3\x28\x0d\x28\x0d\x28\x0d\xbb\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xc1\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06"
  "\x85\x1b\x02\x07\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x06\x07\x85\x1b\x02\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x06\x07\x85\x1b\x02"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\xb8\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17"
  "\x0d\xb0\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x0d\x17\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\xb3"
  "\xc3\x0d\x1c\x1b\x1b\x1b\x08\x8a\xb4\xb7\xb1\x0d\x9b\x1b\x2a\xb6"
  "\x2a\xb5\x2a\xb2\x2a\x9b\x28\x0d\x26\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x79\x6e\x74"
  "\x61\x78\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x08\x73\x79"
  "\x6e\x74\x61\x78\x2a\x02\x16\x04\x84\x06\x03\x0a\x02\x02\x12\x2a"
  "\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62\x61\x73\x65\x2a"
  "\x02\x02\x04\x0f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69"
  "\x73\x74\x04\x18\x2d\x3e\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x18\x69\x6e\x69"
  "\x74\x69\x61\x6c\x2d\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61"
  "\x62\x61\x73\x65\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c"
  "\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x21\x73\x79\x6e\x74\x61\x63"
  "\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x3f\x03\x1f\x6f\x75\x74\x70"
  "\x75\x74\x2f\x70\x6f\x73\x74\x2d\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x14\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x03"
  "\x25\x6d\x61\x6b\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d"
  "\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x03\x1c\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x62"
  "\x6f\x64\x79\x2d\x69\x74\x65\x6d\x2f\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x05\x0e\x63\x6c\x61\x73\x73\x69\x66\x79\x2f\x62\x6f\x64"
  "\x79\x03\x10\x6f\x75\x74\x70\x75\x74\x2f\x73\x65\x71\x75\x65\x6e"
  "\x63\x65\x0c\x24\x1e\x81\x85\x02\x23\x1c\x81\x87\x02\x22\x1a\x81"
  "\x85\x02\x21\x18\x81\x85\x02\x20\x16\x81\x83\x02\x1f\x14\x81\x83"
  "\x02\x1e\x12\x81\x85\x02\x1d\x10\x81\x83\x02\x1c\x0e\x81\x83\x02"
  "\x1b\x0c\x81\x83\x02\x1a\x0a\x81\x87\x02\x19\x08\x81\x85\x02\x18"
  "\x06\x81\x85\x02\x17\x04\x84\x06\x1d\x3d\x02\x04\x14\x63\x6c\x61"
  "\x73\x73\x69\x66\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x03\x18\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x69\x74\x65\x6d\x2f\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x26\x06\x81\x85\x02\x25"
  "\x04\x84\x06\x05\x0d\x02\x04\x04\x6d\x61\x70\x04\x13\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03"
  "\x28\x06\x81\x85\x02\x27\x04\x84\x06\x05\x0d\x09\x02\x02\x03\x13"
  "\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x3f\x0a\x04\x1c\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x73"
  "\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x0b\x03\x2a\x06\x81\x85\x02\x29\x04\x84\x04\x05\x0e\x0c\x02\x08"
  "\x12\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x63\x6c\x6f\x73\x75"
  "\x72\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0d\x02\x2b"
  "\x04\x84\x04\x03\x0c\x0e\x02\x08\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x74\x79\x70\x65\x3f\x0f\x1e\x14\x6c\x69\x73\x74\x20\x6f\x66\x20"
  "\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x73\x17\x6d\x61\x6b\x65"
  "\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\x10\x0c\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x11"
  "\x02\x04\x06\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69"
  "\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x04\x05\x6d\x65\x6d\x71"
  "\x05\x18\x25\x6d\x61\x6b\x65\x2d\x73\x79\x6e\x74\x61\x63\x74\x69"
  "\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x03\x17\x73\x79\x6e\x74\x61"
  "\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2f\x66\x6f\x72"
  "\x6d\x12\x03\x1d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2f\x66\x72\x65\x65\x2d\x6e\x61\x6d\x65\x73"
  "\x13\x03\x0a\x03\x11\x09\x37\x1a\x81\x8b\x02\x36\x18\x81\x89\x02"
  "\x35\x16\x81\x89\x02\x34\x14\x81\x89\x02\x33\x12\x81\x83\x02\x32"
  "\x10\x81\x89\x02\x31\x0e\x81\x89\x02\x30\x0c\x81\x89\x02\x2f\x0a"
  "\x81\x89\x02\x2e\x08\x81\x8f\x02\x2d\x06\x81\x87\x02\x2c\x04\x85"
  "\x08\x19\x37\x14\x02\x09\x04\x63\x64\x72\x04\x63\x61\x72\x03\x0a"
  "\x03\x12\x03\x44\x1c\x81\x85\x02\x43\x1a\x81\x83\x02\x42\x18\x81"
  "\x87\x02\x41\x16\x81\x83\x02\x40\x14\x81\x83\x02\x3f\x12\xfd\xff"
  "\x03\x3e\x10\x81\x83\x02\x3d\x0e\x81\x85\x02\x3c\x0c\x81\x83\x02"
  "\x3b\x0a\x81\x85\x02\x3a\x08\x81\x83\x02\x39\x06\x81\x83\x02\x38"
  "\x04\x83\x04\x1b\x25\x15\x02\x0a\x05\x10\x02\x45\x04\x84\x06\x03"
  "\x0a\x16\x02\x0b\x0f\x1e\x03\x16\x73\x79\x6e\x74\x68\x65\x74\x69"
  "\x63\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x17\x03\x09"
  "\x6b\x65\x79\x77\x6f\x72\x64\x3f\x03\x49\x0a\x81\x83\x02\x48\x08"
  "\x83\x04\x47\x06\x81\x83\x02\x46\x04\x81\x83\x02\x09\x16\x18\x02"
  "\x0c\x03\x0a\x03\x12\x03\x11\x04\x4c\x08\x81\x83\x02\x4b\x06\x81"
  "\x83\x02\x4a\x04\x83\x04\x07\x11\x19\x02\x0d\x02\x03\x11\x04\x15"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x69\x64\x65\x6e\x74\x69"
  "\x66\x69\x65\x72\x1a\x03\x4e\x06\x81\x85\x02\x4d\x04\x84\x04\x05"
  "\x0e\x1b\x02\x0e\x08\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72"
  "\x05\x0d\x02\x4f\x04\x84\x04\x03\x0c\x1c\x02\x0f\x02\x03\x17\x04"
  "\x1f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x73\x79\x6e\x74\x68"
  "\x65\x74\x69\x63\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x1d"
  "\x03\x51\x06\x81\x85\x02\x50\x04\x84\x04\x05\x0e\x1e\x02\x10\x08"
  "\x15\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x20\x69\x64\x65\x6e\x74"
  "\x69\x66\x69\x65\x72\x05\x0d\x02\x52\x04\x84\x04\x03\x0c\x0d\x02"
  "\x11\x1b\x6e\x75\x6c\x6c\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1f\x02\x04\x0d"
  "\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x20\x02\x54\x06"
  "\x81\x85\x02\x53\x04\x83\x04\x05\x0d\x21\x02\x12\x13\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x65\x72\x2d\x3e\x73\x79\x6d\x62\x6f\x6c\x22"
  "\x0f\x1e\x03\x0a\x04\x1a\x03\x12\x04\x5a\x0e\x81\x85\x02\x59\x0c"
  "\x81\x83\x02\x58\x0a\x81\x85\x02\x57\x08\x81\x85\x02\x56\x06\x81"
  "\x85\x02\x55\x04\x83\x04\x0d\x1d\x23\x02\x13\x04\x12\x6c\x6f\x6f"
  "\x6b\x75\x70\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x24\x03"
  "\x0f\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x3f\x03"
  "\x13\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x2f\x6e"
  "\x61\x6d\x65\x04\x61\x10\x81\x87\x02\x60\x0e\x81\x85\x02\x5f\x0c"
  "\x81\x85\x02\x5e\x0a\x81\x85\x02\x5d\x08\x81\x89\x02\x5c\x06\x81"
  "\x89\x02\x5b\x04\x86\x0a\x0f\x1a\x25\x02\x14\x24\x26\x50\x72\x65"
  "\x6d\x61\x74\x75\x72\x65\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x20\x74\x6f\x20\x72\x65\x73\x65\x72\x76\x65\x64\x20\x6e\x61\x6d"
  "\x65\x3a\x0f\x1e\x04\x1d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6c\x6f\x6f\x6b"
  "\x75\x70\x03\x0a\x03\x13\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2d\x69\x74\x65\x6d\x03\x14\x72\x65\x73\x65\x72\x76"
  "\x65\x64\x2d\x6e\x61\x6d\x65\x2d\x69\x74\x65\x6d\x3f\x04\x0d\x73"
  "\x79\x6e\x74\x61\x78\x2d\x65\x72\x72\x6f\x72\x0f\x04\x1a\x03\x1e"
  "\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x26\x03\x12"
  "\x04\x24\x0a\x69\x12\x81\x87\x02\x68\x10\x81\x87\x02\x67\x0e\x81"
  "\x87\x02\x66\x0c\x81\x87\x02\x65\x0a\x81\x83\x02\x64\x08\x81\x85"
  "\x02\x63\x06\x81\x87\x02\x62\x04\x84\x06\x11\x2e\x27\x02\x15\x06"
  "\x61\x70\x70\x6c\x79\x06\x65\x72\x72\x6f\x72\x02\x6b\x06\x81\x83"
  "\x02\x6a\x04\xff\x03\x05\x0b\x28\x02\x16\x03\x15\x6d\x61\x6b\x65"
  "\x2d\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65\x6d"
  "\x03\x0e\x69\x74\x65\x6d\x2d\x3e\x6b\x65\x79\x77\x6f\x72\x64\x29"
  "\x03\x6d\x06\x81\x83\x02\x6c\x04\x83\x04\x05\x0d\x2a\x02\x17\x03"
  "\x13\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69"
  "\x74\x65\x6d\x03\x29\x03\x6f\x06\x81\x83\x02\x6e\x04\x83\x04\x05"
  "\x0d\x2b\x02\x18\x08\x6b\x65\x79\x77\x6f\x72\x64\x1f\x02\x03\x24"
  "\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x05\x1d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x64\x65\x66\x69\x6e"
  "\x65\x04\x20\x04\x73\x0a\x81\x85\x02\x72\x08\x81\x83\x02\x71\x06"
  "\x81\x85\x02\x70\x04\x83\x04\x09\x16\x1f\x02\x19\x03\x14\x63\x6c"
  "\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x3e\x6b\x65\x79\x77\x6f\x72"
  "\x64\x2c\x05\x0e\x63\x6c\x61\x73\x73\x69\x66\x79\x2f\x66\x6f\x72"
  "\x6d\x03\x77\x0a\x81\x89\x02\x76\x08\x81\x89\x02\x75\x06\x81\x83"
  "\x02\x74\x04\x83\x04\x09\x12\x2d\x02\x1a\x03\x1e\x63\x61\x70\x74"
  "\x75\x72\x65\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x20\x03\x7a\x08\x81\x87"
  "\x02\x79\x06\x81\x85\x02\x78\x04\x84\x06\x07\x0f\x2e\x1a\x2f\x2f"
  "\x12\x2e\x04\x2d\x04\x1f\x04\x2b\x04\x2a\x04\x28\x04\x27\x04\x25"
  "\x04\x23\x04\x21\x04\x0d\x04\x1e\x04\x1c\x04\x1b\x04\x19\x04\x18"
  "\x08\x16\x04\x15\x04\x14\x04\x0e\x04\x0c\x04\x16\x1f\x72\x65\x76"
  "\x65\x72\x73\x65\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x73\x29\x12\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x3e\x6b\x65\x79\x77\x6f\x72\x64\x2c\x0f"
  "\x24\x0d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3d\x3f\x22\x1a"
  "\x6d\x61\x6b\x65\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x2d\x69"
  "\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x1d\x1f\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x2d\x69"
  "\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x1a\x15\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x17"
  "\x11\x20\x19\x73\x74\x72\x69\x70\x2d\x73\x79\x6e\x74\x61\x63\x74"
  "\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x73\x10\x0b\x1c\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x79\x6e\x74\x61\x63\x74\x69"
  "\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x16\x13\x05\x66\x6f\x72\x6d"
  "\x2f\x26\x0b\x66\x72\x65\x65\x2d\x6e\x61\x6d\x65\x73\x2e\x0a\x0c"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14\x3c\x73"
  "\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x3e\x2c\x2d\x2e\x2f\x07\x73\x79\x6e\x74\x61\x78\x09\x04\x04\x04"
  "\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x2c\x02\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d"
  "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63"
  "\x6f\x72\x64\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72"
  "\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x05\x15"
  "\x2c\x80\x80\x04\x14\x2a\x81\x81\x02\x13\x28\x81\x81\x02\x12\x26"
  "\x81\x85\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81"
  "\x89\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x89"
  "\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x89\x02"
  "\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81\x87\x02\x05"
  "\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x89\x02\x02\x06"
  "\x81\x83\x02\x01\x04\x81\x83\x02\x2b\x4d";

SCHEME_OBJECT *
syntax_so_data_f053c446eb50685d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_so_data_f053c446eb50685d [0]))), (sizeof (prog_syntax_so_data_f053c446eb50685d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_29]));
}

DECLARE_COMPILED_DATA_NS ("syntax.so", syntax_so_data_f053c446eb50685d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax.so", "a2ddc321365ec5b6")
