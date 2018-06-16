/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:11-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define TAG_1_8 1
#define LABEL_1_5 7
#define TAG_1_6 2
#define LABEL_1_14 9
#define LABEL_1_15 11
#define LABEL_1_16 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_17 21
#define LABEL_1_24 23
#define LABEL_1_25 25
#define LABEL_1_18 27
#define LABEL_1_21 29
#define LABEL_1_22 31
#define LABEL_1_26 33
#define LABEL_1_33 35
#define LABEL_1_34 37
#define LABEL_1_30 39
#define LABEL_1_31 41
#define LABEL_1_36 43
#define LABEL_1_37 45
#define LABEL_1_39 47
#define LABEL_1_40 49
#define LABEL_1_42 51
#define LABEL_1_44 53
#define LABEL_1_46 55
#define LABEL_1_47 57
#define LABEL_1_48 59
#define LABEL_1_58 61
#define LABEL_1_51 63
#define LABEL_1_52 65
#define LABEL_1_62 67
#define LABEL_1_56 69
#define LABEL_1_55 71
#define LABEL_1_60 73
#define LABEL_1_65 75
#define LABEL_1_66 77
#define LABEL_1_72 79
#define LABEL_1_69 81
#define LABEL_1_70 83
#define LABEL_1_75 85
#define LABEL_1_76 87
#define LABEL_1_73 89
#define LABEL_1_77 91
#define LABEL_1_79 93
#define ENVIRONMENT_LABEL_1_3 166
#define DEBUGGING_LABEL_1_2 165
#define OBJECT_1_2 164
#define OBJECT_1_1 163
#define OBJECT_1_0 162
#define EXECUTE_CACHE_1_81 95
#define EXECUTE_CACHE_1_80 97
#define EXECUTE_CACHE_1_78 99
#define EXECUTE_CACHE_1_74 101
#define EXECUTE_CACHE_1_71 103
#define EXECUTE_CACHE_1_68 105
#define EXECUTE_CACHE_1_67 107
#define EXECUTE_CACHE_1_64 109
#define EXECUTE_CACHE_1_63 111
#define EXECUTE_CACHE_1_61 113
#define EXECUTE_CACHE_1_59 115
#define EXECUTE_CACHE_1_57 117
#define EXECUTE_CACHE_1_54 119
#define EXECUTE_CACHE_1_53 121
#define EXECUTE_CACHE_1_50 123
#define EXECUTE_CACHE_1_49 125
#define EXECUTE_CACHE_1_45 127
#define EXECUTE_CACHE_1_43 129
#define EXECUTE_CACHE_1_41 131
#define EXECUTE_CACHE_1_38 133
#define EXECUTE_CACHE_1_35 135
#define EXECUTE_CACHE_1_32 137
#define EXECUTE_CACHE_1_29 139
#define EXECUTE_CACHE_1_28 141
#define EXECUTE_CACHE_1_27 143
#define EXECUTE_CACHE_1_23 145
#define EXECUTE_CACHE_1_20 147
#define EXECUTE_CACHE_1_19 149
#define EXECUTE_CACHE_1_13 151
#define EXECUTE_CACHE_1_9 153
#define FREE_REFERENCE_1_3 156
#define FREE_REFERENCE_1_2 157
#define FREE_REFERENCE_1_1 158
#define FREE_REFERENCE_1_0 159
#define FREE_ASSIGNMENT_1_0 161
#define FREE_REFERENCES_LABEL_1_0 94
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd12;
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
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_1_4);
      goto info_generation_phase_1_50;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_65;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto swapB_64;

    case 3:
      current_block = (Rpc - LABEL_1_14);
      goto label_52;

    case 4:
      current_block = (Rpc - LABEL_1_15);
      goto label_53;

    case 5:
      current_block = (Rpc - LABEL_1_16);
      goto label_54;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_40;

    case 10:
      current_block = (Rpc - LABEL_1_24);
      goto label_55;

    case 11:
      current_block = (Rpc - LABEL_1_25);
      goto label_56;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_39;

    case 13:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_1;

    case 14:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_28;

    case 17:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_27;

    case 18:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_35;

    case 21:
      current_block = (Rpc - LABEL_1_37);
      goto continuation_34;

    case 22:
      current_block = (Rpc - LABEL_1_39);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_36;

    case 25:
      current_block = (Rpc - LABEL_1_44);
      goto continuation_33;

    case 26:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_24;

    case 27:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_21;

    case 28:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_1_58);
      goto label_57;

    case 30:
      current_block = (Rpc - LABEL_1_51);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_1_62);
      goto label_58;

    case 33:
      current_block = (Rpc - LABEL_1_56);
      goto continuation_17;

    case 34:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_18;

    case 35:
      current_block = (Rpc - LABEL_1_60);
      goto continuation_30;

    case 36:
      current_block = (Rpc - LABEL_1_65);
      goto continuation_16;

    case 37:
      current_block = (Rpc - LABEL_1_66);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_1_72);
      goto label_59;

    case 39:
      current_block = (Rpc - LABEL_1_69);
      goto continuation_14;

    case 40:
      current_block = (Rpc - LABEL_1_70);
      goto continuation_12;

    case 41:
      current_block = (Rpc - LABEL_1_75);
      goto label_60;

    case 42:
      current_block = (Rpc - LABEL_1_76);
      goto label_61;

    case 43:
      current_block = (Rpc - LABEL_1_73);
      goto continuation_11;

    case 44:
      current_block = (Rpc - LABEL_1_77);
      goto continuation_10;

    case 45:
      current_block = (Rpc - LABEL_1_79);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (info_generation_phase_1_63)
DEFLABEL (info_generation_phase_1_50)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;
  Wrd5 = Wrd9;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_68;
  Wrd12 = Wrd16;

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd13.pObj));

DEFLABEL (label_56)
  (Wrd12.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_24])), (Wrd6.pObj));

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_69;

DEFLABEL (swapB_64)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (swapB_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  Wrd5 = Wrd9;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_74)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_73)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_54)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_53)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_14])), (Wrd6.pObj));

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_77;

DEFLABEL (lambda_66)
DEFLABEL (lambda_39)
  INTERRUPT_CHECK (26, LABEL_1_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_53]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_52);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_81;
  Wrd5 = Wrd9;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_63]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_61]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_68]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_62])), (Wrd6.pObj));

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_49]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_92;
  Wrd5 = Wrd9;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_56);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_64]));

DEFLABEL (label_83)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_90)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_67]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_66);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_89;
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_65);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_70]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_71]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_70);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_87;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_86)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_85;
  Wrd13 = Wrd17;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_69);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_74]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_73);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_78]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_77);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_80]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_79);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_81]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_46);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_76])), (Wrd14.pObj));

DEFLABEL (label_61)
  (Wrd13.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_75]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_72])), (Wrd6.pObj));

DEFLABEL (label_59)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_58])), (Wrd6.pObj));

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_91;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (* (--Rsp)) = Rvl;
  goto label_90;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_12 13
#define ENVIRONMENT_LABEL_2_3 27
#define DEBUGGING_LABEL_2_2 26
#define OBJECT_2_0 25
#define EXECUTE_CACHE_2_14 15
#define EXECUTE_CACHE_2_13 17
#define EXECUTE_CACHE_2_11 19
#define EXECUTE_CACHE_2_10 21
#define EXECUTE_CACHE_2_7 23
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto generated_dbg_continuation_7;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generated_dbg_continuation_10)
DEFLABEL (generated_dbg_continuation_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_12 11
#define LABEL_3_14 13
#define LABEL_3_16 15
#define LABEL_3_18 17
#define LABEL_3_10 19
#define ENVIRONMENT_LABEL_3_3 44
#define DEBUGGING_LABEL_3_2 43
#define OBJECT_3_0 42
#define EXECUTE_CACHE_3_20 21
#define EXECUTE_CACHE_3_19 23
#define EXECUTE_CACHE_3_17 25
#define EXECUTE_CACHE_3_15 27
#define EXECUTE_CACHE_3_13 29
#define EXECUTE_CACHE_3_11 31
#define EXECUTE_CACHE_3_9 33
#define EXECUTE_CACHE_3_6 35
#define FREE_REFERENCE_3_3 38
#define FREE_REFERENCE_3_2 39
#define FREE_REFERENCE_3_1 40
#define FREE_REFERENCE_3_0 41
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd41;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto block__dbg_block_11;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block__dbg_block_18)
DEFLABEL (block__dbg_block_11)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_32;
  Wrd6 = Wrd10;

DEFLABEL (label_31)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_21;
  (Wrd42.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_21)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_30;
  Wrd14 = Wrd18;

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [0]);
  if (! ((Wrd20.Obj) == (Wrd14.Obj)))
    goto label_22;
  (Wrd41.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_22)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_28;
  Wrd22 = Wrd26;

DEFLABEL (label_27)
  (Wrd28.Obj) = (Rsp [0]);
  if (! ((Wrd28.Obj) == (Wrd22.Obj)))
    goto label_23;
  (Wrd40.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (label_23)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_26;
  Wrd30 = Wrd34;

DEFLABEL (label_25)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_24;
  (Wrd37.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (label_24)
  (Wrd39.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_18])), (Wrd31.pObj));

DEFLABEL (label_16)
  (Wrd30.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd23.pObj));

DEFLABEL (label_15)
  (Wrd22.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd15.pObj));

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_12])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_31;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define LABEL_4_11 11
#define LABEL_4_13 13
#define LABEL_4_14 15
#define LABEL_4_16 17
#define LABEL_4_18 19
#define TAG_4_19 8
#define LABEL_4_27 21
#define LABEL_4_21 23
#define LABEL_4_28 25
#define LABEL_4_29 27
#define LABEL_4_23 29
#define LABEL_4_33 31
#define LABEL_4_25 33
#define LABEL_4_34 35
#define LABEL_4_31 37
#define LABEL_4_36 39
#define LABEL_4_38 41
#define LABEL_4_39 43
#define LABEL_4_40 45
#define LABEL_4_42 47
#define LABEL_4_43 49
#define LABEL_4_47 51
#define LABEL_4_48 53
#define LABEL_4_45 55
#define ENVIRONMENT_LABEL_4_3 103
#define DEBUGGING_LABEL_4_2 102
#define OBJECT_4_1 101
#define OBJECT_4_0 100
#define EXECUTE_CACHE_4_51 57
#define EXECUTE_CACHE_4_50 59
#define EXECUTE_CACHE_4_49 61
#define EXECUTE_CACHE_4_46 63
#define EXECUTE_CACHE_4_44 65
#define EXECUTE_CACHE_4_41 67
#define EXECUTE_CACHE_4_37 69
#define EXECUTE_CACHE_4_35 71
#define EXECUTE_CACHE_4_32 73
#define EXECUTE_CACHE_4_30 75
#define EXECUTE_CACHE_4_26 77
#define EXECUTE_CACHE_4_24 79
#define EXECUTE_CACHE_4_22 81
#define EXECUTE_CACHE_4_20 83
#define EXECUTE_CACHE_4_17 85
#define EXECUTE_CACHE_4_15 87
#define EXECUTE_CACHE_4_12 89
#define EXECUTE_CACHE_4_10 91
#define EXECUTE_CACHE_4_8 93
#define EXECUTE_CACHE_4_6 95
#define FREE_REFERENCE_4_1 98
#define FREE_REFERENCE_4_0 99
#define FREE_REFERENCES_LABEL_4_0 56
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto stack_block__dbg_block_26;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_4_18);
      goto lambda_33;

    case 9:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_4_28);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_4_29);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_4_33);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_4_34);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_6;

    case 19:
      current_block = (Rpc - LABEL_4_38);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_4_40);
      goto continuation_5;

    case 22:
      current_block = (Rpc - LABEL_4_42);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_4_43);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_4_47);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_4_48);
      goto continuation_20;

    case 26:
      current_block = (Rpc - LABEL_4_45);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block__dbg_block_32)
DEFLABEL (stack_block__dbg_block_26)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_18])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;

DEFLABEL (label_35)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_31);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_39);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_48]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_49]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_51]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_38);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_42]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_44]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_42);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_50]));

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_46]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_38;
  Wrd10 = Wrd14;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_35]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_27);
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_33])), (Wrd11.pObj));

DEFLABEL (label_28)
  (Wrd10.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_43;
  Wrd29 = Wrd33;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_41;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd43.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_41;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_40)
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

DEFLABEL (label_41)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_28])), (Wrd30.pObj));

DEFLABEL (label_29)
  (Wrd29.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_4_18);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_41]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_40);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 20
#define DEBUGGING_LABEL_5_2 19
#define EXECUTE_CACHE_5_11 11
#define EXECUTE_CACHE_5_10 13
#define EXECUTE_CACHE_5_9 15
#define EXECUTE_CACHE_5_6 17
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto continuation_block__dbg_block_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_block__dbg_block_6)
DEFLABEL (continuation_block__dbg_block_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_13 11
#define LABEL_6_10 13
#define LABEL_6_11 15
#define LABEL_6_14 17
#define LABEL_6_17 19
#define LABEL_6_18 21
#define LABEL_6_20 23
#define LABEL_6_23 25
#define LABEL_6_22 27
#define LABEL_6_25 29
#define LABEL_6_26 31
#define ENVIRONMENT_LABEL_6_3 59
#define DEBUGGING_LABEL_6_2 58
#define OBJECT_6_4 57
#define OBJECT_6_3 56
#define OBJECT_6_2 55
#define OBJECT_6_1 54
#define OBJECT_6_0 53
#define EXECUTE_CACHE_6_24 33
#define EXECUTE_CACHE_6_21 35
#define EXECUTE_CACHE_6_19 37
#define EXECUTE_CACHE_6_16 39
#define EXECUTE_CACHE_6_15 41
#define EXECUTE_CACHE_6_12 43
#define EXECUTE_CACHE_6_9 45
#define EXECUTE_CACHE_6_6 47
#define FREE_REFERENCE_6_2 50
#define FREE_REFERENCE_6_1 51
#define FREE_REFERENCE_6_0 52
#define FREE_REFERENCES_LABEL_6_0 32
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto make_dbg_block_continuation_22;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_6_13);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_6_17);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_6_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto do_loop_17;

    case 11:
      current_block = (Rpc - LABEL_6_23);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_6_25);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_6_26);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_block_continuation_31)
DEFLABEL (make_dbg_block_continuation_22)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_43;
  Wrd8 = Wrd12;

DEFLABEL (label_42)
  (Wrd17.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (Wrd17.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [7]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd20.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_17;

DEFLABEL (label_34)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_36;
  Wrd22 = Wrd26;

DEFLABEL (label_35)
  (Wrd31.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_18])), (Wrd23.pObj));

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_17])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd32.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_37;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_13])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd22.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_41;

DEFLABEL (do_loop_32)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_6_20);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_1])))
    goto label_45;
  Rsp = (& (Rsp [2]));
  (Wrd23.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [3]) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd24.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (label_45)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_50)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_49;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_47;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_47;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd18.Obj);
  goto do_loop_17;

DEFLABEL (label_47)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_29)
  (Wrd18.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_9 11
#define LABEL_7_13 13
#define LABEL_7_19 15
#define LABEL_7_14 17
#define LABEL_7_16 19
#define LABEL_7_17 21
#define LABEL_7_27 23
#define LABEL_7_18 25
#define LABEL_7_29 27
#define LABEL_7_21 29
#define TAG_7_22 13
#define LABEL_7_32 31
#define LABEL_7_33 33
#define LABEL_7_34 35
#define LABEL_7_23 37
#define LABEL_7_24 39
#define TAG_7_25 18
#define LABEL_7_40 41
#define LABEL_7_30 43
#define LABEL_7_42 45
#define LABEL_7_43 47
#define LABEL_7_44 49
#define LABEL_7_36 51
#define LABEL_7_39 53
#define LABEL_7_46 55
#define ENVIRONMENT_LABEL_7_3 95
#define DEBUGGING_LABEL_7_2 94
#define OBJECT_7_4 93
#define OBJECT_7_3 92
#define OBJECT_7_2 91
#define OBJECT_7_1 90
#define OBJECT_7_0 89
#define EXECUTE_CACHE_7_45 57
#define EXECUTE_CACHE_7_41 59
#define EXECUTE_CACHE_7_38 61
#define EXECUTE_CACHE_7_37 63
#define EXECUTE_CACHE_7_35 65
#define EXECUTE_CACHE_7_31 67
#define EXECUTE_CACHE_7_28 69
#define EXECUTE_CACHE_7_26 71
#define EXECUTE_CACHE_7_20 73
#define EXECUTE_CACHE_7_15 75
#define EXECUTE_CACHE_7_12 77
#define EXECUTE_CACHE_7_11 79
#define EXECUTE_CACHE_7_10 81
#define EXECUTE_CACHE_7_8 83
#define FREE_REFERENCE_7_2 86
#define FREE_REFERENCE_7_1 87
#define FREE_REFERENCE_7_0 88
#define FREE_REFERENCES_LABEL_7_0 56
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto closure_block__dbg_block_26;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_7_19);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_7_27);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_7_29);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_7_21);
      goto lambda_39;

    case 14:
      current_block = (Rpc - LABEL_7_32);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_7_33);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_7_34);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_7_24);
      goto lambda_40;

    case 19:
      current_block = (Rpc - LABEL_7_40);
      goto label_31;

    case 20:
      current_block = (Rpc - LABEL_7_30);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_7_42);
      goto label_32;

    case 22:
      current_block = (Rpc - LABEL_7_43);
      goto label_33;

    case 23:
      current_block = (Rpc - LABEL_7_44);
      goto label_34;

    case 24:
      current_block = (Rpc - LABEL_7_36);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_7_39);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_7_46);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_block__dbg_block_38)
DEFLABEL (closure_block__dbg_block_26)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_21])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [4]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_50;
  Wrd17 = Wrd21;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_48;
  Wrd5 = Wrd9;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_46;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_46;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_24])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_38]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_7_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;

DEFLABEL (label_41)
  (Wrd11.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [3]) = (Wrd12.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_37]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_7_36);
  (Rsp [1]) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_45]));

DEFLABEL (label_42)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_44;
  Wrd27 = Wrd31;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_32);
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_34])), (Wrd28.pObj));

DEFLABEL (label_35)
  (Wrd27.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_29])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_19])), (Wrd18.pObj));

DEFLABEL (label_28)
  (Wrd17.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_7_21);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_31]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_30);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_56;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_55)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_54;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_54;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = ((Wrd23.Lng) - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_54;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_53)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_52;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_51)
  (Wrd35.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_44]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_34)
  (Wrd26.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_7_24);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_60;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_41]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_39);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_58;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_57)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (label_58)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_40]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_9 9
#define EXECUTE_CACHE_8_8 11
#define EXECUTE_CACHE_8_7 13
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto ic_block__dbg_block_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_block__dbg_block_5)
DEFLABEL (ic_block__dbg_block_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto make_layout_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_layout_3)
DEFLABEL (make_layout_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_5 3
#define LABEL_10_4 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define OBJECT_10_3 16
#define OBJECT_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 11
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_10_4);
      goto layout_setB_4;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (layout_setB_9)
DEFLABEL (layout_setB_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_15;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_15;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) (Wrd17.Lng)) < ((unsigned long) (Wrd21.Lng))))
    goto label_15;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd12.pObj) = (& ((Wrd19.pObj) [(Wrd9.Lng)]));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_14)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_12;
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_12;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_12;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd41.pObj) = (& ((Wrd48.pObj) [(Wrd38.Lng)]));
  (Wrd42.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [1]) = (Wrd42.Obj);

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 3);

DEFLABEL (label_7)
  goto label_11;

DEFLABEL (label_15)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_8 9
#define LABEL_11_12 11
#define LABEL_11_13 13
#define LABEL_11_10 15
#define LABEL_11_18 17
#define LABEL_11_14 19
#define LABEL_11_21 21
#define LABEL_11_22 23
#define LABEL_11_24 25
#define LABEL_11_16 27
#define LABEL_11_23 29
#define ENVIRONMENT_LABEL_11_3 60
#define DEBUGGING_LABEL_11_2 59
#define OBJECT_11_4 58
#define OBJECT_11_3 57
#define OBJECT_11_2 56
#define OBJECT_11_1 55
#define OBJECT_11_0 54
#define EXECUTE_CACHE_11_26 31
#define EXECUTE_CACHE_11_25 33
#define EXECUTE_CACHE_11_20 35
#define EXECUTE_CACHE_11_19 37
#define EXECUTE_CACHE_11_17 39
#define EXECUTE_CACHE_11_15 41
#define EXECUTE_CACHE_11_11 43
#define EXECUTE_CACHE_11_9 45
#define EXECUTE_CACHE_11_7 47
#define FREE_REFERENCE_11_1 50
#define FREE_REFERENCE_11_0 51
#define FREE_ASSIGNMENT_11_0 53
#define FREE_REFERENCES_LABEL_11_0 30
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto variable__dbg_variable_14;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_18);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_11_21);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_11_22);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_11_24);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable__dbg_variable_22)
DEFLABEL (variable__dbg_variable_14)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_42;
  Wrd8 = Wrd12;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_36)
  (Wrd28.Obj) = (Rsp [2]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd30.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_31)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd18.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_26)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_25;
  Wrd34 = Wrd38;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd40.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_23);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_24])), (Wrd35.pObj));

DEFLABEL (label_20)
  (Wrd34.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_22])), (Wrd18.pObj), (Wrd14.Obj));

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_21])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd35.Obj) = (Rsp [3]);
  if (! ((Wrd35.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd44.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_33;

DEFLABEL (label_34)
  (Wrd45.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_33)
  goto label_31;

DEFLABEL (label_35)
  (Wrd37.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_31;

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 1))
    goto label_39;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (label_39)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_36;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_9 9
#define LABEL_12_11 11
#define ENVIRONMENT_LABEL_12_3 29
#define DEBUGGING_LABEL_12_2 28
#define OBJECT_12_0 27
#define EXECUTE_CACHE_12_15 13
#define EXECUTE_CACHE_12_14 15
#define EXECUTE_CACHE_12_13 17
#define EXECUTE_CACHE_12_12 19
#define EXECUTE_CACHE_12_10 21
#define EXECUTE_CACHE_12_8 23
#define EXECUTE_CACHE_12_7 25
#define FREE_REFERENCES_LABEL_12_0 12
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_12_4);
      goto process_integrated_variableB_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_integrated_variableB_8)
DEFLABEL (process_integrated_variableB_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (label_10)
  (Wrd7.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_4 5
#define LABEL_13_9 7
#define LABEL_13_10 9
#define LABEL_13_6 11
#define LABEL_13_7 13
#define LABEL_13_15 15
#define LABEL_13_11 17
#define LABEL_13_12 19
#define LABEL_13_13 21
#define LABEL_13_19 23
#define LABEL_13_14 25
#define LABEL_13_17 27
#define TAG_13_18 12
#define LABEL_13_20 29
#define LABEL_13_21 31
#define ENVIRONMENT_LABEL_13_3 47
#define DEBUGGING_LABEL_13_2 46
#define OBJECT_13_0 45
#define EXECUTE_CACHE_13_23 33
#define EXECUTE_CACHE_13_22 35
#define EXECUTE_CACHE_13_16 37
#define EXECUTE_CACHE_13_8 39
#define FREE_REFERENCE_13_2 42
#define FREE_REFERENCE_13_1 43
#define FREE_REFERENCE_13_0 44
#define FREE_REFERENCES_LABEL_13_0 32
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_13_4);
      goto info_generation_phase_2_15;

    case 2:
      current_block = (Rpc - LABEL_13_9);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_8;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto lambda_10;

    case 10:
      current_block = (Rpc - LABEL_13_19);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_13_17);
      goto lambda_24;

    case 13:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (info_generation_phase_2_21)
DEFLABEL (info_generation_phase_2_15)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_28;
  Wrd11 = Wrd15;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_2;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd18.Obj) = Rvl;

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_17])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  ((Wrd13.pObj) [2]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd18.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_26;

DEFLABEL (lambda_22)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_13_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd9.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (lambda_23)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_13_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_2;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_20);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_15])), (Wrd10.pObj));

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_25)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_13_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_2;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_19])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_13_17);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_12 9
#define LABEL_14_8 11
#define LABEL_14_10 13
#define LABEL_14_20 15
#define LABEL_14_11 17
#define LABEL_14_14 19
#define LABEL_14_15 21
#define TAG_14_16 9
#define LABEL_14_32 23
#define LABEL_14_18 25
#define LABEL_14_35 27
#define LABEL_14_19 29
#define LABEL_14_23 31
#define TAG_14_24 14
#define LABEL_14_25 33
#define TAG_14_26 15
#define LABEL_14_38 35
#define LABEL_14_27 37
#define LABEL_14_28 39
#define TAG_14_29 18
#define LABEL_14_30 41
#define TAG_14_31 19
#define LABEL_14_33 43
#define LABEL_14_34 45
#define LABEL_14_49 47
#define LABEL_14_36 49
#define LABEL_14_42 51
#define LABEL_14_43 53
#define LABEL_14_39 55
#define LABEL_14_40 57
#define TAG_14_41 27
#define LABEL_14_45 59
#define LABEL_14_47 61
#define LABEL_14_46 63
#define LABEL_14_58 65
#define LABEL_14_52 67
#define TAG_14_53 32
#define LABEL_14_54 69
#define LABEL_14_60 71
#define LABEL_14_61 73
#define LABEL_14_63 75
#define LABEL_14_65 77
#define LABEL_14_67 79
#define LABEL_14_69 81
#define ENVIRONMENT_LABEL_14_3 136
#define DEBUGGING_LABEL_14_2 135
#define OBJECT_14_7 134
#define OBJECT_14_6 133
#define OBJECT_14_5 132
#define OBJECT_14_4 131
#define OBJECT_14_3 130
#define OBJECT_14_2 129
#define OBJECT_14_1 128
#define OBJECT_14_0 127
#define EXECUTE_CACHE_14_70 83
#define EXECUTE_CACHE_14_68 85
#define EXECUTE_CACHE_14_66 87
#define EXECUTE_CACHE_14_64 89
#define EXECUTE_CACHE_14_62 91
#define EXECUTE_CACHE_14_59 93
#define EXECUTE_CACHE_14_56 95
#define EXECUTE_CACHE_14_55 97
#define EXECUTE_CACHE_14_51 99
#define EXECUTE_CACHE_14_57 101
#define EXECUTE_CACHE_14_50 103
#define EXECUTE_CACHE_14_48 105
#define EXECUTE_CACHE_14_44 107
#define EXECUTE_CACHE_14_37 109
#define EXECUTE_CACHE_14_22 111
#define EXECUTE_CACHE_14_21 113
#define EXECUTE_CACHE_14_17 115
#define EXECUTE_CACHE_14_13 117
#define EXECUTE_CACHE_14_9 119
#define EXECUTE_CACHE_14_6 121
#define FREE_REFERENCE_14_2 124
#define FREE_REFERENCE_14_1 125
#define FREE_REFERENCE_14_0 126
#define FREE_REFERENCES_LABEL_14_0 82
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      goto info_generation_phase_3_50;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_14_12);
      goto label_52;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_46;

    case 6:
      current_block = (Rpc - LABEL_14_20);
      goto label_53;

    case 7:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_45;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_14_15);
      goto lambda_59;

    case 10:
      current_block = (Rpc - LABEL_14_32);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_48;

    case 12:
      current_block = (Rpc - LABEL_14_35);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_14_19);
      goto continuation_47;

    case 14:
      current_block = (Rpc - LABEL_14_23);
      goto lambda_18;

    case 15:
      current_block = (Rpc - LABEL_14_25);
      goto lambda_20;

    case 16:
      current_block = (Rpc - LABEL_14_38);
      goto continuation_26;

    case 17:
      current_block = (Rpc - LABEL_14_27);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_14_28);
      goto lambda_62;

    case 19:
      current_block = (Rpc - LABEL_14_30);
      goto lambda_63;

    case 20:
      current_block = (Rpc - LABEL_14_33);
      goto continuation_44;

    case 21:
      current_block = (Rpc - LABEL_14_34);
      goto continuation_43;

    case 22:
      current_block = (Rpc - LABEL_14_49);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_14_36);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_14_42);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_14_43);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_14_39);
      goto continuation_37;

    case 27:
      current_block = (Rpc - LABEL_14_40);
      goto lambda_64;

    case 28:
      current_block = (Rpc - LABEL_14_45);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_14_47);
      goto continuation_3;

    case 30:
      current_block = (Rpc - LABEL_14_46);
      goto continuation_4;

    case 31:
      current_block = (Rpc - LABEL_14_58);
      goto label_56;

    case 32:
      current_block = (Rpc - LABEL_14_52);
      goto lambda_65;

    case 33:
      current_block = (Rpc - LABEL_14_54);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_14_60);
      goto continuation_39;

    case 35:
      current_block = (Rpc - LABEL_14_61);
      goto continuation_38;

    case 36:
      current_block = (Rpc - LABEL_14_63);
      goto continuation_28;

    case 37:
      current_block = (Rpc - LABEL_14_65);
      goto continuation_29;

    case 38:
      current_block = (Rpc - LABEL_14_67);
      goto continuation_30;

    case 39:
      current_block = (Rpc - LABEL_14_69);
      goto continuation_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (info_generation_phase_3_58)
DEFLABEL (info_generation_phase_3_50)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_15])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_23])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_25])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_28])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_14_27);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_44]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_14_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_18;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_14_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_51]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_14_38);

DEFLABEL (label_66)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_39]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_40])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_14_39);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_53);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_52])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_72;
  Wrd11 = Wrd15;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_70;
  Wrd13 = Wrd17;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_14_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_68;
  Wrd12 = Wrd16;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_14_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_14_33);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_48]));

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_35])), (Wrd13.pObj));

DEFLABEL (label_55)
  (Wrd12.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_20])), (Wrd14.pObj));

DEFLABEL (label_53)
  (Wrd13.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_12])), (Wrd12.pObj));

DEFLABEL (label_52)
  (Wrd11.Obj) = Rvl;
  goto label_71;

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_14_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_30])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_74;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_73)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (label_74)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_32]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_54)
  (Wrd14.Obj) = Rvl;
  goto label_73;

DEFLABEL (lambda_60)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_14_23);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_37]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_36);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_14_1]))
    goto label_76;

DEFLABEL (label_75)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_50]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_49);
  goto label_75;

DEFLABEL (lambda_61)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_14_25);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_37]));

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_14_28);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_18;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_14_45);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_14_3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_56]));

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_14_30);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_37]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_47);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_14_1]))
    goto label_77;
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_57]));

DEFLABEL (label_77)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_80)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_79;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_78)
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_59]));

DEFLABEL (label_79)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_58]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_78;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_46);
  goto label_80;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_14_40);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_55]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_14_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_20;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_14_63);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_66]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_14_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_68]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_14_67);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_18;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_14_69);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_70]));

DEFLABEL (label_81)
  (Wrd16.Obj) = (Rsp [1]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;
  Rvl = (current_block [OBJECT_14_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd20.Obj) = (current_block [OBJECT_14_6]);
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_50]));

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_14_52);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_62]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_14_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_18;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_14_60);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_64]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_8 5
#define LABEL_15_9 7
#define LABEL_15_5 9
#define LABEL_15_11 11
#define LABEL_15_13 13
#define LABEL_15_6 15
#define LABEL_15_7 17
#define LABEL_15_12 19
#define LABEL_15_14 21
#define LABEL_15_17 23
#define LABEL_15_18 25
#define TAG_15_19 11
#define LABEL_15_23 27
#define LABEL_15_24 29
#define LABEL_15_25 31
#define LABEL_15_28 33
#define ENVIRONMENT_LABEL_15_3 60
#define DEBUGGING_LABEL_15_2 59
#define OBJECT_15_4 58
#define OBJECT_15_3 57
#define OBJECT_15_2 56
#define OBJECT_15_1 55
#define OBJECT_15_0 54
#define EXECUTE_CACHE_15_27 35
#define EXECUTE_CACHE_15_26 37
#define EXECUTE_CACHE_15_22 39
#define EXECUTE_CACHE_15_21 41
#define EXECUTE_CACHE_15_20 43
#define EXECUTE_CACHE_15_16 45
#define EXECUTE_CACHE_15_15 47
#define EXECUTE_CACHE_15_10 49
#define FREE_REFERENCE_15_1 52
#define FREE_REFERENCE_15_0 53
#define FREE_REFERENCES_LABEL_15_0 34
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto labels__dbg_labels_20;

    case 1:
      current_block = (Rpc - LABEL_15_8);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_15_9);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_15_13);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_15_17);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_15_18);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_15_23);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_15_24);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_15_25);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_15_28);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (labels__dbg_labels_30)
DEFLABEL (labels__dbg_labels_20)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_36;
  Wrd13 = Wrd17;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_34;
  Wrd19 = Wrd23;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_18])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_15_17);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_9])), (Wrd20.pObj));

DEFLABEL (label_23)
  (Wrd19.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_8])), (Wrd14.pObj));

DEFLABEL (label_22)
  (Wrd13.Obj) = Rvl;
  goto label_35;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (lambda_31)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_37)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_15_18);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_47)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_45)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_25);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Rsp [4]) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_27]));

DEFLABEL (label_41)
  (Rsp [3]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_43)
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_42;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [1]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_15_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 2);

DEFLABEL (label_44)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_9 9
#define LABEL_16_7 11
#define LABEL_16_11 13
#define ENVIRONMENT_LABEL_16_3 27
#define DEBUGGING_LABEL_16_2 26
#define OBJECT_16_4 25
#define OBJECT_16_3 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_12 15
#define EXECUTE_CACHE_16_10 17
#define EXECUTE_CACHE_16_8 19
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
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
      goto choose_distinguished_label_10;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (choose_distinguished_label_15)
DEFLABEL (choose_distinguished_label_10)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_25)
  if ((Wrd5.Obj) == (current_block [OBJECT_16_1]))
    goto label_23;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_16_1])))
    goto label_18;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (label_18)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_22;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_21)
  if ((Wrd7.Obj) == (current_block [OBJECT_16_1]))
    goto label_19;
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd17.Obj);
  goto label_17;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_20;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_24;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_16)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_16_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_4]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_10 11
#define LABEL_17_12 13
#define LABEL_17_9 15
#define LABEL_17_14 17
#define LABEL_17_11 19
#define LABEL_17_17 21
#define LABEL_17_16 23
#define LABEL_17_21 25
#define LABEL_17_19 27
#define ENVIRONMENT_LABEL_17_3 46
#define DEBUGGING_LABEL_17_2 45
#define OBJECT_17_3 44
#define OBJECT_17_2 43
#define OBJECT_17_1 42
#define OBJECT_17_0 41
#define EXECUTE_CACHE_17_20 29
#define EXECUTE_CACHE_17_18 31
#define EXECUTE_CACHE_17_15 33
#define EXECUTE_CACHE_17_13 35
#define EXECUTE_CACHE_17_7 37
#define FREE_REFERENCE_17_0 40
#define FREE_REFERENCES_LABEL_17_0 28
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_17_4);
      goto min_suffix_15;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto lambda_9;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_17_17);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (min_suffix_20)
DEFLABEL (min_suffix_15)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [0]) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (lambda_21)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_17_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_9;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_9;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_24;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_17_1]);

DEFLABEL (label_26)
DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_17_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_14);

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_32;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_32;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_31)
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_21);
  goto label_29;

DEFLABEL (label_32)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_12])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_10 13
#define LABEL_18_11 15
#define LABEL_18_12 17
#define LABEL_18_13 19
#define LABEL_18_14 21
#define LABEL_18_15 23
#define LABEL_18_17 25
#define LABEL_18_16 27
#define LABEL_18_19 29
#define ENVIRONMENT_LABEL_18_3 43
#define DEBUGGING_LABEL_18_2 42
#define OBJECT_18_6 41
#define OBJECT_18_5 40
#define OBJECT_18_4 39
#define OBJECT_18_3 38
#define OBJECT_18_2 37
#define OBJECT_18_1 36
#define OBJECT_18_0 35
#define EXECUTE_CACHE_18_18 31
#define EXECUTE_CACHE_18_7 33
#define FREE_REFERENCES_LABEL_18_0 30
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infnew_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_18_4);
      goto standard_nameP_19;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_18_11);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_18_14);
      goto loop_16;

    case 10:
      current_block = (Rpc - LABEL_18_15);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_18_17);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_18_16);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_18_19);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_nameP_32)
DEFLABEL (standard_nameP_19)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_53;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_52)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_51;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_49;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_49;
  if ((Wrd16.Obj) == (Wrd5.Obj))
    goto label_35;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_48;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_48;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) - (Wrd41.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_48;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_47)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_46;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if ((Wrd43.Lng) < 2L)
    goto label_34;

DEFLABEL (label_45)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 30))
    goto label_44;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_44;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [1]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) (Wrd57.Lng)) < ((unsigned long) (Wrd61.Lng))))
    goto label_44;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd51.pChr) = (& ((Wrd59.pChr) [(Wrd48.Lng)]));
  (Wrd52.uLng) = ((unsigned long) (((unsigned char *) (Wrd51.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd53.Obj) = (MAKE_OBJECT (2, (Wrd52.uLng)));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_43)
  (Wrd70.Obj) = (Rsp [0]);
  if ((Wrd70.Obj) == (current_block [OBJECT_18_3]))
    goto label_42;
  if ((Wrd70.Obj) == (current_block [OBJECT_18_4]))
    goto label_37;
  (Wrd72.Obj) = (current_block [OBJECT_18_6]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd72.Obj) = (current_block [OBJECT_18_5]);

DEFLABEL (label_36)
DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  if ((Wrd72.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_40)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_39;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd82.Lng) = ((Wrd84.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd82.Lng)))
    goto label_39;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd82.Lng));
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_38)
  goto loop_16;

DEFLABEL (label_39)
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  goto label_40;

DEFLABEL (label_44)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd88.Obj) = (current_block [OBJECT_18_1]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_34;

DEFLABEL (label_48)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_51)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (loop_33)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_18_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_61;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_61;
  if (! ((Wrd5.Obj) == (Wrd7.Obj)))
    goto label_55;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_18_5]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_60;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_60;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_60;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd23.pChr) = (& ((Wrd31.pChr) [(Wrd20.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd25.Obj) = (MAKE_OBJECT (2, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_58;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_58;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_57)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_16;

DEFLABEL (label_58)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define ENVIRONMENT_LABEL_3 31
#define DEBUGGING_LABEL_2 30
#define PURIFICATION_ROOT 29
#define OBJECT_8 28
#define OBJECT_7 27
#define OBJECT_6 26
#define OBJECT_5 25
#define OBJECT_4 24
#define OBJECT_3 23
#define OBJECT_2 22
#define OBJECT_1 21
#define OBJECT_0 20
#define EXECUTE_CACHE_8 15
#define GLOBAL_EXECUTE_CACHE_5 18
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
infnew_so_343e300cd707e297 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto expression_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_4)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	2,
	2,
	2,
	1,
	3,
	1,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 18)
      goto label_6;
    blocks = (current_block [OBJECT_8]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_infnew_so_343e300cd707e297 [18] =
  {
    { "infnew_so_code_1", 46, infnew_so_code_1 },
    { "infnew_so_code_2", 6, infnew_so_code_2 },
    { "infnew_so_code_3", 9, infnew_so_code_3 },
    { "infnew_so_code_4", 27, infnew_so_code_4 },
    { "infnew_so_code_5", 4, infnew_so_code_5 },
    { "infnew_so_code_6", 15, infnew_so_code_6 },
    { "infnew_so_code_7", 27, infnew_so_code_7 },
    { "infnew_so_code_8", 3, infnew_so_code_8 },
    { "infnew_so_code_9", 1, infnew_so_code_9 },
    { "infnew_so_code_10", 4, infnew_so_code_10 },
    { "infnew_so_code_11", 14, infnew_so_code_11 },
    { "infnew_so_code_12", 5, infnew_so_code_12 },
    { "infnew_so_code_13", 15, infnew_so_code_13 },
    { "infnew_so_code_14", 40, infnew_so_code_14 },
    { "infnew_so_code_15", 16, infnew_so_code_15 },
    { "infnew_so_code_16", 6, infnew_so_code_16 },
    { "infnew_so_code_17", 13, infnew_so_code_17 },
    { "infnew_so_code_18", 14, infnew_so_code_18 }
  };

int
decl_infnew_so_343e300cd707e297 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_infnew_so_343e300cd707e297);
  return (0);
}

DECLARE_COMPILED_CODE ("infnew.so", 6, decl_infnew_so_343e300cd707e297, infnew_so_343e300cd707e297)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_infnew_so_data_343e300cd707e297 [6451] =
  "\xaa\x01\x24\xc9\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x1d"
  "\x08\x0d\xba\x25\xb2\x0d\xbb\x0d\xbc\x0d\x24\x28\x0d\x28\x0d\x28"
  "\x0d\xbd\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbe\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\xb4\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x82\x88\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x83\x88\x0c\x0d\x0d\x0d\x0d\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1d\x0d\x0d\x24\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\xb5"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb6\x28\x0d\x28\xb4\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\xb1\xc1\x1c\x80\x08\x0d\x0d\x1c\x0d\x0d\x24\x28"
  "\xb6\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x0d\x80\xc2\x0d\x1c\x0d\x1b\x24"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\xb5\x28\x1b"
  "\x28\x0d\x28\x1b\x28\xb6\x28\x0d\x28\xb4\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x28\x1b"
  "\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d"
  "\xc3\xc2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0d\x0d\x0d\x0d\xb2\x25\x0d\x1c\xb2\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb4\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x0c\x0d\x0d\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c"
  "\xb1\x0c\x07\x0c\x0d\x08\x88\x1b\x0d\x1b\x0d\x24\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\xb5\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1d\x08\x1b\xb1\x0d\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x1b\x28\xb5"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x1b\x08\xb1\x28\x0d\x28\x0d\xbd\x28\x0d\xb9\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x07\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x0f\x0f\xc2\x82\xc1\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\xb8\x88\xb0\xc3\x1b\x1b\x2a\x1b\x2a\x99\xb1\xb5"
  "\x99\x0f\x0f\x1b\x1b\x0d\x0d\xb3\x1b\xb4\xb2\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x1b\xb6\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a"
  "\x0c\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x28\x0d\x26\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x69\x6e\x66"
  "\x6e\x65\x77\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x64"
  "\x72\x02\x17\x2a\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x2a\x02\x1d\x70\x72\x6f\x63\x65"
  "\x73\x73\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x21\x17\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x3e\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x13\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x73\x05\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69"
  "\x64\x2d\x62\x69\x6e\x64\x03\x11\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x6c\x61\x62\x65\x6c\x04\x09\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x04\x1f\x73\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x21\x03\x11\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x62"
  "\x6c\x6f\x63\x6b\x03\x18\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x04\x14\x6d"
  "\x61\x6b\x65\x2d\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x03\x11\x62\x6c\x6f\x63\x6b\x2d\x3e\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x03\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x03\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x62\x6c\x6f\x63\x6b\x03\x1c\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x03\x19\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f"
  "\x04\x19\x73\x65\x74\x2d\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21\x09\x03\x14\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6f\x66\x66\x73\x65\x74"
  "\x03\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65"
  "\x73\x04\x21\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e"
  "\x66\x6f\x21\x03\x12\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2f\x74\x79\x70\x65\x04\x1e\x73\x65\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x69\x6e\x66\x6f\x21\x03\x18\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72\x65\x73\x74\x04\x04"
  "\x6d\x61\x70\x0a\x03\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2f\x6c\x61\x62\x65\x6c\x04\x18\x65\x6e\x75\x6d\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x69\x6e\x64\x65\x78\x2d\x3e\x6e\x61\x6d"
  "\x65\x03\x03\x1c\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x72"
  "\x69\x67\x69\x6e\x61\x6c\x2d\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x07"
  "\x16\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x0b\x03\x1c\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72\x65\x71\x75"
  "\x69\x72\x65\x64\x03\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x6e\x61\x6d\x65\x03\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f"
  "\x74\x79\x70\x65\x03\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x6c\x61\x62\x65\x6c\x0b\x13\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1f\x34\x5e\x81\x97\x02\x33"
  "\x5c\x81\x95\x02\x32\x5a\x81\x93\x02\x31\x58\x81\x95\x02\x30\x56"
  "\x81\x93\x02\x2f\x54\x81\x93\x02\x2e\x52\x81\x91\x02\x2d\x50\x81"
  "\x93\x02\x2c\x4e\x81\x91\x02\x2b\x4c\x81\x8f\x02\x2a\x4a\x81\x8f"
  "\x02\x29\x48\x81\x8d\x02\x28\x46\x81\x8f\x02\x27\x44\x81\x91\x02"
  "\x26\x42\x81\x8f\x02\x25\x40\x81\x8d\x02\x24\x3e\x81\x8f\x02\x23"
  "\x3c\x81\x8d\x02\x22\x3a\x81\x8b\x02\x21\x38\x81\x89\x02\x20\x36"
  "\x81\x8b\x02\x1f\x34\x81\x89\x02\x1e\x32\x81\x89\x02\x1d\x30\x81"
  "\x87\x02\x1c\x2e\x81\x89\x02\x1b\x2c\x81\x87\x02\x1a\x2a\x81\x87"
  "\x02\x19\x28\x81\x85\x02\x18\x26\x81\x87\x02\x17\x24\x81\x85\x02"
  "\x16\x22\x81\x83\x02\x15\x20\x81\x8b\x02\x14\x1e\x81\x89\x02\x13"
  "\x1c\x83\x04\x12\x1a\x81\x85\x02\x11\x18\x81\x83\x02\x10\x16\x81"
  "\x83\x02\x0f\x14\x81\x87\x02\x0e\x12\x81\x85\x02\x0d\x10\x81\x83"
  "\x02\x0c\x0e\x81\x83\x02\x0b\x0c\x81\x85\x02\x0a\x0a\x81\x83\x02"
  "\x09\x08\x81\x83\x02\x08\x06\x81\x83\x02\x07\x04\x84\x06\x5d\xa7"
  "\x01\x0c\x02\x0a\x67\x65\x6e\x65\x72\x61\x74\x65\x64\x03\x18\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x62\x6c\x6f\x63\x6b\x0d\x03\x19\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65"
  "\x74\x04\x1c\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0e\x04"
  "\x09\x07\x0b\x06\x3a\x0e\x81\x89\x02\x39\x0c\x81\x8b\x02\x38\x0a"
  "\x81\x87\x02\x37\x08\x81\x89\x02\x36\x06\x81\x85\x02\x35\x04\x84"
  "\x06\x0d\x1c\x0b\x02\x25\x42\x4c\x4f\x43\x4b\x2d\x3e\x44\x42\x47"
  "\x2d\x42\x4c\x4f\x43\x4b\x3a\x20\x49\x6c\x6c\x65\x67\x61\x6c\x20"
  "\x62\x6c\x6f\x63\x6b\x20\x74\x79\x70\x65\x11\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x18\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x13\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x63"
  "\x6c\x6f\x73\x75\x72\x65\x0e\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70"
  "\x65\x2f\x69\x63\x05\x03\x15\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x03\x0b\x62\x6c\x6f"
  "\x63\x6b\x2d\x74\x79\x70\x65\x04\x1a\x73\x65\x74\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x21\x03\x17\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x3e\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x09\x03\x1e\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x3e\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x0f\x03\x19\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x3e\x64\x62\x67\x2d"
  "\x62\x6c\x6f\x63\x6b\x10\x03\x14\x69\x63\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x3e\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x11\x04\x06\x65\x72"
  "\x72\x6f\x72\x12\x09\x43\x14\x81\x85\x02\x42\x12\x81\x83\x02\x41"
  "\x10\x81\x83\x02\x40\x0e\x81\x83\x02\x3f\x0c\x81\x83\x02\x3e\x0a"
  "\x81\x87\x02\x3d\x08\x81\x85\x02\x3c\x06\x81\x83\x02\x3b\x04\x83"
  "\x04\x13\x2d\x13\x02\x06\x73\x74\x61\x63\x6b\x02\x1b\x64\x62\x67"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x73\x74\x61\x74"
  "\x69\x63\x2d\x6c\x69\x6e\x6b\x1e\x64\x62\x67\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x6e\x61\x6d\x65\x2f\x6e\x6f\x72\x6d\x61\x6c\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x03\x03\x10\x62\x6c\x6f\x63\x6b\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x14\x03\x11\x62\x6c\x6f\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x2d\x73\x69\x7a\x65\x03\x0d\x62\x6c\x6f\x63"
  "\x6b\x2d\x70\x61\x72\x65\x6e\x74\x15\x04\x0c\x6d\x61\x6b\x65\x2d"
  "\x76\x65\x63\x74\x6f\x72\x16\x03\x16\x62\x6c\x6f\x63\x6b\x2d\x62"
  "\x6f\x75\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x03\x13"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72"
  "\x65\x3f\x04\x03\x19\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x03\x22\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6e\x65\x65\x64\x73\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x3f"
  "\x03\x17\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x3f\x05\x0c\x6c\x61\x79\x6f\x75\x74"
  "\x2d\x73\x65\x74\x21\x17\x03\x03\x19\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6f\x66\x66\x73\x65"
  "\x74\x03\x03\x17\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x6f\x72"
  "\x6d\x61\x6c\x2d\x6f\x66\x66\x73\x65\x74\x03\x11\x62\x6c\x6f\x63"
  "\x6b\x2d\x73\x74\x61\x63\x6b\x2d\x6c\x69\x6e\x6b\x03\x17\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x72\x67\x65\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x03\x1a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x07"
  "\x0f\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x18"
  "\x03\x0d\x15\x5e\x38\x81\x8d\x02\x5d\x36\x81\x8f\x02\x5c\x34\x81"
  "\x8d\x02\x5b\x32\x81\x8d\x02\x5a\x30\x81\x8b\x02\x59\x2e\x81\x89"
  "\x02\x58\x2c\x81\x8d\x02\x57\x2a\x81\x8b\x02\x56\x28\x81\x87\x02"
  "\x55\x26\x81\x8b\x02\x54\x24\x81\x8f\x02\x53\x22\x81\x85\x02\x52"
  "\x20\x81\x8d\x02\x51\x1e\x81\x8b\x02\x50\x1c\x81\x8f\x02\x4f\x1a"
  "\x81\x8d\x02\x4e\x18\x81\x8b\x02\x4d\x16\x81\x8b\x02\x4c\x14\x81"
  "\x85\x02\x4b\x12\x81\x8b\x02\x4a\x10\x81\x8d\x02\x49\x0e\x81\x8b"
  "\x02\x48\x0c\x81\x89\x02\x47\x0a\x81\x87\x02\x46\x08\x81\x85\x02"
  "\x45\x06\x81\x83\x02\x44\x04\x83\x04\x37\x68\x0d\x02\x03\x15\x03"
  "\x14\x04\x0e\x03\x24\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2f\x61\x6c\x77\x61\x79\x73\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x3f\x05\x62\x0a\x81\x87\x02\x61\x08"
  "\x81\x85\x02\x60\x06\x81\x83\x02\x5f\x04\x83\x04\x09\x15\x14\x02"
  "\x04\x63\x61\x72\x19\x0d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x19\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d"
  "\x65\x2f\x69\x63\x2d\x70\x61\x72\x65\x6e\x74\x1a\x1c\x64\x62\x67"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x1e\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61"
  "\x64\x64\x72\x65\x73\x73\x04\x03\x03\x0a\x69\x63\x2d\x62\x6c\x6f"
  "\x63\x6b\x3f\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x14\x62\x6c\x6f"
  "\x63\x6b\x2f\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x3f"
  "\x04\x16\x05\x07\x61\x70\x70\x65\x6e\x64\x07\x18\x05\x17\x09\x71"
  "\x20\x81\x93\x02\x70\x1e\x81\x93\x02\x6f\x1c\x81\x93\x02\x6e\x1a"
  "\x81\x95\x02\x6d\x18\x81\x93\x02\x6c\x16\x81\x91\x02\x6b\x14\x81"
  "\x8f\x02\x6a\x12\x81\x8f\x02\x69\x10\x81\x91\x02\x68\x0e\x81\x8d"
  "\x02\x67\x0c\x81\x8d\x02\x66\x0a\x81\x8d\x02\x65\x08\x81\x8b\x02"
  "\x64\x06\x81\x85\x02\x63\x04\x84\x06\x1f\x3c\x1b\x02\x08\x19\x08"
  "\x63\x6c\x6f\x73\x75\x72\x65\x06\x61\x70\x70\x6c\x79\x04\x63\x64"
  "\x72\x1c\x04\x6d\x61\x78\x1a\x04\x03\x13\x62\x6c\x6f\x63\x6b\x2d"
  "\x73\x68\x61\x72\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x03\x15\x03\x1c"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66"
  "\x69\x72\x73\x74\x2d\x6f\x66\x66\x73\x65\x74\x03\x13\x62\x6c\x6f"
  "\x63\x6b\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x75\x6d\x62\x65\x72\x03"
  "\x16\x62\x6c\x6f\x63\x6b\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6f"
  "\x66\x66\x73\x65\x74\x73\x04\x0a\x04\x04\x16\x03\x1b\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x66\x69\x72\x73\x74"
  "\x2d\x6f\x66\x66\x73\x65\x74\x05\x17\x03\x03\x15\x69\x63\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x75\x73\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x3f"
  "\x03\x07\x18\x0f\x8c\x01\x38\x81\x89\x02\x8b\x01\x36\x81\x87\x02"
  "\x8a\x01\x34\x81\x8b\x02\x89\x01\x32\x81\x87\x02\x88\x01\x30\x81"
  "\x85\x02\x87\x01\x2e\x81\x87\x02\x86\x01\x2c\x81\x85\x02\x85\x01"
  "\x2a\x81\x89\x02\x84\x01\x28\x81\x85\x02\x83\x01\x26\x81\x89\x02"
  "\x82\x01\x24\x81\x8b\x02\x81\x01\x22\x81\x89\x02\x80\x01\x20\x81"
  "\x89\x02\x7f\x1e\x81\x85\x02\x7e\x1c\x81\x8f\x02\x7d\x1a\x81\x8d"
  "\x02\x7c\x18\x81\x8b\x02\x7b\x16\x81\x8b\x02\x7a\x14\x81\x87\x02"
  "\x79\x12\x81\x89\x02\x78\x10\x81\x91\x02\x77\x0e\x81\x87\x02\x76"
  "\x0c\x81\x85\x02\x75\x0a\x81\x87\x02\x74\x08\x81\x85\x02\x73\x06"
  "\x81\x83\x02\x72\x04\x83\x04\x37\x60\x1a\x02\x09\x03\x69\x63\x03"
  "\x15\x07\x18\x03\x04\x8f\x01\x08\x81\x89\x02\x8e\x01\x06\x81\x87"
  "\x02\x8d\x01\x04\x83\x04\x07\x12\x18\x02\x0a\x04\x16\x02\x90\x01"
  "\x04\x83\x04\x03\x16\x02\x0b\x21\x4c\x41\x59\x4f\x55\x54\x2d\x53"
  "\x45\x54\x21\x3a\x20\x72\x65\x75\x73\x69\x6e\x67\x20\x6c\x61\x79"
  "\x6f\x75\x74\x20\x73\x6c\x6f\x74\x02\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x05\x12\x02\x94\x01\x0a\x81\x87\x02\x93\x01\x08\x81\x89\x02\x92"
  "\x01\x06\x85\x08\x91\x01\x04\x81\x87\x02\x09\x13\x15\x02\x0c\x19"
  "\x0b\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x0b\x69\x6e\x64\x69"
  "\x72\x65\x63\x74\x65\x64\x05\x63\x65\x6c\x6c\x07\x6e\x6f\x72\x6d"
  "\x61\x6c\x02\x11\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x74\x61\x67\x1d\x03\x04\x0b\x6c\x76\x61\x6c\x75\x65\x2d\x67"
  "\x65\x74\x03\x13\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x65\x64\x3f\x03\x15\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x03\x12\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x2d\x63\x65\x6c\x6c\x3f\x03"
  "\x0e\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x03\x03"
  "\x13\x6c\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61"
  "\x6c\x75\x65\x05\x0c\x6c\x76\x61\x6c\x75\x65\x2d\x70\x75\x74\x21"
  "\x05\x12\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x0a\xa2\x01\x1e\x81\x89\x02\xa1\x01\x1c\x81\x8d\x02"
  "\xa0\x01\x1a\x81\x8d\x02\x9f\x01\x18\x81\x89\x02\x9e\x01\x16\x81"
  "\x89\x02\x9d\x01\x14\x81\x87\x02\x9c\x01\x12\x81\x8b\x02\x9b\x01"
  "\x10\x81\x87\x02\x9a\x01\x0e\x81\x89\x02\x99\x01\x0c\x81\x8b\x02"
  "\x98\x01\x0a\x81\x85\x02\x97\x01\x08\x81\x83\x02\x96\x01\x06\x81"
  "\x85\x02\x95\x01\x04\x83\x04\x1d\x3d\x1e\x02\x0d\x17\x49\x6c\x6c"
  "\x65\x67\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x76\x61"
  "\x6c\x75\x65\x03\x13\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2f\x76\x61\x6c\x75\x65\x04\x18\x73\x65\x74\x2d\x64\x62\x67"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\x21"
  "\x03\x11\x72\x76\x61\x6c\x75\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x3f\x03\x12\x72\x76\x61\x6c\x75\x65\x2f\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3f\x03\x0f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d"
  "\x76\x61\x6c\x75\x65\x04\x12\x03\x08\xa7\x01\x0c\x81\x83\x02\xa6"
  "\x01\x0a\x81\x83\x02\xa5\x01\x08\x81\x87\x02\xa4\x01\x06\x81\x85"
  "\x02\xa3\x01\x04\x83\x04\x0b\x1e\x02\x0e\x17\x4d\x69\x73\x73\x69"
  "\x6e\x67\x20\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x20\x69\x6e\x66"
  "\x6f\x18\x72\x74\x6c\x2d\x65\x78\x70\x72\x2f\x64\x65\x62\x75\x67"
  "\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x1d\x72\x74\x6c\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x20\x72\x74\x6c\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x04\x04\x0a\x04\x12\x03\x1e\x72\x74\x6c"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x25\x65\x78\x74\x65"
  "\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x04\x22\x73\x65\x74\x2d"
  "\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x21\x1f\x05\xb6"
  "\x01\x20\x81\x87\x02\xb5\x01\x1e\x81\x85\x02\xb4\x01\x1c\x81\x85"
  "\x02\xb3\x01\x1a\x81\x83\x02\xb2\x01\x18\x81\x83\x02\xb1\x01\x16"
  "\x83\x04\xb0\x01\x14\x81\x87\x02\xaf\x01\x12\x81\x85\x02\xae\x01"
  "\x10\x81\x87\x02\xad\x01\x0e\x83\x04\xac\x01\x0c\x81\x87\x02\xab"
  "\x01\x0a\x81\x85\x02\xaa\x01\x08\x81\x8b\x02\xa9\x01\x06\x85\x08"
  "\xa8\x01\x04\x81\x87\x02\x1f\x30\x20\x02\x0f\x02\x0e\x4d\x69\x73"
  "\x73\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c\x12\x52\x65\x64\x65\x66"
  "\x69\x6e\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c\x3a\x0f\x4d\x69\x73"
  "\x73\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c\x3a\x09\x6e\x6f\x2d\x64"
  "\x61\x74\x75\x6d\x19\x13\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x3c\x3f\x1c\x10\x64\x62\x67\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3c\x3f\x04\x03\x13\x6c\x61\x62\x65"
  "\x6c\x73\x2d\x3e\x64\x62\x67\x2d\x6c\x61\x62\x65\x6c\x73\x1c\x02"
  "\x17\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x04\x05\x73\x6f\x72\x74\x21\x04\x04"
  "\x0a\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x05"
  "\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x03"
  "\x15\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f"
  "\x6c\x61\x62\x65\x6c\x06\x0e\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d"
  "\x69\x6e\x66\x6f\x04\x12\x05\x12\x04\x1a\x73\x65\x74\x2d\x64\x62"
  "\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6c\x61\x62"
  "\x65\x6c\x21\x03\x14\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2f\x6c\x61\x62\x65\x6c\x04\x19\x73\x65\x74\x2d\x64\x62"
  "\x67\x2d\x6c\x61\x62\x65\x6c\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c"
  "\x3f\x21\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70"
  "\x75\x74\x21\x03\x17\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x6c\x61\x62\x65\x6c\x04\x1c\x73\x65\x74"
  "\x2d\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2f\x6c\x61\x62\x65\x6c\x21\x04\x19\x73\x65\x74\x2d\x64\x62"
  "\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6c\x61\x62\x65"
  "\x6c\x21\x03\x1d\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c"
  "\x04\x1f\x15\xde\x01\x52\x81\x87\x02\xdd\x01\x50\x81\x89\x02\xdc"
  "\x01\x4e\x81\x89\x02\xdb\x01\x4c\x81\x87\x02\xda\x01\x4a\x81\x87"
  "\x02\xd9\x01\x48\x81\x85\x02\xd8\x01\x46\x81\x85\x02\xd7\x01\x44"
  "\x81\x85\x02\xd6\x01\x42\x81\x87\x02\xd5\x01\x40\x81\x85\x02\xd4"
  "\x01\x3e\x81\x87\x02\xd3\x01\x3c\x81\x85\x02\xd2\x01\x3a\x81\x85"
  "\x02\xd1\x01\x38\x81\x85\x02\xd0\x01\x36\x81\x89\x02\xcf\x01\x34"
  "\x81\x87\x02\xce\x01\x32\x81\x87\x02\xcd\x01\x30\x81\x89\x02\xcc"
  "\x01\x2e\x81\x8f\x02\xcb\x01\x2c\x81\x8d\x02\xca\x01\x2a\x81\x85"
  "\x02\xc9\x01\x28\x81\x85\x02\xc8\x01\x26\x81\x85\x02\xc7\x01\x24"
  "\x81\x85\x02\xc6\x01\x22\x81\x85\x02\xc5\x01\x20\x81\x85\x02\xc4"
  "\x01\x1e\x81\x8f\x02\xc3\x01\x1c\x81\x91\x02\xc2\x01\x1a\x81\x8d"
  "\x02\xc1\x01\x18\x81\x85\x02\xc0\x01\x16\x81\x85\x02\xbf\x01\x14"
  "\x81\x83\x02\xbe\x01\x12\x81\x8f\x02\xbd\x01\x10\x81\x93\x02\xbc"
  "\x01\x0e\x81\x8d\x02\xbb\x01\x0c\x81\x8f\x02\xba\x01\x0a\x81\x91"
  "\x02\xb9\x01\x08\x81\x8d\x02\xb8\x01\x06\x81\x8b\x02\xb7\x01\x04"
  "\x87\x0c\x51\x89\x01\x1f\x02\x10\x09\x73\x65\x74\x2d\x63\x64\x72"
  "\x21\x02\x19\x02\x3c\x02\x3d\x03\x04\x0d\x6d\x61\x6b\x65\x2d\x72"
  "\x62\x2d\x74\x72\x65\x65\x03\x1b\x63\x68\x6f\x6f\x73\x65\x2d\x64"
  "\x69\x73\x74\x69\x6e\x67\x75\x69\x73\x68\x65\x64\x2d\x6c\x61\x62"
  "\x65\x6c\x22\x04\x0a\x04\x04\x11\x6d\x61\x6b\x65\x2d\x64\x62\x67"
  "\x2d\x6c\x61\x62\x65\x6c\x2d\x32\x03\x0f\x72\x62\x2d\x74\x72\x65"
  "\x65\x2d\x3e\x61\x6c\x69\x73\x74\x05\x0f\x72\x62\x2d\x74\x72\x65"
  "\x65\x2f\x6c\x6f\x6f\x6b\x75\x70\x05\x10\x72\x62\x2d\x74\x72\x65"
  "\x65\x2f\x69\x6e\x73\x65\x72\x74\x21\x09\xee\x01\x22\x81\x8b\x02"
  "\xed\x01\x20\x81\x89\x02\xec\x01\x1e\x81\x87\x02\xeb\x01\x1c\x81"
  "\x85\x02\xea\x01\x1a\x81\x85\x02\xe9\x01\x18\x81\x83\x02\xe8\x01"
  "\x16\x81\x89\x02\xe7\x01\x14\x81\x85\x02\xe6\x01\x12\x81\x87\x02"
  "\xe5\x01\x10\x81\x85\x02\xe4\x01\x0e\x81\x87\x02\xe3\x01\x0c\x81"
  "\x83\x02\xe2\x01\x0a\x83\x04\xe1\x01\x08\x81\x8b\x02\xe0\x01\x06"
  "\x81\x89\x02\xdf\x01\x04\x83\x04\x21\x3d\x0a\x02\x11\x0a\x65\x6e"
  "\x64\x2d\x6c\x61\x62\x65\x6c\x06\x6c\x61\x62\x65\x6c\x19\x04\x18"
  "\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x03\x0b\x6d\x69\x6e\x2d\x73\x75\x66"
  "\x66\x69\x78\x04\x0f\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6e\x61"
  "\x6d\x65\x3f\x04\xf4\x01\x0e\x81\x83\x02\xf3\x01\x0c\x83\x04\xf2"
  "\x01\x0a\x81\x85\x02\xf1\x01\x08\x81\x83\x02\xf0\x01\x06\x81\x83"
  "\x02\xef\x01\x04\x83\x04\x0d\x1c\x23\x02\x12\x15\x49\x6c\x6c\x65"
  "\x67\x61\x6c\x20\x6c\x61\x62\x65\x6c\x20\x73\x75\x66\x66\x69\x78"
  "\x13\x49\x6c\x6c\x65\x67\x61\x6c\x20\x6c\x61\x62\x65\x6c\x20\x6e"
  "\x61\x6d\x65\x19\x1a\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6c\x61"
  "\x62\x65\x6c\x2d\x73\x65\x70\x61\x72\x61\x74\x6f\x72\x73\x19\x02"
  "\x04\x21\x04\x21\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d"
  "\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x63\x68\x61\x72\x2d\x69\x6e"
  "\x2d\x73\x65\x74\x04\x12\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74"
  "\x61\x69\x6c\x03\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e\x75\x6d"
  "\x62\x65\x72\x06\x81\x02\x1c\x81\x83\x02\x80\x02\x1a\x81\x85\x02"
  "\xff\x01\x18\x81\x85\x02\xfe\x01\x16\x81\x87\x02\xfd\x01\x14\x81"
  "\x83\x02\xfc\x01\x12\x81\x85\x02\xfb\x01\x10\x81\x85\x02\xfa\x01"
  "\x0e\x81\x85\x02\xf9\x01\x0c\x81\x83\x02\xf8\x01\x0a\x81\x85\x02"
  "\xf7\x01\x08\x84\x06\xf6\x01\x06\x81\x83\x02\xf5\x01\x04\x83\x04"
  "\x1b\x2f\x21\x02\x13\x01\x60\x01\x2e\x0b\x73\x74\x72\x69\x6e\x67"
  "\x2d\x72\x65\x66\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x04\x18\x73\x74\x72\x69\x6e\x67\x2d\x6d\x61\x74\x63\x68"
  "\x2d\x66\x6f\x72\x77\x61\x72\x64\x2d\x63\x69\x03\x0e\x63\x68\x61"
  "\x72\x2d\x6e\x75\x6d\x65\x72\x69\x63\x3f\x03\x8f\x02\x1e\x81\x8b"
  "\x02\x8e\x02\x1c\x81\x8b\x02\x8d\x02\x1a\x81\x8d\x02\x8c\x02\x18"
  "\x81\x8b\x02\x8b\x02\x16\x81\x8b\x02\x8a\x02\x14\x81\x89\x02\x89"
  "\x02\x12\x81\x89\x02\x88\x02\x10\x81\x89\x02\x87\x02\x0e\x81\x89"
  "\x02\x86\x02\x0c\x81\x89\x02\x85\x02\x0a\x81\x89\x02\x84\x02\x08"
  "\x81\x87\x02\x83\x02\x06\x81\x85\x02\x82\x02\x04\x84\x06\x1d\x2c"
  "\x12\x13\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x19\x12\x04\x21\x04\x01\x2e\x01\x60\x22\x1c\x18\x69"
  "\x6e\x66\x6f\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x2d\x70"
  "\x68\x61\x73\x65\x2d\x33\x18\x69\x6e\x66\x6f\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2d\x70\x68\x61\x73\x65\x2d\x32\x1d\x17"
  "\x0c\x6d\x61\x6b\x65\x2d\x6c\x61\x79\x6f\x75\x74\x11\x10\x0e\x0f"
  "\x09\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x64\x2d\x64\x62\x67\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x18\x69\x6e\x66"
  "\x6f\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x2d\x70\x68\x61"
  "\x73\x65\x2d\x31\x13\x23\x04\x0a\x04\x1f\x04\x20\x06\x04\x11\x64"
  "\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x74\x61\x67\x1e"
  "\x04\x15\x06\x16\x04\x18\x04\x1a\x04\x1b\x04\x14\x04\x0d\x04\x13"
  "\x04\x0b\x04\x0c\x04\x13\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x04\x09\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x02\x06\x0e\x80\x80\x04\x05\x0c\x81\x81\x02\x04\x0a\x81"
  "\x81\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83"
  "\x02\x0d\x20";

SCHEME_OBJECT *
infnew_so_data_343e300cd707e297 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_infnew_so_data_343e300cd707e297 [0]))), (sizeof (prog_infnew_so_data_343e300cd707e297)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_11]));
}

DECLARE_COMPILED_DATA_NS ("infnew.so", infnew_so_data_343e300cd707e297)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("infnew.so", "1b0a3f513ce8ba12")
