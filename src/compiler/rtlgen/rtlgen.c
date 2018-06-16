/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_12 9
#define TAG_1_13 3
#define LABEL_1_10 11
#define TAG_1_11 4
#define LABEL_1_17 13
#define LABEL_1_18 15
#define LABEL_1_19 17
#define LABEL_1_20 19
#define LABEL_1_21 21
#define LABEL_1_22 23
#define LABEL_1_23 25
#define LABEL_1_24 27
#define LABEL_1_25 29
#define LABEL_1_26 31
#define LABEL_1_27 33
#define LABEL_1_28 35
#define LABEL_1_29 37
#define LABEL_1_30 39
#define LABEL_1_31 41
#define LABEL_1_32 43
#define LABEL_1_33 45
#define LABEL_1_34 47
#define LABEL_1_35 49
#define LABEL_1_36 51
#define LABEL_1_37 53
#define LABEL_1_15 55
#define LABEL_1_40 57
#define LABEL_1_38 59
#define LABEL_1_45 61
#define LABEL_1_39 63
#define LABEL_1_42 65
#define LABEL_1_43 67
#define LABEL_1_50 69
#define LABEL_1_44 71
#define LABEL_1_47 73
#define LABEL_1_53 75
#define LABEL_1_48 77
#define LABEL_1_52 79
#define LABEL_1_58 81
#define LABEL_1_54 83
#define LABEL_1_56 85
#define LABEL_1_57 87
#define LABEL_1_62 89
#define LABEL_1_60 91
#define TAG_1_61 44
#define ENVIRONMENT_LABEL_1_3 137
#define DEBUGGING_LABEL_1_2 136
#define OBJECT_1_4 135
#define OBJECT_1_3 134
#define OBJECT_1_2 133
#define OBJECT_1_1 132
#define OBJECT_1_0 131
#define EXECUTE_CACHE_1_63 93
#define EXECUTE_CACHE_1_59 95
#define EXECUTE_CACHE_1_55 97
#define EXECUTE_CACHE_1_51 99
#define EXECUTE_CACHE_1_49 101
#define EXECUTE_CACHE_1_46 103
#define EXECUTE_CACHE_1_41 105
#define EXECUTE_CACHE_1_16 107
#define EXECUTE_CACHE_1_14 109
#define EXECUTE_CACHE_1_9 111
#define EXECUTE_CACHE_1_7 113
#define FREE_REFERENCE_1_6 116
#define FREE_REFERENCE_1_5 117
#define FREE_REFERENCE_1_4 118
#define FREE_REFERENCE_1_3 119
#define FREE_REFERENCE_1_2 120
#define FREE_REFERENCE_1_1 121
#define FREE_REFERENCE_1_0 122
#define FREE_ASSIGNMENT_1_6 124
#define FREE_ASSIGNMENT_1_5 125
#define FREE_ASSIGNMENT_1_4 126
#define FREE_ASSIGNMENT_1_3 127
#define FREE_ASSIGNMENT_1_2 128
#define FREE_ASSIGNMENT_1_1 129
#define FREE_ASSIGNMENT_1_0 130
#define FREE_REFERENCES_LABEL_1_0 92
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd357;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd265;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd213;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd214;
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
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_top_level_65;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_96;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_98;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto swapB_97;

    case 5:
      current_block = (Rpc - LABEL_1_17);
      goto label_67;

    case 6:
      current_block = (Rpc - LABEL_1_18);
      goto label_68;

    case 7:
      current_block = (Rpc - LABEL_1_19);
      goto label_69;

    case 8:
      current_block = (Rpc - LABEL_1_20);
      goto label_70;

    case 9:
      current_block = (Rpc - LABEL_1_21);
      goto label_71;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto label_72;

    case 11:
      current_block = (Rpc - LABEL_1_23);
      goto label_73;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto label_74;

    case 13:
      current_block = (Rpc - LABEL_1_25);
      goto label_75;

    case 14:
      current_block = (Rpc - LABEL_1_26);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_1_27);
      goto label_77;

    case 16:
      current_block = (Rpc - LABEL_1_28);
      goto label_78;

    case 17:
      current_block = (Rpc - LABEL_1_29);
      goto label_79;

    case 18:
      current_block = (Rpc - LABEL_1_30);
      goto label_80;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto label_81;

    case 20:
      current_block = (Rpc - LABEL_1_32);
      goto label_82;

    case 21:
      current_block = (Rpc - LABEL_1_33);
      goto label_83;

    case 22:
      current_block = (Rpc - LABEL_1_34);
      goto label_84;

    case 23:
      current_block = (Rpc - LABEL_1_35);
      goto label_85;

    case 24:
      current_block = (Rpc - LABEL_1_36);
      goto label_86;

    case 25:
      current_block = (Rpc - LABEL_1_37);
      goto label_87;

    case 26:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_1;

    case 27:
      current_block = (Rpc - LABEL_1_40);
      goto label_88;

    case 28:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_3;

    case 29:
      current_block = (Rpc - LABEL_1_45);
      goto label_89;

    case 30:
      current_block = (Rpc - LABEL_1_39);
      goto lambda_2;

    case 31:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_8;

    case 32:
      current_block = (Rpc - LABEL_1_43);
      goto lambda_7;

    case 33:
      current_block = (Rpc - LABEL_1_50);
      goto label_90;

    case 34:
      current_block = (Rpc - LABEL_1_44);
      goto continuation_4;

    case 35:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_11;

    case 36:
      current_block = (Rpc - LABEL_1_53);
      goto label_91;

    case 37:
      current_block = (Rpc - LABEL_1_48);
      goto lambda_10;

    case 38:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_12;

    case 39:
      current_block = (Rpc - LABEL_1_58);
      goto label_92;

    case 40:
      current_block = (Rpc - LABEL_1_54);
      goto continuation_9;

    case 41:
      current_block = (Rpc - LABEL_1_56);
      goto continuation_14;

    case 42:
      current_block = (Rpc - LABEL_1_57);
      goto continuation_13;

    case 43:
      current_block = (Rpc - LABEL_1_62);
      goto label_93;

    case 44:
      current_block = (Rpc - LABEL_1_60);
      goto lambda_102;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_top_level_95)
DEFLABEL (generate_top_level_65)
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

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 7;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd37.pObj) = (& (Rhp [-1]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd37.pObj)));
  (Rsp [1]) = (Wrd38.Obj);
  Wrd34 = Wrd40;
  (Wrd35.Obj) = (Rsp [7]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd32.Obj) = (Rsp [6]);
  ((Wrd34.pObj) [3]) = (Wrd32.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  ((Wrd34.pObj) [4]) = (Wrd29.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd34.pObj) [5]) = (Wrd26.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd34.pObj) [6]) = (Wrd23.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [7]) = (Wrd20.Obj);
  ((Wrd34.pObj) [8]) = (Wrd38.Obj);
  (Rsp [6]) = (Wrd41.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_12])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [8]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Rsp [7]) = (Wrd8.Obj);
  (Rsp [8]) = (Wrd41.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_1_12);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_112;
  Wrd11 = Wrd15;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_110;
  Wrd13 = Wrd17;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_51]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_49]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_108;
  Wrd8 = Wrd12;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_57]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_106;
  Wrd13 = Wrd17;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_57);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_104;
  Wrd5 = Wrd9;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_63]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_56);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_60])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_62])), (Wrd6.pObj));

DEFLABEL (label_93)
  (Wrd5.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_58])), (Wrd14.pObj));

DEFLABEL (label_92)
  (Wrd13.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_53])), (Wrd9.pObj));

DEFLABEL (label_91)
  (Wrd8.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_45])), (Wrd14.pObj));

DEFLABEL (label_89)
  (Wrd13.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_40])), (Wrd12.pObj));

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_111;

DEFLABEL (swapB_97)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (swapB_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_175;

DEFLABEL (label_174)
  Wrd5 = Wrd9;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_172;

DEFLABEL (label_171)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_170)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [8]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_169;

DEFLABEL (label_168)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_167)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_166;

DEFLABEL (label_165)
  Wrd57 = Wrd61;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_163;

DEFLABEL (label_162)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_161)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [7]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_160;

DEFLABEL (label_159)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_158)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_157;

DEFLABEL (label_156)
  Wrd109 = Wrd113;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_154;

DEFLABEL (label_153)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_152)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [6]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_151;

DEFLABEL (label_150)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_149)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_148;

DEFLABEL (label_147)
  Wrd161 = Wrd165;

DEFLABEL (label_146)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_145;

DEFLABEL (label_144)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_143)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [5]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_142;

DEFLABEL (label_141)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_140)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  Wrd213 = Wrd217;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_134)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [4]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_131)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  Wrd265 = Wrd269;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_125)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [3]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_122)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  Wrd317 = Wrd321;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_116)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [2]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_115;

DEFLABEL (label_114)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_113)
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_115)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_114;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_37])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_87)
  goto label_113;

DEFLABEL (label_118)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_36])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_86)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_120;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_35])), (Wrd318.pObj));

DEFLABEL (label_85)
  (Wrd317.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_34])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_84)
  goto label_122;

DEFLABEL (label_127)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_33])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_83)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_32])), (Wrd266.pObj));

DEFLABEL (label_82)
  (Wrd265.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_31])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_81)
  goto label_131;

DEFLABEL (label_136)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_30])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_80)
  goto label_134;

DEFLABEL (label_139)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_138;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_29])), (Wrd214.pObj));

DEFLABEL (label_79)
  (Wrd213.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_142)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_141;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_28])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_78)
  goto label_140;

DEFLABEL (label_145)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_144;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_27])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_77)
  goto label_143;

DEFLABEL (label_148)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_147;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_26])), (Wrd162.pObj));

DEFLABEL (label_76)
  (Wrd161.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_151)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_150;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_25])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_75)
  goto label_149;

DEFLABEL (label_154)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_153;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_24])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_74)
  goto label_152;

DEFLABEL (label_157)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_156;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_23])), (Wrd110.pObj));

DEFLABEL (label_73)
  (Wrd109.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_160)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_159;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_22])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_72)
  goto label_158;

DEFLABEL (label_163)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_162;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_71)
  goto label_161;

DEFLABEL (label_166)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_165;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_20])), (Wrd58.pObj));

DEFLABEL (label_70)
  (Wrd57.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_169)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_168;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_69)
  goto label_167;

DEFLABEL (label_172)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_171;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_68)
  goto label_170;

DEFLABEL (label_175)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_174;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_17])), (Wrd6.pObj));

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_173;

DEFLABEL (lambda_99)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_39);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_100)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_1_43);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_180;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_180;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_179)
  if ((Wrd5.Obj) == (current_block [OBJECT_1_0]))
    goto label_177;
  Rvl = (current_block [OBJECT_1_4]);
  goto label_176;

DEFLABEL (label_177)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_176)
DEFLABEL (label_178)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_180)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 2);

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_179;

DEFLABEL (lambda_101)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_1_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_55]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_54);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_1_60);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_11 9
#define LABEL_2_8 11
#define LABEL_2_13 13
#define LABEL_2_14 15
#define LABEL_2_9 17
#define TAG_2_10 7
#define LABEL_2_15 19
#define LABEL_2_16 21
#define LABEL_2_18 23
#define ENVIRONMENT_LABEL_2_3 40
#define DEBUGGING_LABEL_2_2 39
#define OBJECT_2_0 38
#define EXECUTE_CACHE_2_17 25
#define EXECUTE_CACHE_2_12 27
#define EXECUTE_CACHE_2_7 29
#define FREE_REFERENCE_2_2 32
#define FREE_REFERENCE_2_1 33
#define FREE_REFERENCE_2_0 34
#define FREE_ASSIGNMENT_2_1 36
#define FREE_ASSIGNMENT_2_0 37
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto enqueue_procedureB_6;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_11);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enqueue_procedureB_15)
DEFLABEL (enqueue_procedureB_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_24;
  Wrd16 = Wrd20;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_22;
  Wrd6 = Wrd10;

DEFLABEL (label_21)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_11)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd17.pObj));

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_31;
  Wrd5 = Wrd9;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd18.Obj) = ((Wrd10.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd10.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_18])), (Wrd10.pObj), (Wrd7.Obj));

DEFLABEL (label_13)
  goto label_27;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_11 9
#define LABEL_3_8 11
#define LABEL_3_13 13
#define LABEL_3_14 15
#define LABEL_3_9 17
#define TAG_3_10 7
#define LABEL_3_15 19
#define LABEL_3_16 21
#define LABEL_3_18 23
#define ENVIRONMENT_LABEL_3_3 40
#define DEBUGGING_LABEL_3_2 39
#define OBJECT_3_0 38
#define EXECUTE_CACHE_3_17 25
#define EXECUTE_CACHE_3_12 27
#define EXECUTE_CACHE_3_7 29
#define FREE_REFERENCE_3_2 32
#define FREE_REFERENCE_3_1 33
#define FREE_REFERENCE_3_0 34
#define FREE_ASSIGNMENT_3_1 36
#define FREE_ASSIGNMENT_3_0 37
#define FREE_REFERENCES_LABEL_3_0 24
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto enqueue_continuationB_6;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enqueue_continuationB_15)
DEFLABEL (enqueue_continuationB_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_24;
  Wrd16 = Wrd20;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_22;
  Wrd6 = Wrd10;

DEFLABEL (label_21)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_14])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_11)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd17.pObj));

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_3_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_31;
  Wrd5 = Wrd9;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd18.Obj) = ((Wrd10.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd10.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_18])), (Wrd10.pObj), (Wrd7.Obj));

DEFLABEL (label_13)
  goto label_27;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_15])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_8 7
#define LABEL_4_5 9
#define LABEL_4_7 11
#define LABEL_4_10 13
#define TAG_4_11 5
#define LABEL_4_13 15
#define LABEL_4_14 17
#define ENVIRONMENT_LABEL_4_3 32
#define DEBUGGING_LABEL_4_2 31
#define OBJECT_4_3 30
#define OBJECT_4_2 29
#define OBJECT_4_1 28
#define OBJECT_4_0 27
#define EXECUTE_CACHE_4_15 19
#define EXECUTE_CACHE_4_12 21
#define EXECUTE_CACHE_4_9 23
#define FREE_REFERENCE_4_0 26
#define FREE_REFERENCES_LABEL_4_0 18
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_expression_6;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_expression_13)
DEFLABEL (generate_expression_6)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_16;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd25.Lng))))
    goto label_16;
  (Wrd19.Obj) = ((Wrd23.pObj) [5]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_4_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_4_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd17.pObj) [7]);

DEFLABEL (label_21)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_20;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd43.Lng))))
    goto label_20;
  (Wrd31.Obj) = ((Wrd41.pObj) [6]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_20)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [2]);
  (Wrd51.Obj) = (current_block [OBJECT_4_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_11)
  (Wrd31.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Wrd27.Obj) = (current_block [OBJECT_4_2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_9 5
#define LABEL_5_5 7
#define LABEL_5_6 9
#define TAG_5_7 3
#define LABEL_5_8 11
#define LABEL_5_11 13
#define TAG_5_12 5
#define LABEL_5_13 15
#define LABEL_5_19 17
#define LABEL_5_16 19
#define LABEL_5_20 21
#define LABEL_5_21 23
#define LABEL_5_22 25
#define LABEL_5_24 27
#define LABEL_5_26 29
#define LABEL_5_28 31
#define LABEL_5_27 33
#define LABEL_5_31 35
#define LABEL_5_32 37
#define LABEL_5_30 39
#define LABEL_5_33 41
#define LABEL_5_34 43
#define LABEL_5_36 45
#define LABEL_5_35 47
#define LABEL_5_39 49
#define LABEL_5_38 51
#define LABEL_5_40 53
#define LABEL_5_42 55
#define LABEL_5_43 57
#define LABEL_5_44 59
#define LABEL_5_46 61
#define LABEL_5_47 63
#define LABEL_5_49 65
#define LABEL_5_50 67
#define LABEL_5_53 69
#define LABEL_5_51 71
#define ENVIRONMENT_LABEL_5_3 119
#define DEBUGGING_LABEL_5_2 118
#define OBJECT_5_15 117
#define OBJECT_5_14 116
#define OBJECT_5_13 115
#define OBJECT_5_12 114
#define OBJECT_5_11 113
#define OBJECT_5_10 112
#define OBJECT_5_9 111
#define OBJECT_5_8 110
#define OBJECT_5_7 109
#define OBJECT_5_6 108
#define OBJECT_5_5 107
#define OBJECT_5_4 106
#define OBJECT_5_3 105
#define OBJECT_5_2 104
#define OBJECT_5_1 103
#define OBJECT_5_0 102
#define EXECUTE_CACHE_5_52 73
#define EXECUTE_CACHE_5_48 75
#define EXECUTE_CACHE_5_45 77
#define EXECUTE_CACHE_5_41 79
#define EXECUTE_CACHE_5_37 81
#define EXECUTE_CACHE_5_29 83
#define EXECUTE_CACHE_5_25 85
#define EXECUTE_CACHE_5_23 87
#define EXECUTE_CACHE_5_18 89
#define EXECUTE_CACHE_5_17 91
#define EXECUTE_CACHE_5_15 93
#define EXECUTE_CACHE_5_14 95
#define EXECUTE_CACHE_5_10 97
#define FREE_REFERENCE_5_1 100
#define FREE_REFERENCE_5_0 101
#define FREE_REFERENCES_LABEL_5_0 72
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd13;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd12;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd67;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto generate_procedure_43;

    case 1:
      current_block = (Rpc - LABEL_5_9);
      goto label_45;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_42;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_65;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_39;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto lambda_66;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_40;

    case 7:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_5_20);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto label_47;

    case 11:
      current_block = (Rpc - LABEL_5_22);
      goto label_48;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_5_26);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_5_28);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_5_31);
      goto label_51;

    case 17:
      current_block = (Rpc - LABEL_5_32);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_5_33);
      goto label_53;

    case 20:
      current_block = (Rpc - LABEL_5_34);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_5_36);
      goto label_55;

    case 22:
      current_block = (Rpc - LABEL_5_35);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_5_39);
      goto label_56;

    case 24:
      current_block = (Rpc - LABEL_5_38);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_5_40);
      goto label_57;

    case 26:
      current_block = (Rpc - LABEL_5_42);
      goto loop_35;

    case 27:
      current_block = (Rpc - LABEL_5_43);
      goto label_58;

    case 28:
      current_block = (Rpc - LABEL_5_44);
      goto lambda_34;

    case 29:
      current_block = (Rpc - LABEL_5_46);
      goto label_59;

    case 30:
      current_block = (Rpc - LABEL_5_47);
      goto continuation_26;

    case 31:
      current_block = (Rpc - LABEL_5_49);
      goto label_60;

    case 32:
      current_block = (Rpc - LABEL_5_50);
      goto label_61;

    case 33:
      current_block = (Rpc - LABEL_5_53);
      goto label_62;

    case 34:
      current_block = (Rpc - LABEL_5_51);
      goto continuation_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_procedure_64)
DEFLABEL (generate_procedure_43)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_70;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd23.Lng))))
    goto label_70;
  (Wrd17.Obj) = ((Wrd21.pObj) [11]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_11])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_70)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (current_block [OBJECT_5_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_5_6);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Rsp [1]) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_5_11);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_103;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_103;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_102)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_101;
  Wrd29 = Wrd33;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_99;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_99;
  (Wrd35.Obj) = ((Wrd41.pObj) [3]);

DEFLABEL (label_98)
  (Wrd51.Obj) = (* (Rsp++));
  if (! ((Wrd35.Obj) == (Wrd51.Obj)))
    goto label_72;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd67.Obj) = (current_block [OBJECT_5_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_71;

DEFLABEL (label_72)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_71)
DEFLABEL (label_97)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd7.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_73;

DEFLABEL (label_74)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_73)
DEFLABEL (label_96)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_95;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd50.Lng))))
    goto label_95;
  (Wrd12.Obj) = ((Wrd48.pObj) [14]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_77)
  (Wrd42.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd42.Obj);
  goto label_75;

DEFLABEL (label_76)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_75)
DEFLABEL (label_94)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_93;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd30.Lng))))
    goto label_93;
  (Wrd22.Obj) = ((Wrd28.pObj) [13]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_91;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd20.Lng))))
    goto label_91;
  (Wrd8.Obj) = ((Wrd18.pObj) [12]);

DEFLABEL (label_90)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_89;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_88)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_30);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_87;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_87;
  (Wrd9.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_86)
  (Wrd29.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd43.Obj) = (Rsp [8]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_85;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd42.Lng))))
    goto label_85;
  (Wrd34.Obj) = ((Wrd40.pObj) [15]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_84)
  (Wrd54.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_5_11]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd72.Obj) = (Rsp [12]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_83;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd71.Lng))))
    goto label_83;
  (Wrd63.Obj) = ((Wrd69.pObj) [4]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_37]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_5_35);
  (Rsp [11]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [11]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_81;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_81;
  (Wrd13.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_80)
  goto loop_35;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_5_38);
  (Rsp [12]) = Rvl;
  (Wrd19.Obj) = (Rsp [10]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_79;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 30L) < ((unsigned long) (Wrd18.Lng))))
    goto label_79;
  (Wrd6.Obj) = ((Wrd16.pObj) [31]);

DEFLABEL (label_78)
  (Rsp [10]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_41]));

DEFLABEL (label_79)
  (Wrd24.Obj) = (Rsp [10]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd26.Obj) = (current_block [OBJECT_5_12]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_57)
  (Wrd6.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd27.Obj) = (Rsp [11]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_5_3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd77.Obj) = (Rsp [12]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [2]);
  (Wrd79.Obj) = (current_block [OBJECT_5_3]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd48.Obj) = (Rsp [8]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [2]);
  (Wrd50.Obj) = (current_block [OBJECT_5_10]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_5_9]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_8]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd26.Obj) = (Rsp [6]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_5_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [2]);
  (Wrd38.Obj) = (current_block [OBJECT_5_6]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [2]);
  (Wrd58.Obj) = (current_block [OBJECT_5_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (label_99)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_5_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_48)
  (Wrd35.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_21])), (Wrd30.pObj));

DEFLABEL (label_47)
  (Wrd29.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_5_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (loop_67)
DEFLABEL (loop_35)
  INTERRUPT_CHECK (26, LABEL_5_42);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_105;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_105;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_104)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_44]))));
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_45]));

DEFLABEL (label_105)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (lambda_68)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_5_44);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_122;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_122;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_121)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_47]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_48]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_5_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_120;
  Wrd7 = Wrd11;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_118;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_118;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);

DEFLABEL (label_117)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd13.Obj) == (Wrd29.Obj)))
    goto label_110;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_51]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_52]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_5_51);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);
  goto label_106;

DEFLABEL (label_107)
  (Wrd7.Obj) = (current_block [OBJECT_5_2]);

DEFLABEL (label_106)
DEFLABEL (label_109)
  (Rsp [0]) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_108)
  Rsp = (& (Rsp [1]));
  goto loop_35;

DEFLABEL (label_110)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_116;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd38.Lng))))
    goto label_116;
  (Wrd30.Obj) = ((Wrd36.pObj) [17]);

DEFLABEL (label_115)
  if ((Wrd30.Obj) == (current_block [OBJECT_5_15]))
    goto label_112;

DEFLABEL (label_113)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_111;

DEFLABEL (label_112)
  Rvl = (current_block [OBJECT_5_2]);

DEFLABEL (label_111)
DEFLABEL (label_114)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_5_14]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_53]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_62)
  (Wrd30.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_5_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_50]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_61)
  (Wrd13.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_49])), (Wrd8.pObj));

DEFLABEL (label_60)
  (Wrd7.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_13]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_46]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_121;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_6 9
#define ENVIRONMENT_LABEL_6_3 21
#define DEBUGGING_LABEL_6_2 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_9 13
#define EXECUTE_CACHE_6_8 15
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto generate_procedure_entry_inline_3;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_procedure_entry_inline_7)
DEFLABEL (generate_procedure_entry_inline_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_9;
  (Wrd13.Obj) = ((Wrd17.pObj) [11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_6_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_12 7
#define LABEL_7_6 9
#define TAG_7_7 3
#define LABEL_7_15 11
#define LABEL_7_16 13
#define LABEL_7_17 15
#define LABEL_7_8 17
#define LABEL_7_9 19
#define TAG_7_10 8
#define LABEL_7_11 21
#define LABEL_7_14 23
#define LABEL_7_22 25
#define LABEL_7_19 27
#define LABEL_7_24 29
#define LABEL_7_25 31
#define LABEL_7_29 33
#define LABEL_7_32 35
#define LABEL_7_36 37
#define LABEL_7_27 39
#define LABEL_7_37 41
#define LABEL_7_38 43
#define LABEL_7_40 45
#define LABEL_7_42 47
#define LABEL_7_43 49
#define LABEL_7_44 51
#define LABEL_7_47 53
#define LABEL_7_33 55
#define LABEL_7_34 57
#define LABEL_7_30 59
#define LABEL_7_31 61
#define LABEL_7_45 63
#define LABEL_7_41 65
#define ENVIRONMENT_LABEL_7_3 120
#define DEBUGGING_LABEL_7_2 119
#define OBJECT_7_14 118
#define OBJECT_7_13 117
#define OBJECT_7_12 116
#define OBJECT_7_11 115
#define OBJECT_7_10 114
#define OBJECT_7_9 113
#define OBJECT_7_8 112
#define OBJECT_7_7 111
#define OBJECT_7_6 110
#define OBJECT_7_5 109
#define OBJECT_7_4 108
#define OBJECT_7_3 107
#define OBJECT_7_2 106
#define OBJECT_7_1 105
#define OBJECT_7_0 104
#define EXECUTE_CACHE_7_52 67
#define EXECUTE_CACHE_7_51 69
#define EXECUTE_CACHE_7_50 71
#define EXECUTE_CACHE_7_49 73
#define EXECUTE_CACHE_7_48 75
#define EXECUTE_CACHE_7_46 77
#define EXECUTE_CACHE_7_39 79
#define EXECUTE_CACHE_7_35 81
#define EXECUTE_CACHE_7_28 83
#define EXECUTE_CACHE_7_26 85
#define EXECUTE_CACHE_7_23 87
#define EXECUTE_CACHE_7_21 89
#define EXECUTE_CACHE_7_20 91
#define EXECUTE_CACHE_7_18 93
#define EXECUTE_CACHE_7_13 95
#define FREE_REFERENCE_7_5 98
#define FREE_REFERENCE_7_4 99
#define FREE_REFERENCE_7_3 100
#define FREE_REFERENCE_7_2 101
#define FREE_REFERENCE_7_1 102
#define FREE_REFERENCE_7_0 103
#define FREE_REFERENCES_LABEL_7_0 66
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd87;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd83;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd113;
  machine_word Wrd43;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd78;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd36;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_7_4);
      goto generate_continuation_41;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_43;

    case 2:
      current_block = (Rpc - LABEL_7_12);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_60;

    case 4:
      current_block = (Rpc - LABEL_7_15);
      goto label_45;

    case 5:
      current_block = (Rpc - LABEL_7_16);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_7_17);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_39;

    case 8:
      current_block = (Rpc - LABEL_7_9);
      goto lambda_61;

    case 9:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_7_22);
      goto label_48;

    case 12:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_7_29);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_7_32);
      goto label_49;

    case 17:
      current_block = (Rpc - LABEL_7_36);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_7_27);
      goto continuation_37;

    case 19:
      current_block = (Rpc - LABEL_7_37);
      goto label_51;

    case 20:
      current_block = (Rpc - LABEL_7_38);
      goto label_52;

    case 21:
      current_block = (Rpc - LABEL_7_40);
      goto label_53;

    case 22:
      current_block = (Rpc - LABEL_7_42);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_7_43);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_7_44);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_7_47);
      goto label_56;

    case 26:
      current_block = (Rpc - LABEL_7_33);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_7_34);
      goto continuation_17;

    case 28:
      current_block = (Rpc - LABEL_7_30);
      goto continuation_14;

    case 29:
      current_block = (Rpc - LABEL_7_31);
      goto continuation_13;

    case 30:
      current_block = (Rpc - LABEL_7_45);
      goto continuation_28;

    case 31:
      current_block = (Rpc - LABEL_7_41);
      goto continuation_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_continuation_59)
DEFLABEL (generate_continuation_41)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_65;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_65;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_64)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_6])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_9])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  ((Wrd34.pObj) [2]) = (Wrd26.Obj);
  ((Wrd34.pObj) [3]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_63;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd47.Lng))))
    goto label_63;
  (Wrd41.Obj) = ((Wrd45.pObj) [11]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_63)
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd51.Obj) = (current_block [OBJECT_7_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_7_6);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd27.Obj) = ((Wrd6.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_73;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd24.Lng))))
    goto label_73;
  (Wrd16.Obj) = ((Wrd22.pObj) [20]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_72)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_71;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_71;
  (Wrd36.Obj) = ((Wrd46.pObj) [4]);

DEFLABEL (label_70)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_69;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd66.Lng))))
    goto label_69;
  (Wrd61.Obj) = ((Wrd64.pObj) [4]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Rsp [3]) = Rvl;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_67;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 30L) < ((unsigned long) (Wrd18.Lng))))
    goto label_67;
  (Wrd6.Obj) = ((Wrd16.pObj) [31]);

DEFLABEL (label_66)
  (Wrd30.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd30.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (label_67)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd26.Obj) = (current_block [OBJECT_7_5]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_48)
  (Wrd6.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd69.Obj) = (current_block [OBJECT_7_4]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [2]);
  (Wrd56.Obj) = (current_block [OBJECT_7_4]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_46)
  (Wrd36.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_7_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_7_9);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_76;
  Wrd7 = Wrd11;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_7_8]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd19.Obj);

DEFLABEL (label_74)
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_32])), (Wrd8.pObj));

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_79;
  Wrd30 = Wrd34;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [3]);
  (Wrd48.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_7_7]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  goto label_74;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_29])), (Wrd31.pObj));

DEFLABEL (label_50)
  (Wrd30.Obj) = Rvl;
  goto label_78;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_51]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_50]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_7_27);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_99;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_99;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_98)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_97;
  Wrd34 = Wrd38;

DEFLABEL (label_96)
  (Wrd40.Obj) = (Rsp [0]);
  if (! ((Wrd40.Obj) == (Wrd34.Obj)))
    goto label_80;
  (Wrd120.Obj) = (current_block [OBJECT_7_10]);
  (Wrd121.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd125.Obj) = (current_block [OBJECT_7_11]);
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd124.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd124.pObj)));
  (Rsp [0]) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_39]));

DEFLABEL (label_80)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_95;
  Wrd42 = Wrd46;

DEFLABEL (label_94)
  (Wrd48.Obj) = (Rsp [0]);
  if ((Wrd48.Obj) == (Wrd42.Obj))
    goto label_93;
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_3]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_92;
  Wrd50 = Wrd54;

DEFLABEL (label_91)
  (Wrd56.Obj) = (Rsp [0]);
  if ((Wrd56.Obj) == (Wrd50.Obj))
    goto label_85;
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_90;
  Wrd58 = Wrd62;

DEFLABEL (label_89)
  (Wrd64.Obj) = (Rsp [0]);
  if ((Wrd64.Obj) == (Wrd58.Obj))
    goto label_85;
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_5]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_84;
  Wrd66 = Wrd70;

DEFLABEL (label_83)
  (Wrd72.Obj) = (Rsp [0]);
  if ((Wrd72.Obj) == (Wrd66.Obj))
    goto label_81;
  (Wrd73.Obj) = (current_block [OBJECT_7_14]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [2]);
  (Rsp [1]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_49]));

DEFLABEL (label_81)
  (Wrd78.Obj) = (current_block [OBJECT_7_13]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_82)
  (Rsp [2]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_48]));

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_47])), (Wrd67.pObj));

DEFLABEL (label_56)
  (Wrd66.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_85)
  (Wrd99.Obj) = (Rsp [4]);
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [2]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_88;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd98.Lng))))
    goto label_88;
  (Wrd83.Obj) = ((Wrd96.pObj) [17]);
  if ((Wrd83.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_87)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_45]))));
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_86)
  (Wrd114.Obj) = (Rsp [5]);
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [2]);
  (* (--Rsp)) = (Wrd116.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_46]));

DEFLABEL (label_88)
  (Wrd104.Obj) = (Rsp [4]);
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd103.Obj) = ((Wrd105.pObj) [2]);
  (Wrd106.Obj) = (current_block [OBJECT_7_12]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_44]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_43])), (Wrd59.pObj));

DEFLABEL (label_55)
  (Wrd58.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_42])), (Wrd51.pObj));

DEFLABEL (label_54)
  (Wrd50.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_41]))));
  (* (--Rsp)) = (Wrd113.Obj);
  goto label_86;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_40])), (Wrd43.pObj));

DEFLABEL (label_53)
  (Wrd42.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_38])), (Wrd35.pObj));

DEFLABEL (label_52)
  (Wrd34.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_7_9]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_37]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_51]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_50]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_7_45);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_7_10]);
  (Wrd9.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_11]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_52]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_7_41);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_7_10]);
  (Wrd9.Obj) = (current_block [OBJECT_7_6]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_11]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_52]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_36);
  (Wrd78.Obj) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_10 11
#define LABEL_8_9 13
#define ENVIRONMENT_LABEL_8_3 27
#define DEBUGGING_LABEL_8_2 26
#define OBJECT_8_4 25
#define OBJECT_8_3 24
#define OBJECT_8_2 23
#define OBJECT_8_1 22
#define OBJECT_8_0 21
#define EXECUTE_CACHE_8_12 15
#define EXECUTE_CACHE_8_11 17
#define EXECUTE_CACHE_8_8 19
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_8_4);
      goto continuation_avoid_checkP_7;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_6;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_avoid_checkP_13)
DEFLABEL (continuation_avoid_checkP_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [16]);

DEFLABEL (label_18)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_2]))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_17;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd32.Lng))))
    goto label_17;
  (Wrd26.Obj) = ((Wrd30.pObj) [14]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_16)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_17)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_8_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_22;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define ENVIRONMENT_LABEL_9_3 23
#define DEBUGGING_LABEL_9_2 22
#define OBJECT_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_9 15
#define FREE_REFERENCE_9_0 18
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_9_4);
      goto operator_needs_no_heap_checkP_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operator_needs_no_heap_checkP_11)
DEFLABEL (operator_needs_no_heap_checkP_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_17;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_16)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_9_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_9_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define TAG_10_8 2
#define LABEL_10_9 9
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define EXECUTE_CACHE_10_10 11
#define EXECUTE_CACHE_10_6 13
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto wrap_with_continuation_entry_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_with_continuation_entry_6)
DEFLABEL (wrap_with_continuation_entry_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
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
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_15 13
#define LABEL_11_12 15
#define LABEL_11_19 17
#define LABEL_11_14 19
#define LABEL_11_16 21
#define LABEL_11_17 23
#define LABEL_11_20 25
#define LABEL_11_26 27
#define LABEL_11_21 29
#define LABEL_11_27 31
#define TAG_11_28 14
#define LABEL_11_29 33
#define LABEL_11_33 35
#define LABEL_11_30 37
#define LABEL_11_32 39
#define LABEL_11_36 41
#define ENVIRONMENT_LABEL_11_3 80
#define DEBUGGING_LABEL_11_2 79
#define OBJECT_11_3 78
#define OBJECT_11_2 77
#define OBJECT_11_1 76
#define OBJECT_11_0 75
#define EXECUTE_CACHE_11_37 43
#define EXECUTE_CACHE_11_35 45
#define EXECUTE_CACHE_11_34 47
#define EXECUTE_CACHE_11_31 49
#define EXECUTE_CACHE_11_25 51
#define EXECUTE_CACHE_11_24 53
#define EXECUTE_CACHE_11_23 55
#define EXECUTE_CACHE_11_22 57
#define EXECUTE_CACHE_11_18 59
#define EXECUTE_CACHE_11_13 61
#define EXECUTE_CACHE_11_11 63
#define EXECUTE_CACHE_11_8 65
#define EXECUTE_CACHE_11_6 67
#define FREE_REFERENCE_11_2 70
#define FREE_REFERENCE_11_1 71
#define FREE_REFERENCE_11_0 72
#define FREE_ASSIGNMENT_11_0 74
#define FREE_REFERENCES_LABEL_11_0 42
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto generate_continuation_entry_21;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_11_15);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_19);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_11_26);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_11_27);
      goto lambda_30;

    case 15:
      current_block = (Rpc - LABEL_11_29);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_11_33);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_11_30);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_11_32);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_11_36);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_continuation_entry_29)
DEFLABEL (generate_continuation_entry_21)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_39;
  Wrd5 = Wrd9;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_11_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_35]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_37;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_37;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_36)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_35;
  Wrd6 = Wrd10;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_37]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = ((Wrd10.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd10.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_27])));
  Rhp += 3;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd31 = Wrd26;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [4]) = (Wrd28.Obj);
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_26])), (Wrd10.pObj), (Wrd7.Obj));

DEFLABEL (label_25)
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_36])), (Wrd7.pObj));

DEFLABEL (label_27)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.Obj) = (current_block [OBJECT_11_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_19])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_15])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_11_27);

DEFLABEL (lambda_17)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto compute_next_continuation_offset_3;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_next_continuation_offset_6)
DEFLABEL (compute_next_continuation_offset_3)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_9)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_8;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_8;
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define LABEL_13_11 17
#define LABEL_13_12 19
#define LABEL_13_13 21
#define LABEL_13_14 23
#define LABEL_13_15 25
#define LABEL_13_16 27
#define LABEL_13_17 29
#define LABEL_13_18 31
#define LABEL_13_19 33
#define LABEL_13_21 35
#define LABEL_13_22 37
#define LABEL_13_23 39
#define LABEL_13_24 41
#define LABEL_13_25 43
#define LABEL_13_26 45
#define LABEL_13_27 47
#define LABEL_13_28 49
#define LABEL_13_29 51
#define LABEL_13_30 53
#define ENVIRONMENT_LABEL_13_3 72
#define DEBUGGING_LABEL_13_2 71
#define OBJECT_13_10 70
#define OBJECT_13_9 69
#define OBJECT_13_8 68
#define OBJECT_13_7 67
#define OBJECT_13_6 66
#define OBJECT_13_5 65
#define OBJECT_13_4 64
#define OBJECT_13_3 63
#define OBJECT_13_2 62
#define OBJECT_13_1 61
#define OBJECT_13_0 60
#define EXECUTE_CACHE_13_20 55
#define FREE_REFERENCE_13_1 58
#define FREE_REFERENCE_13_0 59
#define FREE_REFERENCES_LABEL_13_0 54
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd201;
  machine_word Wrd205;
  machine_word Wrd208;
  machine_word Wrd206;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd195;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd180;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd179;
  machine_word Wrd176;
  machine_word Wrd167;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd174;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd151;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd132;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd142;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd124;
  machine_word Wrd116;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd81;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd289;
  machine_word Wrd286;
  machine_word Wrd290;
  machine_word Wrd294;
  machine_word Wrd297;
  machine_word Wrd295;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd284;
  machine_word Wrd281;
  machine_word Wrd272;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd279;
  machine_word Wrd271;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd256;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd255;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd240;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd233;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd210;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd62;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_13_4);
      goto block_next_continuation_offset_35;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_38;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_39;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_13_12);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_13_14);
      goto label_55;

    case 11:
      current_block = (Rpc - LABEL_13_15);
      goto label_56;

    case 12:
      current_block = (Rpc - LABEL_13_16);
      goto label_57;

    case 13:
      current_block = (Rpc - LABEL_13_17);
      goto label_58;

    case 14:
      current_block = (Rpc - LABEL_13_18);
      goto label_59;

    case 15:
      current_block = (Rpc - LABEL_13_19);
      goto label_60;

    case 16:
      current_block = (Rpc - LABEL_13_21);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_13_22);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_13_23);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_13_24);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_13_25);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_13_26);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_13_27);
      goto label_52;

    case 23:
      current_block = (Rpc - LABEL_13_28);
      goto label_53;

    case 24:
      current_block = (Rpc - LABEL_13_29);
      goto label_54;

    case 25:
      current_block = (Rpc - LABEL_13_30);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_next_continuation_offset_62)
DEFLABEL (block_next_continuation_offset_35)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_73;
  Wrd5 = Wrd9;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_71;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_71;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_70)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_64;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_69;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd38.Lng))))
    goto label_69;
  (Wrd32.Obj) = ((Wrd36.pObj) [20]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_68)
  (Wrd46.Obj) = (Rsp [0]);
  if (! ((Wrd46.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_67;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd56.Lng))))
    goto label_67;
  (Wrd50.Obj) = ((Wrd54.pObj) [17]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_66)
  (Wrd64.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd65.Obj);
  goto loop_10;

DEFLABEL (label_67)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_13_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_13_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_13_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_72;

DEFLABEL (loop_63)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_13_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_118;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_118;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_117)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_116;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_116;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_116;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_115)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (Rsp [4]);
  if ((Wrd34.Obj) == (Wrd35.Obj))
    goto label_76;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_75;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_75;
  (Wrd36.Obj) = ((Wrd42.pObj) [4]);

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd52.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_75)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_13_7]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_30]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_43)
  (Wrd36.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (Wrd55.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  if ((Wrd56.Obj) == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_114;
  Wrd58 = Wrd62;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_112;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd72.Lng))))
    goto label_112;
  (Wrd64.Obj) = ((Wrd70.pObj) [3]);

DEFLABEL (label_111)
  (Wrd80.Obj) = (* (Rsp++));
  if ((Wrd64.Obj) == (Wrd80.Obj))
    goto label_98;

DEFLABEL (label_97)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 10))
    goto label_96;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd89.Lng))))
    goto label_96;
  (Wrd81.Obj) = ((Wrd87.pObj) [8]);

DEFLABEL (label_95)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd104.uLng) == 10))
    goto label_94;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd103.Lng))))
    goto label_94;
  (Wrd97.Obj) = ((Wrd101.pObj) [6]);

DEFLABEL (label_93)
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_92;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd110.Obj) = ((Wrd111.pObj) [0]);

DEFLABEL (label_91)
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd124.uLng) == 10))
    goto label_90;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd123.Lng))))
    goto label_90;
  (Wrd118.Obj) = ((Wrd121.pObj) [10]);
  (* (--Rsp)) = (Wrd118.Obj);

DEFLABEL (label_89)
  (Wrd130.Obj) = (Rsp [0]);
  if (! ((Wrd130.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_78;

DEFLABEL (label_77)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd142.uLng) == 10))
    goto label_88;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd140.Lng))))
    goto label_88;
  (Wrd132.Obj) = ((Wrd138.pObj) [17]);

DEFLABEL (label_87)
  if (! ((Wrd132.Obj) == (current_block [OBJECT_13_6])))
    goto label_77;
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 10))
    goto label_86;
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (Wrd159.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd159.Lng))))
    goto label_86;
  (Wrd151.Obj) = ((Wrd157.pObj) [4]);

DEFLABEL (label_85)
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd174.uLng) == 10))
    goto label_84;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd172.Obj) = ((Wrd171.pObj) [0]);
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd172.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd173.Lng))))
    goto label_84;
  (Wrd167.Obj) = ((Wrd171.pObj) [4]);

DEFLABEL (label_83)
  (Rsp [4]) = (Wrd167.Obj);
  (Wrd189.Obj) = (Rsp [0]);
  (Wrd190.uLng) = (OBJECT_TYPE (Wrd189.Obj));
  if (! ((Wrd190.uLng) == 10))
    goto label_82;
  (Wrd186.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd187.Obj) = ((Wrd186.pObj) [0]);
  (Wrd188.Lng) = (FIXNUM_TO_LONG (Wrd187.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd188.Lng))))
    goto label_82;
  (Wrd180.Obj) = ((Wrd186.pObj) [20]);

DEFLABEL (label_81)
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd180.Obj));
  if (! ((Wrd202.uLng) == 26))
    goto label_80;
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 26))
    goto label_80;
  (Wrd206.Lng) = (FIXNUM_TO_LONG (Wrd180.Obj));
  (Wrd208.Lng) = (FIXNUM_TO_LONG (Wrd203.Obj));
  (Wrd205.Lng) = ((Wrd206.Lng) + (Wrd208.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd205.Lng)))
    goto label_80;
  (Wrd201.Obj) = (LONG_TO_FIXNUM (Wrd205.Lng));

DEFLABEL (label_79)
  (Rsp [5]) = (Wrd201.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (label_80)
  (Wrd197.Obj) = (Rsp [1]);
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd200.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_54)
  (Wrd201.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd191.Obj) = (Rsp [0]);
  (Wrd192.Obj) = (current_block [OBJECT_13_2]);
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_28]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_53)
  (Wrd180.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd176.Obj) = (current_block [OBJECT_13_7]);
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_27]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_52)
  (Wrd167.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd162.Obj) = (Rsp [0]);
  (Wrd163.Obj) = (current_block [OBJECT_13_7]);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_51)
  (Wrd151.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.Obj) = (current_block [OBJECT_13_3]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_50)
  (Wrd132.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd126.Obj) = (current_block [OBJECT_13_10]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_9]), 1);

DEFLABEL (label_48)
  (Wrd110.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd106.Obj) = (current_block [OBJECT_13_8]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_47)
  (Wrd97.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd92.Obj) = (Rsp [2]);
  (Wrd93.Obj) = (current_block [OBJECT_13_5]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_46)
  (Wrd81.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd219.Obj) = (Rsp [1]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if (! ((Wrd220.uLng) == 10))
    goto label_110;
  (Wrd216.pObj) = (OBJECT_ADDRESS (Wrd219.Obj));
  (Wrd217.Obj) = ((Wrd216.pObj) [0]);
  (Wrd218.Lng) = (FIXNUM_TO_LONG (Wrd217.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd218.Lng))))
    goto label_110;
  (Wrd210.Obj) = ((Wrd216.pObj) [8]);

DEFLABEL (label_109)
  (Wrd233.uLng) = (OBJECT_TYPE (Wrd210.Obj));
  if (! ((Wrd233.uLng) == 10))
    goto label_108;
  (Wrd230.pObj) = (OBJECT_ADDRESS (Wrd210.Obj));
  (Wrd231.Obj) = ((Wrd230.pObj) [0]);
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd231.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd232.Lng))))
    goto label_108;
  (Wrd226.Obj) = ((Wrd230.pObj) [17]);

DEFLABEL (label_107)
  if (! ((Wrd226.Obj) == (current_block [OBJECT_13_6])))
    goto label_97;
  (Wrd249.Obj) = (Rsp [1]);
  (Wrd250.uLng) = (OBJECT_TYPE (Wrd249.Obj));
  if (! ((Wrd250.uLng) == 10))
    goto label_106;
  (Wrd246.pObj) = (OBJECT_ADDRESS (Wrd249.Obj));
  (Wrd247.Obj) = ((Wrd246.pObj) [0]);
  (Wrd248.Lng) = (FIXNUM_TO_LONG (Wrd247.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd248.Lng))))
    goto label_106;
  (Wrd240.Obj) = ((Wrd246.pObj) [4]);

DEFLABEL (label_105)
  (Rsp [3]) = (Wrd240.Obj);
  (Wrd265.Obj) = (Rsp [1]);
  (Wrd266.uLng) = (OBJECT_TYPE (Wrd265.Obj));
  if (! ((Wrd266.uLng) == 10))
    goto label_104;
  (Wrd262.pObj) = (OBJECT_ADDRESS (Wrd265.Obj));
  (Wrd263.Obj) = ((Wrd262.pObj) [0]);
  (Wrd264.Lng) = (FIXNUM_TO_LONG (Wrd263.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd264.Lng))))
    goto label_104;
  (Wrd256.Obj) = ((Wrd262.pObj) [8]);

DEFLABEL (label_103)
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd256.Obj));
  if (! ((Wrd279.uLng) == 10))
    goto label_102;
  (Wrd276.pObj) = (OBJECT_ADDRESS (Wrd256.Obj));
  (Wrd277.Obj) = ((Wrd276.pObj) [0]);
  (Wrd278.Lng) = (FIXNUM_TO_LONG (Wrd277.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd278.Lng))))
    goto label_102;
  (Wrd272.Obj) = ((Wrd276.pObj) [20]);

DEFLABEL (label_101)
  (Wrd291.uLng) = (OBJECT_TYPE (Wrd272.Obj));
  if (! ((Wrd291.uLng) == 26))
    goto label_100;
  (Wrd292.Obj) = (Rsp [0]);
  (Wrd293.uLng) = (OBJECT_TYPE (Wrd292.Obj));
  if (! ((Wrd293.uLng) == 26))
    goto label_100;
  (Wrd295.Lng) = (FIXNUM_TO_LONG (Wrd272.Obj));
  (Wrd297.Lng) = (FIXNUM_TO_LONG (Wrd292.Obj));
  (Wrd294.Lng) = ((Wrd295.Lng) + (Wrd297.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd294.Lng)))
    goto label_100;
  (Wrd290.Obj) = (LONG_TO_FIXNUM (Wrd294.Lng));

DEFLABEL (label_99)
  (Rsp [4]) = (Wrd290.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (label_100)
  (Wrd286.Obj) = (Rsp [0]);
  (Wrd289.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd289.Obj);
  (* (--Rsp)) = (Wrd286.Obj);
  (* (--Rsp)) = (Wrd272.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_60)
  (Wrd290.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd281.Obj) = (current_block [OBJECT_13_2]);
  (Wrd284.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd284.Obj);
  (* (--Rsp)) = (Wrd281.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_59)
  (Wrd272.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd267.Obj) = (Rsp [1]);
  (Wrd268.Obj) = (current_block [OBJECT_13_5]);
  (Wrd271.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd271.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  (* (--Rsp)) = (Wrd267.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_58)
  (Wrd256.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd251.Obj) = (Rsp [1]);
  (Wrd252.Obj) = (current_block [OBJECT_13_7]);
  (Wrd255.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd255.Obj);
  (* (--Rsp)) = (Wrd252.Obj);
  (* (--Rsp)) = (Wrd251.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_57)
  (Wrd240.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd235.Obj) = (current_block [OBJECT_13_3]);
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd238.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_56)
  (Wrd226.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd221.Obj) = (Rsp [1]);
  (Wrd222.Obj) = (current_block [OBJECT_13_5]);
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_55)
  (Wrd210.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.Obj) = (current_block [OBJECT_13_0]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_45)
  (Wrd64.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_12])), (Wrd59.pObj));

DEFLABEL (label_44)
  (Wrd58.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_117;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 14
#define DEBUGGING_LABEL_14_2 13
#define OBJECT_14_1 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_14_4);
      goto generate_continuation_entry_pop_extra_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_continuation_entry_pop_extra_7)
DEFLABEL (generate_continuation_entry_pop_extra_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_10)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_14_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define ENVIRONMENT_LABEL_15_3 24
#define DEBUGGING_LABEL_15_2 23
#define OBJECT_15_3 22
#define OBJECT_15_2 21
#define OBJECT_15_1 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_10 13
#define EXECUTE_CACHE_15_6 15
#define FREE_REFERENCE_15_0 18
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_4);
      goto continuation_extra_length_4;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_extra_length_9)
DEFLABEL (continuation_extra_length_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_15_3]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_15;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_15;
  (Wrd15.Obj) = ((Wrd21.pObj) [3]);

DEFLABEL (label_14)
  (Wrd31.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd31.Obj)))
    goto label_13;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_15_2]);
  goto label_10;

DEFLABEL (label_15)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_15_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_8])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_5 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define ENVIRONMENT_LABEL_16_3 29
#define DEBUGGING_LABEL_16_2 28
#define OBJECT_16_4 27
#define OBJECT_16_3 26
#define OBJECT_16_2 25
#define OBJECT_16_1 24
#define OBJECT_16_0 23
#define EXECUTE_CACHE_16_12 13
#define EXECUTE_CACHE_16_11 15
#define EXECUTE_CACHE_16_8 17
#define EXECUTE_CACHE_16_6 19
#define FREE_REFERENCE_16_0 22
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      goto push_continuation_extra_6;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (push_continuation_extra_11)
DEFLABEL (push_continuation_extra_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd10.Obj) = (current_block [OBJECT_16_2]);
  (Wrd11.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (label_12)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_18;
  Wrd16 = Wrd20;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_16;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd28.pObj) [3]);

DEFLABEL (label_15)
  (Wrd38.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd38.Obj))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_16)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_16_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_9])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define ENVIRONMENT_LABEL_17_3 27
#define DEBUGGING_LABEL_17_2 26
#define OBJECT_17_2 25
#define OBJECT_17_1 24
#define OBJECT_17_0 23
#define EXECUTE_CACHE_17_12 13
#define EXECUTE_CACHE_17_11 15
#define EXECUTE_CACHE_17_8 17
#define EXECUTE_CACHE_17_6 19
#define FREE_REFERENCE_17_0 22
#define FREE_REFERENCES_LABEL_17_0 12
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_17_4);
      goto pop_continuation_extra_4;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pop_continuation_extra_9)
DEFLABEL (pop_continuation_extra_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = (current_block [OBJECT_17_2]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (label_10)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_14;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_14;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_13)
  (Wrd30.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd30.Obj))
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_17_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_17 11
#define LABEL_18_9 13
#define LABEL_18_12 15
#define TAG_18_13 6
#define LABEL_18_10 17
#define TAG_18_11 7
#define LABEL_18_20 19
#define LABEL_18_21 21
#define LABEL_18_22 23
#define LABEL_18_15 25
#define LABEL_18_23 27
#define TAG_18_24 12
#define ENVIRONMENT_LABEL_18_3 47
#define DEBUGGING_LABEL_18_2 46
#define OBJECT_18_2 45
#define OBJECT_18_1 44
#define OBJECT_18_0 43
#define EXECUTE_CACHE_18_19 29
#define EXECUTE_CACHE_18_18 31
#define EXECUTE_CACHE_18_16 33
#define EXECUTE_CACHE_18_14 35
#define EXECUTE_CACHE_18_6 37
#define FREE_REFERENCE_18_0 40
#define FREE_ASSIGNMENT_18_0 42
#define FREE_REFERENCES_LABEL_18_0 28
#define NUMBER_OF_LINKER_SECTIONS_18_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto generate_rgraph_19;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_18_17);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_18_12);
      goto lambda_28;

    case 7:
      current_block = (Rpc - LABEL_18_10);
      goto swapB_27;

    case 8:
      current_block = (Rpc - LABEL_18_20);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_18_21);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_18_22);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_18_23);
      goto lambda_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_rgraph_26)
DEFLABEL (generate_rgraph_19)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_10])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  ((Wrd30.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (Rsp [2]) = (Wrd31.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_12])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [8]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_23])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd15.Obj) = (current_block [OBJECT_18_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_18_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (swapB_27)
  CLOSURE_HEADER (LABEL_18_10);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  Wrd5 = Wrd9;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_35)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_18_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_24)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_23)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_20])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_18_23);

DEFLABEL (lambda_15)
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

#define LABEL_19_5 3
#define LABEL_19_4 5
#define LABEL_19_6 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define LABEL_19_11 13
#define LABEL_19_12 15
#define LABEL_19_13 17
#define ENVIRONMENT_LABEL_19_3 34
#define DEBUGGING_LABEL_19_2 33
#define OBJECT_19_5 32
#define OBJECT_19_4 31
#define OBJECT_19_3 30
#define OBJECT_19_2 29
#define OBJECT_19_1 28
#define OBJECT_19_0 27
#define EXECUTE_CACHE_19_10 19
#define EXECUTE_CACHE_19_7 21
#define FREE_REFERENCE_19_0 24
#define FREE_ASSIGNMENT_19_0 26
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_19_4);
      goto node__rgraph_10;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node__rgraph_18)
DEFLABEL (node__rgraph_10)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd24.Obj) = (Rsp [0]);
  if (! ((Wrd24.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd52.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (label_19)
  Wrd27 = Wrd24;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_29;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_29;
  (Wrd30.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_28)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Rsp [0]) = Rvl;
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_27;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd39.Lng))))
    goto label_27;
  ((Wrd37.pObj) [3]) = Rvl;

DEFLABEL (label_26)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_25;
  Wrd7 = Wrd11;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd17.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_21)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_13])), (Wrd17.pObj), (Wrd13.Obj));

DEFLABEL (label_15)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_12])), (Wrd8.pObj));

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_19_0]);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 3);

DEFLABEL (label_16)
  goto label_26;

DEFLABEL (label_29)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_19_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_19_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd27.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_5 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_12 13
#define LABEL_20_8 15
#define LABEL_20_14 17
#define LABEL_20_18 19
#define LABEL_20_15 21
#define LABEL_20_17 23
#define ENVIRONMENT_LABEL_20_3 40
#define DEBUGGING_LABEL_20_2 39
#define OBJECT_20_0 38
#define EXECUTE_CACHE_20_19 25
#define EXECUTE_CACHE_20_16 27
#define EXECUTE_CACHE_20_13 29
#define EXECUTE_CACHE_20_11 31
#define EXECUTE_CACHE_20_7 33
#define FREE_REFERENCE_20_1 36
#define FREE_REFERENCE_20_0 37
#define FREE_REFERENCES_LABEL_20_0 24
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_20_4);
      goto generate_node_8;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_20_18);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_node_16)
DEFLABEL (generate_node_8)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (Wrd8.Obj))
    goto label_17;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [0]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_12])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_26;
  Wrd21 = Wrd25;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_24;
  Wrd27 = Wrd31;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_22;
  Wrd10 = Wrd14;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_18])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_10])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_9])), (Wrd22.pObj));

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define LABEL_21_11 15
#define LABEL_21_12 17
#define LABEL_21_13 19
#define LABEL_21_14 21
#define LABEL_21_15 23
#define LABEL_21_16 25
#define LABEL_21_17 27
#define LABEL_21_18 29
#define LABEL_21_19 31
#define LABEL_21_21 33
#define LABEL_21_23 35
#define LABEL_21_22 37
#define LABEL_21_27 39
#define LABEL_21_29 41
#define LABEL_21_7 43
#define LABEL_21_30 45
#define LABEL_21_28 47
#define LABEL_21_35 49
#define LABEL_21_33 51
#define LABEL_21_34 53
#define ENVIRONMENT_LABEL_21_3 93
#define DEBUGGING_LABEL_21_2 92
#define OBJECT_21_8 91
#define OBJECT_21_7 90
#define OBJECT_21_6 89
#define OBJECT_21_5 88
#define OBJECT_21_4 87
#define OBJECT_21_3 86
#define OBJECT_21_2 85
#define OBJECT_21_1 84
#define OBJECT_21_0 83
#define EXECUTE_CACHE_21_36 55
#define EXECUTE_CACHE_21_32 57
#define EXECUTE_CACHE_21_31 59
#define EXECUTE_CACHE_21_26 61
#define EXECUTE_CACHE_21_25 63
#define EXECUTE_CACHE_21_24 65
#define EXECUTE_CACHE_21_20 67
#define FREE_REFERENCE_21_12 70
#define FREE_REFERENCE_21_11 71
#define FREE_REFERENCE_21_10 72
#define FREE_REFERENCE_21_9 73
#define FREE_REFERENCE_21_8 74
#define FREE_REFERENCE_21_7 75
#define FREE_REFERENCE_21_6 76
#define FREE_REFERENCE_21_5 77
#define FREE_REFERENCE_21_4 78
#define FREE_REFERENCE_21_3 79
#define FREE_REFERENCE_21_2 80
#define FREE_REFERENCE_21_1 81
#define FREE_REFERENCE_21_0 82
#define FREE_REFERENCES_LABEL_21_0 54
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd86;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd92;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd89;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd115;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd129;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd136;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd147;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd144;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_21_4);
      goto generate_node_no_memoize_25;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_42;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_21_11);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_21_15);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_21_16);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_21_17);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_21_18);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_21_19);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_21_21);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_21_23);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_21_22);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_21_27);
      goto lambda_4;

    case 19:
      current_block = (Rpc - LABEL_21_29);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_21_30);
      goto label_43;

    case 22:
      current_block = (Rpc - LABEL_21_28);
      goto continuation_0;

    case 23:
      current_block = (Rpc - LABEL_21_35);
      goto label_44;

    case 24:
      current_block = (Rpc - LABEL_21_33);
      goto continuation_3;

    case 25:
      current_block = (Rpc - LABEL_21_34);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_node_no_memoize_46)
DEFLABEL (generate_node_no_memoize_25)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_87;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_87;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_86)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_85;
  Wrd22 = Wrd26;

DEFLABEL (label_84)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_82;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_81;
  Wrd30 = Wrd34;

DEFLABEL (label_80)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_77;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_76;
  Wrd38 = Wrd42;

DEFLABEL (label_75)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_72;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_5]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_71;
  Wrd46 = Wrd50;

DEFLABEL (label_70)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_67;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_7]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_66;
  Wrd54 = Wrd58;

DEFLABEL (label_65)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_62;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_9]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_61;
  Wrd62 = Wrd66;

DEFLABEL (label_60)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_57;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_11]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_56;
  Wrd70 = Wrd74;

DEFLABEL (label_55)
  (Wrd76.Obj) = (Rsp [0]);
  if (! ((Wrd76.Obj) == (Wrd70.Obj)))
    goto label_48;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (label_48)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_12]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_54;
  Wrd78 = Wrd82;

DEFLABEL (label_53)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_49;
  (Rsp [1]) = (Wrd84.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_21_3]);
  (Rsp [0]) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_25]));

DEFLABEL (label_49)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_22]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 10))
    goto label_51;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd98.Lng))))
    goto label_51;
  (Wrd92.Obj) = ((Wrd96.pObj) [7]);
  (* (--Rsp)) = (Wrd92.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_24]));

DEFLABEL (label_51)
  (Wrd101.Obj) = (Rsp [2]);
  (Wrd102.Obj) = (current_block [OBJECT_21_2]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_36)
DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_21])), (Wrd79.pObj));

DEFLABEL (label_35)
  (Wrd78.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_19])), (Wrd71.pObj));

DEFLABEL (label_34)
  (Wrd70.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_10]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_59;
  Wrd108 = Wrd112;

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd108.Obj);
  goto lambda_4;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_18])), (Wrd109.pObj));

DEFLABEL (label_37)
  (Wrd108.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_17])), (Wrd63.pObj));

DEFLABEL (label_33)
  (Wrd62.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_8]));
  (Wrd119.Obj) = ((Wrd116.pObj) [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd120.uLng) == 50)
    goto label_64;
  Wrd115 = Wrd119;

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd115.Obj);
  goto lambda_4;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_16])), (Wrd116.pObj));

DEFLABEL (label_38)
  (Wrd115.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_15])), (Wrd55.pObj));

DEFLABEL (label_32)
  (Wrd54.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_6]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_69;
  Wrd122 = Wrd126;

DEFLABEL (label_68)
  (Rsp [0]) = (Wrd122.Obj);
  goto lambda_4;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_14])), (Wrd123.pObj));

DEFLABEL (label_39)
  (Wrd122.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_13])), (Wrd47.pObj));

DEFLABEL (label_31)
  (Wrd46.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd130.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_4]));
  (Wrd133.Obj) = ((Wrd130.pObj) [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if ((Wrd134.uLng) == 50)
    goto label_74;
  Wrd129 = Wrd133;

DEFLABEL (label_73)
  (Rsp [0]) = (Wrd129.Obj);
  goto lambda_4;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_12])), (Wrd130.pObj));

DEFLABEL (label_40)
  (Wrd129.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_11])), (Wrd39.pObj));

DEFLABEL (label_30)
  (Wrd38.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd137.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_2]));
  (Wrd140.Obj) = ((Wrd137.pObj) [0]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if ((Wrd141.uLng) == 50)
    goto label_79;
  Wrd136 = Wrd140;

DEFLABEL (label_78)
  (Rsp [0]) = (Wrd136.Obj);
  goto lambda_4;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_10])), (Wrd137.pObj));

DEFLABEL (label_41)
  (Wrd136.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd31.pObj));

DEFLABEL (label_29)
  (Wrd30.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd154.Obj) = (Rsp [2]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 10))
    goto label_83;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd153.Lng))))
    goto label_83;
  (Wrd147.Obj) = ((Wrd151.pObj) [7]);
  (* (--Rsp)) = (Wrd147.Obj);
  goto label_50;

DEFLABEL (label_83)
  (Wrd156.Obj) = (Rsp [2]);
  (Wrd157.Obj) = (current_block [OBJECT_21_2]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_42)
  goto label_52;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd23.pObj));

DEFLABEL (label_28)
  (Wrd22.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21_22);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21_29);

DEFLABEL (label_92)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_91;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_91;
  (Wrd12.Obj) = ((Wrd18.pObj) [8]);

DEFLABEL (label_90)
  (Rsp [0]) = (Wrd12.Obj);
  if (! ((Wrd12.Obj) == (current_block [OBJECT_21_5])))
    goto label_88;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_31]));

DEFLABEL (label_88)
  if ((Wrd12.Obj) == (current_block [OBJECT_21_6]))
    goto label_89;
  (Wrd32.Obj) = (current_block [OBJECT_21_7]);
  (Rsp [0]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_25]));

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_32]));

DEFLABEL (label_91)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_21_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_30]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_47)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_21_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_28]))));
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
  INTERRUPT_CHECK (27, LABEL_21_28);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_94;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_94;
  (Wrd14.Obj) = ((Wrd18.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_26]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_33);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_36]));

DEFLABEL (label_94)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_21_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_35]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_93;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_8 9
#define LABEL_22_12 11
#define LABEL_22_9 13
#define TAG_22_10 5
#define LABEL_22_15 15
#define LABEL_22_13 17
#define LABEL_22_18 19
#define LABEL_22_19 21
#define LABEL_22_20 23
#define LABEL_22_21 25
#define LABEL_22_22 27
#define LABEL_22_16 29
#define ENVIRONMENT_LABEL_22_3 52
#define DEBUGGING_LABEL_22_2 51
#define OBJECT_22_9 50
#define OBJECT_22_8 49
#define OBJECT_22_7 48
#define OBJECT_22_6 47
#define OBJECT_22_5 46
#define OBJECT_22_4 45
#define OBJECT_22_3 44
#define OBJECT_22_2 43
#define OBJECT_22_1 42
#define OBJECT_22_0 41
#define EXECUTE_CACHE_22_23 31
#define EXECUTE_CACHE_22_17 33
#define EXECUTE_CACHE_22_14 35
#define EXECUTE_CACHE_22_11 37
#define EXECUTE_CACHE_22_7 39
#define FREE_REFERENCES_LABEL_22_0 30
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_22_4);
      goto rtl_precompressB_18;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_22_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto lambda_30;

    case 6:
      current_block = (Rpc - LABEL_22_15);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_22_18);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_22_19);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_22_20);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_22_21);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_22_22);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_22_16);
      goto lambda_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_precompressB_29)
DEFLABEL (rtl_precompressB_18)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_32;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_49;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_49;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_48)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 10))
    goto label_45;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd102.Lng))))
    goto label_45;
  (Wrd96.Obj) = (current_block [OBJECT_22_3]);
  ((Wrd100.pObj) [4]) = (Wrd96.Obj);

DEFLABEL (label_44)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_22_7]))
    goto label_39;
  if ((Wrd21.Obj) == (current_block [OBJECT_22_8]))
    goto label_33;
  (Wrd25.Obj) = (current_block [OBJECT_22_9]);
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_23]));

DEFLABEL (label_33)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_38;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_38;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_37)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_36;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_36;
  (Wrd43.Obj) = ((Wrd49.pObj) [3]);

DEFLABEL (label_35)
  (Wrd59.Obj) = (* (Rsp++));
  (Wrd66.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd67.Obj) = (current_block [OBJECT_22_8]);
  (Wrd68.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd62.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd62.pObj)));

DEFLABEL (label_34)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.Obj) = (current_block [OBJECT_22_2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_25)
  (Wrd43.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_22_4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_41;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd77.Lng))))
    goto label_41;
  (Wrd69.Obj) = ((Wrd75.pObj) [3]);

DEFLABEL (label_40)
  (Wrd91.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd92.Obj) = (current_block [OBJECT_22_7]);
  (Wrd93.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd87.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd87.pObj)));
  goto label_34;

DEFLABEL (label_41)
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.Obj) = (current_block [OBJECT_22_2]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_26)
  (Wrd69.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_22_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.Obj) = (current_block [OBJECT_22_4]);
  (Wrd107.Obj) = (current_block [OBJECT_22_3]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_5]), 3);

DEFLABEL (label_27)
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_22_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_22_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_22_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_51;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_51;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_50)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_17]));

DEFLABEL (label_51)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_22_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_31)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_22_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_4]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_53;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_53)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_52;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define ENVIRONMENT_LABEL_23_3 17
#define DEBUGGING_LABEL_23_2 16
#define OBJECT_23_4 15
#define OBJECT_23_3 14
#define OBJECT_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_23_4);
      goto rgraph_postcompressB_2;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rgraph_postcompressB_6)
DEFLABEL (rgraph_postcompressB_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_9;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_23_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_8;

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_23_5);
  (Wrd5.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 3);

DEFLABEL (label_11)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  ((Wrd16.pObj) [4]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_23_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define TAG_24_7 2
#define LABEL_24_9 9
#define TAG_24_10 3
#define LABEL_24_16 11
#define LABEL_24_17 13
#define LABEL_24_11 15
#define LABEL_24_19 17
#define LABEL_24_12 19
#define LABEL_24_14 21
#define LABEL_24_15 23
#define LABEL_24_25 25
#define LABEL_24_26 27
#define LABEL_24_22 29
#define LABEL_24_32 31
#define LABEL_24_23 33
#define LABEL_24_33 35
#define LABEL_24_24 37
#define LABEL_24_36 39
#define LABEL_24_37 41
#define LABEL_24_31 43
#define LABEL_24_29 45
#define TAG_24_30 21
#define LABEL_24_41 47
#define LABEL_24_27 49
#define TAG_24_28 23
#define LABEL_24_35 51
#define LABEL_24_38 53
#define LABEL_24_39 55
#define LABEL_24_50 57
#define LABEL_24_52 59
#define LABEL_24_46 61
#define LABEL_24_47 63
#define LABEL_24_56 65
#define LABEL_24_51 67
#define LABEL_24_48 69
#define LABEL_24_62 71
#define LABEL_24_49 73
#define LABEL_24_42 75
#define LABEL_24_54 77
#define LABEL_24_55 79
#define LABEL_24_57 81
#define LABEL_24_58 83
#define TAG_24_59 40
#define LABEL_24_67 85
#define LABEL_24_61 87
#define LABEL_24_63 89
#define LABEL_24_65 91
#define TAG_24_66 44
#define LABEL_24_72 93
#define LABEL_24_70 95
#define LABEL_24_68 97
#define LABEL_24_71 99
#define ENVIRONMENT_LABEL_24_3 148
#define DEBUGGING_LABEL_24_2 147
#define OBJECT_24_9 146
#define OBJECT_24_8 145
#define OBJECT_24_7 144
#define OBJECT_24_6 143
#define OBJECT_24_5 142
#define OBJECT_24_4 141
#define OBJECT_24_3 140
#define OBJECT_24_2 139
#define OBJECT_24_1 138
#define OBJECT_24_0 137
#define EXECUTE_CACHE_24_69 101
#define EXECUTE_CACHE_24_60 103
#define EXECUTE_CACHE_24_53 105
#define EXECUTE_CACHE_24_64 107
#define EXECUTE_CACHE_24_45 109
#define EXECUTE_CACHE_24_44 111
#define EXECUTE_CACHE_24_43 113
#define EXECUTE_CACHE_24_40 115
#define EXECUTE_CACHE_24_34 117
#define EXECUTE_CACHE_24_21 119
#define EXECUTE_CACHE_24_20 121
#define EXECUTE_CACHE_24_18 123
#define EXECUTE_CACHE_24_13 125
#define EXECUTE_CACHE_24_8 127
#define FREE_REFERENCE_24_6 130
#define FREE_REFERENCE_24_5 131
#define FREE_REFERENCE_24_4 132
#define FREE_REFERENCE_24_3 133
#define FREE_REFERENCE_24_2 134
#define FREE_REFERENCE_24_1 135
#define FREE_REFERENCE_24_0 136
#define FREE_REFERENCES_LABEL_24_0 100
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlgen_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_24_4);
      goto rgraph_compressB_45;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto lambda_63;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto lambda_64;

    case 4:
      current_block = (Rpc - LABEL_24_16);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_24_17);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_24_19);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_24_25);
      goto label_50;

    case 12:
      current_block = (Rpc - LABEL_24_26);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_24_22);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_24_32);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_24_23);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_24_33);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_24_36);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_24_37);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_24_31);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_24_29);
      goto loop_67;

    case 22:
      current_block = (Rpc - LABEL_24_41);
      goto continuation_27;

    case 23:
      current_block = (Rpc - LABEL_24_27);
      goto next_30;

    case 24:
      current_block = (Rpc - LABEL_24_35);
      goto continuation_7;

    case 25:
      current_block = (Rpc - LABEL_24_38);
      goto continuation_12;

    case 26:
      current_block = (Rpc - LABEL_24_39);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_24_50);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_24_52);
      goto label_56;

    case 29:
      current_block = (Rpc - LABEL_24_46);
      goto continuation_14;

    case 30:
      current_block = (Rpc - LABEL_24_47);
      goto continuation_13;

    case 31:
      current_block = (Rpc - LABEL_24_56);
      goto delete_block_edgesB_41;

    case 32:
      current_block = (Rpc - LABEL_24_51);
      goto continuation_25;

    case 33:
      current_block = (Rpc - LABEL_24_48);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_24_62);
      goto label_58;

    case 35:
      current_block = (Rpc - LABEL_24_49);
      goto continuation_20;

    case 36:
      current_block = (Rpc - LABEL_24_42);
      goto continuation_28;

    case 37:
      current_block = (Rpc - LABEL_24_54);
      goto continuation_16;

    case 38:
      current_block = (Rpc - LABEL_24_55);
      goto continuation_15;

    case 39:
      current_block = (Rpc - LABEL_24_57);
      goto continuation_36;

    case 40:
      current_block = (Rpc - LABEL_24_58);
      goto lambda_69;

    case 41:
      current_block = (Rpc - LABEL_24_67);
      goto label_59;

    case 42:
      current_block = (Rpc - LABEL_24_61);
      goto continuation_23;

    case 43:
      current_block = (Rpc - LABEL_24_63);
      goto continuation_17;

    case 44:
      current_block = (Rpc - LABEL_24_65);
      goto lambda_70;

    case 45:
      current_block = (Rpc - LABEL_24_72);
      goto label_60;

    case 46:
      current_block = (Rpc - LABEL_24_70);
      goto continuation_33;

    case 47:
      current_block = (Rpc - LABEL_24_68);
      goto continuation_32;

    case 48:
      current_block = (Rpc - LABEL_24_71);
      goto continuation_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rgraph_compressB_62)
DEFLABEL (rgraph_compressB_45)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_24_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_12);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_24_9);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_88;
  Wrd11 = Wrd15;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_86;
  Wrd17 = Wrd21;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_84;
  Wrd8 = Wrd12;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_82;
  Wrd14 = Wrd18;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_80;
  Wrd8 = Wrd12;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_6]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_78;
  Wrd14 = Wrd18;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_45]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_23);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_76;
  Wrd5 = Wrd9;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_34]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_22);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_24_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_27])));
  Rhp += 2;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_29])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  Wrd26 = Wrd30;
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  ((Wrd26.pObj) [3]) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_3]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_74;
  Wrd13 = Wrd17;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_47]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [6]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto delete_block_edgesB_41;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_55]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [6]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_24_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto delete_block_edgesB_41;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24_55);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24_54);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_63]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_64]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24_63);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_72;

DEFLABEL (label_71)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 3);

DEFLABEL (label_72)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_71;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_24_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_32])), (Wrd14.pObj));

DEFLABEL (label_52)
  (Wrd13.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_33])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_37])), (Wrd15.pObj));

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_36])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_26])), (Wrd15.pObj));

DEFLABEL (label_51)
  (Wrd14.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_25])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_17])), (Wrd18.pObj));

DEFLABEL (label_48)
  (Wrd17.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_16])), (Wrd12.pObj));

DEFLABEL (label_47)
  (Wrd11.Obj) = Rvl;
  goto label_87;

DEFLABEL (lambda_65)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_24_11);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_90;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_90;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_89)
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_20]));

DEFLABEL (label_90)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (loop_67)
  CLOSURE_HEADER (LABEL_24_29);

DEFLABEL (loop_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_40]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24_39);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_51]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_92;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_92;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_53]));

DEFLABEL (label_92)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_24_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_52]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_56)
DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_48]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_49]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_95;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd40.Lng))))
    goto label_95;
  (Wrd34.Obj) = ((Wrd38.pObj) [7]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_91;

DEFLABEL (label_95)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_24_4]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_50]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_57)
  goto label_93;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_24_51);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto next_30;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto next_30;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_97;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_97;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_96)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_53]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_24_61);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto next_30;

DEFLABEL (label_97)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_62]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (next_66)
DEFLABEL (next_30)
  INTERRUPT_CHECK (26, LABEL_24_27);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_99;

DEFLABEL (label_98)
  Rvl = (current_block [OBJECT_24_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_24_41);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_98;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_42]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_24_42);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  ((Wrd12.pObj) [0]) = (Wrd5.Obj);
  (Wrd18.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd18.Obj);
  goto loop_26;

DEFLABEL (delete_block_edgesB_68)
DEFLABEL (delete_block_edgesB_41)
  INTERRUPT_CHECK (26, LABEL_24_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_58])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_60]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_24_57);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_65])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_24_58);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_109;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_109;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_108)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_103;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_70]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_44]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_24_70);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_100;

DEFLABEL (label_101)
  Rvl = (current_block [OBJECT_24_5]);

DEFLABEL (label_100)
DEFLABEL (label_102)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_104;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_68]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_69]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_24_68);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_105;

DEFLABEL (label_106)
  Rvl = (current_block [OBJECT_24_5]);

DEFLABEL (label_105)
DEFLABEL (label_107)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_24_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_67]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_24_65);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_71]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_113;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_113;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_112)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_24_71);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_24_9]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_111;

DEFLABEL (label_110)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 3);

DEFLABEL (label_111)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_110;
  ((Wrd15.pObj) [6]) = Rvl;
  Rvl = (current_block [OBJECT_24_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_24_9]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_72]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_112;

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
rtlgen_so_de4b0c1371be521f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	2,
	3,
	3,
	2,
	2,
	2,
	1,
	2,
	1,
	3,
	1,
	2,
	1,
	2,
	1,
	2,
	2,
	3,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 24)
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

static const struct liarc_code_S arr_decl_rtlgen_so_de4b0c1371be521f [24] =
  {
    { "rtlgen_so_code_1", 45, rtlgen_so_code_1 },
    { "rtlgen_so_code_2", 11, rtlgen_so_code_2 },
    { "rtlgen_so_code_3", 11, rtlgen_so_code_3 },
    { "rtlgen_so_code_4", 8, rtlgen_so_code_4 },
    { "rtlgen_so_code_5", 35, rtlgen_so_code_5 },
    { "rtlgen_so_code_6", 4, rtlgen_so_code_6 },
    { "rtlgen_so_code_7", 32, rtlgen_so_code_7 },
    { "rtlgen_so_code_8", 6, rtlgen_so_code_8 },
    { "rtlgen_so_code_9", 5, rtlgen_so_code_9 },
    { "rtlgen_so_code_10", 4, rtlgen_so_code_10 },
    { "rtlgen_so_code_11", 20, rtlgen_so_code_11 },
    { "rtlgen_so_code_12", 3, rtlgen_so_code_12 },
    { "rtlgen_so_code_13", 26, rtlgen_so_code_13 },
    { "rtlgen_so_code_14", 3, rtlgen_so_code_14 },
    { "rtlgen_so_code_15", 5, rtlgen_so_code_15 },
    { "rtlgen_so_code_16", 5, rtlgen_so_code_16 },
    { "rtlgen_so_code_17", 5, rtlgen_so_code_17 },
    { "rtlgen_so_code_18", 13, rtlgen_so_code_18 },
    { "rtlgen_so_code_19", 8, rtlgen_so_code_19 },
    { "rtlgen_so_code_20", 11, rtlgen_so_code_20 },
    { "rtlgen_so_code_21", 26, rtlgen_so_code_21 },
    { "rtlgen_so_code_22", 14, rtlgen_so_code_22 },
    { "rtlgen_so_code_23", 3, rtlgen_so_code_23 },
    { "rtlgen_so_code_24", 49, rtlgen_so_code_24 }
  };

int
decl_rtlgen_so_de4b0c1371be521f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlgen_so_de4b0c1371be521f);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlgen.so", 3, decl_rtlgen_so_de4b0c1371be521f, rtlgen_so_de4b0c1371be521f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlgen_so_data_de4b0c1371be521f [6792] =
  "\xaf\x01\x3c\x95\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\xc2\xb9"
  "\x81\x1d\x08\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d"
  "\x1c\x25\xb2\xb3\xb4\xb5\xb6\xb7\x1b\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x1d\xb3\xb6\x25\xb3\xb2\xb6\x24"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1d\xb4\xb7\x25\xb4\xb2\xb7\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x85\x86\xb1\x84\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\x1c"
  "\x02\x02\x02\x80\x02\x84\xc1\x02\x02\x02\x82\x83\x07\xb1\x02\x0d"
  "\x1c\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x07\xb1\x02\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x02\x0d\x1c\x0d"
  "\x82\x0d\x1c\x0d\x08\x02\x83\x02\x02\xb1\x02\x0d\x1c\x0d\x0d\x0d"
  "\x0d\x0d\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x02\x08\xb1\x02\x28\x1b\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x82\xb1\x80\x0d\x24\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x08\x1b\x25\x1b\x1b\x0d"
  "\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\xc1\x85\x83\x1b\x02\x86\x02\x02\xb1\x82"
  "\x1b\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x83\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x81\x80\xb1\x82\x1b\x24\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\x0d\x1c\xb1\x82\x1b\x24\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x82\x1b\x24\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x81\x1b\x25\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x85\xc2\x0c"
  "\xb1\x82\xb5\x25\xb5\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x0d\x0d\x02\x0c\x86\xb1\x80\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0d\x0d\x80\xc3\x1c\x83\x07\x82\xb1\x81"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x83\xb1\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x1b\x80\x02\x07\x86\x1d\x08\xb1"
  "\x82\x1b\x0d\xb7\x0d\x1c\x0d\xb6\x0d\x24\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x0c\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x17\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x0d\x0d\x0d\x1b\xb7\xb6\xb5\xb4\xb3\xb2\x17\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x72\x74\x6c\x67\x65\x6e\x2f\x72\x74\x6c\x67\x65"
  "\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x02\x13\x2a\x67\x65\x6e\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2d\x71\x75\x65\x75\x65\x2a\x14\x2a\x71\x75\x65\x75"
  "\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a\x17\x2a"
  "\x71\x75\x65\x75\x65\x64\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x73\x2a\x0a\x2a\x72\x67\x72\x61\x70\x68\x73\x2a\x0d"
  "\x2a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a\x10\x2a\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x2a\x16\x2a\x65\x78"
  "\x74\x72\x61\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x73\x2a\x09\x08\x09\x08\x03\x13\x63\x6c\x65\x61\x6e\x75\x70\x2d"
  "\x6e\x6f\x6f\x70\x2d\x6e\x6f\x64\x65\x73\x02\x0b\x6d\x61\x6b\x65"
  "\x2d\x71\x75\x65\x75\x65\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d"
  "\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0a\x03\x14\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x0b\x04\x12\x71\x75\x65\x75\x65\x2d\x6d\x61\x70\x21\x2f\x75\x6e"
  "\x73\x61\x66\x65\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x04\x09"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x0c\x04\x18\x6c\x69\x73\x74\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69"
  "\x76\x65\x03\x11\x72\x67\x72\x61\x70\x68\x2f\x63\x6f\x6d\x70\x72"
  "\x65\x73\x73\x21\x0d\x03\x15\x72\x67\x72\x61\x70\x68\x2f\x70\x6f"
  "\x73\x74\x63\x6f\x6d\x70\x72\x65\x73\x73\x21\x0e\x04\x07\x61\x70"
  "\x70\x65\x6e\x64\x0c\x30\x5c\x81\x85\x02\x2f\x5a\x81\x8d\x02\x2e"
  "\x58\x81\x8b\x02\x2d\x56\x81\x89\x02\x2c\x54\x81\x83\x02\x2b\x52"
  "\x81\x8d\x02\x2a\x50\x81\x85\x02\x29\x4e\x83\x04\x28\x4c\x81\x87"
  "\x02\x27\x4a\x81\x85\x02\x26\x48\x81\x87\x02\x25\x46\x81\x83\x02"
  "\x24\x44\x83\x04\x23\x42\x81\x83\x02\x22\x40\x83\x04\x21\x3e\x81"
  "\x89\x02\x20\x3c\x81\x83\x02\x1f\x3a\x81\x87\x02\x1e\x38\x81\x83"
  "\x02\x1d\x36\x81\x83\x02\x1c\x34\x81\x85\x02\x1b\x32\x81\x83\x02"
  "\x1a\x30\x81\x83\x02\x19\x2e\x81\x85\x02\x18\x2c\x81\x83\x02\x17"
  "\x2a\x81\x83\x02\x16\x28\x81\x85\x02\x15\x26\x81\x83\x02\x14\x24"
  "\x81\x83\x02\x13\x22\x81\x85\x02\x12\x20\x81\x83\x02\x11\x1e\x81"
  "\x83\x02\x10\x1c\x81\x85\x02\x0f\x1a\x81\x83\x02\x0e\x18\x81\x83"
  "\x02\x0d\x16\x81\x85\x02\x0c\x14\x81\x83\x02\x0b\x12\x81\x83\x02"
  "\x0a\x10\x81\x85\x02\x09\x0e\x81\x83\x02\x08\x0c\x81\x83\x02\x07"
  "\x0a\x81\x83\x02\x06\x08\x81\x8f\x02\x05\x06\x81\x83\x02\x04\x04"
  "\x83\x04\x5b\x8a\x01\x0f\x02\x02\x03\x04\x04\x05\x6d\x65\x6d\x71"
  "\x10\x04\x10\x65\x6e\x71\x75\x65\x75\x65\x21\x2f\x75\x6e\x73\x61"
  "\x66\x65\x11\x03\x13\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x12\x04\x3b\x18\x81\x83\x02\x3a\x16"
  "\x81\x85\x02\x39\x14\x81\x83\x02\x38\x12\x81\x83\x02\x37\x10\x81"
  "\x83\x02\x36\x0e\x81\x83\x02\x35\x0c\x81\x83\x02\x34\x0a\x81\x87"
  "\x02\x33\x08\x81\x83\x02\x32\x06\x81\x85\x02\x31\x04\x83\x04\x17"
  "\x29\x13\x02\x02\x03\x04\x04\x10\x04\x11\x03\x16\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x11\x04\x46\x18\x81\x83\x02\x45\x16\x81\x85\x02\x44\x14\x81"
  "\x83\x02\x43\x12\x81\x83\x02\x42\x10\x81\x83\x02\x41\x0e\x81\x83"
  "\x02\x40\x0c\x81\x83\x02\x3f\x0a\x81\x87\x02\x3e\x08\x81\x83\x02"
  "\x3d\x06\x81\x85\x02\x3c\x04\x83\x04\x17\x29\x14\x02\x0e\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x6e\x6f\x64\x65\x15\x02\x03\x0f\x65"
  "\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x16\x04\x10"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x67\x72\x61\x70\x68\x17"
  "\x06\x0e\x6d\x61\x6b\x65\x2d\x72\x74\x6c\x2d\x65\x78\x70\x72\x04"
  "\x4e\x12\x81\x89\x02\x4d\x10\x81\x89\x02\x4c\x0e\x81\x87\x02\x4b"
  "\x0c\x81\x87\x02\x4a\x0a\x81\x83\x02\x49\x08\x81\x89\x02\x48\x06"
  "\x81\x85\x02\x47\x04\x83\x04\x11\x21\x18\x02\x07\x61\x6c\x77\x61"
  "\x79\x73\x19\x11\x08\x1f\x0f\x04\x63\x64\x72\x0c\x0d\x0e\x0b\x11"
  "\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b"
  "\x1a\x1c\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x03\x16"
  "\x03\x15\x04\x17\x03\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f"
  "\x74\x79\x70\x65\x05\x1a\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x1b"
  "\x03\x1a\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x79"
  "\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x1c\x03\x13\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x3f"
  "\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x1f\x62\x6c\x6f\x63\x6b\x2f"
  "\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x6f\x66\x66\x73\x65\x74\x1d\x0f\x13\x6d\x61\x6b\x65\x2d"
  "\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x09\x66"
  "\x6f\x72\x2d\x61\x6c\x6c\x3f\x1e\x03\x0b\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x3f\x03\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x69\x6e\x6c\x69\x6e\x65\x2d\x63\x6f\x64\x65\x3f\x0e\x71\x48\x81"
  "\x85\x02\x70\x46\x81\x85\x02\x6f\x44\x81\x87\x02\x6e\x42\x81\x85"
  "\x02\x6d\x40\x81\x85\x02\x6c\x3e\x81\x83\x02\x6b\x3c\x83\x04\x6a"
  "\x3a\x81\x83\x02\x69\x38\x81\x83\x02\x68\x36\x81\x9b\x02\x67\x34"
  "\x81\x9b\x02\x66\x32\x81\x9d\x02\x65\x30\x81\x9b\x02\x64\x2e\x81"
  "\x9f\x02\x63\x2c\x81\x97\x02\x62\x2a\x81\x93\x02\x61\x28\x81\x91"
  "\x02\x60\x26\x81\x93\x02\x5f\x24\x81\x93\x02\x5e\x22\x81\x8f\x02"
  "\x5d\x20\x81\x91\x02\x5c\x1e\x81\x8d\x02\x5b\x1c\x81\x8b\x02\x5a"
  "\x1a\x81\x8d\x02\x59\x18\x81\x8b\x02\x58\x16\x81\x89\x02\x57\x14"
  "\x81\x87\x02\x56\x12\x81\x8b\x02\x55\x10\x81\x87\x02\x54\x0e\x81"
  "\x87\x02\x53\x0c\x81\x87\x02\x52\x0a\x81\x85\x02\x51\x08\x81\x83"
  "\x02\x50\x06\x81\x89\x02\x4f\x04\x83\x04\x47\x78\x1f\x02\x0b\x03"
  "\x16\x05\x1b\x03\x15\x04\x75\x0a\x81\x85\x02\x74\x08\x81\x83\x02"
  "\x73\x06\x81\x87\x02\x72\x04\x83\x04\x09\x16\x1b\x02\x08\x1a\x49"
  "\x6c\x6c\x65\x67\x61\x6c\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x20\x74\x79\x70\x65\x11\x06\x66\x65\x74\x63\x68\x20"
  "\x06\x76\x61\x6c\x75\x65\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x21\x14\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x68\x65\x61\x64\x65\x72\x1f\x14"
  "\x0b\x0f\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78"
  "\x74\x2d\x65\x64\x67\x65\x21\x22\x17\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x75\x73\x68\x1b"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x18\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x76\x61\x6c"
  "\x75\x65\x1c\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x19\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x2f\x65\x66\x66\x65\x63\x74\x07\x03\x16\x04\x21\x63\x6f\x6d\x70"
  "\x75\x74\x65\x2d\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2d\x6f\x66\x66\x73\x65\x74\x23\x03\x26\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x2f\x70\x6f\x70\x2d\x65"
  "\x78\x74\x72\x61\x24\x04\x17\x07\x16\x6d\x61\x6b\x65\x2d\x72\x74"
  "\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x25\x03"
  "\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x61\x76"
  "\x6f\x69\x64\x2d\x63\x68\x65\x63\x6b\x3f\x26\x03\x15\x03\x15\x6d"
  "\x61\x6b\x65\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63\x74"
  "\x69\x6f\x6e\x27\x03\x0e\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70"
  "\x75\x73\x68\x28\x03\x16\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x06\x0d\x73\x63\x66"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x21\x29\x04\x06\x65\x72\x72\x6f"
  "\x72\x2a\x04\x0b\x6e\x6f\x64\x65\x2d\x3e\x73\x63\x66\x67\x2b\x03"
  "\x0c\x6d\x61\x6b\x65\x2d\x73\x62\x6c\x6f\x63\x6b\x2c\x04\x14\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x10\x95\x01\x42\x81\x83\x02\x94\x01\x40\x81\x83\x02\x93"
  "\x01\x3e\x81\x8d\x02\x92\x01\x3c\x81\x8b\x02\x91\x01\x3a\x81\x8d"
  "\x02\x90\x01\x38\x81\x8b\x02\x8f\x01\x36\x81\x83\x02\x8e\x01\x34"
  "\x81\x83\x02\x8d\x01\x32\x81\x83\x02\x8c\x01\x30\x81\x83\x02\x8b"
  "\x01\x2e\x81\x83\x02\x8a\x01\x2c\x81\x83\x02\x89\x01\x2a\x81\x8b"
  "\x02\x88\x01\x28\x81\x89\x02\x87\x01\x26\x81\x89\x02\x86\x01\x24"
  "\x81\x89\x02\x85\x01\x22\x81\x89\x02\x84\x01\x20\x81\x89\x02\x83"
  "\x01\x1e\x81\x87\x02\x82\x01\x1c\x81\x85\x02\x81\x01\x1a\x81\x8b"
  "\x02\x80\x01\x18\x81\x8b\x02\x7f\x16\x81\x8b\x02\x7e\x14\x81\x85"
  "\x02\x7d\x12\x81\x87\x02\x7c\x10\x81\x8f\x02\x7b\x0e\x81\x8f\x02"
  "\x7a\x0c\x81\x8d\x02\x79\x0a\x81\x87\x02\x78\x08\x81\x8d\x02\x77"
  "\x06\x81\x83\x02\x76\x04\x83\x04\x41\x79\x2d\x02\x09\x0a\x0e\x10"
  "\x04\x1e\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e"
  "\x2d\x76\x61\x6c\x75\x65\x03\x1e\x6f\x70\x65\x72\x61\x74\x6f\x72"
  "\x2f\x6e\x65\x65\x64\x73\x2d\x6e\x6f\x2d\x68\x65\x61\x70\x2d\x63"
  "\x68\x65\x63\x6b\x3f\x1e\x04\x9b\x01\x0e\x81\x83\x02\x9a\x01\x0c"
  "\x81\x85\x02\x99\x01\x0a\x83\x04\x98\x01\x08\x81\x83\x02\x97\x01"
  "\x06\x81\x83\x02\x96\x01\x04\x83\x04\x0d\x1c\x2e\x02\x0a\x0d\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x02\x03\x15\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3f\x03\x1a\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\xa0\x01"
  "\x0c\x81\x83\x02\x9f\x01\x0a\x81\x83\x02\x9e\x01\x08\x81\x85\x02"
  "\x9d\x01\x06\x81\x83\x02\x9c\x01\x04\x83\x04\x0b\x18\x2f\x02\x0b"
  "\x03\x1c\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x30\x05\x29"
  "\x03\xa4\x01\x0a\x81\x89\x02\xa3\x01\x08\x81\x89\x02\xa2\x01\x06"
  "\x81\x85\x02\xa1\x01\x04\x84\x06\x09\x11\x29\x02\x0c\x21\x09\x02"
  "\x22\x09\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x67\x72\x61"
  "\x70\x68\x2a\x22\x04\x03\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x02\x0f"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x62\x65\x6c\x03\x17"
  "\x70\x6f\x70\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2d\x65\x78\x74\x72\x61\x21\x03\x18\x70\x75\x73\x68\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x78\x74\x72\x61"
  "\x31\x03\x27\x04\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x64\x2d\x64"
  "\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x04"
  "\x11\x73\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67"
  "\x21\x27\x04\x2b\x03\x2c\x03\x19\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74"
  "\x05\x0d\x63\x72\x65\x61\x74\x65\x2d\x65\x64\x67\x65\x21\x2c\x04"
  "\x23\x07\x25\x0e\xb8\x01\x2a\x81\x97\x02\xb7\x01\x28\x81\x93\x02"
  "\xb6\x01\x26\x81\x93\x02\xb5\x01\x24\x81\x95\x02\xb4\x01\x22\x81"
  "\x91\x02\xb3\x01\x20\x81\x85\x02\xb2\x01\x1e\x81\x8f\x02\xb1\x01"
  "\x1c\x81\x8b\x02\xb0\x01\x1a\x81\x8d\x02\xaf\x01\x18\x81\x91\x02"
  "\xae\x01\x16\x81\x8f\x02\xad\x01\x14\x81\x8b\x02\xac\x01\x12\x81"
  "\x8b\x02\xab\x01\x10\x81\x89\x02\xaa\x01\x0e\x81\x8d\x02\xa9\x01"
  "\x0c\x81\x89\x02\xa8\x01\x0a\x81\x87\x02\xa7\x01\x08\x81\x85\x02"
  "\xa6\x01\x06\x81\x83\x02\xa5\x01\x04\x83\x04\x29\x51\x2b\x02\x0d"
  "\x04\x1d\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2d\x65\x78\x74\x72\x61\x2d\x6c\x65\x6e\x67\x74\x68\x25\x03\xbb"
  "\x01\x08\x81\x87\x02\xba\x01\x06\x81\x85\x02\xb9\x01\x04\x84\x06"
  "\x07\x0f\x32\x02\x0e\x0a\x04\x63\x61\x72\x19\x08\x11\x14\x1a\x18"
  "\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x03\x04\x1d\x02\xd5\x01\x36\x81\x8f"
  "\x02\xd4\x01\x34\x81\x8d\x02\xd3\x01\x32\x81\x8d\x02\xd2\x01\x30"
  "\x81\x8d\x02\xd1\x01\x2e\x81\x8d\x02\xd0\x01\x2c\x81\x8d\x02\xcf"
  "\x01\x2a\x81\x8b\x02\xce\x01\x28\x81\x8b\x02\xcd\x01\x26\x81\x8b"
  "\x02\xcc\x01\x24\x81\x8b\x02\xcb\x01\x22\x81\x8b\x02\xca\x01\x20"
  "\x81\x8b\x02\xc9\x01\x1e\x81\x8b\x02\xc8\x01\x1c\x81\x8b\x02\xc7"
  "\x01\x1a\x81\x8b\x02\xc6\x01\x18\x81\x8b\x02\xc5\x01\x16\x81\x8d"
  "\x02\xc4\x01\x14\x81\x8b\x02\xc3\x01\x12\x81\x8d\x02\xc2\x01\x10"
  "\x81\x8d\x02\xc1\x01\x0e\x81\x8d\x02\xc0\x01\x0c\x81\x87\x02\xbf"
  "\x01\x0a\x81\x85\x02\xbe\x01\x08\x81\x87\x02\xbd\x01\x06\x81\x85"
  "\x02\xbc\x01\x04\x84\x06\x35\x49\x19\x02\x0f\x03\x21\x02\xd8\x01"
  "\x08\x81\x83\x02\xd7\x01\x06\x81\x83\x02\xd6\x01\x04\x83\x04\x07"
  "\x0f\x33\x02\x10\x1a\x02\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b"
  "\x3f\x34\x03\x1c\x03\xdd\x01\x0c\x81\x85\x02\xdc\x01\x0a\x81\x83"
  "\x02\xdb\x01\x08\x81\x83\x02\xda\x01\x06\x81\x83\x02\xd9\x01\x04"
  "\x83\x04\x0b\x19\x35\x02\x11\x20\x0c\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x20\x1a\x02\x03\x34\x02\x13\x72\x74\x6c\x3a\x6d"
  "\x61\x6b\x65\x2d\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x03\x1c\x03"
  "\x28\x05\xe2\x01\x0c\x81\x85\x02\xe1\x01\x0a\x81\x83\x02\xe0\x01"
  "\x08\x81\x83\x02\xdf\x01\x06\x81\x83\x02\xde\x01\x04\x83\x04\x0b"
  "\x1e\x28\x02\x12\x20\x1a\x02\x03\x34\x02\x12\x72\x74\x6c\x3a\x6d"
  "\x61\x6b\x65\x2d\x70\x6f\x70\x2d\x6c\x69\x6e\x6b\x03\x1c\x03\x0d"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x05\xe7\x01\x0c"
  "\x81\x85\x02\xe6\x01\x0a\x81\x83\x02\xe5\x01\x08\x81\x83\x02\xe4"
  "\x01\x06\x81\x83\x02\xe3\x01\x04\x83\x04\x0b\x1c\x34\x02\x13\x02"
  "\x22\x02\x22\x02\x03\x0d\x6e\x6f\x64\x65\x2d\x3e\x72\x67\x72\x61"
  "\x70\x68\x22\x05\x0a\x04\x17\x61\x64\x64\x2d\x72\x67\x72\x61\x70"
  "\x68\x2d\x65\x6e\x74\x72\x79\x2d\x65\x64\x67\x65\x21\x05\x2c\x03"
  "\x11\x72\x74\x6c\x2d\x70\x72\x65\x63\x6f\x6d\x70\x72\x65\x73\x73"
  "\x21\x20\x06\xf4\x01\x1c\x81\x85\x02\xf3\x01\x1a\x81\x89\x02\xf2"
  "\x01\x18\x81\x83\x02\xf1\x01\x16\x81\x85\x02\xf0\x01\x14\x81\x83"
  "\x02\xef\x01\x12\x81\x83\x02\xee\x01\x10\x81\x83\x02\xed\x01\x0e"
  "\x81\x8b\x02\xec\x01\x0c\x81\x89\x02\xeb\x01\x0a\x81\x89\x02\xea"
  "\x01\x08\x81\x87\x02\xe9\x01\x06\x81\x85\x02\xe8\x01\x04\x84\x06"
  "\x1b\x30\x1c\x02\x14\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65"
  "\x74\x21\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x1c\x6e"
  "\x6f\x64\x65\x20\x6c\x61\x63\x6b\x69\x6e\x67\x20\x73\x75\x62\x67"
  "\x72\x61\x70\x68\x20\x63\x6f\x6c\x6f\x72\x02\x02\x04\x2a\x03\x0c"
  "\x6d\x61\x6b\x65\x2d\x72\x67\x72\x61\x70\x68\x03\xfc\x01\x12\x81"
  "\x85\x02\xfb\x01\x10\x81\x85\x02\xfa\x01\x0e\x81\x85\x02\xf9\x01"
  "\x0c\x81\x85\x02\xf8\x01\x0a\x81\x83\x02\xf7\x01\x08\x81\x85\x02"
  "\xf6\x01\x06\x83\x04\xf5\x01\x04\x81\x83\x02\x11\x23\x1a\x02\x15"
  "\x14\x47\x45\x4e\x45\x52\x41\x54\x45\x2f\x4e\x4f\x44\x45\x3a\x20"
  "\x6c\x6f\x6f\x70\x10\x6d\x65\x6d\x6f\x69\x7a\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x61\x67\x0a\x18\x6c\x6f\x6f\x70\x2d\x6d\x65\x6d\x6f\x69"
  "\x7a\x61\x74\x69\x6f\x6e\x2d\x6d\x61\x72\x6b\x65\x72\x36\x03\x04"
  "\x0d\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d\x67\x65\x74\x05\x0e\x63"
  "\x66\x67\x2d\x6e\x6f\x64\x65\x2d\x70\x75\x74\x21\x04\x2a\x03\x19"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x6e\x6f\x64\x65\x2f\x6e\x6f"
  "\x2d\x6d\x65\x6d\x6f\x69\x7a\x65\x37\x03\x20\x06\x87\x02\x18\x81"
  "\x85\x02\x86\x02\x16\x81\x87\x02\x85\x02\x14\x81\x89\x02\x84\x02"
  "\x12\x81\x85\x02\x83\x02\x10\x81\x85\x02\x82\x02\x0e\x81\x85\x02"
  "\x81\x02\x0c\x81\x89\x02\x80\x02\x0a\x81\x87\x02\xff\x01\x08\x81"
  "\x83\x02\xfe\x01\x06\x81\x85\x02\xfd\x01\x04\x83\x04\x17\x29\x38"
  "\x02\x16\x1a\x41\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x6e"
  "\x6f\x64\x65\x20\x68\x61\x73\x20\x6e\x65\x78\x74\x19\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e"
  "\x20\x74\x79\x70\x65\x07\x72\x65\x74\x75\x72\x6e\x0c\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x08\x13\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x6e\x6f\x64\x65\x20\x74\x79\x70\x65\x3a\x10\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x13\x76\x69\x72"
  "\x74\x75\x61\x6c\x2d\x72\x65\x74\x75\x72\x6e\x2d\x74\x61\x67\x18"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x76\x69\x72\x74\x75\x61\x6c"
  "\x2d\x72\x65\x74\x75\x72\x6e\x08\x70\x6f\x70\x2d\x74\x61\x67\x0d"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x70\x6f\x70\x0f\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x61\x67\x14\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0f"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x74\x61\x67\x14\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x64\x65\x66\x69\x6e\x69\x74\x69"
  "\x6f\x6e\x14\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69"
  "\x74\x65\x2d\x74\x61\x67\x19\x67\x65\x6e\x65\x72\x61\x74\x65\x2f"
  "\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65\x0e"
  "\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x74\x61\x67\x0c\x66\x67"
  "\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x0e\x03\x13\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x03\x16"
  "\x04\x2a\x03\x15\x03\x15\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x03\x10\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x72\x65\x74\x75\x72\x6e\x04\x27\x08\xa1\x02"
  "\x36\x81\x87\x02\xa0\x02\x34\x81\x85\x02\x9f\x02\x32\x81\x89\x02"
  "\x9e\x02\x30\x81\x85\x02\x9d\x02\x2e\x81\x85\x02\x9c\x02\x2c\x81"
  "\x85\x02\x9b\x02\x2a\x81\x85\x02\x9a\x02\x28\x81\x85\x02\x99\x02"
  "\x26\x81\x85\x02\x98\x02\x24\x81\x87\x02\x97\x02\x22\x81\x85\x02"
  "\x96\x02\x20\x81\x85\x02\x95\x02\x1e\x81\x85\x02\x94\x02\x1c\x81"
  "\x85\x02\x93\x02\x1a\x81\x85\x02\x92\x02\x18\x81\x85\x02\x91\x02"
  "\x16\x81\x85\x02\x90\x02\x14\x81\x85\x02\x8f\x02\x12\x81\x85\x02"
  "\x8e\x02\x10\x81\x85\x02\x8d\x02\x0e\x81\x85\x02\x8c\x02\x0c\x81"
  "\x85\x02\x8b\x02\x0a\x81\x87\x02\x8a\x02\x08\x81\x85\x02\x89\x02"
  "\x06\x81\x83\x02\x88\x02\x04\x83\x04\x35\x5e\x27\x02\x17\x10\x49"
  "\x6c\x6c\x65\x67\x61\x6c\x20\x63\x66\x67\x2d\x74\x61\x67\x0a\x70"
  "\x6e\x6f\x64\x65\x2d\x63\x66\x67\x0a\x73\x6e\x6f\x64\x65\x2d\x63"
  "\x66\x67\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x39\x05"
  "\x2c\x03\x14\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65"
  "\x2d\x6d\x61\x72\x6b\x73\x2c\x03\x17\x65\x64\x67\x65\x2d\x64\x69"
  "\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x72\x69\x67\x68\x74\x21\x04"
  "\x11\x62\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73"
  "\x21\x3a\x04\x2a\x06\xaf\x02\x1e\x83\x04\xae\x02\x1c\x81\x8b\x02"
  "\xad\x02\x1a\x81\x89\x02\xac\x02\x18\x81\x89\x02\xab\x02\x16\x81"
  "\x87\x02\xaa\x02\x14\x81\x87\x02\xa9\x02\x12\x81\x87\x02\xa8\x02"
  "\x10\x81\x83\x02\xa7\x02\x0e\x81\x83\x02\xa6\x02\x0c\x81\x85\x02"
  "\xa5\x02\x0a\x81\x85\x02\xa4\x02\x08\x81\x83\x02\xa3\x02\x06\x81"
  "\x85\x02\xa2\x02\x04\x83\x04\x1d\x35\x2a\x02\x18\x39\x02\x04\x0c"
  "\x02\xb2\x02\x08\x83\x04\xb1\x02\x06\x81\x85\x02\xb0\x02\x04\x83"
  "\x04\x07\x12\x3b\x02\x19\x39\x08\x02\x09\x1c\x72\x74\x6c\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x65\x6e\x74\x72"
  "\x79\x2d\x65\x64\x67\x65\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b"
  "\x21\x39\x10\x65\x64\x67\x65\x2d\x72\x69\x67\x68\x74\x2d\x6e\x6f"
  "\x64\x65\x19\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x65\x6e\x74\x72\x79\x2d\x65\x64\x67\x65\x08\x03\x2c\x03\x15"
  "\x72\x67\x72\x61\x70\x68\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x65"
  "\x64\x67\x65\x73\x04\x04\x6d\x61\x70\x04\x3a\x04\x0c\x04\x0c\x6d"
  "\x61\x70\x2d\x3e\x65\x71\x2d\x73\x65\x74\x03\x08\x73\x62\x6c\x6f"
  "\x63\x6b\x3f\x03\x39\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b"
  "\x65\x64\x3f\x05\x08\x61\x70\x70\x65\x6e\x64\x21\x3a\x04\x3a\x03"
  "\x16\x03\x0e\x6c\x69\x73\x74\x2d\x64\x65\x6c\x65\x74\x6f\x72\x21"
  "\x04\x10\x0f\xe3\x02\x64\x81\x87\x02\xe2\x02\x62\x81\x87\x02\xe1"
  "\x02\x60\x81\x87\x02\xe0\x02\x5e\x81\x89\x02\xdf\x02\x5c\x81\x85"
  "\x02\xde\x02\x5a\x81\x8d\x02\xdd\x02\x58\x81\x85\x02\xdc\x02\x56"
  "\x81\x85\x02\xdb\x02\x54\x81\x85\x02\xda\x02\x52\x81\x85\x02\xd9"
  "\x02\x50\x81\x91\x02\xd8\x02\x4e\x81\x8d\x02\xd7\x02\x4c\x81\x85"
  "\x02\xd6\x02\x4a\x81\x87\x02\xd5\x02\x48\x81\x87\x02\xd4\x02\x46"
  "\x81\x85\x02\xd3\x02\x44\x81\x85\x02\xd2\x02\x42\x81\x85\x02\xd1"
  "\x02\x40\x81\x91\x02\xd0\x02\x3e\x81\x8d\x02\xcf\x02\x3c\x81\x87"
  "\x02\xce\x02\x3a\x81\x89\x02\xcd\x02\x38\x81\x85\x02\xcc\x02\x36"
  "\x81\x8d\x02\xcb\x02\x34\x81\x89\x02\xca\x02\x32\x81\x85\x02\xc9"
  "\x02\x30\x81\x85\x02\xc8\x02\x2e\x81\x85\x02\xc7\x02\x2c\x81\x8d"
  "\x02\xc6\x02\x2a\x81\x8d\x02\xc5\x02\x28\x81\x8b\x02\xc4\x02\x26"
  "\x81\x87\x02\xc3\x02\x24\x81\x89\x02\xc2\x02\x22\x81\x87\x02\xc1"
  "\x02\x20\x81\x91\x02\xc0\x02\x1e\x81\x85\x02\xbf\x02\x1c\x81\x8b"
  "\x02\xbe\x02\x1a\x81\x89\x02\xbd\x02\x18\x81\x85\x02\xbc\x02\x16"
  "\x81\x83\x02\xbb\x02\x14\x81\x85\x02\xba\x02\x12\x81\x83\x02\xb9"
  "\x02\x10\x83\x04\xb8\x02\x0e\x81\x89\x02\xb7\x02\x0c\x81\x87\x02"
  "\xb6\x02\x0a\x81\x83\x02\xb5\x02\x08\x81\x83\x02\xb4\x02\x06\x81"
  "\x83\x02\xb3\x02\x04\x83\x04\x63\x95\x01\x3a\x19\x39\x39\x3a\x04"
  "\x3b\x04\x2a\x04\x27\x04\x1f\x72\x74\x6c\x67\x65\x6e\x2d\x6c\x6f"
  "\x6f\x70\x2d\x6d\x65\x6d\x6f\x69\x7a\x61\x74\x69\x6f\x6e\x2d\x6d"
  "\x61\x72\x6b\x65\x72\x17\x72\x74\x6c\x67\x65\x6e\x2d\x6d\x65\x6d"
  "\x6f\x69\x7a\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x38\x04\x1a\x06"
  "\x1c\x04\x34\x04\x28\x04\x35\x04\x33\x04\x19\x04\x32\x04\x2b\x04"
  "\x29\x04\x2f\x04\x2e\x04\x2d\x04\x1b\x04\x1f\x04\x18\x04\x14\x04"
  "\x13\x04\x0f\x04\x22\x0d\x0e\x20\x37\x36\x0a\x15\x22\x17\x21\x31"
  "\x25\x24\x1d\x23\x30\x1d\x77\x72\x61\x70\x2d\x77\x69\x74\x68\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74"
  "\x72\x79\x1e\x26\x11\x20\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x74\x72\x79\x2f\x69"
  "\x6e\x6c\x69\x6e\x65\x12\x0b\x16\x65\x6e\x71\x75\x65\x75\x65\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x21\x13\x65\x6e"
  "\x71\x75\x65\x75\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21"
  "\x13\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x09\x22\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81"
  "\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rtlgen_so_data_de4b0c1371be521f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlgen_so_data_de4b0c1371be521f [0]))), (sizeof (prog_rtlgen_so_data_de4b0c1371be521f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rtlgen.so", rtlgen_so_data_de4b0c1371be521f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlgen.so", "2b82f4b6f4448435")
