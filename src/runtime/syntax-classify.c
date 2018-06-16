/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_9 7
#define LABEL_1_7 9
#define LABEL_1_15 11
#define LABEL_1_11 13
#define LABEL_1_20 15
#define LABEL_1_17 17
#define TAG_1_18 7
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_22 23
#define LABEL_1_24 25
#define LABEL_1_27 27
#define LABEL_1_29 29
#define LABEL_1_30 31
#define LABEL_1_32 33
#define LABEL_1_36 35
#define LABEL_1_34 37
#define LABEL_1_39 39
#define TAG_1_40 18
#define LABEL_1_41 41
#define LABEL_1_45 43
#define LABEL_1_43 45
#define LABEL_1_53 47
#define LABEL_1_47 49
#define LABEL_1_50 51
#define TAG_1_51 24
#define LABEL_1_55 53
#define LABEL_1_56 55
#define LABEL_1_60 57
#define LABEL_1_52 59
#define LABEL_1_63 61
#define LABEL_1_58 63
#define LABEL_1_62 65
#define LABEL_1_65 67
#define LABEL_1_66 69
#define TAG_1_67 33
#define LABEL_1_69 71
#define LABEL_1_72 73
#define LABEL_1_71 75
#define ENVIRONMENT_LABEL_1_3 143
#define DEBUGGING_LABEL_1_2 142
#define OBJECT_1_4 141
#define OBJECT_1_3 140
#define OBJECT_1_2 139
#define OBJECT_1_1 138
#define OBJECT_1_0 137
#define EXECUTE_CACHE_1_73 77
#define EXECUTE_CACHE_1_70 79
#define EXECUTE_CACHE_1_68 81
#define EXECUTE_CACHE_1_64 83
#define EXECUTE_CACHE_1_61 85
#define EXECUTE_CACHE_1_59 87
#define EXECUTE_CACHE_1_57 89
#define EXECUTE_CACHE_1_54 91
#define EXECUTE_CACHE_1_49 93
#define EXECUTE_CACHE_1_48 95
#define EXECUTE_CACHE_1_46 97
#define EXECUTE_CACHE_1_44 99
#define EXECUTE_CACHE_1_42 101
#define EXECUTE_CACHE_1_38 103
#define EXECUTE_CACHE_1_37 105
#define EXECUTE_CACHE_1_35 107
#define EXECUTE_CACHE_1_33 109
#define EXECUTE_CACHE_1_31 111
#define EXECUTE_CACHE_1_28 113
#define EXECUTE_CACHE_1_26 115
#define EXECUTE_CACHE_1_25 117
#define EXECUTE_CACHE_1_23 119
#define EXECUTE_CACHE_1_21 121
#define EXECUTE_CACHE_1_19 123
#define EXECUTE_CACHE_1_16 125
#define EXECUTE_CACHE_1_12 127
#define EXECUTE_CACHE_1_10 129
#define EXECUTE_CACHE_1_8 131
#define EXECUTE_CACHE_1_6 133
#define FREE_REFERENCE_1_0 136
#define FREE_REFERENCES_LABEL_1_0 76
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto classify_form_47;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_33;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_15);
      goto label_49;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_34;

    case 6:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_30;

    case 7:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_55;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_35;

    case 11:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_29;

    case 12:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_45;

    case 14:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_36;

    case 15:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_26;

    case 17:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_1_39);
      goto lambda_56;

    case 19:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_31;

    case 20:
      current_block = (Rpc - LABEL_1_45);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_1_43);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_1_53);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_38;

    case 24:
      current_block = (Rpc - LABEL_1_50);
      goto lambda_57;

    case 25:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_20;

    case 26:
      current_block = (Rpc - LABEL_1_56);
      goto continuation_21;

    case 27:
      current_block = (Rpc - LABEL_1_60);
      goto continuation_12;

    case 28:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_11;

    case 29:
      current_block = (Rpc - LABEL_1_63);
      goto label_51;

    case 30:
      current_block = (Rpc - LABEL_1_58);
      goto continuation_40;

    case 31:
      current_block = (Rpc - LABEL_1_62);
      goto continuation_14;

    case 32:
      current_block = (Rpc - LABEL_1_65);
      goto continuation_39;

    case 33:
      current_block = (Rpc - LABEL_1_66);
      goto lambda_58;

    case 34:
      current_block = (Rpc - LABEL_1_69);
      goto continuation_16;

    case 35:
      current_block = (Rpc - LABEL_1_72);
      goto label_52;

    case 36:
      current_block = (Rpc - LABEL_1_71);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_form_54)
DEFLABEL (classify_form_47)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_39])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (label_60)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_33]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_32);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_42]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_49]));

DEFLABEL (label_61)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_62;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_17])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_62)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  if (! ((Wrd12.uLng) == 1))
    goto label_72;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_37]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_63)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_45);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_50])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_64)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_44]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_56);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_49]));

DEFLABEL (label_65)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_70;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_52);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_61]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_60);

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_62]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_67;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_64]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_62);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_67);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_66])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_67)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_63]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_1_17);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_1_39);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_48]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_58);
  (Wrd9.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_65]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_1_65);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_68]));

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_1_50);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_1_66);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_70]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_69);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_74;
  Wrd11 = Wrd15;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_73]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_71);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_68]));

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_72])), (Wrd12.pObj));

DEFLABEL (label_52)
  (Wrd11.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto strip_keyword_value_item_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (strip_keyword_value_item_4)
DEFLABEL (strip_keyword_value_item_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (label_5)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define EXECUTE_CACHE_3_8 7
#define EXECUTE_CACHE_3_7 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
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
      goto classify_forms_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_forms_4)
DEFLABEL (classify_forms_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCE_4_0 10
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto classify_expression_0;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_expression_4)
DEFLABEL (classify_expression_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCE_5_0 10
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_5_4);
      goto classify_expressions_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_expressions_4)
DEFLABEL (classify_expressions_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_10 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define LABEL_6_14 15
#define LABEL_6_16 17
#define LABEL_6_18 19
#define LABEL_6_15 21
#define LABEL_6_19 23
#define LABEL_6_20 25
#define ENVIRONMENT_LABEL_6_3 41
#define DEBUGGING_LABEL_6_2 40
#define OBJECT_6_2 39
#define OBJECT_6_1 38
#define OBJECT_6_0 37
#define EXECUTE_CACHE_6_17 27
#define EXECUTE_CACHE_6_13 29
#define EXECUTE_CACHE_6_12 31
#define EXECUTE_CACHE_6_11 33
#define EXECUTE_CACHE_6_6 35
#define FREE_REFERENCES_LABEL_6_0 26
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto classify_body_18;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto forms_loop_16;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto items_loop_14;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_6_18);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_6_19);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_6_20);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_body_26)
DEFLABEL (classify_body_18)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto forms_loop_16;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (forms_loop_27)
DEFLABEL (forms_loop_16)
  INTERRUPT_CHECK (26, LABEL_6_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_29)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_31;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  goto items_loop_14;

DEFLABEL (label_31)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (items_loop_28)
DEFLABEL (items_loop_14)
  INTERRUPT_CHECK (26, LABEL_6_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_33;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto forms_loop_16;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd8.Obj);
  goto items_loop_14;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_40;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_39)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  goto label_37;

DEFLABEL (label_40)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_24)
  (Wrd17.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define LABEL_7_6 11
#define LABEL_7_12 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define LABEL_7_15 19
#define LABEL_7_11 21
#define LABEL_7_16 23
#define TAG_7_17 10
#define ENVIRONMENT_LABEL_7_3 33
#define DEBUGGING_LABEL_7_2 32
#define OBJECT_7_2 31
#define OBJECT_7_1 30
#define OBJECT_7_0 29
#define EXECUTE_CACHE_7_10 25
#define EXECUTE_CACHE_7_8 27
#define FREE_REFERENCES_LABEL_7_0 24
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_classify_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_7_4);
      goto extract_declarations_from_body_16;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto loop_14;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_7_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_7_16);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_declarations_from_body_24)
DEFLABEL (extract_declarations_from_body_16)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  goto loop_14;

DEFLABEL (loop_25)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_16])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_30)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_14;

DEFLABEL (label_29)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_20)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_36;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_35)
  (Wrd41.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Rsp [2]) = (Wrd38.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_34;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd42.Obj);
  goto loop_14;

DEFLABEL (label_34)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_22)
  (Wrd42.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_21)
  (Wrd29.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_7_16);

DEFLABEL (lambda_4)
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
syntax_classify_so_5e3f2928b5edd12c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	1,
	2
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

static const struct liarc_code_S arr_decl_syntax_classify_so_5e3f2928b5edd12c [7] =
  {
    { "syntax_classify_so_code_1", 37, syntax_classify_so_code_1 },
    { "syntax_classify_so_code_2", 2, syntax_classify_so_code_2 },
    { "syntax_classify_so_code_3", 2, syntax_classify_so_code_3 },
    { "syntax_classify_so_code_4", 2, syntax_classify_so_code_4 },
    { "syntax_classify_so_code_5", 2, syntax_classify_so_code_5 },
    { "syntax_classify_so_code_6", 12, syntax_classify_so_code_6 },
    { "syntax_classify_so_code_7", 11, syntax_classify_so_code_7 }
  };

int
decl_syntax_classify_so_5e3f2928b5edd12c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_classify_so_5e3f2928b5edd12c);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-classify.so", 3, decl_syntax_classify_so_5e3f2928b5edd12c, syntax_classify_so_5e3f2928b5edd12c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_classify_so_data_5e3f2928b5edd12c [1786] =
  "\x93\x01\x10\xe2\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0c\xc1"
  "\xb9\x0d\xc1\xba\x0d\xbb\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\xbc\x28\x0d\x28\x0d\x28\x0d\xbd\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\xbe\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbf\x28"
  "\x0d\x28\xb3\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x28\xb3\x28\xb6\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x84\x88\x0d\x1c\x24\x28\xb6"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb1"
  "\xb2\x08\x28\x0d\x28\xb6\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2"
  "\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x9e\xba\x88\xb2\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a"
  "\x1b\x2a\x9e\x0d\x0d\xb7\xb4\x1b\xb5\xb6\x9e\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5e\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x73\x79\x6e\x74\x61\x78\x2d\x63\x6c\x61\x73\x73\x69\x66"
  "\x79\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x23\x43\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x20\x6d\x75\x73\x74\x20\x62\x65\x20"
  "\x61\x20\x70\x72\x6f\x70\x65\x72\x20\x6c\x69\x73\x74\x3a\x04\x63"
  "\x64\x72\x18\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x6b\x65\x79"
  "\x77\x6f\x72\x64\x2d\x3e\x69\x74\x65\x6d\x04\x63\x61\x72\x18\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x2d\x69\x74\x65\x6d\x2f\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x02\x03\x0c\x69\x64\x65\x6e\x74\x69\x66"
  "\x69\x65\x72\x3f\x03\x13\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x3f\x04\x12\x6c\x6f\x6f\x6b\x75\x70"
  "\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x03\x0e\x6b\x65\x79"
  "\x77\x6f\x72\x64\x2d\x69\x74\x65\x6d\x3f\x04\x14\x63\x6c\x61\x73"
  "\x73\x69\x66\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03"
  "\x15\x6d\x61\x6b\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x69\x74\x65\x6d\x03\x1e\x73\x79\x6e\x74\x61\x63\x74\x69\x63"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x03\x19\x73\x74\x72\x69\x70\x2d\x6b\x65\x79\x77"
  "\x6f\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x03\x1d"
  "\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2f\x66\x72\x65\x65\x2d\x6e\x61\x6d\x65\x73\x03\x10\x6f\x75"
  "\x74\x70\x75\x74\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x03\x11\x63"
  "\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65\x6d\x3f\x03"
  "\x13\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x3e\x73\x79\x6d"
  "\x62\x6f\x6c\x03\x17\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2f\x66\x6f\x72\x6d\x03\x0f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x69\x74\x65\x6d\x3f\x03\x1b\x63\x6c\x61"
  "\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65\x6d\x2f\x63\x6c\x61"
  "\x73\x73\x69\x66\x69\x65\x72\x04\x18\x6d\x61\x6b\x65\x2d\x6b\x65"
  "\x79\x77\x6f\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d"
  "\x05\x23\x6d\x61\x6b\x65\x2d\x70\x61\x72\x74\x69\x61\x6c\x2d\x73"
  "\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x03\x0f\x65\x78\x70\x61\x6e\x64\x65\x72\x2d\x69"
  "\x74\x65\x6d\x3f\x03\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69"
  "\x74\x65\x6d\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x03\x19\x6f\x75"
  "\x74\x70\x75\x74\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x05\x0e\x63\x6c\x61\x73\x73\x69\x66\x79"
  "\x2f\x66\x6f\x72\x6d\x03\x06\x6c\x69\x73\x74\x3f\x03\x17\x65\x78"
  "\x70\x61\x6e\x64\x65\x72\x2d\x69\x74\x65\x6d\x2f\x65\x78\x70\x61"
  "\x6e\x64\x65\x72\x02\x17\x6f\x75\x74\x70\x75\x74\x2f\x74\x68\x65"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x0d\x73\x79"
  "\x6e\x74\x61\x78\x2d\x65\x72\x72\x6f\x72\x04\x15\x63\x6c\x61\x73"
  "\x73\x69\x66\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73"
  "\x04\x13\x6f\x75\x74\x70\x75\x74\x2f\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x03\x04\x04\x6d\x61\x70\x1e\x28\x4c\x81\x85\x02"
  "\x27\x4a\x81\x89\x02\x26\x48\x81\x83\x02\x25\x46\x81\x83\x02\x24"
  "\x44\x81\x87\x02\x23\x42\x81\x89\x02\x22\x40\x81\x85\x02\x21\x3e"
  "\x81\x8d\x02\x20\x3c\x81\x89\x02\x1f\x3a\x81\x89\x02\x1e\x38\x81"
  "\x8f\x02\x1d\x36\x81\x89\x02\x1c\x34\x81\x83\x02\x1b\x32\x81\x83"
  "\x02\x1a\x30\x81\x8b\x02\x19\x2e\x81\x89\x02\x18\x2c\x81\x89\x02"
  "\x17\x2a\x81\x8d\x02\x16\x28\x81\x83\x02\x15\x26\x81\x89\x02\x14"
  "\x24\x81\x89\x02\x13\x22\x81\x8b\x02\x12\x20\x81\x8b\x02\x11\x1e"
  "\x81\x89\x02\x10\x1c\x81\x89\x02\x0f\x1a\x81\x89\x02\x0e\x18\x81"
  "\x89\x02\x0d\x16\x81\x89\x02\x0c\x14\x81\x87\x02\x0b\x12\x81\x83"
  "\x02\x0a\x10\x81\x87\x02\x09\x0e\x81\x89\x02\x08\x0c\x81\x8d\x02"
  "\x07\x0a\x81\x87\x02\x06\x08\x81\x87\x02\x05\x06\x81\x87\x02\x04"
  "\x04\x85\x08\x4b\x90\x01\x09\x02\x03\x14\x6b\x65\x79\x77\x6f\x72"
  "\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x3f\x03\x18\x6b"
  "\x65\x79\x77\x6f\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65"
  "\x6d\x2f\x69\x74\x65\x6d\x03\x2a\x06\x81\x83\x02\x29\x04\x83\x04"
  "\x05\x0d\x0a\x02\x04\x05\x03\x2c\x06\x81\x85\x02\x2b\x04\x85\x08"
  "\x05\x0d\x02\x1b\x6e\x75\x6c\x6c\x2d\x73\x79\x6e\x74\x61\x63\x74"
  "\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0b\x02"
  "\x05\x02\x2e\x06\x81\x87\x02\x2d\x04\x84\x06\x05\x0d\x0c\x02\x0b"
  "\x02\x05\x0f\x63\x6c\x61\x73\x73\x69\x66\x79\x2f\x66\x6f\x72\x6d"
  "\x73\x0b\x02\x30\x06\x81\x87\x02\x2f\x04\x84\x06\x05\x0d\x0d\x02"
  "\x03\x0f\x6d\x61\x6b\x65\x2d\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d"
  "\x05\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x0e\x03\x0b\x69\x74"
  "\x65\x6d\x2d\x3e\x6c\x69\x73\x74\x03\x13\x6e\x75\x6c\x6c\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x3f\x06\x3c\x1a\x81"
  "\x89\x02\x3b\x18\x81\x89\x02\x3a\x16\x81\x89\x02\x39\x14\x81\x89"
  "\x02\x38\x12\x81\x8b\x02\x37\x10\x81\x89\x02\x36\x0e\x81\x89\x02"
  "\x35\x0c\x81\x87\x02\x34\x0a\x81\x8f\x02\x33\x08\x81\x85\x02\x32"
  "\x06\x81\x87\x02\x31\x04\x85\x08\x19\x2a\x0f\x02\x08\x03\x12\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x3f"
  "\x03\x0e\x03\x47\x18\x81\x85\x02\x46\x16\x81\x87\x02\x45\x14\x81"
  "\x87\x02\x44\x12\x81\x87\x02\x43\x10\x81\x87\x02\x42\x0e\x81\x87"
  "\x02\x41\x0c\x81\x87\x02\x40\x0a\x81\x87\x02\x3f\x08\x81\x89\x02"
  "\x3e\x06\x81\x87\x02\x3d\x04\x83\x04\x17\x22\x0e\x0e\x04\x0f\x04"
  "\x0d\x04\x0c\x04\x04\x0a\x04\x09\x04\x1f\x65\x78\x74\x72\x61\x63"
  "\x74\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2d\x66"
  "\x72\x6f\x6d\x2d\x62\x6f\x64\x79\x0e\x63\x6c\x61\x73\x73\x69\x66"
  "\x79\x2f\x62\x6f\x64\x79\x0b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
syntax_classify_so_data_5e3f2928b5edd12c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_classify_so_data_5e3f2928b5edd12c [0]))), (sizeof (prog_syntax_classify_so_data_5e3f2928b5edd12c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("syntax-classify.so", syntax_classify_so_data_5e3f2928b5edd12c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-classify.so", "4158c5f2a5ceade5")
