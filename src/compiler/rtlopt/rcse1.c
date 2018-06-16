/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define ENVIRONMENT_LABEL_1_3 16
#define DEBUGGING_LABEL_1_2 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCE_1_0 14
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto common_subexpression_elimination_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (common_subexpression_elimination_5)
DEFLABEL (common_subexpression_elimination_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define TAG_2_10 2
#define LABEL_2_7 9
#define TAG_2_8 3
#define LABEL_2_15 11
#define LABEL_2_16 13
#define LABEL_2_17 15
#define LABEL_2_18 17
#define LABEL_2_19 19
#define LABEL_2_20 21
#define LABEL_2_21 23
#define LABEL_2_22 25
#define LABEL_2_23 27
#define LABEL_2_24 29
#define LABEL_2_25 31
#define LABEL_2_26 33
#define LABEL_2_12 35
#define LABEL_2_28 37
#define LABEL_2_13 39
#define LABEL_2_27 41
#define LABEL_2_30 43
#define LABEL_2_35 45
#define LABEL_2_34 47
#define LABEL_2_32 49
#define TAG_2_33 23
#define LABEL_2_39 51
#define LABEL_2_40 53
#define LABEL_2_41 55
#define LABEL_2_42 57
#define LABEL_2_43 59
#define LABEL_2_44 61
#define LABEL_2_45 63
#define LABEL_2_46 65
#define LABEL_2_47 67
#define LABEL_2_48 69
#define LABEL_2_49 71
#define LABEL_2_50 73
#define LABEL_2_36 75
#define ENVIRONMENT_LABEL_2_3 116
#define DEBUGGING_LABEL_2_2 115
#define OBJECT_2_3 114
#define OBJECT_2_2 113
#define OBJECT_2_1 112
#define OBJECT_2_0 111
#define EXECUTE_CACHE_2_51 77
#define EXECUTE_CACHE_2_38 79
#define EXECUTE_CACHE_2_37 81
#define EXECUTE_CACHE_2_31 83
#define EXECUTE_CACHE_2_29 85
#define EXECUTE_CACHE_2_14 87
#define EXECUTE_CACHE_2_11 89
#define EXECUTE_CACHE_2_6 91
#define FREE_REFERENCE_2_7 94
#define FREE_REFERENCE_2_6 95
#define FREE_REFERENCE_2_5 96
#define FREE_REFERENCE_2_4 97
#define FREE_REFERENCE_2_3 98
#define FREE_REFERENCE_2_2 99
#define FREE_REFERENCE_2_1 100
#define FREE_REFERENCE_2_0 101
#define FREE_ASSIGNMENT_2_7 103
#define FREE_ASSIGNMENT_2_6 104
#define FREE_ASSIGNMENT_2_5 105
#define FREE_ASSIGNMENT_2_4 106
#define FREE_ASSIGNMENT_2_3 107
#define FREE_ASSIGNMENT_2_2 108
#define FREE_ASSIGNMENT_2_1 109
#define FREE_ASSIGNMENT_2_0 110
#define FREE_REFERENCES_LABEL_2_0 76
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto cse_rgraph_61;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_92;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto swapB_91;

    case 4:
      current_block = (Rpc - LABEL_2_15);
      goto label_63;

    case 5:
      current_block = (Rpc - LABEL_2_16);
      goto label_64;

    case 6:
      current_block = (Rpc - LABEL_2_17);
      goto label_65;

    case 7:
      current_block = (Rpc - LABEL_2_18);
      goto label_66;

    case 8:
      current_block = (Rpc - LABEL_2_19);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_2_20);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_2_21);
      goto label_69;

    case 11:
      current_block = (Rpc - LABEL_2_22);
      goto label_70;

    case 12:
      current_block = (Rpc - LABEL_2_23);
      goto label_71;

    case 13:
      current_block = (Rpc - LABEL_2_24);
      goto label_72;

    case 14:
      current_block = (Rpc - LABEL_2_25);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_2_26);
      goto label_74;

    case 16:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_4;

    case 17:
      current_block = (Rpc - LABEL_2_28);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_3;

    case 19:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_2_30);
      goto lambda_2;

    case 21:
      current_block = (Rpc - LABEL_2_35);
      goto label_76;

    case 22:
      current_block = (Rpc - LABEL_2_34);
      goto lambda_7;

    case 23:
      current_block = (Rpc - LABEL_2_32);
      goto swapB_93;

    case 24:
      current_block = (Rpc - LABEL_2_39);
      goto label_77;

    case 25:
      current_block = (Rpc - LABEL_2_40);
      goto label_78;

    case 26:
      current_block = (Rpc - LABEL_2_41);
      goto label_79;

    case 27:
      current_block = (Rpc - LABEL_2_42);
      goto label_80;

    case 28:
      current_block = (Rpc - LABEL_2_43);
      goto label_81;

    case 29:
      current_block = (Rpc - LABEL_2_44);
      goto label_82;

    case 30:
      current_block = (Rpc - LABEL_2_45);
      goto label_83;

    case 31:
      current_block = (Rpc - LABEL_2_46);
      goto label_84;

    case 32:
      current_block = (Rpc - LABEL_2_47);
      goto label_85;

    case 33:
      current_block = (Rpc - LABEL_2_48);
      goto label_86;

    case 34:
      current_block = (Rpc - LABEL_2_49);
      goto label_87;

    case 35:
      current_block = (Rpc - LABEL_2_50);
      goto label_88;

    case 36:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_rgraph_90)
DEFLABEL (cse_rgraph_61)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 4;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd34.pObj) = (& (Rhp [-1]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd34.pObj)));
  (Rsp [3]) = (Wrd35.Obj);
  Wrd31 = Wrd37;
  (Wrd32.Obj) = (Rsp [4]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  ((Wrd31.pObj) [3]) = (Wrd35.Obj);
  ((Wrd31.pObj) [4]) = (Wrd7.Obj);
  ((Wrd31.pObj) [5]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd12.Obj);
  (Rsp [5]) = (Wrd38.Obj);
  (Rsp [4]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd38.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (lambda_92)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_97;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_97;
  (Wrd24.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_96)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_OBJECT (50, 0));
  (Rsp [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_32])));
  Rhp += 4;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (Rsp [1]) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (Rsp [4]) = (Wrd31.Obj);
  Wrd23 = Wrd33;
  ((Wrd23.pObj) [2]) = (Wrd31.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [3]) = (Wrd21.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  ((Wrd23.pObj) [5]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (label_97)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [2]);
  (Wrd40.Obj) = (current_block [OBJECT_2_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (swapB_91)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (swapB_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  Wrd5 = Wrd9;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_128)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_125)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  Wrd57 = Wrd61;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_119)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [4]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_116)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_115;

DEFLABEL (label_114)
  Wrd109 = Wrd113;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_112;

DEFLABEL (label_111)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_110)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [3]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_109;

DEFLABEL (label_108)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_107)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_106;

DEFLABEL (label_105)
  Wrd161 = Wrd165;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_103;

DEFLABEL (label_102)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_101)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [2]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_98)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_100)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_26])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_74)
  goto label_98;

DEFLABEL (label_103)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_102;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_25])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_73)
  goto label_101;

DEFLABEL (label_106)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_105;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_24])), (Wrd162.pObj));

DEFLABEL (label_72)
  (Wrd161.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_109)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_108;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_23])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_71)
  goto label_107;

DEFLABEL (label_112)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_111;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_22])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_70)
  goto label_110;

DEFLABEL (label_115)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_114;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_21])), (Wrd110.pObj));

DEFLABEL (label_69)
  (Wrd109.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_118)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_68)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_120;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_67)
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_18])), (Wrd58.pObj));

DEFLABEL (label_66)
  (Wrd57.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_127)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_65)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_129;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_64)
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_15])), (Wrd6.pObj));

DEFLABEL (label_63)
  (Wrd5.Obj) = Rvl;
  goto label_131;

DEFLABEL (lambda_94)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_30);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_135;
  Wrd5 = Wrd9;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_51]));

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_35])), (Wrd6.pObj));

DEFLABEL (label_76)
  (Wrd5.Obj) = Rvl;
  goto label_134;

DEFLABEL (lambda_95)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_2_34);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (swapB_93)
  CLOSURE_HEADER (LABEL_2_32);

DEFLABEL (swapB_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_171;

DEFLABEL (label_170)
  Wrd5 = Wrd9;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_168;

DEFLABEL (label_167)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_166)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_165;

DEFLABEL (label_164)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_163)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_5]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_162;

DEFLABEL (label_161)
  Wrd57 = Wrd61;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_5]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_159;

DEFLABEL (label_158)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_157)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [4]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_5]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_156;

DEFLABEL (label_155)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_154)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_6]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_153;

DEFLABEL (label_152)
  Wrd109 = Wrd113;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_6]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_150;

DEFLABEL (label_149)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_148)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [3]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_6]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_147;

DEFLABEL (label_146)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_145)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_7]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_144;

DEFLABEL (label_143)
  Wrd161 = Wrd165;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_7]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_141;

DEFLABEL (label_140)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_139)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [2]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_7]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_138;

DEFLABEL (label_137)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_136)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_138)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_137;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_50])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_88)
  goto label_136;

DEFLABEL (label_141)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_140;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_49])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_87)
  goto label_139;

DEFLABEL (label_144)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_143;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_48])), (Wrd162.pObj));

DEFLABEL (label_86)
  (Wrd161.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_147)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_146;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_47])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_85)
  goto label_145;

DEFLABEL (label_150)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_149;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_46])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_84)
  goto label_148;

DEFLABEL (label_153)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_152;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_45])), (Wrd110.pObj));

DEFLABEL (label_83)
  (Wrd109.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_156)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_155;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_44])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_82)
  goto label_154;

DEFLABEL (label_159)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_158;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_43])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_81)
  goto label_157;

DEFLABEL (label_162)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_161;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_42])), (Wrd58.pObj));

DEFLABEL (label_80)
  (Wrd57.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_165)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_164;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_41])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_79)
  goto label_163;

DEFLABEL (label_168)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_167;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_40])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_78)
  goto label_166;

DEFLABEL (label_171)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_170;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_39])), (Wrd6.pObj));

DEFLABEL (label_77)
  (Wrd5.Obj) = Rvl;
  goto label_169;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_15 21
#define LABEL_3_16 23
#define LABEL_3_17 25
#define LABEL_3_18 27
#define LABEL_3_19 29
#define LABEL_3_20 31
#define LABEL_3_21 33
#define LABEL_3_22 35
#define LABEL_3_23 37
#define LABEL_3_6 39
#define LABEL_3_25 41
#define LABEL_3_28 43
#define LABEL_3_27 45
#define ENVIRONMENT_LABEL_3_3 74
#define DEBUGGING_LABEL_3_2 73
#define OBJECT_3_8 72
#define OBJECT_3_7 71
#define OBJECT_3_6 70
#define OBJECT_3_5 69
#define OBJECT_3_4 68
#define OBJECT_3_3 67
#define OBJECT_3_2 66
#define OBJECT_3_1 65
#define OBJECT_3_0 64
#define EXECUTE_CACHE_3_29 47
#define EXECUTE_CACHE_3_26 49
#define EXECUTE_CACHE_3_24 51
#define EXECUTE_CACHE_3_8 53
#define FREE_REFERENCE_3_1 56
#define FREE_REFERENCE_3_0 57
#define FREE_ASSIGNMENT_3_4 59
#define FREE_ASSIGNMENT_3_3 60
#define FREE_ASSIGNMENT_3_2 61
#define FREE_ASSIGNMENT_3_1 62
#define FREE_ASSIGNMENT_3_0 63
#define FREE_REFERENCES_LABEL_3_0 46
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd183;
  machine_word Wrd175;
  machine_word Wrd177;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd146;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd118;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd90;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd187;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd186;
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
      current_block = (Rpc - LABEL_3_4);
      goto continue_walk_15;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_3_16);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_3_17);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_3_18);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_3_19);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_3_20);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_3_21);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_3_22);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_3_23);
      goto label_32;

    case 18:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 19:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_2;

    case 20:
      current_block = (Rpc - LABEL_3_28);
      goto label_34;

    case 21:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_walk_36)
DEFLABEL (continue_walk_15)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_79;
  Wrd6 = Wrd10;

DEFLABEL (label_78)
  if ((Wrd6.Obj) == (current_block [OBJECT_3_0]))
    goto label_72;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_71;
  Wrd14 = Wrd18;

DEFLABEL (label_70)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_69;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_68)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_67;
  Wrd28 = Wrd32;

DEFLABEL (label_66)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_65;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd34.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_64)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd41.pObj) [0]) = (Wrd34.Obj);

DEFLABEL (label_61)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_60;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_59)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_58;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd70.Lng))))
    goto label_58;
  (Wrd62.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_57)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd86.Obj) = ((Wrd78.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd78.pObj) [0]) = (Wrd62.Obj);

DEFLABEL (label_54)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 10))
    goto label_53;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd98.Lng))))
    goto label_53;
  (Wrd90.Obj) = ((Wrd96.pObj) [2]);

DEFLABEL (label_52)
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd114.Obj) = ((Wrd106.pObj) [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if ((Wrd115.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd106.pObj) [0]) = (Wrd90.Obj);

DEFLABEL (label_49)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd128.uLng) == 10))
    goto label_48;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [0]);
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd126.Lng))))
    goto label_48;
  (Wrd118.Obj) = ((Wrd124.pObj) [3]);

DEFLABEL (label_47)
  (Wrd134.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_3]));
  (Wrd142.Obj) = ((Wrd134.pObj) [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if ((Wrd143.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd134.pObj) [0]) = (Wrd118.Obj);

DEFLABEL (label_44)
  (Wrd155.Obj) = (Rsp [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if (! ((Wrd156.uLng) == 10))
    goto label_43;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (Wrd154.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd154.Lng))))
    goto label_43;
  (Wrd146.Obj) = ((Wrd152.pObj) [4]);

DEFLABEL (label_42)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_4]));
  (Wrd170.Obj) = ((Wrd162.pObj) [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if ((Wrd171.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd162.pObj) [0]) = (Wrd146.Obj);

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd179.uLng) == 1))
    goto label_38;
  (Wrd177.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd175.Obj) = ((Wrd177.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd175.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (label_38)
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_32)
  (Wrd175.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  if ((Wrd170.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_22])), (Wrd162.pObj), (Wrd146.Obj));

DEFLABEL (label_31)
  goto label_39;

DEFLABEL (label_43)
  (Wrd157.Obj) = (Rsp [0]);
  (Wrd158.Obj) = (current_block [OBJECT_3_7]);
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_30)
  (Wrd146.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  if ((Wrd142.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_20])), (Wrd134.pObj), (Wrd118.Obj));

DEFLABEL (label_29)
  goto label_44;

DEFLABEL (label_48)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd130.Obj) = (current_block [OBJECT_3_6]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_28)
  (Wrd118.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_51)
  if ((Wrd114.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_18])), (Wrd106.pObj), (Wrd90.Obj));

DEFLABEL (label_27)
  goto label_49;

DEFLABEL (label_53)
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd102.Obj) = (current_block [OBJECT_3_5]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_26)
  (Wrd90.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_56)
  if ((Wrd86.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_16])), (Wrd78.pObj), (Wrd62.Obj));

DEFLABEL (label_25)
  goto label_54;

DEFLABEL (label_58)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.Obj) = (current_block [OBJECT_3_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_24)
  (Wrd62.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_63)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_13])), (Wrd41.pObj), (Wrd34.Obj));

DEFLABEL (label_22)
  goto label_61;

DEFLABEL (label_65)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_21)
  (Wrd34.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd29.pObj));

DEFLABEL (label_20)
  (Wrd28.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd15.pObj));

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (Wrd188.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd191.Obj) = ((Wrd188.pObj) [0]);
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if ((Wrd192.uLng) == 50)
    goto label_77;
  Wrd187 = Wrd191;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd187.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  Rvl = (current_block [OBJECT_3_8]);
  goto pop_return;

DEFLABEL (label_73)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_75;
  Wrd8 = Wrd12;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_28])), (Wrd9.pObj));

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd188.pObj));

DEFLABEL (label_33)
  (Wrd187.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_78;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 5
#define DEBUGGING_LABEL_4_2 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_state_3)
DEFLABEL (make_state_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_5_4);
      goto state_register_tables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_register_tables_3)
DEFLABEL (state_register_tables_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_6_4);
      goto state_hash_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_hash_table_3)
DEFLABEL (state_hash_table_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      goto state_stack_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_stack_offset_3)
DEFLABEL (state_stack_offset_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      goto state_stack_reference_quantities_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_stack_reference_quantities_3)
DEFLABEL (state_stack_reference_quantities_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define LABEL_9_8 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define LABEL_9_12 15
#define ENVIRONMENT_LABEL_9_3 31
#define DEBUGGING_LABEL_9_2 30
#define OBJECT_9_2 29
#define OBJECT_9_1 28
#define OBJECT_9_0 27
#define EXECUTE_CACHE_9_9 17
#define EXECUTE_CACHE_9_7 19
#define FREE_REFERENCE_9_0 22
#define FREE_ASSIGNMENT_9_2 24
#define FREE_ASSIGNMENT_9_1 25
#define FREE_ASSIGNMENT_9_0 26
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_9_4);
      goto state_resetB_2;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_resetB_9)
DEFLABEL (state_resetB_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_16)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_1]));
  (Wrd19.Obj) = (current_block [OBJECT_9_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_13)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_2]));
  (Wrd31.Obj) = (current_block [OBJECT_9_1]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd30.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_9_2]);
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_12])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_11])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_6)
  goto label_13;

DEFLABEL (label_18)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_9 9
#define LABEL_10_11 11
#define LABEL_10_7 13
#define LABEL_10_14 15
#define LABEL_10_10 17
#define LABEL_10_17 19
#define LABEL_10_13 21
#define LABEL_10_19 23
#define LABEL_10_16 25
#define ENVIRONMENT_LABEL_10_3 45
#define DEBUGGING_LABEL_10_2 44
#define OBJECT_10_1 43
#define OBJECT_10_0 42
#define EXECUTE_CACHE_10_20 27
#define EXECUTE_CACHE_10_18 29
#define EXECUTE_CACHE_10_15 31
#define EXECUTE_CACHE_10_12 33
#define EXECUTE_CACHE_10_8 35
#define FREE_REFERENCE_10_3 38
#define FREE_REFERENCE_10_2 39
#define FREE_REFERENCE_10_1 40
#define FREE_REFERENCE_10_0 41
#define FREE_REFERENCES_LABEL_10_0 26
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_10_4);
      goto state_get_7;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_5;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_10_17);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_10_19);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_get_16)
DEFLABEL (state_get_7)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_21;
  Wrd14 = Wrd18;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_17])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_11])), (Wrd15.pObj));

DEFLABEL (label_11)
  (Wrd14.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_9])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_17)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_10_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_26)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_10 13
#define LABEL_11_12 15
#define LABEL_11_13 17
#define LABEL_11_14 19
#define LABEL_11_15 21
#define LABEL_11_16 23
#define LABEL_11_11 25
#define LABEL_11_18 27
#define LABEL_11_21 29
#define LABEL_11_19 31
#define LABEL_11_22 33
#define LABEL_11_28 35
#define LABEL_11_26 37
#define LABEL_11_24 39
#define LABEL_11_35 41
#define LABEL_11_37 43
#define LABEL_11_39 45
#define LABEL_11_33 47
#define LABEL_11_41 49
#define LABEL_11_29 51
#define LABEL_11_44 53
#define LABEL_11_40 55
#define LABEL_11_45 57
#define LABEL_11_38 59
#define LABEL_11_36 61
#define LABEL_11_48 63
#define LABEL_11_47 65
#define LABEL_11_46 67
#define LABEL_11_51 69
#define LABEL_11_55 71
#define LABEL_11_56 73
#define LABEL_11_50 75
#define LABEL_11_52 77
#define LABEL_11_57 79
#define LABEL_11_54 81
#define ENVIRONMENT_LABEL_11_3 126
#define DEBUGGING_LABEL_11_2 125
#define OBJECT_11_6 124
#define OBJECT_11_5 123
#define OBJECT_11_4 122
#define OBJECT_11_3 121
#define OBJECT_11_2 120
#define OBJECT_11_1 119
#define OBJECT_11_0 118
#define EXECUTE_CACHE_11_53 83
#define EXECUTE_CACHE_11_49 85
#define EXECUTE_CACHE_11_43 87
#define EXECUTE_CACHE_11_42 89
#define EXECUTE_CACHE_11_34 91
#define EXECUTE_CACHE_11_32 93
#define EXECUTE_CACHE_11_31 95
#define EXECUTE_CACHE_11_30 97
#define EXECUTE_CACHE_11_27 99
#define EXECUTE_CACHE_11_25 101
#define EXECUTE_CACHE_11_23 103
#define EXECUTE_CACHE_11_20 105
#define EXECUTE_CACHE_11_17 107
#define EXECUTE_CACHE_11_9 109
#define FREE_REFERENCE_11_3 112
#define FREE_REFERENCE_11_2 113
#define FREE_REFERENCE_11_1 114
#define FREE_REFERENCE_11_0 115
#define FREE_ASSIGNMENT_11_0 117
#define FREE_REFERENCES_LABEL_11_0 82
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd62;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
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
      current_block = (Rpc - LABEL_11_4);
      goto walk_bblock_44;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_46;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto loop_16;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_11_13);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_11_15);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_11_16);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_11_18);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_40;

    case 17:
      current_block = (Rpc - LABEL_11_26);
      goto continuation_39;

    case 18:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_11_35);
      goto continuation_26;

    case 20:
      current_block = (Rpc - LABEL_11_37);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_11_39);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_11_41);
      goto continuation_42;

    case 24:
      current_block = (Rpc - LABEL_11_29);
      goto continuation_41;

    case 25:
      current_block = (Rpc - LABEL_11_44);
      goto continuation_28;

    case 26:
      current_block = (Rpc - LABEL_11_40);
      goto continuation_27;

    case 27:
      current_block = (Rpc - LABEL_11_45);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_11_38);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_11_36);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_11_48);
      goto label_55;

    case 31:
      current_block = (Rpc - LABEL_11_47);
      goto continuation_35;

    case 32:
      current_block = (Rpc - LABEL_11_46);
      goto continuation_30;

    case 33:
      current_block = (Rpc - LABEL_11_51);
      goto label_57;

    case 34:
      current_block = (Rpc - LABEL_11_55);
      goto label_56;

    case 35:
      current_block = (Rpc - LABEL_11_56);
      goto continuation_37;

    case 36:
      current_block = (Rpc - LABEL_11_50);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_11_52);
      goto continuation_31;

    case 38:
      current_block = (Rpc - LABEL_11_57);
      goto label_58;

    case 39:
      current_block = (Rpc - LABEL_11_54);
      goto continuation_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_bblock_60)
DEFLABEL (walk_bblock_44)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_63;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_62)
  goto loop_16;

DEFLABEL (label_63)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (loop_61)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_11_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_79;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_79;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_78)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_77;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_76)
  if ((Wrd24.Obj) == (current_block [OBJECT_11_5]))
    goto label_73;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_72;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_71)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_70;
  Wrd47 = Wrd51;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;

DEFLABEL (label_65)
  (Wrd62.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_64)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_66)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_68;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_67)
  (Wrd75.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_6);
  goto label_65;

DEFLABEL (label_68)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_16])), (Wrd48.pObj));

DEFLABEL (label_50)
  (Wrd47.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_75;
  Wrd53 = Wrd57;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd53.Obj);
  goto label_64;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_14])), (Wrd54.pObj));

DEFLABEL (label_51)
  (Wrd53.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_48)
  (Wrd24.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_11_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_99;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_99;
  (Wrd7.Obj) = ((Wrd33.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_96;

DEFLABEL (label_95)
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_11_26);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_31]));

DEFLABEL (label_81)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_32]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_11_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_30]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_11_29);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_83;

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (label_83)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_43]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_11_41);
  goto label_82;

DEFLABEL (label_84)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_34]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11_33);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_11_39);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;

DEFLABEL (label_89)
  (Wrd12.Obj) = (Rsp [1]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_86;

DEFLABEL (label_85)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_31]));

DEFLABEL (label_86)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_37]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_37);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_85;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_38]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_30]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_11_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_88;

DEFLABEL (label_87)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (label_88)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_43]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_11_45);
  goto label_87;

DEFLABEL (label_90)
  (Wrd21.Obj) = (Rsp [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_32]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_11_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;

DEFLABEL (label_93)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_40]))));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_91;

DEFLABEL (label_92)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_36]))));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_91)
DEFLABEL (label_94)
  (Wrd42.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_30]));

DEFLABEL (label_96)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_98;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_98;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_97)
  (Rsp [0]) = (Wrd14.Obj);
  goto loop_16;

DEFLABEL (label_98)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_11_6]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_52)
  (Wrd14.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_11_6]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_96;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_11_40);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_101;

DEFLABEL (label_100)
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (label_101)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_11_44);
  goto label_100;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_11_36);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_110;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_46]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_30]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_11_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_54]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_104;
  Wrd11 = Wrd15;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_49]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_11_54);

DEFLABEL (label_102)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_55])), (Wrd12.pObj));

DEFLABEL (label_56)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_109;
  Wrd17 = Wrd21;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_52]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_53]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_11_52);
  (Wrd11.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  ((Wrd16.pObj) [0]) = (Wrd13.Obj);
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_57])), (Wrd16.pObj), (Wrd13.Obj));

DEFLABEL (label_58)
  goto label_102;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_51])), (Wrd18.pObj));

DEFLABEL (label_57)
  (Wrd17.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_114;
  Wrd11 = Wrd15;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_49]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_11_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_30]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_11_50);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;

DEFLABEL (label_111)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (label_112)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_43]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_11_56);
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_48])), (Wrd12.pObj));

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_113;

INVOKE_INTERFACE_TARGET_1
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
rcse1_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto walk_nextP_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_nextP_4)
DEFLABEL (walk_nextP_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_12_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 16
#define DEBUGGING_LABEL_13_2 15
#define EXECUTE_CACHE_13_9 9
#define EXECUTE_CACHE_13_8 11
#define EXECUTE_CACHE_13_6 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto walk_next_2;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_5)
DEFLABEL (walk_next_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_5 7
#define ENVIRONMENT_LABEL_14_3 14
#define DEBUGGING_LABEL_14_2 13
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCE_14_0 12
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto define_cse_method_1;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_cse_method_5)
DEFLABEL (define_cse_method_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_7;
  Wrd10 = Wrd14;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define TAG_15_8 3
#define LABEL_15_10 11
#define LABEL_15_13 13
#define LABEL_15_14 15
#define LABEL_15_15 17
#define LABEL_15_16 19
#define LABEL_15_17 21
#define LABEL_15_18 23
#define LABEL_15_21 25
#define LABEL_15_22 27
#define LABEL_15_23 29
#define LABEL_15_24 31
#define LABEL_15_25 33
#define LABEL_15_28 35
#define LABEL_15_29 37
#define LABEL_15_12 39
#define LABEL_15_30 41
#define LABEL_15_31 43
#define LABEL_15_34 45
#define LABEL_15_32 47
#define LABEL_15_19 49
#define ENVIRONMENT_LABEL_15_3 82
#define DEBUGGING_LABEL_15_2 81
#define OBJECT_15_7 80
#define OBJECT_15_6 79
#define OBJECT_15_5 78
#define OBJECT_15_4 77
#define OBJECT_15_3 76
#define OBJECT_15_2 75
#define OBJECT_15_1 74
#define OBJECT_15_0 73
#define EXECUTE_CACHE_15_35 51
#define EXECUTE_CACHE_15_33 53
#define EXECUTE_CACHE_15_27 55
#define EXECUTE_CACHE_15_26 57
#define EXECUTE_CACHE_15_20 59
#define EXECUTE_CACHE_15_11 61
#define EXECUTE_CACHE_15_9 63
#define FREE_REFERENCE_15_6 66
#define FREE_REFERENCE_15_5 67
#define FREE_REFERENCE_15_4 68
#define FREE_REFERENCE_15_3 69
#define FREE_REFERENCE_15_2 70
#define FREE_REFERENCE_15_1 71
#define FREE_REFERENCE_15_0 72
#define FREE_REFERENCES_LABEL_15_0 50
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_15_4);
      goto cse_assign_21;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_37;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_15_14);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_15_15);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_15_17);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_15_18);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_15_21);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_15_22);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_15_23);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_15_24);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_15_25);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_15_28);
      goto label_27;

    case 17:
      current_block = (Rpc - LABEL_15_29);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_2;

    case 19:
      current_block = (Rpc - LABEL_15_30);
      goto label_25;

    case 20:
      current_block = (Rpc - LABEL_15_31);
      goto label_26;

    case 21:
      current_block = (Rpc - LABEL_15_34);
      goto continuation_4;

    case 22:
      current_block = (Rpc - LABEL_15_32);
      goto continuation_1;

    case 23:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_assign_36)
DEFLABEL (cse_assign_21)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_41;
  Wrd6 = Wrd10;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_39;
  Wrd12 = Wrd16;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd13.pObj));

DEFLABEL (label_24)
  (Wrd12.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_34]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_35]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_29);

DEFLABEL (label_68)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_67;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_66)
  if ((Wrd17.Obj) == (current_block [OBJECT_15_5]))
    goto label_63;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_33]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_5]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_44;
  Wrd50 = Wrd54;

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_42)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_32]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_32);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_28])), (Wrd51.pObj));

DEFLABEL (label_27)
  (Wrd50.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_62;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_61)
  if ((Wrd56.Obj) == (current_block [OBJECT_15_3]))
    goto label_54;

DEFLABEL (label_53)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd102.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd102.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (Wrd124.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd124.uLng) == 1))
    goto label_49;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd123.Obj) = (Rsp [0]);
  ((Wrd122.pObj) [0]) = (Wrd123.Obj);

DEFLABEL (label_48)
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_47;
  Wrd116 = Wrd120;

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd116.Obj);
  goto label_42;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_15])), (Wrd117.pObj));

DEFLABEL (label_33)
  (Wrd116.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_34)
  goto label_48;

DEFLABEL (label_50)
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_4]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_52;
  Wrd93 = Wrd97;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_42;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_21])), (Wrd94.pObj));

DEFLABEL (label_31)
  (Wrd93.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_60;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_59)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_58;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_3]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_56;
  Wrd107 = Wrd111;

DEFLABEL (label_55)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd107.Obj);
  goto label_42;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_17])), (Wrd108.pObj));

DEFLABEL (label_32)
  (Wrd107.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_29)
  (Wrd73.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_28)
  (Wrd56.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_6]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_65;
  Wrd33 = Wrd37;

DEFLABEL (label_64)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_42;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_31])), (Wrd34.pObj));

DEFLABEL (label_26)
  (Wrd33.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_30]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_25)
  (Wrd17.Obj) = Rvl;
  goto label_66;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_8 7
#define LABEL_16_13 9
#define LABEL_16_5 11
#define LABEL_16_14 13
#define LABEL_16_16 15
#define LABEL_16_17 17
#define LABEL_16_18 19
#define LABEL_16_20 21
#define LABEL_16_21 23
#define LABEL_16_9 25
#define LABEL_16_15 27
#define LABEL_16_22 29
#define LABEL_16_10 31
#define LABEL_16_11 33
#define ENVIRONMENT_LABEL_16_3 60
#define DEBUGGING_LABEL_16_2 59
#define OBJECT_16_9 58
#define OBJECT_16_8 57
#define OBJECT_16_7 56
#define OBJECT_16_6 55
#define OBJECT_16_5 54
#define OBJECT_16_4 53
#define OBJECT_16_3 52
#define OBJECT_16_2 51
#define OBJECT_16_1 50
#define OBJECT_16_0 49
#define EXECUTE_CACHE_16_24 35
#define EXECUTE_CACHE_16_23 37
#define EXECUTE_CACHE_16_19 39
#define EXECUTE_CACHE_16_12 41
#define EXECUTE_CACHE_16_6 43
#define FREE_REFERENCE_16_0 46
#define FREE_ASSIGNMENT_16_0 48
#define FREE_REFERENCES_LABEL_16_0 34
#define NUMBER_OF_LINKER_SECTIONS_16_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
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
      goto cse_assign_register_15;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_16_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_16_16);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_16_17);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_16_18);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_16_21);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_16_22);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_assign_register_24)
DEFLABEL (cse_assign_register_15)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_40;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_39)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_16_4])))
    goto label_29;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Wrd74.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd74.uLng) == 1))
    goto label_38;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_37)
  if (! ((Wrd72.Obj) == (current_block [OBJECT_16_1])))
    goto label_29;
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_16_9]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_28;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd16.Lng) < 5L)
    goto label_25;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_22);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

DEFLABEL (label_28)
  (Wrd25.Obj) = (current_block [OBJECT_16_8]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_25;

DEFLABEL (label_29)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd18.Obj) = (current_block [OBJECT_16_5]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_33;
  Wrd33 = Wrd37;

DEFLABEL (label_32)
  Wrd32 = Wrd33;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_31;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_31;
  (Wrd40.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (label_31)
  (Wrd48.Obj) = (current_block [OBJECT_16_6]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_17])), (Wrd34.pObj));

DEFLABEL (label_19)
  (Wrd33.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_34;

DEFLABEL (label_38)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_22)
  (Wrd72.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 15
#define DEBUGGING_LABEL_17_2 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_6 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto cse_assign_stack_reference_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_assign_stack_reference_5)
DEFLABEL (cse_assign_stack_reference_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_5 13
#define LABEL_18_11 15
#define LABEL_18_12 17
#define LABEL_18_13 19
#define ENVIRONMENT_LABEL_18_3 36
#define DEBUGGING_LABEL_18_2 35
#define OBJECT_18_7 34
#define OBJECT_18_6 33
#define OBJECT_18_5 32
#define OBJECT_18_4 31
#define OBJECT_18_3 30
#define OBJECT_18_2 29
#define OBJECT_18_1 28
#define OBJECT_18_0 27
#define EXECUTE_CACHE_18_14 21
#define EXECUTE_CACHE_18_10 23
#define FREE_REFERENCE_18_0 26
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd38;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto cse_assign_stack_push_14;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_assign_stack_push_22)
DEFLABEL (cse_assign_stack_push_14)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [5]));
  goto lambda_3;

DEFLABEL (label_24)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_28;
  Wrd6 = Wrd10;

DEFLABEL (label_27)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_26;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_25)
  (Wrd28.Obj) = (current_block [OBJECT_18_4]);
  (Wrd29.Obj) = (current_block [OBJECT_18_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_18_6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_18_7]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Rsp [3]) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd45.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (label_26)
  (Wrd21.Obj) = (current_block [OBJECT_18_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_12])), (Wrd7.pObj));

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_23)
DEFLABEL (lambda_3)
  DLINK_INTERRUPT_CHECK (25, LABEL_18_6);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_34;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_33)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_32;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_31)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_30;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_29)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_30)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_18)
  (Wrd38.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd38.Obj));
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_17)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_16)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define TAG_19_8 2
#define LABEL_19_10 9
#define ENVIRONMENT_LABEL_19_3 20
#define DEBUGGING_LABEL_19_2 19
#define EXECUTE_CACHE_19_12 11
#define EXECUTE_CACHE_19_11 13
#define EXECUTE_CACHE_19_9 15
#define EXECUTE_CACHE_19_6 17
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto cse_assign_interpreter_register_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_assign_interpreter_register_8)
DEFLABEL (cse_assign_interpreter_register_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  ((Wrd9.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_2;

DEFLABEL (label_10)
  (Rsp [3]) = Rvl;
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd16.Obj);
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define TAG_20_7 2
#define LABEL_20_12 9
#define LABEL_20_16 11
#define LABEL_20_19 13
#define LABEL_20_21 15
#define LABEL_20_22 17
#define LABEL_20_10 19
#define LABEL_20_24 21
#define LABEL_20_26 23
#define LABEL_20_17 25
#define TAG_20_18 11
#define LABEL_20_28 27
#define LABEL_20_29 29
#define LABEL_20_15 31
#define LABEL_20_31 33
#define LABEL_20_13 35
#define TAG_20_14 16
#define LABEL_20_33 37
#define LABEL_20_34 39
#define ENVIRONMENT_LABEL_20_3 72
#define DEBUGGING_LABEL_20_2 71
#define OBJECT_20_3 70
#define OBJECT_20_2 69
#define OBJECT_20_1 68
#define OBJECT_20_0 67
#define EXECUTE_CACHE_20_37 41
#define EXECUTE_CACHE_20_36 43
#define EXECUTE_CACHE_20_35 45
#define EXECUTE_CACHE_20_32 47
#define EXECUTE_CACHE_20_30 49
#define EXECUTE_CACHE_20_27 51
#define EXECUTE_CACHE_20_25 53
#define EXECUTE_CACHE_20_23 55
#define EXECUTE_CACHE_20_20 57
#define EXECUTE_CACHE_20_11 59
#define EXECUTE_CACHE_20_9 61
#define EXECUTE_CACHE_20_8 63
#define FREE_REFERENCE_20_0 66
#define FREE_REFERENCES_LABEL_20_0 40
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_20_4);
      goto cse_assign_general_19;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_18;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto lambda_29;

    case 3:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_20_21);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_20_22);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_20_24);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_20_26);
      goto lambda_15;

    case 11:
      current_block = (Rpc - LABEL_20_17);
      goto lambda_31;

    case 12:
      current_block = (Rpc - LABEL_20_28);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_20_29);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_20_15);
      goto lambda_11;

    case 15:
      current_block = (Rpc - LABEL_20_31);
      goto label_26;

    case 16:
      current_block = (Rpc - LABEL_20_13);
      goto lambda_30;

    case 17:
      current_block = (Rpc - LABEL_20_33);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_20_34);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cse_assign_general_28)
DEFLABEL (cse_assign_general_19)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_6])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_20_6);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_36)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_34)
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd15.Obj) = (Rsp [3]);
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd17.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd20.Obj);
  (Wrd21.Obj) = ((Wrd10.pObj) [4]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_27]));

DEFLABEL (label_37)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_47;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;

DEFLABEL (label_40)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [4]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd88.Obj);
  goto label_38;

DEFLABEL (label_39)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd90.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_13])));
  Rhp += 2;
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd90.pObj)));
  Wrd93 = Wrd90;
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [4]);
  ((Wrd93.pObj) [2]) = (Wrd96.Obj);
  (Wrd92.Obj) = (Rsp [1]);
  ((Wrd93.pObj) [3]) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_38)
  goto label_36;

DEFLABEL (label_41)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [4]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_45;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd49.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_44)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_43;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd80.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_17])));
  Rhp += 1;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd80.pObj)));
  Wrd81 = Wrd80;
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [4]);
  ((Wrd81.pObj) [2]) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  goto label_36;

DEFLABEL (label_43)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_22)
  (Wrd49.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (lambda_32)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_20_26);
  Rvl = (current_block [OBJECT_20_3]);
  goto pop_return;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_20_17);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_50)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_49;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_30]));

DEFLABEL (label_49)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_29]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_25)
  (Wrd20.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_33)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_20_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_53;
  Wrd5 = Wrd9;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_32]));

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_31])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_20_13);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_37]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_33);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_36]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define ENVIRONMENT_LABEL_21_3 21
#define DEBUGGING_LABEL_21_2 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_10 13
#define EXECUTE_CACHE_21_6 15
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto notice_popB_4;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (notice_popB_10)
DEFLABEL (notice_popB_4)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_16)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_14)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_13;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (label_13)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_8)
  (Wrd23.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto assignment_memory_insertion_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assignment_memory_insertion_5)
DEFLABEL (assignment_memory_insertion_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 6
#define DEBUGGING_LABEL_23_2 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto trivial_action_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trivial_action_3)
DEFLABEL (trivial_action_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_4;
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define ENVIRONMENT_LABEL_24_3 16
#define DEBUGGING_LABEL_24_2 15
#define EXECUTE_CACHE_24_9 9
#define EXECUTE_CACHE_24_7 11
#define FREE_REFERENCE_24_0 14
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto define_trivial_one_arg_method_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_trivial_one_arg_method_5)
DEFLABEL (define_trivial_one_arg_method_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_9 7
#define LABEL_25_8 9
#define LABEL_25_11 11
#define ENVIRONMENT_LABEL_25_3 20
#define DEBUGGING_LABEL_25_2 19
#define EXECUTE_CACHE_25_10 13
#define EXECUTE_CACHE_25_7 15
#define FREE_REFERENCE_25_0 18
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto define_trivial_two_arg_method_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_25_9);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_trivial_two_arg_method_7)
DEFLABEL (define_trivial_two_arg_method_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_11])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 6
#define DEBUGGING_LABEL_26_2 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto method_noop_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_noop_3)
DEFLABEL (method_noop_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  Rvl = (current_block [OBJECT_26_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_9 7
#define LABEL_27_10 9
#define LABEL_27_6 11
#define LABEL_27_12 13
#define LABEL_27_13 15
#define LABEL_27_14 17
#define LABEL_27_8 19
#define LABEL_27_17 21
#define LABEL_27_18 23
#define LABEL_27_16 25
#define LABEL_27_20 27
#define LABEL_27_21 29
#define ENVIRONMENT_LABEL_27_3 50
#define DEBUGGING_LABEL_27_2 49
#define OBJECT_27_6 48
#define OBJECT_27_5 47
#define OBJECT_27_4 46
#define OBJECT_27_3 45
#define OBJECT_27_2 44
#define OBJECT_27_1 43
#define OBJECT_27_0 42
#define EXECUTE_CACHE_27_19 31
#define EXECUTE_CACHE_27_15 33
#define EXECUTE_CACHE_27_11 35
#define EXECUTE_CACHE_27_7 37
#define FREE_REFERENCE_27_1 40
#define FREE_REFERENCE_27_0 41
#define FREE_REFERENCES_LABEL_27_0 30
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_27_4);
      goto method_unknown_invocation_11;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_27_9);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_27_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_27_6);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_27_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_27_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_27_17);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_27_18);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_27_20);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_27_21);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_unknown_invocation_23)
DEFLABEL (method_unknown_invocation_11)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_35)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_34;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_30;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_30;
  (Wrd16.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_28;
  Wrd6 = Wrd10;

DEFLABEL (label_27)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_26;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_19]));

DEFLABEL (label_26)
  (Wrd21.Obj) = (current_block [OBJECT_27_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_20])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd24.Obj) = (current_block [OBJECT_27_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_17])), (Wrd10.pObj));

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_24)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_27_6);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_43;
  Wrd6 = Wrd10;

DEFLABEL (label_42)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_41;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_41;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_40)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_39;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_39;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_39;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd29.pObj) = (& ((Wrd34.pObj) [(Wrd27.Lng)]));
  (Wrd25.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd25.Obj);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_27_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_17)
  (Wrd25.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd21.Obj) = (current_block [OBJECT_27_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_12])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define LABEL_28_5 11
#define ENVIRONMENT_LABEL_28_3 22
#define DEBUGGING_LABEL_28_2 21
#define EXECUTE_CACHE_28_10 13
#define EXECUTE_CACHE_28_9 15
#define FREE_REFERENCE_28_2 18
#define FREE_REFERENCE_28_1 19
#define FREE_REFERENCE_28_0 20
#define FREE_REFERENCES_LABEL_28_0 12
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_11;
  Wrd15 = Wrd19;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_9;
  Wrd21 = Wrd25;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_8])), (Wrd22.pObj));

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define LABEL_29_5 11
#define ENVIRONMENT_LABEL_29_3 22
#define DEBUGGING_LABEL_29_2 21
#define EXECUTE_CACHE_29_10 13
#define EXECUTE_CACHE_29_9 15
#define FREE_REFERENCE_29_2 18
#define FREE_REFERENCE_29_1 19
#define FREE_REFERENCE_29_0 20
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_11;
  Wrd15 = Wrd19;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_9;
  Wrd21 = Wrd25;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_8])), (Wrd22.pObj));

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_7])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_5 11
#define LABEL_30_10 13
#define LABEL_30_11 15
#define LABEL_30_12 17
#define ENVIRONMENT_LABEL_30_3 34
#define DEBUGGING_LABEL_30_2 33
#define OBJECT_30_2 32
#define OBJECT_30_1 31
#define OBJECT_30_0 30
#define EXECUTE_CACHE_30_13 19
#define EXECUTE_CACHE_30_9 21
#define FREE_REFERENCE_30_3 24
#define FREE_REFERENCE_30_2 25
#define FREE_REFERENCE_30_1 26
#define FREE_REFERENCE_30_0 27
#define FREE_ASSIGNMENT_30_0 29
#define FREE_REFERENCES_LABEL_30_0 18
#define NUMBER_OF_LINKER_SECTIONS_30_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_30_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;
  Wrd15 = Wrd19;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_20;
  Wrd21 = Wrd25;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_16)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_3]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_15;
  Wrd18 = Wrd22;

DEFLABEL (label_14)
  Wrd17 = Wrd18;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_13;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_13;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (label_13)
  (Wrd33.Obj) = (current_block [OBJECT_30_1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_11])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_10])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_7)
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd22.pObj));

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_7])), (Wrd16.pObj));

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_6 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_5 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define LABEL_31_13 17
#define LABEL_31_10 19
#define LABEL_31_14 21
#define LABEL_31_15 23
#define LABEL_31_16 25
#define ENVIRONMENT_LABEL_31_3 44
#define DEBUGGING_LABEL_31_2 43
#define OBJECT_31_2 42
#define OBJECT_31_1 41
#define OBJECT_31_0 40
#define EXECUTE_CACHE_31_17 27
#define EXECUTE_CACHE_31_9 29
#define FREE_REFERENCE_31_5 32
#define FREE_REFERENCE_31_4 33
#define FREE_REFERENCE_31_3 34
#define FREE_REFERENCE_31_2 35
#define FREE_REFERENCE_31_1 36
#define FREE_REFERENCE_31_0 37
#define FREE_ASSIGNMENT_31_0 39
#define FREE_REFERENCES_LABEL_31_0 26
#define NUMBER_OF_LINKER_SECTIONS_31_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_31_13);
      goto label_10;

    case 8:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_31_14);
      goto label_11;

    case 10:
      current_block = (Rpc - LABEL_31_15);
      goto label_12;

    case 11:
      current_block = (Rpc - LABEL_31_16);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_32;
  Wrd15 = Wrd19;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_30;
  Wrd21 = Wrd25;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_3]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_26;
  Wrd15 = Wrd19;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_4]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_24;
  Wrd21 = Wrd25;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_20)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_5]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  Wrd17 = Wrd18;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_17;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_17;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (label_17)
  (Wrd33.Obj) = (current_block [OBJECT_31_1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_13)
  (Wrd24.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_15])), (Wrd19.pObj));

DEFLABEL (label_12)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_14])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_11)
  goto label_20;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_13])), (Wrd22.pObj));

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_12])), (Wrd16.pObj));

DEFLABEL (label_9)
  (Wrd15.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_11])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_8])), (Wrd22.pObj));

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd16.pObj));

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define TAG_32_6 1
#define LABEL_32_8 7
#define TAG_32_9 2
#define LABEL_32_11 9
#define LABEL_32_12 11
#define LABEL_32_13 13
#define ENVIRONMENT_LABEL_32_3 25
#define DEBUGGING_LABEL_32_2 24
#define OBJECT_32_0 23
#define EXECUTE_CACHE_32_15 15
#define EXECUTE_CACHE_32_14 17
#define EXECUTE_CACHE_32_10 19
#define EXECUTE_CACHE_32_7 21
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_32_4);
      goto define_lookup_method_5;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_32_8);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_32_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_lookup_method_8)
DEFLABEL (define_lookup_method_5)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_32_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_8])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_32_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_13);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (current_block [OBJECT_32_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define TAG_33_6 1
#define LABEL_33_9 7
#define LABEL_33_8 9
#define LABEL_33_11 11
#define LABEL_33_12 13
#define LABEL_33_14 15
#define ENVIRONMENT_LABEL_33_3 29
#define DEBUGGING_LABEL_33_2 28
#define OBJECT_33_0 27
#define EXECUTE_CACHE_33_15 17
#define EXECUTE_CACHE_33_13 19
#define EXECUTE_CACHE_33_10 21
#define EXECUTE_CACHE_33_7 23
#define FREE_REFERENCE_33_0 26
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcse1_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_33_4);
      goto define_assignment_method_5;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_33_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_assignment_method_9)
DEFLABEL (define_assignment_method_5)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_9])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_11)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_33_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_14);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (current_block [OBJECT_33_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_12 13
#define LABEL_14 15
#define LABEL_15 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_13 23
#define LABEL_20 25
#define LABEL_21 27
#define LABEL_19 29
#define LABEL_24 31
#define LABEL_25 33
#define LABEL_26 35
#define LABEL_27 37
#define LABEL_23 39
#define LABEL_29 41
#define LABEL_30 43
#define LABEL_28 45
#define LABEL_32 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_31 55
#define LABEL_37 57
#define LABEL_38 59
#define LABEL_36 61
#define LABEL_40 63
#define LABEL_41 65
#define LABEL_42 67
#define LABEL_43 69
#define LABEL_39 71
#define LABEL_45 73
#define LABEL_46 75
#define LABEL_44 77
#define LABEL_47 79
#define LABEL_49 81
#define LABEL_48 83
#define LABEL_52 85
#define LABEL_51 87
#define LABEL_54 89
#define LABEL_53 91
#define LABEL_56 93
#define LABEL_55 95
#define LABEL_58 97
#define LABEL_57 99
#define LABEL_60 101
#define LABEL_59 103
#define LABEL_62 105
#define LABEL_61 107
#define LABEL_64 109
#define LABEL_63 111
#define LABEL_66 113
#define LABEL_65 115
#define LABEL_68 117
#define LABEL_67 119
#define LABEL_69 121
#define LABEL_71 123
#define LABEL_70 125
#define LABEL_73 127
#define LABEL_72 129
#define LABEL_75 131
#define LABEL_74 133
#define LABEL_77 135
#define LABEL_76 137
#define LABEL_79 139
#define LABEL_78 141
#define LABEL_81 143
#define LABEL_80 145
#define LABEL_83 147
#define LABEL_82 149
#define LABEL_84 151
#define LABEL_85 153
#define LABEL_86 155
#define LABEL_87 157
#define LABEL_88 159
#define LABEL_90 161
#define LABEL_91 163
#define LABEL_92 165
#define LABEL_89 167
#define LABEL_95 169
#define LABEL_96 171
#define LABEL_97 173
#define LABEL_94 175
#define LABEL_99 177
#define LABEL_100 179
#define LABEL_101 181
#define LABEL_98 183
#define LABEL_103 185
#define LABEL_104 187
#define LABEL_105 189
#define LABEL_102 191
#define LABEL_107 193
#define LABEL_108 195
#define LABEL_109 197
#define LABEL_106 199
#define LABEL_111 201
#define LABEL_112 203
#define LABEL_113 205
#define LABEL_110 207
#define LABEL_114 209
#define LABEL_116 211
#define LABEL_117 213
#define LABEL_118 215
#define LABEL_119 217
#define LABEL_115 219
#define LABEL_122 221
#define LABEL_123 223
#define LABEL_124 225
#define LABEL_125 227
#define LABEL_121 229
#define LABEL_126 231
#define LABEL_127 233
#define LABEL_128 235
#define LABEL_129 237
#define LABEL_130 239
#define LABEL_131 241
#define LABEL_132 243
#define ENVIRONMENT_LABEL_3 384
#define DEBUGGING_LABEL_2 383
#define PURIFICATION_ROOT 382
#define OBJECT_62 381
#define OBJECT_61 380
#define OBJECT_60 379
#define OBJECT_59 378
#define OBJECT_58 377
#define OBJECT_57 376
#define OBJECT_56 375
#define OBJECT_55 374
#define OBJECT_54 373
#define OBJECT_53 372
#define OBJECT_52 371
#define OBJECT_51 370
#define OBJECT_50 369
#define OBJECT_49 368
#define OBJECT_48 367
#define OBJECT_47 366
#define OBJECT_46 365
#define OBJECT_45 364
#define OBJECT_44 363
#define OBJECT_43 362
#define OBJECT_42 361
#define OBJECT_41 360
#define OBJECT_40 359
#define OBJECT_39 358
#define OBJECT_38 357
#define OBJECT_37 356
#define OBJECT_36 355
#define OBJECT_35 354
#define OBJECT_34 353
#define OBJECT_33 352
#define OBJECT_32 351
#define OBJECT_31 350
#define OBJECT_30 349
#define OBJECT_29 348
#define OBJECT_28 347
#define OBJECT_27 346
#define OBJECT_26 345
#define OBJECT_25 344
#define OBJECT_24 343
#define OBJECT_23 342
#define OBJECT_22 341
#define OBJECT_21 340
#define OBJECT_20 339
#define OBJECT_19 338
#define OBJECT_18 337
#define OBJECT_17 336
#define OBJECT_16 335
#define OBJECT_15 334
#define OBJECT_14 333
#define OBJECT_13 332
#define OBJECT_12 331
#define OBJECT_11 330
#define OBJECT_10 329
#define OBJECT_9 328
#define OBJECT_8 327
#define OBJECT_7 326
#define OBJECT_6 325
#define OBJECT_5 324
#define OBJECT_4 323
#define OBJECT_3 322
#define OBJECT_2 321
#define OBJECT_1 320
#define OBJECT_0 319
#define EXECUTE_CACHE_120 245
#define EXECUTE_CACHE_93 247
#define EXECUTE_CACHE_50 249
#define EXECUTE_CACHE_22 251
#define EXECUTE_CACHE_18 253
#define EXECUTE_CACHE_11 255
#define FREE_REFERENCE_55 258
#define FREE_REFERENCE_54 259
#define FREE_REFERENCE_53 260
#define FREE_REFERENCE_52 261
#define FREE_REFERENCE_51 262
#define FREE_REFERENCE_50 263
#define FREE_REFERENCE_49 264
#define FREE_REFERENCE_48 265
#define FREE_REFERENCE_47 266
#define FREE_REFERENCE_46 267
#define FREE_REFERENCE_45 268
#define FREE_REFERENCE_44 269
#define FREE_REFERENCE_43 270
#define FREE_REFERENCE_42 271
#define FREE_REFERENCE_41 272
#define FREE_REFERENCE_40 273
#define FREE_REFERENCE_39 274
#define FREE_REFERENCE_38 275
#define FREE_REFERENCE_37 276
#define FREE_REFERENCE_36 277
#define FREE_REFERENCE_35 278
#define FREE_REFERENCE_34 279
#define FREE_REFERENCE_33 280
#define FREE_REFERENCE_32 281
#define FREE_REFERENCE_31 282
#define FREE_REFERENCE_30 283
#define FREE_REFERENCE_29 284
#define FREE_REFERENCE_28 285
#define FREE_REFERENCE_27 286
#define FREE_REFERENCE_26 287
#define FREE_REFERENCE_25 288
#define FREE_REFERENCE_24 289
#define FREE_REFERENCE_23 290
#define FREE_REFERENCE_22 291
#define FREE_REFERENCE_21 292
#define FREE_REFERENCE_20 293
#define FREE_REFERENCE_19 294
#define FREE_REFERENCE_18 295
#define FREE_REFERENCE_17 296
#define FREE_REFERENCE_16 297
#define FREE_REFERENCE_15 298
#define FREE_REFERENCE_14 299
#define FREE_REFERENCE_13 300
#define FREE_REFERENCE_12 301
#define FREE_REFERENCE_11 302
#define FREE_REFERENCE_10 303
#define FREE_REFERENCE_9 304
#define FREE_REFERENCE_8 305
#define FREE_REFERENCE_7 306
#define FREE_REFERENCE_6 307
#define FREE_REFERENCE_5 308
#define FREE_REFERENCE_4 309
#define FREE_REFERENCE_3 310
#define FREE_REFERENCE_2 311
#define FREE_REFERENCE_1 312
#define FREE_REFERENCE_0 313
#define GLOBAL_EXECUTE_CACHE_8 315
#define GLOBAL_EXECUTE_CACHE_6 317
#define FREE_REFERENCES_LABEL_0 244
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rcse1_so_b007ab8b4898e372 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto label_50;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto label_51;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_13);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto label_54;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto label_56;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_57;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto label_58;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto label_59;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_29);
      goto label_60;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto label_61;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_10;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto label_62;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto label_63;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto label_64;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto label_65;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_11;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto label_66;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto label_67;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_12;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto label_68;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto label_69;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto label_70;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto label_71;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto continuation_13;

    case 35:
      current_block = (Rpc - LABEL_45);
      goto label_72;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto label_73;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_14;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_15;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto label_74;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto continuation_16;

    case 41:
      current_block = (Rpc - LABEL_52);
      goto label_75;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_17;

    case 43:
      current_block = (Rpc - LABEL_54);
      goto label_76;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_18;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto label_77;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto continuation_19;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto label_78;

    case 48:
      current_block = (Rpc - LABEL_57);
      goto continuation_20;

    case 49:
      current_block = (Rpc - LABEL_60);
      goto label_79;

    case 50:
      current_block = (Rpc - LABEL_59);
      goto continuation_21;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto label_80;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto continuation_22;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto label_81;

    case 54:
      current_block = (Rpc - LABEL_63);
      goto continuation_23;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto label_82;

    case 56:
      current_block = (Rpc - LABEL_65);
      goto continuation_24;

    case 57:
      current_block = (Rpc - LABEL_68);
      goto label_83;

    case 58:
      current_block = (Rpc - LABEL_67);
      goto continuation_25;

    case 59:
      current_block = (Rpc - LABEL_69);
      goto continuation_26;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto label_84;

    case 61:
      current_block = (Rpc - LABEL_70);
      goto continuation_27;

    case 62:
      current_block = (Rpc - LABEL_73);
      goto label_85;

    case 63:
      current_block = (Rpc - LABEL_72);
      goto continuation_28;

    case 64:
      current_block = (Rpc - LABEL_75);
      goto label_86;

    case 65:
      current_block = (Rpc - LABEL_74);
      goto continuation_29;

    case 66:
      current_block = (Rpc - LABEL_77);
      goto label_87;

    case 67:
      current_block = (Rpc - LABEL_76);
      goto continuation_30;

    case 68:
      current_block = (Rpc - LABEL_79);
      goto label_88;

    case 69:
      current_block = (Rpc - LABEL_78);
      goto continuation_31;

    case 70:
      current_block = (Rpc - LABEL_81);
      goto label_89;

    case 71:
      current_block = (Rpc - LABEL_80);
      goto continuation_32;

    case 72:
      current_block = (Rpc - LABEL_83);
      goto label_90;

    case 73:
      current_block = (Rpc - LABEL_82);
      goto continuation_33;

    case 74:
      current_block = (Rpc - LABEL_84);
      goto continuation_34;

    case 75:
      current_block = (Rpc - LABEL_85);
      goto continuation_35;

    case 76:
      current_block = (Rpc - LABEL_86);
      goto continuation_36;

    case 77:
      current_block = (Rpc - LABEL_87);
      goto continuation_37;

    case 78:
      current_block = (Rpc - LABEL_88);
      goto continuation_38;

    case 79:
      current_block = (Rpc - LABEL_90);
      goto label_91;

    case 80:
      current_block = (Rpc - LABEL_91);
      goto label_92;

    case 81:
      current_block = (Rpc - LABEL_92);
      goto label_93;

    case 82:
      current_block = (Rpc - LABEL_89);
      goto continuation_39;

    case 83:
      current_block = (Rpc - LABEL_95);
      goto label_94;

    case 84:
      current_block = (Rpc - LABEL_96);
      goto label_95;

    case 85:
      current_block = (Rpc - LABEL_97);
      goto label_96;

    case 86:
      current_block = (Rpc - LABEL_94);
      goto continuation_40;

    case 87:
      current_block = (Rpc - LABEL_99);
      goto label_97;

    case 88:
      current_block = (Rpc - LABEL_100);
      goto label_98;

    case 89:
      current_block = (Rpc - LABEL_101);
      goto label_99;

    case 90:
      current_block = (Rpc - LABEL_98);
      goto continuation_41;

    case 91:
      current_block = (Rpc - LABEL_103);
      goto label_100;

    case 92:
      current_block = (Rpc - LABEL_104);
      goto label_101;

    case 93:
      current_block = (Rpc - LABEL_105);
      goto label_102;

    case 94:
      current_block = (Rpc - LABEL_102);
      goto continuation_42;

    case 95:
      current_block = (Rpc - LABEL_107);
      goto label_103;

    case 96:
      current_block = (Rpc - LABEL_108);
      goto label_104;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto label_105;

    case 98:
      current_block = (Rpc - LABEL_106);
      goto continuation_43;

    case 99:
      current_block = (Rpc - LABEL_111);
      goto label_106;

    case 100:
      current_block = (Rpc - LABEL_112);
      goto label_107;

    case 101:
      current_block = (Rpc - LABEL_113);
      goto label_108;

    case 102:
      current_block = (Rpc - LABEL_110);
      goto continuation_44;

    case 103:
      current_block = (Rpc - LABEL_114);
      goto continuation_45;

    case 104:
      current_block = (Rpc - LABEL_116);
      goto label_109;

    case 105:
      current_block = (Rpc - LABEL_117);
      goto label_110;

    case 106:
      current_block = (Rpc - LABEL_118);
      goto label_111;

    case 107:
      current_block = (Rpc - LABEL_119);
      goto label_112;

    case 108:
      current_block = (Rpc - LABEL_115);
      goto continuation_46;

    case 109:
      current_block = (Rpc - LABEL_122);
      goto label_113;

    case 110:
      current_block = (Rpc - LABEL_123);
      goto label_114;

    case 111:
      current_block = (Rpc - LABEL_124);
      goto label_115;

    case 112:
      current_block = (Rpc - LABEL_125);
      goto label_116;

    case 113:
      current_block = (Rpc - LABEL_121);
      goto continuation_47;

    case 114:
      current_block = (Rpc - LABEL_126);
      goto label_117;

    case 115:
      current_block = (Rpc - LABEL_127);
      goto label_118;

    case 116:
      current_block = (Rpc - LABEL_128);
      goto label_119;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto label_120;

    case 118:
      current_block = (Rpc - LABEL_130);
      goto label_123;

    case 119:
      current_block = (Rpc - LABEL_131);
      goto label_124;

    case 120:
      current_block = (Rpc - LABEL_132);
      goto expression_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_49)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_131])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_124)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_123)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	3,
	3,
	2,
	2,
	2,
	0,
	2,
	2,
	0,
	1,
	1,
	2,
	1,
	2,
	1,
	3,
	2,
	2,
	1,
	1,
	3,
	2,
	3,
	0,
	0,
	0,
	0,
	0,
	3,
	3,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 33)
      goto label_122;
    blocks = (current_block [OBJECT_62]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_130])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_122)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.pObj) = (& (Rhp [-5]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_266;
  Wrd8 = Wrd12;

DEFLABEL (label_265)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_264;
  Wrd14 = Wrd18;

DEFLABEL (label_263)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_262;
  Wrd20 = Wrd24;

DEFLABEL (label_261)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_260;
  Wrd26 = Wrd30;

DEFLABEL (label_259)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_258;
  Wrd8 = Wrd12;

DEFLABEL (label_257)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_256;
  Wrd14 = Wrd18;

DEFLABEL (label_255)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_254;
  Wrd8 = Wrd12;

DEFLABEL (label_253)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_252;
  Wrd14 = Wrd18;

DEFLABEL (label_251)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_250;
  Wrd20 = Wrd24;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_248;
  Wrd26 = Wrd30;

DEFLABEL (label_247)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_246;
  Wrd8 = Wrd12;

DEFLABEL (label_245)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_244;
  Wrd14 = Wrd18;

DEFLABEL (label_243)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_242;
  Wrd8 = Wrd12;

DEFLABEL (label_241)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_240;
  Wrd14 = Wrd18;

DEFLABEL (label_239)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_238;
  Wrd20 = Wrd24;

DEFLABEL (label_237)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_236;
  Wrd26 = Wrd30;

DEFLABEL (label_235)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_234;
  Wrd8 = Wrd12;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_232;
  Wrd14 = Wrd18;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_230;
  Wrd8 = Wrd12;

DEFLABEL (label_229)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_228;
  Wrd14 = Wrd18;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_226;
  Wrd20 = Wrd24;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_224;
  Wrd26 = Wrd30;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_222;
  Wrd8 = Wrd12;

DEFLABEL (label_221)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_220;
  Wrd14 = Wrd18;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_218;
  Wrd8 = Wrd12;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_216;
  Wrd8 = Wrd12;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_214;
  Wrd8 = Wrd12;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_212;
  Wrd8 = Wrd12;

DEFLABEL (label_211)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_210;
  Wrd8 = Wrd12;

DEFLABEL (label_209)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_208;
  Wrd8 = Wrd12;

DEFLABEL (label_207)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_206;
  Wrd8 = Wrd12;

DEFLABEL (label_205)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_204;
  Wrd8 = Wrd12;

DEFLABEL (label_203)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_202;
  Wrd8 = Wrd12;

DEFLABEL (label_201)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_200;
  Wrd8 = Wrd12;

DEFLABEL (label_199)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_198;
  Wrd8 = Wrd12;

DEFLABEL (label_197)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_196;
  Wrd8 = Wrd12;

DEFLABEL (label_195)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_194;
  Wrd8 = Wrd12;

DEFLABEL (label_193)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_192;
  Wrd8 = Wrd12;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_190;
  Wrd8 = Wrd12;

DEFLABEL (label_189)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_188;
  Wrd8 = Wrd12;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_186;
  Wrd8 = Wrd12;

DEFLABEL (label_185)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_184;
  Wrd8 = Wrd12;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_182;
  Wrd14 = Wrd18;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_180;
  Wrd20 = Wrd24;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_178;
  Wrd8 = Wrd12;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_176;
  Wrd14 = Wrd18;

DEFLABEL (label_175)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_174;
  Wrd20 = Wrd24;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_172;
  Wrd8 = Wrd12;

DEFLABEL (label_171)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_170;
  Wrd14 = Wrd18;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_168;
  Wrd20 = Wrd24;

DEFLABEL (label_167)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_166;
  Wrd8 = Wrd12;

DEFLABEL (label_165)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_164;
  Wrd14 = Wrd18;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_162;
  Wrd20 = Wrd24;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_160;
  Wrd8 = Wrd12;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_158;
  Wrd14 = Wrd18;

DEFLABEL (label_157)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_156;
  Wrd20 = Wrd24;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_154;
  Wrd8 = Wrd12;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_152;
  Wrd14 = Wrd18;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_150;
  Wrd20 = Wrd24;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_148;
  Wrd8 = Wrd12;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_146;
  Wrd14 = Wrd18;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_144;
  Wrd20 = Wrd24;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_142;
  Wrd26 = Wrd30;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_140;
  Wrd8 = Wrd12;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_138;
  Wrd14 = Wrd18;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_136;
  Wrd20 = Wrd24;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_134;
  Wrd26 = Wrd30;

DEFLABEL (label_133)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_132;
  Wrd5 = Wrd9;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_130;
  Wrd11 = Wrd15;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_128;
  Wrd17 = Wrd21;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_126;
  Wrd25 = Wrd29;

DEFLABEL (label_125)
  (Rsp [4]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd26.pObj));

DEFLABEL (label_120)
  (Wrd25.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128])), (Wrd18.pObj));

DEFLABEL (label_119)
  (Wrd17.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd12.pObj));

DEFLABEL (label_118)
  (Wrd11.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126])), (Wrd6.pObj));

DEFLABEL (label_117)
  (Wrd5.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_125])), (Wrd27.pObj));

DEFLABEL (label_116)
  (Wrd26.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_124])), (Wrd21.pObj));

DEFLABEL (label_115)
  (Wrd20.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd15.pObj));

DEFLABEL (label_114)
  (Wrd14.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122])), (Wrd9.pObj));

DEFLABEL (label_113)
  (Wrd8.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd27.pObj));

DEFLABEL (label_112)
  (Wrd26.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd21.pObj));

DEFLABEL (label_111)
  (Wrd20.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117])), (Wrd15.pObj));

DEFLABEL (label_110)
  (Wrd14.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_116])), (Wrd9.pObj));

DEFLABEL (label_109)
  (Wrd8.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd21.pObj));

DEFLABEL (label_108)
  (Wrd20.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112])), (Wrd15.pObj));

DEFLABEL (label_107)
  (Wrd14.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_111])), (Wrd9.pObj));

DEFLABEL (label_106)
  (Wrd8.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd21.pObj));

DEFLABEL (label_105)
  (Wrd20.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108])), (Wrd15.pObj));

DEFLABEL (label_104)
  (Wrd14.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107])), (Wrd9.pObj));

DEFLABEL (label_103)
  (Wrd8.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105])), (Wrd21.pObj));

DEFLABEL (label_102)
  (Wrd20.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd15.pObj));

DEFLABEL (label_101)
  (Wrd14.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd9.pObj));

DEFLABEL (label_100)
  (Wrd8.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd21.pObj));

DEFLABEL (label_99)
  (Wrd20.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd15.pObj));

DEFLABEL (label_98)
  (Wrd14.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd9.pObj));

DEFLABEL (label_97)
  (Wrd8.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97])), (Wrd21.pObj));

DEFLABEL (label_96)
  (Wrd20.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd15.pObj));

DEFLABEL (label_95)
  (Wrd14.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95])), (Wrd9.pObj));

DEFLABEL (label_94)
  (Wrd8.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd21.pObj));

DEFLABEL (label_93)
  (Wrd20.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91])), (Wrd15.pObj));

DEFLABEL (label_92)
  (Wrd14.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd9.pObj));

DEFLABEL (label_91)
  (Wrd8.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd9.pObj));

DEFLABEL (label_90)
  (Wrd8.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd9.pObj));

DEFLABEL (label_89)
  (Wrd8.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd9.pObj));

DEFLABEL (label_88)
  (Wrd8.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd9.pObj));

DEFLABEL (label_87)
  (Wrd8.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd9.pObj));

DEFLABEL (label_86)
  (Wrd8.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73])), (Wrd9.pObj));

DEFLABEL (label_85)
  (Wrd8.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd9.pObj));

DEFLABEL (label_84)
  (Wrd8.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd9.pObj));

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd9.pObj));

DEFLABEL (label_82)
  (Wrd8.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd9.pObj));

DEFLABEL (label_80)
  (Wrd8.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd9.pObj));

DEFLABEL (label_79)
  (Wrd8.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd9.pObj));

DEFLABEL (label_77)
  (Wrd8.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd9.pObj));

DEFLABEL (label_76)
  (Wrd8.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd9.pObj));

DEFLABEL (label_75)
  (Wrd8.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd15.pObj));

DEFLABEL (label_73)
  (Wrd14.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd9.pObj));

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd27.pObj));

DEFLABEL (label_71)
  (Wrd26.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd21.pObj));

DEFLABEL (label_70)
  (Wrd20.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd15.pObj));

DEFLABEL (label_69)
  (Wrd14.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd9.pObj));

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd15.pObj));

DEFLABEL (label_67)
  (Wrd14.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd9.pObj));

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd27.pObj));

DEFLABEL (label_65)
  (Wrd26.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd21.pObj));

DEFLABEL (label_64)
  (Wrd20.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd15.pObj));

DEFLABEL (label_63)
  (Wrd14.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd9.pObj));

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd15.pObj));

DEFLABEL (label_61)
  (Wrd14.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd9.pObj));

DEFLABEL (label_60)
  (Wrd8.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_248)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd27.pObj));

DEFLABEL (label_59)
  (Wrd26.Obj) = Rvl;
  goto label_247;

DEFLABEL (label_250)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd21.pObj));

DEFLABEL (label_58)
  (Wrd20.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd15.pObj));

DEFLABEL (label_57)
  (Wrd14.Obj) = Rvl;
  goto label_251;

DEFLABEL (label_254)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd15.pObj));

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_255;

DEFLABEL (label_258)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd27.pObj));

DEFLABEL (label_53)
  (Wrd26.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd21.pObj));

DEFLABEL (label_52)
  (Wrd20.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_264)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd15.pObj));

DEFLABEL (label_51)
  (Wrd14.Obj) = Rvl;
  goto label_263;

DEFLABEL (label_266)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_265;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rcse1_so_b007ab8b4898e372 [33] =
  {
    { "rcse1_so_code_1", 3, rcse1_so_code_1 },
    { "rcse1_so_code_2", 37, rcse1_so_code_2 },
    { "rcse1_so_code_3", 22, rcse1_so_code_3 },
    { "rcse1_so_code_4", 1, rcse1_so_code_4 },
    { "rcse1_so_code_5", 1, rcse1_so_code_5 },
    { "rcse1_so_code_6", 1, rcse1_so_code_6 },
    { "rcse1_so_code_7", 1, rcse1_so_code_7 },
    { "rcse1_so_code_8", 1, rcse1_so_code_8 },
    { "rcse1_so_code_9", 7, rcse1_so_code_9 },
    { "rcse1_so_code_10", 12, rcse1_so_code_10 },
    { "rcse1_so_code_11", 40, rcse1_so_code_11 },
    { "rcse1_so_code_12", 2, rcse1_so_code_12 },
    { "rcse1_so_code_13", 3, rcse1_so_code_13 },
    { "rcse1_so_code_14", 3, rcse1_so_code_14 },
    { "rcse1_so_code_15", 24, rcse1_so_code_15 },
    { "rcse1_so_code_16", 16, rcse1_so_code_16 },
    { "rcse1_so_code_17", 3, rcse1_so_code_17 },
    { "rcse1_so_code_18", 9, rcse1_so_code_18 },
    { "rcse1_so_code_19", 4, rcse1_so_code_19 },
    { "rcse1_so_code_20", 19, rcse1_so_code_20 },
    { "rcse1_so_code_21", 5, rcse1_so_code_21 },
    { "rcse1_so_code_22", 3, rcse1_so_code_22 },
    { "rcse1_so_code_23", 1, rcse1_so_code_23 },
    { "rcse1_so_code_24", 3, rcse1_so_code_24 },
    { "rcse1_so_code_25", 5, rcse1_so_code_25 },
    { "rcse1_so_code_26", 1, rcse1_so_code_26 },
    { "rcse1_so_code_27", 14, rcse1_so_code_27 },
    { "rcse1_so_code_28", 5, rcse1_so_code_28 },
    { "rcse1_so_code_29", 5, rcse1_so_code_29 },
    { "rcse1_so_code_30", 8, rcse1_so_code_30 },
    { "rcse1_so_code_31", 12, rcse1_so_code_31 },
    { "rcse1_so_code_32", 6, rcse1_so_code_32 },
    { "rcse1_so_code_33", 7, rcse1_so_code_33 }
  };

int
decl_rcse1_so_b007ab8b4898e372 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rcse1_so_b007ab8b4898e372);
  return (0);
}

DECLARE_COMPILED_CODE ("rcse1.so", 121, decl_rcse1_so_b007ab8b4898e372, rcse1_so_b007ab8b4898e372)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rcse1_so_data_b007ab8b4898e372 [10034] =
  "\x81\x03\x3b\xf5\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x24"
  "\x28\x0d\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x82\x88\xc2\xbc\x1d\x80\x08\x0d\xbd\x0d\xbe\x0d\xbf\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\xb5\xb6\xb7\x1b\x1b\x1b"
  "\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb2\x28\x0d\x28"
  "\x0d\xbe\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xba\x1d\xb0\x83\x88\x1d\x83\x82\x81\xb4\x80\xc1\x1c"
  "\xc1\x1c\x08\x1b\x1b\x1b\x1b\x1b\x25\x1b\xb7\x24\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x85\x88\xb4\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86"
  "\x88\xb4\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x83\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x08\x80\x1b\x1b\x1b\x25\x1b\x24\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x1b\x1b\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x0d\x80\x0c"
  "\x1b\xb4\x02\x1b\x25\x0d\x1c\x0d\x1c\xb7\x1b\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb6\x28\x0d\x1c"
  "\x28\x0d\x28\x1b\x28\x1b\x28\xb5\x28\x0d\xbd\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x02\x0d\x1b"
  "\x0d\x1c\x1b\xc2\x86\x0d\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x85\xb4"
  "\x81\x08\x0d\x1c\x02\x86\x0d\x1c\x1b\x1b\x25\x0d\x1c\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x80\xb4\x81\x1b\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x0d"
  "\x08\x89\x1b\x1b\x0d\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x82\x84\x1d\xb4\x83\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x0d\x24\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x0d\x24\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x81\x08\x1b\x25\x1b\x0d\x0d\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\x81\x08\x1b\x25\x1b\x0d\x0d\x0d\x0d"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x0d\x0d\x0d\x0d\x1c\x1b\x2a\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x2a\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x1b\x2a\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d\x1b\x0d\x0d"
  "\x1b\xb5\x1b\x0d\x0d\x0d\x0d\x1b\xb6\xb1\x0d\x1b\xb7\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a\xb3\x2a\x1e\x1e\x17\x0d\x0c\x0d"
  "\x0d\x0d\x0d\x9b\x83\x82\x81\x80\x9b\x84\x28\x0d\x28\x0d\x26\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72\x63\x73\x65\x31"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x63\x73\x65\x2d\x72"
  "\x67\x72\x61\x70\x68\x02\x03\x14\x77\x69\x74\x68\x2d\x6e\x65\x77"
  "\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x03\x7c\x08\x81\x83\x02\x7b\x06\x81\x83\x02"
  "\x7a\x04\x83\x04\x07\x11\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x02\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x67\x72"
  "\x61\x70\x68\x2a\x17\x2a\x6e\x65\x78\x74\x2d\x71\x75\x61\x6e\x74"
  "\x69\x74\x79\x2d\x6e\x75\x6d\x62\x65\x72\x2a\x10\x2a\x69\x6e\x69"
  "\x74\x69\x61\x6c\x2d\x71\x75\x65\x75\x65\x2a\x0f\x2a\x62\x72\x61"
  "\x6e\x63\x68\x2d\x71\x75\x65\x75\x65\x2a\x09\x12\x2a\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x74\x61\x62\x6c\x65\x73\x2a\x0a\x0d\x2a"
  "\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2a\x0b\x0f\x2a\x73\x74"
  "\x61\x63\x6b\x2d\x6f\x66\x66\x73\x65\x74\x2a\x0c\x1d\x2a\x73\x74"
  "\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x71\x75"
  "\x61\x6e\x74\x69\x74\x69\x65\x73\x2a\x0d\x09\x09\x0a\x0b\x0c\x0d"
  "\x09\x02\x0b\x6d\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x05\x13\x73"
  "\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e"
  "\x64\x03\x15\x72\x67\x72\x61\x70\x68\x2d\x69\x6e\x69\x74\x69\x61"
  "\x6c\x2d\x65\x64\x67\x65\x73\x03\x15\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x74\x61\x62\x6c\x65\x73\x2f\x6d\x61\x6b\x65\x04\x03\x10"
  "\x65\x64\x67\x65\x2d\x72\x69\x67\x68\x74\x2d\x6e\x6f\x64\x65\x02"
  "\x0e\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2d\x77\x61\x6c\x6b\x04\x10"
  "\x65\x6e\x71\x75\x65\x75\x65\x21\x2f\x75\x6e\x73\x61\x66\x65\x09"
  "\xa1\x01\x4c\x81\x85\x02\xa0\x01\x4a\x81\x83\x02\x9f\x01\x48\x81"
  "\x85\x02\x9e\x01\x46\x81\x83\x02\x9d\x01\x44\x81\x83\x02\x9c\x01"
  "\x42\x81\x85\x02\x9b\x01\x40\x81\x83\x02\x9a\x01\x3e\x81\x83\x02"
  "\x99\x01\x3c\x81\x85\x02\x98\x01\x3a\x81\x83\x02\x97\x01\x38\x81"
  "\x83\x02\x96\x01\x36\x81\x85\x02\x95\x01\x34\x81\x83\x02\x94\x01"
  "\x32\x81\x83\x02\x93\x01\x30\x82\x02\x92\x01\x2e\x81\x83\x02\x91"
  "\x01\x2c\x83\x04\x90\x01\x2a\x81\x87\x02\x8f\x01\x28\x81\x85\x02"
  "\x8e\x01\x26\x81\x89\x02\x8d\x01\x24\x81\x83\x02\x8c\x01\x22\x81"
  "\x83\x02\x8b\x01\x20\x81\x85\x02\x8a\x01\x1e\x81\x83\x02\x89\x01"
  "\x1c\x81\x83\x02\x88\x01\x1a\x81\x85\x02\x87\x01\x18\x81\x83\x02"
  "\x86\x01\x16\x81\x83\x02\x85\x01\x14\x81\x85\x02\x84\x01\x12\x81"
  "\x83\x02\x83\x01\x10\x81\x83\x02\x82\x01\x0e\x81\x85\x02\x81\x01"
  "\x0c\x81\x83\x02\x80\x01\x0a\x81\x83\x02\x7f\x08\x81\x83\x02\x7e"
  "\x06\x81\x85\x02\x7d\x04\x83\x04\x4b\x75\x02\x02\x04\x63\x64\x72"
  "\x0e\x04\x63\x61\x72\x0f\x09\x0a\x0b\x0c\x0d\x06\x09\x03\x03\x0d"
  "\x71\x75\x65\x75\x65\x2d\x65\x6d\x70\x74\x79\x3f\x03\x0c\x77\x61"
  "\x6c\x6b\x2d\x62\x62\x6c\x6f\x63\x6b\x10\x02\x0d\x73\x74\x61\x74"
  "\x65\x2f\x72\x65\x73\x65\x74\x21\x11\x03\x10\x64\x65\x71\x75\x65"
  "\x75\x65\x21\x2f\x75\x6e\x73\x61\x66\x65\x05\xb7\x01\x2e\x81\x81"
  "\x02\xb6\x01\x2c\x81\x83\x02\xb5\x01\x2a\x81\x81\x02\xb4\x01\x28"
  "\x81\x81\x02\xb3\x01\x26\x81\x83\x02\xb2\x01\x24\x81\x85\x02\xb1"
  "\x01\x22\x81\x85\x02\xb0\x01\x20\x81\x85\x02\xaf\x01\x1e\x81\x85"
  "\x02\xae\x01\x1c\x81\x85\x02\xad\x01\x1a\x81\x85\x02\xac\x01\x18"
  "\x81\x85\x02\xab\x01\x16\x81\x85\x02\xaa\x01\x14\x81\x83\x02\xa9"
  "\x01\x12\x81\x83\x02\xa8\x01\x10\x81\x83\x02\xa7\x01\x0e\x81\x83"
  "\x02\xa6\x01\x0c\x81\x81\x02\xa5\x01\x0a\x81\x81\x02\xa4\x01\x08"
  "\x81\x83\x02\xa3\x01\x06\x81\x81\x02\xa2\x01\x04\x82\x02\x2d\x4b"
  "\x12\x02\xb8\x01\x04\x86\x0a\x03\x13\x02\xb9\x01\x04\x83\x04\x03"
  "\x14\x02\xba\x01\x04\x83\x04\x03\x15\x02\x08\xbb\x01\x04\x83\x04"
  "\x03\x16\x02\x09\xbc\x01\x04\x83\x04\x03\x17\x02\x0a\x02\x0b\x0c"
  "\x0d\x04\x0a\x02\x03\x17\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74"
  "\x61\x62\x6c\x65\x73\x2f\x72\x65\x73\x65\x74\x21\x02\x10\x6d\x61"
  "\x6b\x65\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x03\xc3\x01"
  "\x10\x81\x81\x02\xc2\x01\x0e\x81\x81\x02\xc1\x01\x0c\x81\x81\x02"
  "\xc0\x01\x0a\x81\x81\x02\xbf\x01\x08\x81\x81\x02\xbe\x01\x06\x81"
  "\x83\x02\xbd\x01\x04\x82\x02\x0f\x20\x18\x02\x0b\x0f\x0e\x0d\x0c"
  "\x0b\x0a\x05\x04\x04\x6d\x61\x70\x03\x10\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2d\x63\x6f\x70\x79\x03\x0e\x71\x75\x61\x6e\x74"
  "\x69\x74\x79\x2d\x63\x6f\x70\x79\x03\x15\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x74\x61\x62\x6c\x65\x73\x2f\x63\x6f\x70\x79\x06\x0b"
  "\x6d\x61\x6b\x65\x2d\x73\x74\x61\x74\x65\x0c\x06\xcf\x01\x1a\x81"
  "\x87\x02\xce\x01\x18\x81\x85\x02\xcd\x01\x16\x81\x83\x02\xcc\x01"
  "\x14\x81\x89\x02\xcb\x01\x12\x81\x85\x02\xca\x01\x10\x81\x85\x02"
  "\xc9\x01\x0e\x83\x04\xc8\x01\x0c\x81\x87\x02\xc7\x01\x0a\x81\x83"
  "\x02\xc6\x01\x08\x81\x81\x02\xc5\x01\x06\x81\x83\x02\xc4\x01\x04"
  "\x82\x02\x19\x2e\x0b\x02\x0c\x07\x61\x73\x73\x69\x67\x6e\x13\x4d"
  "\x69\x73\x73\x69\x6e\x67\x20\x43\x53\x45\x20\x6d\x65\x74\x68\x6f"
  "\x64\x0f\x09\x09\x02\x0b\x63\x73\x65\x2f\x61\x73\x73\x69\x67\x6e"
  "\x19\x0c\x63\x73\x65\x2d\x6d\x65\x74\x68\x6f\x64\x73\x1a\x09\x05"
  "\x04\x06\x65\x72\x72\x6f\x72\x05\x0f\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2f\x67\x65\x74\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61"
  "\x72\x6b\x21\x03\x08\x73\x62\x6c\x6f\x63\x6b\x3f\x03\x11\x70\x6e"
  "\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74\x03\x0b"
  "\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74\x03\x11\x6e\x6f\x64\x65"
  "\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x3e\x31\x3f\x1b\x02\x03\x0d"
  "\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x1c\x03\x12\x70"
  "\x6e\x6f\x64\x65\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65"
  "\x03\x10\x02\x11\x04\x02\x0a\x73\x74\x61\x74\x65\x2f\x67\x65\x74"
  "\x0f\xf7\x01\x52\x81\x85\x02\xf6\x01\x50\x81\x85\x02\xf5\x01\x4e"
  "\x81\x87\x02\xf4\x01\x4c\x81\x85\x02\xf3\x01\x4a\x81\x85\x02\xf2"
  "\x01\x48\x81\x89\x02\xf1\x01\x46\x81\x85\x02\xf0\x01\x44\x81\x85"
  "\x02\xef\x01\x42\x81\x85\x02\xee\x01\x40\x81\x89\x02\xed\x01\x3e"
  "\x81\x85\x02\xec\x01\x3c\x81\x85\x02\xeb\x01\x3a\x81\x85\x02\xea"
  "\x01\x38\x81\x85\x02\xe9\x01\x36\x81\x85\x02\xe8\x01\x34\x81\x83"
  "\x02\xe7\x01\x32\x81\x83\x02\xe6\x01\x30\x81\x85\x02\xe5\x01\x2e"
  "\x81\x85\x02\xe4\x01\x2c\x81\x85\x02\xe3\x01\x2a\x81\x85\x02\xe2"
  "\x01\x28\x81\x83\x02\xe1\x01\x26\x81\x83\x02\xe0\x01\x24\x81\x83"
  "\x02\xdf\x01\x22\x81\x83\x02\xde\x01\x20\x81\x83\x02\xdd\x01\x1e"
  "\x81\x85\x02\xdc\x01\x1c\x81\x85\x02\xdb\x01\x1a\x81\x85\x02\xda"
  "\x01\x18\x81\x89\x02\xd9\x01\x16\x81\x87\x02\xd8\x01\x14\x81\x83"
  "\x02\xd7\x01\x12\x81\x83\x02\xd6\x01\x10\x81\x87\x02\xd5\x01\x0e"
  "\x81\x85\x02\xd4\x01\x0c\x81\x87\x02\xd3\x01\x0a\x81\x83\x02\xd2"
  "\x01\x08\x81\x85\x02\xd1\x01\x06\x81\x83\x02\xd0\x01\x04\x83\x04"
  "\x51\x7f\x1d\x02\x0d\x03\x1c\x02\xf9\x01\x06\x81\x83\x02\xf8\x01"
  "\x04\x83\x04\x05\x0c\x1c\x02\x0e\x03\x1b\x03\x10\x02\x11\x04\xfc"
  "\x01\x08\x81\x83\x02\xfb\x01\x06\x81\x83\x02\xfa\x01\x04\x83\x04"
  "\x07\x11\x1b\x02\x0f\x1a\x02\x05\x10\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2f\x70\x75\x74\x21\x02\xff\x01\x08\x81\x85\x02\xfe"
  "\x01\x06\x81\x8b\x02\xfd\x01\x04\x84\x06\x07\x0f\x1e\x02\x10\x0d"
  "\x09\x72\x65\x67\x69\x73\x74\x65\x72\x0e\x0e\x70\x72\x65\x2d\x69"
  "\x6e\x63\x72\x65\x6d\x65\x6e\x74\x1f\x0f\x09\x73\x65\x74\x2d\x63"
  "\x61\x72\x21\x1b\x72\x74\x6c\x3a\x73\x65\x74\x2d\x61\x73\x73\x69"
  "\x67\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x21\x16\x72"
  "\x74\x6c\x3a\x61\x73\x73\x69\x67\x6e\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x13\x63\x73\x65\x2f\x61\x73\x73\x69\x67\x6e\x2f"
  "\x67\x65\x6e\x65\x72\x61\x6c\x20\x16\x63\x73\x65\x2f\x61\x73\x73"
  "\x69\x67\x6e\x2f\x73\x74\x61\x63\x6b\x2d\x70\x75\x73\x68\x21\x20"
  "\x63\x73\x65\x2f\x61\x73\x73\x69\x67\x6e\x2f\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x22"
  "\x1b\x63\x73\x65\x2f\x61\x73\x73\x69\x67\x6e\x2f\x73\x74\x61\x63"
  "\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x23\x14\x63\x73\x65"
  "\x2f\x61\x73\x73\x69\x67\x6e\x2f\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x24\x08\x06\x14\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x72"
  "\x65\x70\x6c\x61\x63\x65\x21\x25\x04\x10\x67\x65\x6e\x65\x72\x61"
  "\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x26\x03\x18\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x03\x1b\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72"
  "\x2d\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x27"
  "\x03\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x3f\x03\x11\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x3f\x03\x0c\x6e\x6f\x74\x69\x63\x65\x2d\x70\x6f\x70\x21"
  "\x28\x08\x97\x02\x32\x81\x8b\x02\x96\x02\x30\x81\x8b\x02\x95\x02"
  "\x2e\x81\x8d\x02\x94\x02\x2c\x81\x8b\x02\x93\x02\x2a\x81\x8b\x02"
  "\x92\x02\x28\x81\x89\x02\x91\x02\x26\x81\x8b\x02\x90\x02\x24\x81"
  "\x8b\x02\x8f\x02\x22\x81\x8d\x02\x8e\x02\x20\x81\x8d\x02\x8d\x02"
  "\x1e\x81\x8b\x02\x8c\x02\x1c\x81\x8b\x02\x8b\x02\x1a\x81\x8b\x02"
  "\x8a\x02\x18\x81\x8b\x02\x89\x02\x16\x81\x8b\x02\x88\x02\x14\x81"
  "\x8b\x02\x87\x02\x12\x81\x8b\x02\x86\x02\x10\x81\x8b\x02\x85\x02"
  "\x0e\x81\x8b\x02\x84\x02\x0c\x81\x87\x02\x83\x02\x0a\x81\x87\x02"
  "\x82\x02\x08\x81\x87\x02\x81\x02\x06\x81\x85\x02\x80\x02\x04\x83"
  "\x04\x31\x53\x29\x02\x11\x02\x07\x6f\x66\x66\x73\x65\x74\x2a\x0d"
  "\x11\x6d\x61\x63\x68\x69\x6e\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x2b\x0f\x0d\x02\x17\x2a\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a\x2c\x02\x03\x27"
  "\x04\x26\x03\x20\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61"
  "\x74\x65\x21\x27\x04\x1d\x69\x6e\x73\x65\x72\x74\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x64\x65\x73\x74\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x21\x03\x16\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x61\x64\x6a\x75\x73\x74\x21\x26\x06\xa7\x02\x22\x81\x8f"
  "\x02\xa6\x02\x20\x81\x8b\x02\xa5\x02\x1e\x81\x89\x02\xa4\x02\x1c"
  "\x81\x8b\x02\xa3\x02\x1a\x81\x89\x02\xa2\x02\x18\x81\x89\x02\xa1"
  "\x02\x16\x81\x89\x02\xa0\x02\x14\x81\x8b\x02\x9f\x02\x12\x81\x8b"
  "\x02\x9e\x02\x10\x81\x89\x02\x9d\x02\x0e\x81\x89\x02\x9c\x02\x0c"
  "\x81\x89\x02\x9b\x02\x0a\x81\x89\x02\x9a\x02\x08\x81\x89\x02\x99"
  "\x02\x06\x81\x89\x02\x98\x02\x04\x86\x0a\x21\x3d\x2d\x02\x12\x02"
  "\x03\x1c\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21\x04\x1a\x69"
  "\x6e\x73\x65\x72\x74\x2d\x73\x74\x61\x63\x6b\x2d\x64\x65\x73\x74"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x21\x2e\x03\xaa\x02\x08\x81\x89\x02"
  "\xa9\x02\x06\x81\x89\x02\xa8\x02\x04\x86\x0a\x07\x10\x2f\x02\x13"
  "\x2a\x2b\x0f\x0e\x2c\x02\x03\x26\x04\x2e\x03\xb3\x02\x14\x81\x8b"
  "\x02\xb2\x02\x12\x81\x8b\x02\xb1\x02\x10\x81\x8b\x02\xb0\x02\x0e"
  "\x81\x89\x02\xaf\x02\x0c\xfd\xff\x03\xae\x02\x0a\xfd\xff\x03\xad"
  "\x02\x08\xfd\xff\x03\xac\x02\x06\xff\xff\x03\xab\x02\x04\x86\x0a"
  "\x13\x25\x2e\x02\x14\x03\x10\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2d\x68\x61\x73\x68\x06\x1c\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x2d\x6d\x65\x6d\x6f\x72\x79\x2d\x69\x6e\x73\x65\x72\x74"
  "\x69\x6f\x6e\x2b\x04\x12\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2a\x04\x13\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2d\x64\x65\x6c\x65\x74\x65\x21\x30\x05\xb7\x02"
  "\x0a\x81\x85\x02\xb6\x02\x08\x81\x83\x02\xb5\x02\x06\x81\x89\x02"
  "\xb4\x02\x04\x86\x0a\x09\x15\x31\x02\x15\x02\x1f\x0f\x70\x6f\x73"
  "\x74\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x0f\x0e\x13\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x2d\x69\x6e\x2d\x6d\x65\x6d\x6f\x72\x79\x3f"
  "\x02\x04\x15\x66\x75\x6c\x6c\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x68\x61\x73\x68\x03\x28\x03\x0b\x73\x74\x61\x63\x6b"
  "\x2d\x70\x6f\x70\x3f\x1f\x03\x1b\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x76\x61\x72\x69\x65"
  "\x73\x3f\x03\x1a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x66\x72\x65\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x04\x05\x6d"
  "\x65\x6d\x71\x06\x2b\x03\x27\x03\x19\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2d\x64\x65\x6c\x65\x74\x65\x2d\x63\x6c\x61\x73\x73"
  "\x21\x04\x2a\x02\x1c\x76\x61\x72\x79\x69\x6e\x67\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x21"
  "\x2a\x04\x30\x0d\xca\x02\x28\x81\x85\x02\xc9\x02\x26\x81\x83\x02"
  "\xc8\x02\x24\x81\x83\x02\xc7\x02\x22\x81\x81\x02\xc6\x02\x20\x82"
  "\x02\xc5\x02\x1e\x81\x83\x02\xc4\x02\x1c\x81\x83\x02\xc3\x02\x1a"
  "\x81\x83\x02\xc2\x02\x18\x82\x02\xc1\x02\x16\x81\x8d\x02\xc0\x02"
  "\x14\x81\x89\x02\xbf\x02\x12\x81\x8b\x02\xbe\x02\x10\x81\x8b\x02"
  "\xbd\x02\x0e\x81\x89\x02\xbc\x02\x0c\x81\x89\x02\xbb\x02\x0a\x81"
  "\x89\x02\xba\x02\x08\x81\x89\x02\xb9\x02\x06\x81\x89\x02\xb8\x02"
  "\x04\x86\x0a\x27\x49\x30\x02\x16\x0f\x0e\x02\x03\x1f\x03\x26\x03"
  "\xcf\x02\x0c\x81\x83\x02\xce\x02\x0a\x81\x83\x02\xcd\x02\x08\x81"
  "\x83\x02\xcc\x02\x06\x81\x83\x02\xcb\x02\x04\x83\x04\x0b\x16\x1f"
  "\x02\x17\x03\x13\x6d\x65\x6e\x74\x69\x6f\x6e\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x73\x21\x02\xd2\x02\x08\x81\x89\x02\xd1\x02\x06"
  "\x81\x89\x02\xd0\x02\x04\x86\x0a\x07\x0d\x32\x02\x18\x02\xd3\x02"
  "\x04\x84\x06\x03\x33\x02\x19\x0f\x74\x72\x69\x76\x69\x61\x6c\x2d"
  "\x61\x63\x74\x69\x6f\x6e\x34\x02\x04\x12\x64\x65\x66\x69\x6e\x65"
  "\x2d\x63\x73\x65\x2d\x6d\x65\x74\x68\x6f\x64\x35\x06\x25\x03\xd6"
  "\x02\x08\x81\x89\x02\xd5\x02\x06\x81\x85\x02\xd4\x02\x04\x85\x08"
  "\x07\x11\x36\x02\x1a\x34\x02\x04\x35\x06\x25\x03\xdb\x02\x0c\x81"
  "\x89\x02\xda\x02\x0a\x81\x85\x02\xd9\x02\x08\x81\x87\x02\xd8\x02"
  "\x06\x81\x85\x02\xd7\x02\x04\x87\x0c\x0b\x15\x37\x02\x1b\x02\xdc"
  "\x02\x04\x83\x04\x03\x38\x02\x1c\x02\x0f\x0e\x0a\x2c\x03\x03\x19"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x70\x73\x65\x75\x64\x6f\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x03\x26\x03\x27\x03\x17\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x6e\x76\x61\x6c\x69\x64"
  "\x61\x74\x65\x21\x26\x05\xea\x02\x1e\x81\x83\x02\xe9\x02\x1c\x81"
  "\x83\x02\xe8\x02\x1a\x81\x83\x02\xe7\x02\x18\x81\x85\x02\xe6\x02"
  "\x16\x81\x85\x02\xe5\x02\x14\x81\x83\x02\xe4\x02\x12\x81\x83\x02"
  "\xe3\x02\x10\x81\x83\x02\xe2\x02\x0e\x81\x83\x02\xe1\x02\x0c\x83"
  "\x04\xe0\x02\x0a\x81\x85\x02\xdf\x02\x08\x81\x85\x02\xde\x02\x06"
  "\x81\x83\x02\xdd\x02\x04\x83\x04\x1d\x33\x0f\x02\x1d\x34\x29\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x6e\x61\x6d\x65\x21\x24\x72\x74\x6c\x3a\x69\x6e\x76\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x04\x06\x25\x03\x1a"
  "\x6d\x65\x74\x68\x6f\x64\x2f\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d\x69"
  "\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x0e\x03\xef\x02\x0c\x81\x83"
  "\x02\xee\x02\x0a\x81\x8b\x02\xed\x02\x08\x81\x89\x02\xec\x02\x06"
  "\x81\x85\x02\xeb\x02\x04\x83\x04\x0b\x17\x0a\x02\x1e\x34\x27\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x21\x22\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x06\x25\x03\x0e\x03\xf4\x02\x0c"
  "\x81\x83\x02\xf3\x02\x0a\x81\x8b\x02\xf2\x02\x08\x81\x89\x02\xf1"
  "\x02\x06\x81\x85\x02\xf0\x02\x04\x83\x04\x0b\x17\x39\x02\x1f\x0d"
  "\x02\x34\x32\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x3a\x6d\x6f\x76"
  "\x65\x2d\x66\x72\x61\x6d\x65\x2d\x75\x70\x2d\x6c\x6f\x63\x61\x74"
  "\x69\x76\x65\x21\x2d\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x3a\x6d\x6f\x76\x65\x2d"
  "\x66\x72\x61\x6d\x65\x2d\x75\x70\x2d\x6c\x6f\x63\x61\x74\x69\x76"
  "\x65\x2c\x05\x06\x25\x03\x27\x03\xfc\x02\x12\x81\x83\x02\xfb\x02"
  "\x10\x81\x83\x02\xfa\x02\x0e\x81\x83\x02\xf9\x02\x0c\x81\x83\x02"
  "\xf8\x02\x0a\x81\x8b\x02\xf7\x02\x08\x81\x89\x02\xf6\x02\x06\x81"
  "\x85\x02\xf5\x02\x04\x83\x04\x11\x23\x3a\x02\x20\x0d\x02\x34\x31"
  "\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x6c\x69\x6e\x6b\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x21"
  "\x2c\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x70\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c"
  "\x69\x6e\x6b\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x31\x72\x74\x6c"
  "\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x70\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c"
  "\x69\x6e\x6b\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x2c\x72\x74"
  "\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65"
  "\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2c\x07\x06\x25\x03\x27\x03"
  "\x88\x03\x1a\x81\x83\x02\x87\x03\x18\x81\x83\x02\x86\x03\x16\x81"
  "\x83\x02\x85\x03\x14\x81\x83\x02\x84\x03\x12\x81\x8b\x02\x83\x03"
  "\x10\x81\x89\x02\x82\x03\x0e\x81\x85\x02\x81\x03\x0c\x81\x83\x02"
  "\x80\x03\x0a\x81\x8b\x02\xff\x02\x08\x81\x89\x02\xfe\x02\x06\x81"
  "\x85\x02\xfd\x02\x04\x83\x04\x19\x2d\x2c\x02\x21\x02\x04\x35\x06"
  "\x25\x02\x17\x6e\x6f\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x69\x6e"
  "\x76\x61\x6c\x69\x64\x61\x74\x65\x21\x27\x03\x26\x05\x8e\x03\x0e"
  "\x81\x87\x02\x8d\x03\x0c\x81\x89\x02\x8c\x03\x0a\x81\x87\x02\x8b"
  "\x03\x08\x81\x87\x02\x8a\x03\x06\x81\x85\x02\x89\x03\x04\x86\x0a"
  "\x0d\x1a\x26\x02\x22\x02\x34\x02\x04\x35\x06\x25\x02\x2a\x02\x27"
  "\x05\x95\x03\x10\x81\x85\x02\x94\x03\x0e\x81\x85\x02\x93\x03\x0c"
  "\x84\x06\x92\x03\x0a\x81\x85\x02\x91\x03\x08\x81\x87\x02\x90\x03"
  "\x06\x81\x85\x02\x8f\x03\x04\x87\x0c\x0f\x1e\x2a\x22\x27\x27\x16"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x73\x65\x74\x21\x18\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x22\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63"
  "\x61\x63\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x19"
  "\x64\x65\x66\x69\x6e\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x2d\x6d\x65\x74\x68\x6f\x64\x27\x2a\x04\x1a\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x62"
  "\x6f\x75\x6e\x64\x3f\x1d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x3f\x18\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70\x23\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68"
  "\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x21\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63"
  "\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x18\x69"
  "\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a"
  "\x61\x63\x63\x65\x73\x73\x15\x64\x65\x66\x69\x6e\x65\x2d\x6c\x6f"
  "\x6f\x6b\x75\x70\x2d\x6d\x65\x74\x68\x6f\x64\x2a\x26\x04\x1f\x69"
  "\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78"
  "\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x2c\x04\x20"
  "\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69"
  "\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65\x2d\x75\x70\x3a"
  "\x04\x12\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c\x6f\x6f"
  "\x6b\x75\x70\x39\x04\x1b\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x0a\x04\x1d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x73\x70"
  "\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x15"
  "\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x17\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x6c\x69\x6e\x6b\x14\x69\x6e\x76\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3a\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x1a"
  "\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70\x75"
  "\x74\x65\x64\x2d\x6c\x65\x78\x70\x72\x19\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6a\x75"
  "\x6d\x70\x11\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x61\x70"
  "\x70\x6c\x79\x0e\x0f\x04\x11\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3a\x6c\x65\x78\x70\x72\x10\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x3a\x6a\x75\x6d\x70\x0f\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x68\x65\x61\x64\x65\x72\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x16\x6f\x70\x65\x6e\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x14\x69\x63"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65"
  "\x72\x14\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x68"
  "\x65\x61\x64\x65\x72\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x0b\x70\x6f\x70\x2d\x72\x65\x74"
  "\x75\x72\x6e\x0e\x6f\x76\x65\x72\x66\x6c\x6f\x77\x2d\x74\x65\x73"
  "\x74\x0c\x6d\x65\x74\x68\x6f\x64\x2f\x6e\x6f\x6f\x70\x3a\x38\x04"
  "\x0a\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x13\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x12\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x13"
  "\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72"
  "\x67\x73\x12\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31"
  "\x2d\x61\x72\x67\x0c\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73"
  "\x0b\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x08\x65\x71\x2d\x74"
  "\x65\x73\x74\x1a\x1e\x64\x65\x66\x69\x6e\x65\x2d\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x74\x77\x6f\x2d\x61\x72\x67\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x39\x1e\x64\x65\x66\x69\x6e\x65\x2d\x74\x72\x69\x76\x69"
  "\x61\x6c\x2d\x6f\x6e\x65\x2d\x61\x72\x67\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x38\x34\x2b\x28\x20\x22\x21\x23\x24\x19\x0c\x37\x04\x36\x04"
  "\x33\x04\x32\x04\x1f\x04\x30\x04\x31\x04\x2e\x04\x2f\x04\x2d\x04"
  "\x29\x04\x0c\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x0a\x72\x74\x64\x3a\x73\x74\x61\x74\x65\x35\x0a"
  "\x77\x61\x6c\x6b\x2d\x6e\x65\x78\x74\x0b\x77\x61\x6c\x6b\x2d\x6e"
  "\x65\x78\x74\x3f\x10\x11\x21\x73\x74\x61\x74\x65\x2f\x73\x74\x61"
  "\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x71\x75\x61"
  "\x6e\x74\x69\x74\x69\x65\x73\x13\x73\x74\x61\x74\x65\x2f\x73\x74"
  "\x61\x63\x6b\x2d\x6f\x66\x66\x73\x65\x74\x11\x73\x74\x61\x74\x65"
  "\x2f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x16\x73\x74\x61\x74"
  "\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x61\x62\x6c\x65"
  "\x73\x0c\x21\x63\x6f\x6d\x6d\x6f\x6e\x2d\x73\x75\x62\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x65\x6c\x69\x6d\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x09\x11\x1e\x04\x1b\x04\x1c\x04\x1d\x04\x0b\x04\x18"
  "\x04\x17\x04\x16\x04\x15\x04\x14\x04\x13\x04\x12\x04\x04\x04\x11"
  "\x07\x76\x65\x63\x74\x6f\x72\x06\x73\x74\x61\x74\x65\x1b\x73\x74"
  "\x61\x63\x6b\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x71\x75"
  "\x61\x6e\x74\x69\x74\x69\x65\x73\x0d\x73\x74\x61\x63\x6b\x2d\x6f"
  "\x66\x66\x73\x65\x74\x0b\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x10\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x61\x62\x6c\x65\x73"
  "\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74"
  "\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x03\x1e\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x65\x71\x2d\x74\x65\x73\x74\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x32\x21\x19\x72\x74\x6c"
  "\x3a\x65\x71\x2d\x74\x65\x73\x74\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x32\x1e\x72\x74\x6c\x3a\x73\x65\x74\x2d\x65\x71"
  "\x2d\x74\x65\x73\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x31\x21\x19\x72\x74\x6c\x3a\x65\x71\x2d\x74\x65\x73\x74\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x31\x1c\x72\x74\x6c"
  "\x3a\x73\x65\x74\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x21\x17\x72\x74\x6c\x3a\x70\x72\x65"
  "\x64\x2d\x31\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e\x64\x1f"
  "\x72\x74\x6c\x3a\x73\x65\x74\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61"
  "\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x32\x21\x1a\x72"
  "\x74\x6c\x3a\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f"
  "\x70\x65\x72\x61\x6e\x64\x2d\x32\x1f\x72\x74\x6c\x3a\x73\x65\x74"
  "\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x2d\x31\x21\x1a\x72\x74\x6c\x3a\x70\x72\x65\x64"
  "\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d"
  "\x31\x23\x72\x74\x6c\x3a\x73\x65\x74\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72"
  "\x61\x6e\x64\x21\x1e\x72\x74\x6c\x3a\x66\x69\x78\x6e\x75\x6d\x2d"
  "\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72\x61"
  "\x6e\x64\x26\x72\x74\x6c\x3a\x73\x65\x74\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2d\x32\x21\x21\x72\x74\x6c\x3a\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x2d\x32\x26\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d"
  "\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31\x21\x21"
  "\x72\x74\x6c\x3a\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d"
  "\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31"
  "\x23\x72\x74\x6c\x3a\x73\x65\x74\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72\x61"
  "\x6e\x64\x21\x1e\x72\x74\x6c\x3a\x66\x6c\x6f\x6e\x75\x6d\x2d\x70"
  "\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x2d\x6f\x70\x65\x72\x61\x6e"
  "\x64\x26\x72\x74\x6c\x3a\x73\x65\x74\x2d\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x2d\x32\x21\x21\x72\x74\x6c\x3a\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2d\x6f"
  "\x70\x65\x72\x61\x6e\x64\x2d\x32\x26\x72\x74\x6c\x3a\x73\x65\x74"
  "\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61"
  "\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31\x21\x21\x72"
  "\x74\x6c\x3a\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32"
  "\x2d\x61\x72\x67\x73\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2d\x31\x1e"
  "\x72\x74\x6c\x3a\x73\x65\x74\x2d\x74\x79\x70\x65\x2d\x74\x65\x73"
  "\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x21\x19\x72\x74"
  "\x6c\x3a\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x3a\x0e\x1c\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x61\x63"
  "\x63\x65\x73\x73\x2d\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x61\x63"
  "\x63\x65\x73\x73\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x21\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x61\x63\x63\x65\x73\x73\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x25\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x63"
  "\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2f\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x21\x2a\x72\x74"
  "\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x6e\x61\x6d\x65\x27\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x63\x61\x63"
  "\x68\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x31\x72"
  "\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x2d\x6e\x61\x6d\x65\x21\x2c"
  "\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e\x61\x73\x73"
  "\x69\x67\x6e\x65\x64\x3f\x2d\x6e\x61\x6d\x65\x1c\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d\x72\x74\x6c\x3a\x73\x65\x74\x2d"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x6c\x6f\x6f\x6b\x75\x70\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x21\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x32\x72\x74"
  "\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x3f\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x2d"
  "\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x63\x61\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1e\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x2f\x72\x74\x6c\x3a\x73"
  "\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x2a\x72\x74\x6c\x3a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75"
  "\x6e\x62\x6f\x75\x6e\x64\x3f\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x31\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63"
  "\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x76\x61"
  "\x6c\x75\x65\x21\x2c\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x6c\x75\x65"
  "\x30\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x21"
  "\x2b\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72"
  "\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x27\x72\x74\x6c\x3a"
  "\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x2d\x76\x61\x6c\x75"
  "\x65\x21\x22\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x2d\x76"
  "\x61\x6c\x75\x65\x2d\x72\x74\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65"
  "\x66\x69\x6e\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x21\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x72\x74\x6c\x3a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73"
  "\x65\x74\x21\x2d\x76\x61\x6c\x75\x65\x2b\x72\x74\x6c\x3a\x73\x65"
  "\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x73\x65\x74\x21\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x21\x26\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x25\x72\x74\x6c\x3a\x73"
  "\x65\x74\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x73\x65\x74\x21\x2d\x76\x61\x6c\x75\x65\x21\x39"
  "\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72\x6f\x6e\x67\x2d\x65\x71"
  "\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x07\x39\x05\x38\x04"
  "\x35\x06\x2a\x07\x27\x07\x79\xf4\x01\x80\x80\x04\x78\xf2\x01\x81"
  "\x81\x02\x77\xf0\x01\x81\x81\x02\x76\xee\x01\x81\x8b\x02\x75\xec"
  "\x01\x81\x87\x02\x74\xea\x01\x81\x85\x02\x73\xe8\x01\x81\x83\x02"
  "\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x8b\x02\x70\xe2\x01\x81"
  "\x89\x02\x6f\xe0\x01\x81\x87\x02\x6e\xde\x01\x81\x85\x02\x6d\xdc"
  "\x01\x81\x83\x02\x6c\xda\x01\x81\x8b\x02\x6b\xd8\x01\x81\x89\x02"
  "\x6a\xd6\x01\x81\x87\x02\x69\xd4\x01\x81\x85\x02\x68\xd2\x01\x81"
  "\x83\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x89\x02\x65\xcc"
  "\x01\x81\x87\x02\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x83\x02"
  "\x62\xc6\x01\x81\x89\x02\x61\xc4\x01\x81\x87\x02\x60\xc2\x01\x81"
  "\x85\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x89\x02\x5d\xbc"
  "\x01\x81\x87\x02\x5c\xba\x01\x81\x85\x02\x5b\xb8\x01\x81\x83\x02"
  "\x5a\xb6\x01\x81\x89\x02\x59\xb4\x01\x81\x87\x02\x58\xb2\x01\x81"
  "\x85\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x89\x02\x55\xac"
  "\x01\x81\x87\x02\x54\xaa\x01\x81\x85\x02\x53\xa8\x01\x81\x83\x02"
  "\x52\xa6\x01\x81\x89\x02\x51\xa4\x01\x81\x87\x02\x50\xa2\x01\x81"
  "\x85\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c"
  "\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02"
  "\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81\x85\x02\x48\x92\x01\x81"
  "\x83\x02\x47\x90\x01\x81\x85\x02\x46\x8e\x01\x81\x83\x02\x45\x8c"
  "\x01\x81\x85\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x85\x02"
  "\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x85\x02\x40\x82\x01\x81"
  "\x83\x02\x3f\x80\x01\x81\x85\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81"
  "\x85\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x85"
  "\x02\x39\x74\x81\x83\x02\x38\x72\x81\x85\x02\x37\x70\x81\x83\x02"
  "\x36\x6e\x81\x85\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x85\x02\x33"
  "\x68\x81\x83\x02\x32\x66\x81\x85\x02\x31\x64\x81\x83\x02\x30\x62"
  "\x81\x85\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x85\x02\x2d\x5c\x81"
  "\x83\x02\x2c\x5a\x81\x85\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x85"
  "\x02\x29\x54\x81\x83\x02\x28\x52\x81\x85\x02\x27\x50\x81\x83\x02"
  "\x26\x4e\x81\x83\x02\x25\x4c\x81\x87\x02\x24\x4a\x81\x85\x02\x23"
  "\x48\x81\x83\x02\x22\x46\x81\x8b\x02\x21\x44\x81\x89\x02\x20\x42"
  "\x81\x87\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81"
  "\x87\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x8b"
  "\x02\x19\x34\x81\x89\x02\x18\x32\x81\x87\x02\x17\x30\x81\x85\x02"
  "\x16\x2e\x81\x83\x02\x15\x2c\x81\x87\x02\x14\x2a\x81\x85\x02\x13"
  "\x28\x81\x83\x02\x12\x26\x81\x8b\x02\x11\x24\x81\x89\x02\x10\x22"
  "\x81\x87\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81"
  "\x87\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x8b"
  "\x02\x09\x14\x81\x89\x02\x08\x12\x81\x87\x02\x07\x10\x81\x85\x02"
  "\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03"
  "\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\xf3\x01"
  "\x81\x03";

SCHEME_OBJECT *
rcse1_so_data_b007ab8b4898e372 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rcse1_so_data_b007ab8b4898e372 [0]))), (sizeof (prog_rcse1_so_data_b007ab8b4898e372)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_132]));
}

DECLARE_COMPILED_DATA_NS ("rcse1.so", rcse1_so_data_b007ab8b4898e372)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rcse1.so", "44ed416af48be9d8")
