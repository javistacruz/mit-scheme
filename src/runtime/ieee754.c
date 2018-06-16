/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:39-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 10
#define DEBUGGING_LABEL_1_2 9
#define OBJECT_1_1 8
#define OBJECT_1_0 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto decompose_ieee754_double_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decompose_ieee754_double_3)
DEFLABEL (decompose_ieee754_double_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define TAG_2_8 2
#define LABEL_2_11 9
#define TAG_2_12 3
#define LABEL_2_13 11
#define TAG_2_14 4
#define LABEL_2_15 13
#define TAG_2_16 5
#define LABEL_2_17 15
#define TAG_2_18 6
#define LABEL_2_19 17
#define LABEL_2_34 19
#define LABEL_2_21 21
#define LABEL_2_22 23
#define LABEL_2_42 25
#define LABEL_2_24 27
#define LABEL_2_25 29
#define LABEL_2_26 31
#define LABEL_2_44 33
#define LABEL_2_29 35
#define LABEL_2_30 37
#define LABEL_2_32 39
#define LABEL_2_31 41
#define LABEL_2_49 43
#define LABEL_2_35 45
#define LABEL_2_36 47
#define LABEL_2_37 49
#define LABEL_2_38 51
#define LABEL_2_52 53
#define LABEL_2_45 55
#define LABEL_2_46 57
#define LABEL_2_47 59
#define LABEL_2_48 61
#define LABEL_2_50 63
#define LABEL_2_53 65
#define LABEL_2_54 67
#define LABEL_2_56 69
#define LABEL_2_57 71
#define ENVIRONMENT_LABEL_2_3 110
#define DEBUGGING_LABEL_2_2 109
#define OBJECT_2_7 108
#define OBJECT_2_6 107
#define OBJECT_2_5 106
#define OBJECT_2_4 105
#define OBJECT_2_3 104
#define OBJECT_2_2 103
#define OBJECT_2_1 102
#define OBJECT_2_0 101
#define EXECUTE_CACHE_2_58 73
#define EXECUTE_CACHE_2_55 75
#define EXECUTE_CACHE_2_51 77
#define EXECUTE_CACHE_2_43 79
#define EXECUTE_CACHE_2_41 81
#define EXECUTE_CACHE_2_40 83
#define EXECUTE_CACHE_2_39 85
#define EXECUTE_CACHE_2_33 87
#define EXECUTE_CACHE_2_28 89
#define EXECUTE_CACHE_2_27 91
#define EXECUTE_CACHE_2_23 93
#define EXECUTE_CACHE_2_20 95
#define EXECUTE_CACHE_2_10 97
#define EXECUTE_CACHE_2_9 99
#define FREE_REFERENCES_LABEL_2_0 72
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_2_4);
      goto decompose_ieee754_binary_34;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_38;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_39;

    case 3:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_40;

    case 4:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_41;

    case 5:
      current_block = (Rpc - LABEL_2_15);
      goto lambda_42;

    case 6:
      current_block = (Rpc - LABEL_2_17);
      goto lambda_43;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto lambda_1;

    case 8:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_2_42);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_2_29);
      goto continuation_23;

    case 17:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_22;

    case 18:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_2_49);
      goto continuation_14;

    case 21:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_2_37);
      goto continuation_11;

    case 24:
      current_block = (Rpc - LABEL_2_38);
      goto continuation_10;

    case 25:
      current_block = (Rpc - LABEL_2_52);
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_2_45);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_2_46);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_2_47);
      goto continuation_26;

    case 29:
      current_block = (Rpc - LABEL_2_48);
      goto continuation_25;

    case 30:
      current_block = (Rpc - LABEL_2_50);
      goto continuation_15;

    case 31:
      current_block = (Rpc - LABEL_2_53);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_2_54);
      goto continuation_30;

    case 33:
      current_block = (Rpc - LABEL_2_56);
      goto continuation_17;

    case 34:
      current_block = (Rpc - LABEL_2_57);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decompose_ieee754_binary_37)
DEFLABEL (decompose_ieee754_binary_34)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  ((Wrd17.pObj) [2]) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 4;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd21 = Wrd14;
  ((Wrd21.pObj) [2]) = (Wrd9.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [5]) = (Wrd16.Obj);
  (Rsp [6]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_13])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  ((Wrd31.pObj) [2]) = (Wrd9.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Rsp [5]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_15])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd38 = Wrd37;
  (Wrd39.Obj) = (Rsp [8]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (Rsp [7]) = (Wrd36.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_17])));
  Rhp += 2;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd45 = Wrd42;
  ((Wrd45.pObj) [2]) = (Wrd9.Obj);
  ((Wrd45.pObj) [3]) = (Wrd39.Obj);
  (Rsp [8]) = (Wrd41.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (Rsp [4]) = (Wrd49.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_34);

DEFLABEL (label_46)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_39]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_43]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_49]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_49);

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_50]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_51]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_50);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_56]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_57]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_39]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_57);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_55]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_56);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_2_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_43]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;

DEFLABEL (label_47)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (label_48)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_42);
  goto label_47;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_2_15);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_2_17);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd7.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_2_31);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_44);

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_45]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_48]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd27.Obj) = (Rsp [7]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_39]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_55]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_46);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_45);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_40]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_2_52);

DEFLABEL (label_49)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_53]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_54]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_39]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_58]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_53);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (lambda_44)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_2_19);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define ENVIRONMENT_LABEL_3_3 23
#define DEBUGGING_LABEL_3_2 22
#define OBJECT_3_2 21
#define OBJECT_3_1 20
#define OBJECT_3_0 19
#define EXECUTE_CACHE_3_11 13
#define EXECUTE_CACHE_3_10 15
#define EXECUTE_CACHE_3_6 17
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto ieee754_sign_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ieee754_sign_7)
DEFLABEL (ieee754_sign_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (current_block [OBJECT_3_2]);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_3_0]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_12 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define LABEL_4_17 15
#define LABEL_4_15 17
#define LABEL_4_13 19
#define LABEL_4_19 21
#define LABEL_4_20 23
#define LABEL_4_22 25
#define LABEL_4_27 27
#define LABEL_4_24 29
#define LABEL_4_25 31
#define LABEL_4_28 33
#define LABEL_4_31 35
#define LABEL_4_29 37
#define LABEL_4_30 39
#define LABEL_4_41 41
#define LABEL_4_32 43
#define LABEL_4_33 45
#define LABEL_4_34 47
#define LABEL_4_35 49
#define LABEL_4_36 51
#define LABEL_4_37 53
#define LABEL_4_39 55
#define LABEL_4_38 57
#define LABEL_4_49 59
#define LABEL_4_42 61
#define LABEL_4_44 63
#define LABEL_4_45 65
#define LABEL_4_46 67
#define LABEL_4_47 69
#define LABEL_4_48 71
#define LABEL_4_50 73
#define LABEL_4_51 75
#define LABEL_4_52 77
#define LABEL_4_54 79
#define LABEL_4_53 81
#define LABEL_4_57 83
#define ENVIRONMENT_LABEL_4_3 119
#define DEBUGGING_LABEL_4_2 118
#define OBJECT_4_6 117
#define OBJECT_4_5 116
#define OBJECT_4_4 115
#define OBJECT_4_3 114
#define OBJECT_4_2 113
#define OBJECT_4_1 112
#define OBJECT_4_0 111
#define EXECUTE_CACHE_4_56 85
#define EXECUTE_CACHE_4_55 87
#define EXECUTE_CACHE_4_43 89
#define EXECUTE_CACHE_4_40 91
#define EXECUTE_CACHE_4_26 93
#define EXECUTE_CACHE_4_23 95
#define EXECUTE_CACHE_4_21 97
#define EXECUTE_CACHE_4_18 99
#define EXECUTE_CACHE_4_16 101
#define EXECUTE_CACHE_4_14 103
#define EXECUTE_CACHE_4_11 105
#define EXECUTE_CACHE_4_10 107
#define EXECUTE_CACHE_4_7 109
#define FREE_REFERENCES_LABEL_4_0 84
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_4_4);
      goto decompose_ieee754_46;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_44;

    case 9:
      current_block = (Rpc - LABEL_4_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_4_27);
      goto loop_37;

    case 13:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_32;

    case 16:
      current_block = (Rpc - LABEL_4_31);
      goto loop_29;

    case 17:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_33;

    case 19:
      current_block = (Rpc - LABEL_4_41);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_4_34);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_4_37);
      goto continuation_14;

    case 26:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_35;

    case 27:
      current_block = (Rpc - LABEL_4_38);
      goto continuation_34;

    case 28:
      current_block = (Rpc - LABEL_4_49);
      goto significand_42;

    case 29:
      current_block = (Rpc - LABEL_4_42);
      goto continuation_25;

    case 30:
      current_block = (Rpc - LABEL_4_44);
      goto continuation_20;

    case 31:
      current_block = (Rpc - LABEL_4_45);
      goto continuation_19;

    case 32:
      current_block = (Rpc - LABEL_4_46);
      goto continuation_18;

    case 33:
      current_block = (Rpc - LABEL_4_47);
      goto continuation_13;

    case 34:
      current_block = (Rpc - LABEL_4_48);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_4_50);
      goto continuation_41;

    case 36:
      current_block = (Rpc - LABEL_4_51);
      goto continuation_40;

    case 37:
      current_block = (Rpc - LABEL_4_52);
      goto continuation_39;

    case 38:
      current_block = (Rpc - LABEL_4_54);
      goto continuation_28;

    case 39:
      current_block = (Rpc - LABEL_4_53);
      goto continuation_26;

    case 40:
      current_block = (Rpc - LABEL_4_57);
      goto continuation_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decompose_ieee754_49)
DEFLABEL (decompose_ieee754_46)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd7.Obj) = (Rsp [8]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [6]) = (Wrd8.Obj);
  (Rsp [7]) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [8]) = (Wrd10.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_53)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_4_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd7.Obj) = (current_block [OBJECT_4_0]);
  goto label_54;

DEFLABEL (label_55)
  (Wrd7.Obj) = (current_block [OBJECT_4_1]);

DEFLABEL (label_54)
DEFLABEL (label_56)
  (Rsp [8]) = (Wrd7.Obj);
  Rsp = (& (Rsp [7]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_57)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_37;

DEFLABEL (label_58)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_29;

DEFLABEL (label_59)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_29);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_60;
  (Wrd21.Obj) = (Rsp [7]);
  (Rsp [10]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [11]) = (Wrd22.Obj);
  Rsp = (& (Rsp [10]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_60)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd7.Obj) = (Rsp [7]);
  (Rsp [10]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [11]) = (Wrd8.Obj);
  Rsp = (& (Rsp [10]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_61)
  (Wrd10.Obj) = (Rsp [8]);
  (Rsp [9]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [10]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_44]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.pObj) = (& (Rsp [4]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_46]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_45);
  (* (--Rsp)) = Rvl;
  goto significand_42;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_44);
  (Rsp [11]) = Rvl;
  Rsp = (& (Rsp [9]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (loop_50)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_4_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_4_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [13]) = (Wrd7.Obj);
  Rsp = (& (Rsp [12]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_62)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_4_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_40]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_4_39);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_48]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_4_48);
  (Rsp [1]) = Rvl;
  goto loop_37;

DEFLABEL (label_63)
  (Wrd12.Obj) = (Rsp [11]);
  (Rsp [10]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [12]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.pObj) = (& (Rsp [6]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto significand_42;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_4_38);
  (Rsp [13]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [11]) = (Wrd6.Obj);
  Rsp = (& (Rsp [10]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (loop_51)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_4_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_43]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_4_41);

DEFLABEL (label_65)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_42]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_4_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd7.Obj) = (Rsp [11]);
  (Rsp [10]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [12]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_54]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [6]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto significand_42;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_54);
  (Rsp [13]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [11]) = (Wrd6.Obj);
  Rsp = (& (Rsp [10]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_64)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_53]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_4_53);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_57]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_56]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_57);
  (Rsp [1]) = Rvl;
  goto loop_29;

DEFLABEL (significand_52)
DEFLABEL (significand_42)
  INTERRUPT_CHECK (26, LABEL_4_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_52]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_4_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_4_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_56]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_4_50);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_55]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 10
#define DEBUGGING_LABEL_5_2 9
#define OBJECT_5_1 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto compose_ieee754_double_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_double_3)
DEFLABEL (compose_ieee754_double_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [4]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define TAG_6_8 2
#define LABEL_6_11 9
#define LABEL_6_13 11
#define LABEL_6_16 13
#define LABEL_6_15 15
#define LABEL_6_23 17
#define LABEL_6_26 19
#define LABEL_6_20 21
#define LABEL_6_21 23
#define LABEL_6_24 25
#define LABEL_6_27 27
#define LABEL_6_28 29
#define LABEL_6_31 31
#define LABEL_6_35 33
#define ENVIRONMENT_LABEL_6_3 70
#define DEBUGGING_LABEL_6_2 69
#define OBJECT_6_3 68
#define OBJECT_6_2 67
#define OBJECT_6_1 66
#define OBJECT_6_0 65
#define EXECUTE_CACHE_6_36 35
#define EXECUTE_CACHE_6_34 37
#define EXECUTE_CACHE_6_33 39
#define EXECUTE_CACHE_6_32 41
#define EXECUTE_CACHE_6_30 43
#define EXECUTE_CACHE_6_29 45
#define EXECUTE_CACHE_6_25 47
#define EXECUTE_CACHE_6_22 49
#define EXECUTE_CACHE_6_19 51
#define EXECUTE_CACHE_6_18 53
#define EXECUTE_CACHE_6_17 55
#define EXECUTE_CACHE_6_14 57
#define EXECUTE_CACHE_6_12 59
#define EXECUTE_CACHE_6_10 61
#define EXECUTE_CACHE_6_9 63
#define FREE_REFERENCES_LABEL_6_0 34
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_6_4);
      goto compose_ieee754_binary_19;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_6_23);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_6_35);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_binary_22)
DEFLABEL (compose_ieee754_binary_19)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 4;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd21 = Wrd14;
  ((Wrd21.pObj) [2]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [5]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [7]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (label_25)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [5]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd20.Obj);
  (Wrd21.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [7]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [4]) = (Wrd24.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [7]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_35);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Rsp [7]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [8]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  (Rsp [3]) = (Wrd13.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_36]));

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_26);

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_34]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [7]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [8]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_33]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define OBJECT_7_1 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto compose_ieee754_zero_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_zero_4)
DEFLABEL (compose_ieee754_zero_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7_1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_9 11
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_11 13
#define EXECUTE_CACHE_8_10 15
#define EXECUTE_CACHE_8_8 17
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto compose_ieee754_subnormal_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_subnormal_7)
DEFLABEL (compose_ieee754_subnormal_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_9 5
#define LABEL_9_5 7
#define LABEL_9_6 9
#define LABEL_9_7 11
#define LABEL_9_10 13
#define LABEL_9_15 15
#define LABEL_9_16 17
#define LABEL_9_17 19
#define LABEL_9_18 21
#define ENVIRONMENT_LABEL_9_3 42
#define DEBUGGING_LABEL_9_2 41
#define OBJECT_9_3 40
#define OBJECT_9_2 39
#define OBJECT_9_1 38
#define OBJECT_9_0 37
#define EXECUTE_CACHE_9_20 23
#define EXECUTE_CACHE_9_19 25
#define EXECUTE_CACHE_9_14 27
#define EXECUTE_CACHE_9_13 29
#define EXECUTE_CACHE_9_12 31
#define EXECUTE_CACHE_9_11 33
#define EXECUTE_CACHE_9_8 35
#define FREE_REFERENCES_LABEL_9_0 22
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto compose_ieee754_normal_9;

    case 1:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_normal_12)
DEFLABEL (compose_ieee754_normal_9)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_9);

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define OBJECT_10_0 7
#define EXECUTE_CACHE_10_5 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto compose_ieee754_infinity_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_infinity_3)
DEFLABEL (compose_ieee754_infinity_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 9
#define DEBUGGING_LABEL_11_2 8
#define OBJECT_11_0 7
#define EXECUTE_CACHE_11_5 5
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto compose_ieee754_nan_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compose_ieee754_nan_3)
DEFLABEL (compose_ieee754_nan_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_10 5
#define LABEL_12_5 7
#define LABEL_12_6 9
#define LABEL_12_7 11
#define LABEL_12_8 13
#define LABEL_12_11 15
#define LABEL_12_12 17
#define LABEL_12_13 19
#define LABEL_12_19 21
#define LABEL_12_21 23
#define LABEL_12_22 25
#define ENVIRONMENT_LABEL_12_3 49
#define DEBUGGING_LABEL_12_2 48
#define OBJECT_12_4 47
#define OBJECT_12_3 46
#define OBJECT_12_2 45
#define OBJECT_12_1 44
#define OBJECT_12_0 43
#define EXECUTE_CACHE_12_23 27
#define EXECUTE_CACHE_12_20 29
#define EXECUTE_CACHE_12_18 31
#define EXECUTE_CACHE_12_17 33
#define EXECUTE_CACHE_12_16 35
#define EXECUTE_CACHE_12_15 37
#define EXECUTE_CACHE_12_14 39
#define EXECUTE_CACHE_12_9 41
#define FREE_REFERENCES_LABEL_12_0 26
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto ieee754_binary_parameters_15;

    case 1:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_12_21);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ieee754_binary_parameters_18)
DEFLABEL (ieee754_binary_parameters_15)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_10);

DEFLABEL (label_19)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define TAG_13_8 3
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define EXECUTE_CACHE_13_12 11
#define EXECUTE_CACHE_13_11 13
#define EXECUTE_CACHE_13_10 15
#define EXECUTE_CACHE_13_9 17
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto ieee754_double_recomposableP_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ieee754_double_recomposableP_6)
DEFLABEL (ieee754_double_recomposableP_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_13_6);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_7 7
#define TAG_14_8 2
#define LABEL_14_11 9
#define TAG_14_12 3
#define LABEL_14_13 11
#define LABEL_14_14 13
#define LABEL_14_15 15
#define TAG_14_16 6
#define LABEL_14_17 17
#define LABEL_14_26 19
#define LABEL_14_19 21
#define LABEL_14_20 23
#define LABEL_14_34 25
#define LABEL_14_22 27
#define LABEL_14_39 29
#define LABEL_14_24 31
#define LABEL_14_25 33
#define LABEL_14_42 35
#define LABEL_14_46 37
#define LABEL_14_27 39
#define LABEL_14_28 41
#define LABEL_14_29 43
#define LABEL_14_30 45
#define LABEL_14_50 47
#define LABEL_14_35 49
#define LABEL_14_37 51
#define LABEL_14_36 53
#define LABEL_14_40 55
#define LABEL_14_56 57
#define LABEL_14_43 59
#define LABEL_14_45 61
#define LABEL_14_44 63
#define LABEL_14_47 65
#define LABEL_14_48 67
#define LABEL_14_63 69
#define LABEL_14_51 71
#define LABEL_14_52 73
#define LABEL_14_54 75
#define LABEL_14_68 77
#define LABEL_14_57 79
#define LABEL_14_59 81
#define LABEL_14_58 83
#define LABEL_14_60 85
#define LABEL_14_61 87
#define LABEL_14_64 89
#define LABEL_14_66 91
#define LABEL_14_67 93
#define LABEL_14_75 95
#define LABEL_14_69 97
#define LABEL_14_70 99
#define LABEL_14_71 101
#define LABEL_14_73 103
#define LABEL_14_74 105
#define LABEL_14_76 107
#define LABEL_14_78 109
#define LABEL_14_79 111
#define LABEL_14_80 113
#define LABEL_14_81 115
#define LABEL_14_82 117
#define LABEL_14_83 119
#define LABEL_14_86 121
#define LABEL_14_85 123
#define LABEL_14_87 125
#define LABEL_14_89 127
#define ENVIRONMENT_LABEL_14_3 193
#define DEBUGGING_LABEL_14_2 192
#define OBJECT_14_22 191
#define OBJECT_14_21 190
#define OBJECT_14_20 189
#define OBJECT_14_19 188
#define OBJECT_14_18 187
#define OBJECT_14_17 186
#define OBJECT_14_16 185
#define OBJECT_14_15 184
#define OBJECT_14_14 183
#define OBJECT_14_13 182
#define OBJECT_14_12 181
#define OBJECT_14_11 180
#define OBJECT_14_10 179
#define OBJECT_14_9 178
#define OBJECT_14_8 177
#define OBJECT_14_7 176
#define OBJECT_14_6 175
#define OBJECT_14_5 174
#define OBJECT_14_4 173
#define OBJECT_14_3 172
#define OBJECT_14_2 171
#define OBJECT_14_1 170
#define OBJECT_14_0 169
#define EXECUTE_CACHE_14_88 129
#define EXECUTE_CACHE_14_84 131
#define EXECUTE_CACHE_14_90 133
#define EXECUTE_CACHE_14_77 135
#define EXECUTE_CACHE_14_72 137
#define EXECUTE_CACHE_14_65 139
#define EXECUTE_CACHE_14_62 141
#define EXECUTE_CACHE_14_55 143
#define EXECUTE_CACHE_14_53 145
#define EXECUTE_CACHE_14_49 147
#define EXECUTE_CACHE_14_41 149
#define EXECUTE_CACHE_14_38 151
#define EXECUTE_CACHE_14_33 153
#define EXECUTE_CACHE_14_32 155
#define EXECUTE_CACHE_14_31 157
#define EXECUTE_CACHE_14_23 159
#define EXECUTE_CACHE_14_21 161
#define EXECUTE_CACHE_14_18 163
#define EXECUTE_CACHE_14_10 165
#define EXECUTE_CACHE_14_9 167
#define FREE_REFERENCES_LABEL_14_0 128
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_14_4);
      goto ieee754_binary_hex_string_77;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_81;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_82;

    case 3:
      current_block = (Rpc - LABEL_14_11);
      goto lambda_83;

    case 4:
      current_block = (Rpc - LABEL_14_13);
      goto lambda_37;

    case 5:
      current_block = (Rpc - LABEL_14_14);
      goto lambda_40;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto lambda_84;

    case 7:
      current_block = (Rpc - LABEL_14_17);
      goto lambda_1;

    case 8:
      current_block = (Rpc - LABEL_14_26);
      goto continuation_24;

    case 9:
      current_block = (Rpc - LABEL_14_19);
      goto continuation_23;

    case 10:
      current_block = (Rpc - LABEL_14_20);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_14_34);
      goto symbolic_53;

    case 12:
      current_block = (Rpc - LABEL_14_22);
      goto continuation_38;

    case 13:
      current_block = (Rpc - LABEL_14_39);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_14_24);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_14_25);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_14_42);
      goto numeric_75;

    case 17:
      current_block = (Rpc - LABEL_14_46);
      goto continuation_29;

    case 18:
      current_block = (Rpc - LABEL_14_27);
      goto continuation_28;

    case 19:
      current_block = (Rpc - LABEL_14_28);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_14_29);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_14_30);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_14_50);
      goto continuation_45;

    case 23:
      current_block = (Rpc - LABEL_14_35);
      goto continuation_44;

    case 24:
      current_block = (Rpc - LABEL_14_37);
      goto continuation_41;

    case 25:
      current_block = (Rpc - LABEL_14_36);
      goto continuation_42;

    case 26:
      current_block = (Rpc - LABEL_14_40);
      goto continuation_6;

    case 27:
      current_block = (Rpc - LABEL_14_56);
      goto continuation_58;

    case 28:
      current_block = (Rpc - LABEL_14_43);
      goto continuation_57;

    case 29:
      current_block = (Rpc - LABEL_14_45);
      goto continuation_54;

    case 30:
      current_block = (Rpc - LABEL_14_44);
      goto continuation_55;

    case 31:
      current_block = (Rpc - LABEL_14_47);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_14_48);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_14_63);
      goto continuation_48;

    case 34:
      current_block = (Rpc - LABEL_14_51);
      goto continuation_47;

    case 35:
      current_block = (Rpc - LABEL_14_52);
      goto continuation_46;

    case 36:
      current_block = (Rpc - LABEL_14_54);
      goto continuation_5;

    case 37:
      current_block = (Rpc - LABEL_14_68);
      goto continuation_63;

    case 38:
      current_block = (Rpc - LABEL_14_57);
      goto continuation_62;

    case 39:
      current_block = (Rpc - LABEL_14_59);
      goto continuation_59;

    case 40:
      current_block = (Rpc - LABEL_14_58);
      goto continuation_60;

    case 41:
      current_block = (Rpc - LABEL_14_60);
      goto continuation_31;

    case 42:
      current_block = (Rpc - LABEL_14_61);
      goto continuation_30;

    case 43:
      current_block = (Rpc - LABEL_14_64);
      goto continuation_49;

    case 44:
      current_block = (Rpc - LABEL_14_66);
      goto continuation_8;

    case 45:
      current_block = (Rpc - LABEL_14_67);
      goto continuation_7;

    case 46:
      current_block = (Rpc - LABEL_14_75);
      goto continuation_66;

    case 47:
      current_block = (Rpc - LABEL_14_69);
      goto continuation_65;

    case 48:
      current_block = (Rpc - LABEL_14_70);
      goto continuation_64;

    case 49:
      current_block = (Rpc - LABEL_14_71);
      goto continuation_34;

    case 50:
      current_block = (Rpc - LABEL_14_73);
      goto continuation_50;

    case 51:
      current_block = (Rpc - LABEL_14_74);
      goto continuation_11;

    case 52:
      current_block = (Rpc - LABEL_14_76);
      goto continuation_67;

    case 53:
      current_block = (Rpc - LABEL_14_78);
      goto continuation_10;

    case 54:
      current_block = (Rpc - LABEL_14_79);
      goto continuation_9;

    case 55:
      current_block = (Rpc - LABEL_14_80);
      goto continuation_69;

    case 56:
      current_block = (Rpc - LABEL_14_81);
      goto continuation_14;

    case 57:
      current_block = (Rpc - LABEL_14_82);
      goto continuation_13;

    case 58:
      current_block = (Rpc - LABEL_14_83);
      goto continuation_12;

    case 59:
      current_block = (Rpc - LABEL_14_86);
      goto continuation_71;

    case 60:
      current_block = (Rpc - LABEL_14_85);
      goto continuation_72;

    case 61:
      current_block = (Rpc - LABEL_14_87);
      goto continuation_15;

    case 62:
      current_block = (Rpc - LABEL_14_89);
      goto continuation_73;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ieee754_binary_hex_string_80)
DEFLABEL (ieee754_binary_hex_string_77)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  ((Wrd17.pObj) [2]) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_76)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_11])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd13.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (Rsp [7]) = (Wrd19.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (Rsp [8]) = (Wrd21.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_15])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  ((Wrd29.pObj) [2]) = (Wrd9.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Rsp [5]) = (Wrd25.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (Rsp [4]) = (Wrd33.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_14_11);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_14_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_14_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_14_26);

DEFLABEL (label_91)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_28]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_30]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_14_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_49]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_14_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_14_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_14_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_14_46);

DEFLABEL (label_90)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_47]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_48]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_14_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_62]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_14_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_61]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_55]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_14_61);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_72]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_14_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_49]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_14_71);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto numeric_75;

DEFLABEL (lambda_85)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_14_13);
  (Wrd5.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto symbolic_53;

DEFLABEL (lambda_86)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_14_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_14_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd7.Obj) = (current_block [OBJECT_14_6]);
  goto label_92;

DEFLABEL (label_93)
  (Wrd7.Obj) = (current_block [OBJECT_14_5]);

DEFLABEL (label_92)
DEFLABEL (label_94)
  (Rsp [1]) = (Wrd7.Obj);
  goto symbolic_53;

DEFLABEL (lambda_84)
  CLOSURE_HEADER (LABEL_14_15);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_39);

DEFLABEL (label_95)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_40]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_41]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_55]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_67]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_67);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_66);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_62]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_74);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_79]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_79);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_78);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_82]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_83]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_84]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_82);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_84]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_81);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_88]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_87);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd8.Obj);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [5]));
  goto numeric_75;

DEFLABEL (lambda_87)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_14_17);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  goto numeric_75;

DEFLABEL (symbolic_88)
DEFLABEL (symbolic_53)
  INTERRUPT_CHECK (26, LABEL_14_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_14_37);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_96;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_96)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_14_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_50]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_14_50);

DEFLABEL (label_101)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_51]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_52]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_53]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_14_52);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_14_51);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_63]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_11]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_14_63);

DEFLABEL (label_100)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_64]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_65]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_14_64);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_73]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_14_73);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd7.Obj) = (current_block [OBJECT_14_15]);
  goto label_97;

DEFLABEL (label_98)
  (Wrd7.Obj) = (current_block [OBJECT_14_14]);

DEFLABEL (label_97)
DEFLABEL (label_99)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_16]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_77]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_14_36);
  goto label_102;

DEFLABEL (numeric_89)
DEFLABEL (numeric_75)
  INTERRUPT_CHECK (26, LABEL_14_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_14_45);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_103;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_103)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_117)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_14_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_14_56);

DEFLABEL (label_116)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_57]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_58]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_59]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_14_59);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_104;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_104)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_115)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_14_57);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_68]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_14_68);

DEFLABEL (label_114)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_69]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_70]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_53]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_14_70);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_14_69);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_75]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_13]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_32]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_14_75);

DEFLABEL (label_113)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_76]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_14_76);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd7.Obj) = (current_block [OBJECT_14_17]);
  goto label_105;

DEFLABEL (label_106)
  (Wrd7.Obj) = (current_block [OBJECT_14_14]);

DEFLABEL (label_105)
DEFLABEL (label_112)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_14_80);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  (Wrd7.Obj) = (current_block [OBJECT_14_19]);
  goto label_107;

DEFLABEL (label_108)
  (Wrd7.Obj) = (current_block [OBJECT_14_18]);

DEFLABEL (label_107)
DEFLABEL (label_111)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_86]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_14_86);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_110;
  (Wrd14.Obj) = (current_block [OBJECT_14_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_65]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_14_85);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_109)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_89]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_65]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_14_89);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14_21]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_16]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_22]);
  (Rsp [5]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_90]));

DEFLABEL (label_110)
  (Wrd5.Obj) = (current_block [OBJECT_14_17]);
  Rsp = (& (Rsp [1]));
  goto label_109;

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_14_58);
  goto label_115;

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_14_44);
  goto label_117;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_11 11
#define EXECUTE_CACHE_15_10 13
#define EXECUTE_CACHE_15_9 15
#define EXECUTE_CACHE_15_8 17
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_15_4);
      goto round_up_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_up_6)
DEFLABEL (round_up_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define EXECUTE_CACHE_16_7 7
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto round_down_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_down_4)
DEFLABEL (round_down_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_9 9
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_0 17
#define EXECUTE_CACHE_17_10 11
#define EXECUTE_CACHE_17_8 13
#define EXECUTE_CACHE_17_7 15
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ieee754_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto round_up2_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_up2_6)
DEFLABEL (round_up2_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

INVOKE_INTERFACE_TARGET_1
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
ieee754_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto round_down2_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_down2_4)
DEFLABEL (round_down2_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

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
ieee754_so_0c4f0e3ded757675 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
    if (counter > 18)
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

static const struct liarc_code_S arr_decl_ieee754_so_0c4f0e3ded757675 [18] =
  {
    { "ieee754_so_code_1", 1, ieee754_so_code_1 },
    { "ieee754_so_code_2", 35, ieee754_so_code_2 },
    { "ieee754_so_code_3", 5, ieee754_so_code_3 },
    { "ieee754_so_code_4", 41, ieee754_so_code_4 },
    { "ieee754_so_code_5", 1, ieee754_so_code_5 },
    { "ieee754_so_code_6", 16, ieee754_so_code_6 },
    { "ieee754_so_code_7", 2, ieee754_so_code_7 },
    { "ieee754_so_code_8", 5, ieee754_so_code_8 },
    { "ieee754_so_code_9", 10, ieee754_so_code_9 },
    { "ieee754_so_code_10", 1, ieee754_so_code_10 },
    { "ieee754_so_code_11", 1, ieee754_so_code_11 },
    { "ieee754_so_code_12", 12, ieee754_so_code_12 },
    { "ieee754_so_code_13", 4, ieee754_so_code_13 },
    { "ieee754_so_code_14", 63, ieee754_so_code_14 },
    { "ieee754_so_code_15", 4, ieee754_so_code_15 },
    { "ieee754_so_code_16", 2, ieee754_so_code_16 },
    { "ieee754_so_code_17", 4, ieee754_so_code_17 },
    { "ieee754_so_code_18", 2, ieee754_so_code_18 }
  };

int
decl_ieee754_so_0c4f0e3ded757675 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ieee754_so_0c4f0e3ded757675);
  return (0);
}

DECLARE_COMPILED_CODE ("ieee754.so", 3, decl_ieee754_so_0c4f0e3ded757675, ieee754_so_0c4f0e3ded757675)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ieee754_so_data_0c4f0e3ded757675 [3578] =
  "\xd2\x01\x2e\xcb\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x02\x28"
  "\x0d\xb9\x23\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0d\xbb\x0d"
  "\xbc\x0d\xbd\x0d\xbe\x81\x08\x8a\x81\x0d\xbf\x08\x8b\x08\x89\x0d"
  "\x1c\x81\x0d\x1c\x0d\x1c\xb5\xb6\x81\x08\x8a\x08\x8a\x08\x8a\x0d"
  "\x1c\x0d\xb3\x0d\x08\x89\xb3\xb7\x08\x89\x08\x8a\x08\x89\x1b\x80"
  "\x1b\x1b\xb6\x08\x8a\x08\x8a\x0c\xbf\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x08\x8b\x81\x80\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\xb3\x28\xb5\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x83\x88\x81\x87\x80\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x84\x88\xb7\x1b\x1b\x1b\x08\x8a\x09\x82\x09\x81\x80\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\xb5\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02\x02\x28\x0d\x1c\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x80\xb7\x1b\x1b\x1b\x1b\x08\x8b"
  "\x81\x28\x1b\x28\x1b\x28\xb5\x28\x1b\x28\xb3\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\xb4\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x87\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x87\x28\xb5\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87\xb7\x1b\xb5\x81\x1b"
  "\x08\x8a\x1b\x1b\x08\x8b\x81\x28\xb5\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb7"
  "\xb3\x0d\x1c\x1b\x0d\xb6\x08\x8a\x02\x08\x8a\x08\x89\x81\x02\x28"
  "\x1b\x28\xb5\x28\x1b\x28\x1b\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x02\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x1b\x80\x0d\x08\x8a\x0d\x1c\x1b\x0d\x1c\x80\x08"
  "\x8a\x1b\x1b\x81\x08\x8a\x08\x8a\x1b\x80\x0d\x08\x8a\x02\x84\x1b"
  "\x1b\x0d\x1c\x80\x08\x8a\x1b\x1b\x81\x08\x8a\x08\x8a\x1b\x81\x1b"
  "\x1b\xb5\xb6\x81\x08\x8a\x08\x8a\x08\x8a\x0c\x0c\xb7\x1b\x80\x1b"
  "\x08\x8a\x81\x0c\x80\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb3\x28"
  "\xb5\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28"
  "\xb4\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x81\x28\xb5\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x28\xb5\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\xb5\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a"
  "\x17\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\xb1\x1b\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x56\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x69\x65\x65\x65\x37"
  "\x35\x34\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x36\x0c\x05\x19"
  "\x64\x65\x63\x6f\x6d\x70\x6f\x73\x65\x2d\x69\x65\x65\x65\x37\x35"
  "\x34\x2d\x62\x69\x6e\x61\x72\x79\x02\x04\x04\x83\x04\x03\x0b\x02"
  "\x06\x7a\x65\x72\x6f\x3f\x12\x65\x78\x74\x72\x61\x63\x74\x2d\x62"
  "\x69\x74\x2d\x66\x69\x65\x6c\x64\x02\x2d\x0a\x70\x72\x65\x63\x69"
  "\x73\x69\x6f\x6e\x08\x70\x61\x79\x6c\x6f\x61\x64\x02\x3d\x09\x0c"
  "\x73\x68\x69\x66\x74\x2d\x72\x69\x67\x68\x74\x0a\x13\x73\x63\x61"
  "\x6c\x65\x64\x2d\x73\x69\x67\x6e\x69\x66\x69\x63\x61\x6e\x64\x0b"
  "\x04\x6e\x6f\x74\x0c\x04\x61\x6e\x64\x06\x71\x75\x69\x65\x74\x09"
  "\x0a\x0b\x12\x41\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69"
  "\x6c\x65\x64\x3a\x03\x3c\x3d\x0d\x05\x65\x6d\x69\x6e\x0e\x09\x65"
  "\x78\x70\x6f\x6e\x65\x6e\x74\x0f\x05\x65\x6d\x61\x78\x10\x04\x11"
  "\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c\x75\x65\x73"
  "\x11\x04\x1a\x69\x65\x65\x65\x37\x35\x34\x2d\x62\x69\x6e\x61\x72"
  "\x79\x2d\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x12\x0b\x12\x64"
  "\x65\x63\x6f\x6d\x70\x6f\x73\x65\x2d\x69\x65\x65\x65\x37\x35\x34"
  "\x13\x05\x0d\x04\x0a\x05\x07\x76\x61\x6c\x75\x65\x73\x14\x03\x04"
  "\x04\x06\x65\x72\x72\x6f\x72\x15\x03\x0c\x04\x09\x04\x02\x2b\x16"
  "\x05\x06\x12\x72\x65\x70\x6c\x61\x63\x65\x2d\x62\x69\x74\x2d\x66"
  "\x69\x65\x6c\x64\x17\x0f\x27\x48\x81\x8f\x02\x26\x46\x81\x89\x02"
  "\x25\x44\x81\x91\x02\x24\x42\x81\x89\x02\x23\x40\x81\x89\x02\x22"
  "\x3e\x81\x93\x02\x21\x3c\x81\x8d\x02\x20\x3a\x81\x8b\x02\x1f\x38"
  "\x81\x89\x02\x1e\x36\x81\x89\x02\x1d\x34\x81\x8f\x02\x1c\x32\x81"
  "\x8d\x02\x1b\x30\x81\x8b\x02\x1a\x2e\x81\x89\x02\x19\x2c\x81\x89"
  "\x02\x18\x2a\x81\x8d\x02\x17\x28\x81\x8f\x02\x16\x26\x81\x8b\x02"
  "\x15\x24\x81\x89\x02\x14\x22\x81\x89\x02\x13\x20\x81\x8b\x02\x12"
  "\x1e\x81\x89\x02\x11\x1c\x81\x87\x02\x10\x1a\x81\x87\x02\x0f\x18"
  "\x81\x8b\x02\x0e\x16\x81\x89\x02\x0d\x14\x81\x89\x02\x0c\x12\x83"
  "\x04\x0b\x10\x81\x89\x02\x0a\x0e\x81\x85\x02\x09\x0c\x81\x87\x02"
  "\x08\x0a\x81\x89\x02\x07\x08\x81\x8f\x02\x06\x06\x81\x83\x02\x05"
  "\x04\x85\x08\x47\x6f\x18\x02\x04\x02\x3c\x19\x04\x05\x61\x74\x61"
  "\x6e\x03\x0a\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x04\x2c\x0c\x81"
  "\x85\x02\x2b\x0a\x81\x83\x02\x2a\x08\x81\x83\x02\x29\x06\x81\x83"
  "\x02\x28\x04\x83\x04\x0b\x18\x1a\x02\x0d\x0e\x0f\x03\x31\x2e\x03"
  "\x30\x2e\x04\x09\x03\x04\x61\x62\x73\x03\x0c\x04\x19\x04\x04\x02"
  "\x2f\x1b\x03\x0d\x69\x65\x65\x65\x37\x35\x34\x2d\x73\x69\x67\x6e"
  "\x1c\x04\x0d\x04\x05\x65\x78\x70\x74\x1d\x04\x16\x04\x15\x03\x10"
  "\x74\x72\x75\x6e\x63\x61\x74\x65\x2d\x3e\x65\x78\x61\x63\x74\x04"
  "\x02\x2a\x1e\x0e\x55\x54\x81\x9d\x02\x54\x52\x81\x9d\x02\x53\x50"
  "\x81\x9d\x02\x52\x4e\x81\x89\x02\x51\x4c\x81\x87\x02\x50\x4a\x81"
  "\x85\x02\x4f\x48\x81\x9d\x02\x4e\x46\x81\x9f\x02\x4d\x44\x81\x9f"
  "\x02\x4c\x42\x81\x9d\x02\x4b\x40\x81\x99\x02\x4a\x3e\x81\x9d\x02"
  "\x49\x3c\x81\x85\x02\x48\x3a\x81\x9d\x02\x47\x38\x81\x9d\x02\x46"
  "\x36\x81\x9f\x02\x45\x34\x81\x9d\x02\x44\x32\x81\x9b\x02\x43\x30"
  "\x81\x99\x02\x42\x2e\x81\x9f\x02\x41\x2c\x81\x9d\x02\x40\x2a\x81"
  "\x9d\x02\x3f\x28\x81\x9d\x02\x3e\x26\x81\x99\x02\x3d\x24\x81\x9d"
  "\x02\x3c\x22\x81\x9d\x02\x3b\x20\x81\x9d\x02\x3a\x1e\x81\x99\x02"
  "\x39\x1c\x81\x9d\x02\x38\x1a\x81\x99\x02\x37\x18\x81\x97\x02\x36"
  "\x16\x81\x95\x02\x35\x14\x81\x93\x02\x34\x12\x81\x93\x02\x33\x10"
  "\x81\x95\x02\x32\x0e\x81\x95\x02\x31\x0c\x81\x93\x02\x30\x0a\x81"
  "\x93\x02\x2f\x08\x81\x95\x02\x2e\x06\x81\x93\x02\x2d\x04\x8b\x14"
  "\x53\x78\x1f\x02\x36\x0c\x07\x17\x63\x6f\x6d\x70\x6f\x73\x65\x2d"
  "\x69\x65\x65\x65\x37\x35\x34\x2d\x62\x69\x6e\x61\x72\x79\x20\x02"
  "\x56\x04\x85\x08\x03\x0b\x21\x02\x0d\x0e\x0f\x10\x04\x11\x04\x12"
  "\x04\x04\x09\x03\x07\x1a\x63\x6f\x6d\x70\x6f\x73\x65\x2d\x69\x65"
  "\x65\x65\x37\x35\x34\x2d\x73\x75\x62\x6e\x6f\x72\x6d\x61\x6c\x0e"
  "\x06\x15\x63\x6f\x6d\x70\x6f\x73\x65\x2d\x69\x65\x65\x65\x37\x35"
  "\x34\x2d\x7a\x65\x72\x6f\x22\x05\x0d\x06\x19\x63\x6f\x6d\x70\x6f"
  "\x73\x65\x2d\x69\x65\x65\x65\x37\x35\x34\x2d\x69\x6e\x66\x69\x6e"
  "\x69\x74\x79\x23\x04\x15\x03\x0c\x05\x08\x17\x63\x6f\x6d\x70\x6f"
  "\x73\x65\x2d\x69\x65\x65\x65\x37\x35\x34\x2d\x6e\x6f\x72\x6d\x61"
  "\x6c\x24\x06\x17\x08\x14\x63\x6f\x6d\x70\x6f\x73\x65\x2d\x69\x65"
  "\x65\x65\x37\x35\x34\x2d\x6e\x61\x6e\x25\x10\x66\x22\x81\x95\x02"
  "\x65\x20\x81\x93\x02\x64\x1e\x81\x97\x02\x63\x1c\x81\x91\x02\x62"
  "\x1a\x81\x91\x02\x61\x18\x81\x93\x02\x60\x16\x81\x91\x02\x5f\x14"
  "\x81\x91\x02\x5e\x12\x81\x91\x02\x5d\x10\x81\x91\x02\x5c\x0e\x81"
  "\x91\x02\x5b\x0c\x81\x91\x02\x5a\x0a\x81\x8f\x02\x59\x08\x81\x8f"
  "\x02\x58\x06\x81\x83\x02\x57\x04\x87\x0c\x21\x47\x26\x02\x08\x04"
  "\x1d\x04\x1e\x03\x68\x06\x81\x89\x02\x67\x04\x86\x0a\x05\x0f\x27"
  "\x02\x09\x04\x04\x1d\x04\x1e\x04\x6d\x0c\x81\x8b\x02\x6c\x0a\x81"
  "\x8f\x02\x6b\x08\x81\x8d\x02\x6a\x06\x81\x8b\x02\x69\x04\x87\x0c"
  "\x0b\x16\x28\x02\x0a\x0d\x10\x0f\x10\x04\x04\x1d\x04\x15\x03\x0c"
  "\x05\x0d\x04\x1b\x05\x1e\x08\x77\x16\x81\x8d\x02\x76\x14\x81\x91"
  "\x02\x75\x12\x81\x8f\x02\x74\x10\x81\x8d\x02\x73\x0e\x81\x8d\x02"
  "\x72\x0c\x81\x95\x02\x71\x0a\x81\x8f\x02\x70\x08\x81\x8d\x02\x6f"
  "\x06\x81\x8d\x02\x6e\x04\x88\x0e\x15\x2b\x1b\x02\x0b\x23\x43\x61"
  "\x6e\x27\x74\x20\x63\x6f\x6d\x70\x6f\x73\x65\x20\x61\x6e\x20\x49"
  "\x45\x45\x45\x37\x35\x34\x20\x69\x6e\x66\x69\x6e\x69\x74\x79\x21"
  "\x04\x15\x02\x78\x04\x83\x04\x03\x0a\x10\x02\x0c\x1e\x43\x61\x6e"
  "\x27\x74\x20\x63\x6f\x6d\x70\x6f\x73\x65\x20\x61\x6e\x20\x49\x45"
  "\x45\x45\x37\x35\x34\x20\x4e\x61\x4e\x21\x06\x15\x02\x79\x04\x85"
  "\x08\x03\x0a\x0f\x02\x0d\x07\x6d\x6f\x64\x75\x6c\x6f\x29\x16\x0e"
  "\x65\x78\x70\x6f\x6e\x65\x6e\x74\x2d\x62\x69\x74\x73\x21\x21\x04"
  "\x16\x04\x04\x15\x03\x0c\x03\x04\x29\x04\x1d\x08\x14\x09\x85\x01"
  "\x1a\x81\x87\x02\x84\x01\x18\x81\x85\x02\x83\x01\x16\x81\x83\x02"
  "\x82\x01\x14\x81\x8b\x02\x81\x01\x12\x81\x89\x02\x80\x01\x10\x81"
  "\x85\x02\x7f\x0e\x81\x8d\x02\x7e\x0c\x81\x89\x02\x7d\x0a\x81\x87"
  "\x02\x7c\x08\x81\x85\x02\x7b\x06\x81\x85\x02\x7a\x04\x84\x06\x19"
  "\x32\x1d\x02\x0e\x04\x11\x04\x09\x05\x17\x63\x6f\x6d\x70\x6f\x73"
  "\x65\x2d\x69\x65\x65\x65\x37\x35\x34\x2d\x64\x6f\x75\x62\x6c\x65"
  "\x14\x03\x19\x64\x65\x63\x6f\x6d\x70\x6f\x73\x65\x2d\x69\x65\x65"
  "\x65\x37\x35\x34\x2d\x64\x6f\x75\x62\x6c\x65\x2a\x05\x89\x01\x0a"
  "\x81\x83\x02\x88\x01\x08\x85\x08\x87\x01\x06\x81\x85\x02\x86\x01"
  "\x04\x83\x04\x09\x15\x2b\x02\x0f\x02\x70\x03\x30\x78\x0b\x02\x30"
  "\x02\x31\x01\x02\x2e\x02\x2b\x02\x2d\x0d\x0b\x66\x72\x61\x63\x74"
  "\x69\x6f\x6e\x61\x6c\x03\x6f\x72\x2c\x09\x08\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x09\x2d\x0d\x06\x65\x78\x74\x72\x61\x11\x2c\x09\x05"
  "\x73\x69\x67\x6e\x2d\x09\x2d\x09\x0a\x0b\x05\x73\x4e\x61\x4e\x05"
  "\x71\x4e\x61\x4e\x19\x0b\x04\x69\x6e\x66\x04\x11\x04\x12\x0b\x13"
  "\x04\x19\x03\x04\x04\x15\x03\x0c\x04\x09\x03\x0f\x69\x6e\x74\x65"
  "\x67\x65\x72\x2d\x6c\x65\x6e\x67\x74\x68\x04\x0a\x04\x0d\x03\x0e"
  "\x66\x69\x72\x73\x74\x2d\x73\x65\x74\x2d\x62\x69\x74\x05\x04\x0f"
  "\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x0b"
  "\x72\x6f\x75\x6e\x64\x2d\x64\x6f\x77\x6e\x2d\x06\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x2c\x09\x2c\x04\x29\x06"
  "\x17\x15\xc8\x01\x80\x01\x81\x89\x02\xc7\x01\x7e\x81\x93\x02\xc6"
  "\x01\x7c\x81\x89\x02\xc5\x01\x7a\x81\x8b\x02\xc4\x01\x78\x81\x97"
  "\x02\xc3\x01\x76\x81\x95\x02\xc2\x01\x74\x81\x91\x02\xc1\x01\x72"
  "\x81\x89\x02\xc0\x01\x70\x81\x91\x02\xbf\x01\x6e\x81\x8f\x02\xbe"
  "\x01\x6c\x81\x89\x02\xbd\x01\x6a\x81\x8d\x02\xbc\x01\x68\x81\x89"
  "\x02\xbb\x01\x66\x81\x8f\x02\xba\x01\x64\x81\x8b\x02\xb9\x01\x62"
  "\x81\x89\x02\xb8\x01\x60\x81\x89\x02\xb7\x01\x5e\x81\x8f\x02\xb6"
  "\x01\x5c\x81\x8b\x02\xb5\x01\x5a\x81\x87\x02\xb4\x01\x58\x81\x8f"
  "\x02\xb3\x01\x56\x81\x8b\x02\xb2\x01\x54\x81\x8b\x02\xb1\x01\x52"
  "\x81\x8d\x02\xb0\x01\x50\x81\x89\x02\xaf\x01\x4e\x81\x89\x02\xae"
  "\x01\x4c\x81\x89\x02\xad\x01\x4a\x81\x89\x02\xac\x01\x48\x81\x87"
  "\x02\xab\x01\x46\x81\x87\x02\xaa\x01\x44\x81\x8f\x02\xa9\x01\x42"
  "\x81\x89\x02\xa8\x01\x40\x81\x8b\x02\xa7\x01\x3e\x81\x8d\x02\xa6"
  "\x01\x3c\x81\x89\x02\xa5\x01\x3a\x81\x89\x02\xa4\x01\x38\x81\x87"
  "\x02\xa3\x01\x36\x81\x89\x02\xa2\x01\x34\x81\x8b\x02\xa1\x01\x32"
  "\x81\x87\x02\xa0\x01\x30\x81\x87\x02\x9f\x01\x2e\x81\x8f\x02\x9e"
  "\x01\x2c\x81\x8d\x02\x9d\x01\x2a\x81\x8b\x02\x9c\x01\x28\x81\x89"
  "\x02\x9b\x01\x26\x81\x89\x02\x9a\x01\x24\x81\x89\x02\x99\x01\x22"
  "\x81\x89\x02\x98\x01\x20\x81\x87\x02\x97\x01\x1e\x81\x87\x02\x96"
  "\x01\x1c\x81\x87\x02\x95\x01\x1a\x81\x87\x02\x94\x01\x18\x81\x8b"
  "\x02\x93\x01\x16\x81\x89\x02\x92\x01\x14\x81\x89\x02\x91\x01\x12"
  "\x83\x04\x90\x01\x10\x81\x87\x02\x8f\x01\x0e\x85\x08\x8e\x01\x0c"
  "\x83\x04\x8d\x01\x0a\x81\x89\x02\x8c\x01\x08\x81\x8f\x02\x8b\x01"
  "\x06\x81\x83\x02\x8a\x01\x04\x85\x08\x7f\xc2\x01\x2c\x02\x10\x04"
  "\x04\x1e\x04\x09\x71\x75\x6f\x74\x69\x65\x6e\x74\x29\x04\x16\x05"
  "\xcc\x01\x0a\x81\x8b\x02\xcb\x01\x08\x81\x89\x02\xca\x01\x06\x81"
  "\x85\x02\xc9\x01\x04\x84\x06\x09\x16\x19\x02\x11\x04\x29\x04\x1e"
  "\x03\xce\x01\x06\x81\x85\x02\xcd\x01\x04\x84\x06\x05\x0d\x29\x02"
  "\x12\x04\x04\x16\x04\x0c\x62\x69\x74\x77\x69\x73\x65\x2d\x69\x6f"
  "\x72\x04\xd2\x01\x0a\x81\x89\x02\xd1\x01\x08\x81\x87\x02\xd0\x01"
  "\x06\x81\x85\x02\xcf\x01\x04\x84\x06\x09\x14\x1e\x02\x13\x04\x04"
  "\x0e\x62\x69\x74\x77\x69\x73\x65\x2d\x61\x6e\x64\x63\x32\x03\xd4"
  "\x01\x06\x81\x85\x02\xd3\x01\x04\x84\x06\x05\x0e\x17\x13\x16\x16"
  "\x17\x04\x1e\x04\x29\x04\x19\x04\x2c\x04\x2b\x04\x1d\x04\x0f\x04"
  "\x10\x04\x1b\x04\x28\x04\x27\x04\x26\x04\x21\x04\x1f\x04\x1a\x04"
  "\x18\x04\x04\x13\x0c\x72\x6f\x75\x6e\x64\x2d\x64\x6f\x77\x6e\x32"
  "\x0a\x72\x6f\x75\x6e\x64\x2d\x75\x70\x32\x2d\x09\x72\x6f\x75\x6e"
  "\x64\x2d\x75\x70\x1a\x69\x65\x65\x65\x37\x35\x34\x2d\x62\x69\x6e"
  "\x61\x72\x79\x2d\x68\x65\x78\x2d\x73\x74\x72\x69\x6e\x67\x1d\x69"
  "\x65\x65\x65\x37\x35\x34\x2d\x64\x6f\x75\x62\x6c\x65\x2d\x72\x65"
  "\x63\x6f\x6d\x70\x6f\x73\x61\x62\x6c\x65\x3f\x12\x25\x23\x24\x0e"
  "\x22\x20\x14\x13\x1c\x2a\x13\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
ieee754_so_data_0c4f0e3ded757675 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ieee754_so_data_0c4f0e3ded757675 [0]))), (sizeof (prog_ieee754_so_data_0c4f0e3ded757675)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("ieee754.so", ieee754_so_data_0c4f0e3ded757675)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ieee754.so", "813372259e041c96")
