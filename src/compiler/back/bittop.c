/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:08-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_12 13
#define LABEL_1_15 15
#define TAG_1_16 6
#define LABEL_1_13 17
#define TAG_1_14 7
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
#define LABEL_1_38 55
#define LABEL_1_39 57
#define LABEL_1_40 59
#define LABEL_1_41 61
#define LABEL_1_44 63
#define LABEL_1_18 65
#define LABEL_1_45 67
#define LABEL_1_47 69
#define LABEL_1_42 71
#define LABEL_1_50 73
#define LABEL_1_48 75
#define LABEL_1_51 77
#define LABEL_1_56 79
#define LABEL_1_53 81
#define LABEL_1_58 83
#define LABEL_1_54 85
#define LABEL_1_57 87
#define LABEL_1_62 89
#define LABEL_1_61 91
#define LABEL_1_64 93
#define TAG_1_65 45
#define ENVIRONMENT_LABEL_1_3 144
#define DEBUGGING_LABEL_1_2 143
#define OBJECT_1_7 142
#define OBJECT_1_6 141
#define OBJECT_1_5 140
#define OBJECT_1_4 139
#define OBJECT_1_3 138
#define OBJECT_1_2 137
#define OBJECT_1_1 136
#define OBJECT_1_0 135
#define EXECUTE_CACHE_1_63 95
#define EXECUTE_CACHE_1_60 97
#define EXECUTE_CACHE_1_59 99
#define EXECUTE_CACHE_1_55 101
#define EXECUTE_CACHE_1_52 103
#define EXECUTE_CACHE_1_49 105
#define EXECUTE_CACHE_1_46 107
#define EXECUTE_CACHE_1_43 109
#define EXECUTE_CACHE_1_19 111
#define EXECUTE_CACHE_1_17 113
#define EXECUTE_CACHE_1_10 115
#define EXECUTE_CACHE_1_8 117
#define EXECUTE_CACHE_1_6 119
#define FREE_REFERENCE_1_5 122
#define FREE_REFERENCE_1_4 123
#define FREE_REFERENCE_1_3 124
#define FREE_REFERENCE_1_2 125
#define FREE_REFERENCE_1_1 126
#define FREE_REFERENCE_1_0 127
#define FREE_ASSIGNMENT_1_5 129
#define FREE_ASSIGNMENT_1_4 130
#define FREE_ASSIGNMENT_1_3 131
#define FREE_ASSIGNMENT_1_2 132
#define FREE_ASSIGNMENT_1_1 133
#define FREE_ASSIGNMENT_1_0 134
#define FREE_REFERENCES_LABEL_1_0 94
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd55;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd43;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd39;
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
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      goto assemble_77;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto lambda_107;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto swapB_106;

    case 8:
      current_block = (Rpc - LABEL_1_20);
      goto label_79;

    case 9:
      current_block = (Rpc - LABEL_1_21);
      goto label_80;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto label_81;

    case 11:
      current_block = (Rpc - LABEL_1_23);
      goto label_82;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto label_83;

    case 13:
      current_block = (Rpc - LABEL_1_25);
      goto label_84;

    case 14:
      current_block = (Rpc - LABEL_1_26);
      goto label_85;

    case 15:
      current_block = (Rpc - LABEL_1_27);
      goto label_86;

    case 16:
      current_block = (Rpc - LABEL_1_28);
      goto label_87;

    case 17:
      current_block = (Rpc - LABEL_1_29);
      goto label_88;

    case 18:
      current_block = (Rpc - LABEL_1_30);
      goto label_89;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto label_90;

    case 20:
      current_block = (Rpc - LABEL_1_32);
      goto label_91;

    case 21:
      current_block = (Rpc - LABEL_1_33);
      goto label_92;

    case 22:
      current_block = (Rpc - LABEL_1_34);
      goto label_93;

    case 23:
      current_block = (Rpc - LABEL_1_35);
      goto label_94;

    case 24:
      current_block = (Rpc - LABEL_1_36);
      goto label_95;

    case 25:
      current_block = (Rpc - LABEL_1_37);
      goto label_96;

    case 26:
      current_block = (Rpc - LABEL_1_38);
      goto loop_34;

    case 27:
      current_block = (Rpc - LABEL_1_39);
      goto label_97;

    case 28:
      current_block = (Rpc - LABEL_1_40);
      goto label_98;

    case 29:
      current_block = (Rpc - LABEL_1_41);
      goto label_99;

    case 30:
      current_block = (Rpc - LABEL_1_44);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_5;

    case 32:
      current_block = (Rpc - LABEL_1_45);
      goto continuation_37;

    case 33:
      current_block = (Rpc - LABEL_1_47);
      goto lambda_15;

    case 34:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_28;

    case 35:
      current_block = (Rpc - LABEL_1_50);
      goto label_100;

    case 36:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_6;

    case 37:
      current_block = (Rpc - LABEL_1_51);
      goto continuation_30;

    case 38:
      current_block = (Rpc - LABEL_1_56);
      goto label_101;

    case 39:
      current_block = (Rpc - LABEL_1_53);
      goto continuation_8;

    case 40:
      current_block = (Rpc - LABEL_1_58);
      goto label_102;

    case 41:
      current_block = (Rpc - LABEL_1_54);
      goto continuation_7;

    case 42:
      current_block = (Rpc - LABEL_1_57);
      goto continuation_9;

    case 43:
      current_block = (Rpc - LABEL_1_62);
      goto label_103;

    case 44:
      current_block = (Rpc - LABEL_1_61);
      goto continuation_10;

    case 45:
      current_block = (Rpc - LABEL_1_64);
      goto lambda_110;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assemble_105)
DEFLABEL (assemble_77)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 6;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd32.pObj) = (& (Rhp [-1]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd32.pObj)));
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-1]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd40.pObj)));
  (Rsp [3]) = (Wrd41.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-1]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd44.pObj)));
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd50.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd48.pObj) = (& (Rhp [-1]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd48.pObj)));
  (Rsp [6]) = (Wrd49.Obj);
  Wrd29 = Wrd51;
  ((Wrd29.pObj) [2]) = (Wrd49.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  ((Wrd29.pObj) [3]) = (Wrd27.Obj);
  ((Wrd29.pObj) [4]) = (Wrd45.Obj);
  ((Wrd29.pObj) [5]) = (Wrd41.Obj);
  ((Wrd29.pObj) [6]) = (Wrd37.Obj);
  ((Wrd29.pObj) [7]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [8]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [7]) = (Wrd6.Obj);
  (Rsp [8]) = (Wrd52.Obj);
  (Rsp [6]) = (Wrd52.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_1_15);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Obj) = (current_block [OBJECT_1_2]);
  if ((Wrd15.Obj) == (Wrd16.Obj))
    goto label_111;
  (Wrd20.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd33.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd14.pObj) [0]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto loop_34;

DEFLABEL (label_111)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_112)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_1_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_44);
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (swapB_106)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (swapB_75)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_166;

DEFLABEL (label_165)
  Wrd5 = Wrd9;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_163;

DEFLABEL (label_162)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_161)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [7]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_160;

DEFLABEL (label_159)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_158)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_157;

DEFLABEL (label_156)
  Wrd57 = Wrd61;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_154;

DEFLABEL (label_153)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_152)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [6]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_151;

DEFLABEL (label_150)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_149)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_148;

DEFLABEL (label_147)
  Wrd109 = Wrd113;

DEFLABEL (label_146)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_145;

DEFLABEL (label_144)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_143)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [5]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_142;

DEFLABEL (label_141)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_140)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  Wrd161 = Wrd165;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_134)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [4]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_131)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  Wrd213 = Wrd217;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_125)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [3]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_122)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  Wrd265 = Wrd269;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_116)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [2]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_115;

DEFLABEL (label_114)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_113)
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_115)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_114;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_37])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_96)
  goto label_113;

DEFLABEL (label_118)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_36])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_95)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_120;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_35])), (Wrd266.pObj));

DEFLABEL (label_94)
  (Wrd265.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_34])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_93)
  goto label_122;

DEFLABEL (label_127)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_33])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_92)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_32])), (Wrd214.pObj));

DEFLABEL (label_91)
  (Wrd213.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_31])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_90)
  goto label_131;

DEFLABEL (label_136)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_30])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_89)
  goto label_134;

DEFLABEL (label_139)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_138;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_29])), (Wrd162.pObj));

DEFLABEL (label_88)
  (Wrd161.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_142)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_141;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_28])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_87)
  goto label_140;

DEFLABEL (label_145)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_144;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_27])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_86)
  goto label_143;

DEFLABEL (label_148)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_147;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_26])), (Wrd110.pObj));

DEFLABEL (label_85)
  (Wrd109.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_151)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_150;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_25])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_84)
  goto label_149;

DEFLABEL (label_154)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_153;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_24])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_83)
  goto label_152;

DEFLABEL (label_157)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_156;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_23])), (Wrd58.pObj));

DEFLABEL (label_82)
  (Wrd57.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_160)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_159;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_81)
  goto label_158;

DEFLABEL (label_163)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_162;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_80)
  goto label_161;

DEFLABEL (label_166)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_165;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_20])), (Wrd6.pObj));

DEFLABEL (label_79)
  (Wrd5.Obj) = Rvl;
  goto label_164;

DEFLABEL (loop_108)
DEFLABEL (loop_34)
  INTERRUPT_CHECK (26, LABEL_1_38);
  (Wrd39.Obj) = (Rsp [1]);
  if ((Wrd39.Obj) == (current_block [OBJECT_1_2]))
    goto label_179;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_178;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_177)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 1)
    goto label_172;

DEFLABEL (label_171)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_170;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  ((Wrd11.pObj) [1]) = Rvl;

DEFLABEL (label_169)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_51);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_168;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_167)
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_34;

DEFLABEL (label_168)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_101)
  (Wrd6.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 2);

DEFLABEL (label_100)
  goto label_169;

DEFLABEL (label_172)
  if (! ((Wrd51.uLng) == 1))
    goto label_176;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_175)
  if (! ((Wrd56.Obj) == (current_block [OBJECT_1_5])))
    goto label_171;
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_174;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_173)
  (Rsp [2]) = (Wrd66.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_34;

DEFLABEL (label_174)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_99)
  (Wrd66.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_98)
  (Wrd56.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (label_179)
  Rsp = (& (Rsp [2]));
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_180;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_180)
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd78.Obj);
  goto label_112;

DEFLABEL (lambda_109)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_1_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_49]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_55]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_60]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_53);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_184;
  Wrd8 = Wrd12;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_57);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_182;
  Wrd9 = Wrd13;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_63]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_61);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_64])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd17 = Wrd10;
  ((Wrd17.pObj) [2]) = Rvl;
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  ((Wrd17.pObj) [4]) = (Wrd6.Obj);
  ((Wrd17.pObj) [5]) = (Wrd7.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_62])), (Wrd10.pObj));

DEFLABEL (label_103)
  (Wrd9.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_58])), (Wrd9.pObj));

DEFLABEL (label_102)
  (Wrd8.Obj) = Rvl;
  goto label_183;

DEFLABEL (lambda_110)
  CLOSURE_HEADER (LABEL_1_64);

DEFLABEL (lambda_11)
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
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define TAG_2_8 2
#define LABEL_2_9 9
#define LABEL_2_11 11
#define LABEL_2_13 13
#define LABEL_2_15 15
#define LABEL_2_19 17
#define LABEL_2_17 19
#define TAG_2_18 8
#define LABEL_2_22 21
#define LABEL_2_20 23
#define ENVIRONMENT_LABEL_2_3 39
#define DEBUGGING_LABEL_2_2 38
#define OBJECT_2_2 37
#define OBJECT_2_1 36
#define OBJECT_2_0 35
#define EXECUTE_CACHE_2_21 25
#define EXECUTE_CACHE_2_16 27
#define EXECUTE_CACHE_2_14 29
#define EXECUTE_CACHE_2_12 31
#define EXECUTE_CACHE_2_10 33
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
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
      goto relaxB_12;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continue_4;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_2_22);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (relaxB_17)
DEFLABEL (relaxB_12)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  Wrd13 = Wrd18;
  ((Wrd13.pObj) [2]) = (Wrd21.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd11.Obj);
  ((Wrd20.pObj) [2]) = (Wrd19.Obj);
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [3]) = (Wrd8.Obj);
  goto loop_11;

DEFLABEL (loop_18)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_1])))
    goto label_21;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_17])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continue_19)
DEFLABEL (continue_4)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_23;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_23;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_22)
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  goto loop_11;

DEFLABEL (label_23)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_14)
  (Wrd12.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_2_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_24)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [3]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Rsp [0]) = (Wrd29.Obj);
  goto continue_4;

DEFLABEL (label_25)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_31;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! ((Wrd37.Lng) == 0))
    goto label_27;

DEFLABEL (label_26)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  Rvl = ((Wrd34.pObj) [3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd25.Obj) = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_29)
  (Wrd25.Obj) = (current_block [OBJECT_2_2]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  (Rsp [1]) = (Wrd25.Obj);
  goto label_24;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_5 7
#define LABEL_3_10 9
#define LABEL_3_13 11
#define LABEL_3_14 13
#define LABEL_3_6 15
#define LABEL_3_9 17
#define LABEL_3_11 19
#define LABEL_3_21 21
#define LABEL_3_12 23
#define LABEL_3_16 25
#define LABEL_3_23 27
#define LABEL_3_26 29
#define LABEL_3_18 31
#define LABEL_3_19 33
#define LABEL_3_24 35
#define LABEL_3_25 37
#define ENVIRONMENT_LABEL_3_3 64
#define DEBUGGING_LABEL_3_2 63
#define OBJECT_3_1 62
#define OBJECT_3_0 61
#define EXECUTE_CACHE_3_30 39
#define EXECUTE_CACHE_3_29 41
#define EXECUTE_CACHE_3_28 43
#define EXECUTE_CACHE_3_27 45
#define EXECUTE_CACHE_3_22 47
#define EXECUTE_CACHE_3_20 49
#define EXECUTE_CACHE_3_17 51
#define EXECUTE_CACHE_3_15 53
#define EXECUTE_CACHE_3_8 55
#define FREE_REFERENCE_3_2 58
#define FREE_REFERENCE_3_1 59
#define FREE_REFERENCE_3_0 60
#define FREE_REFERENCES_LABEL_3_0 38
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto final_phase_14;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_3_21);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_3_16);
      goto lambda_4;

    case 12:
      current_block = (Rpc - LABEL_3_23);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_3_26);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (final_phase_24)
DEFLABEL (final_phase_14)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_35;
  Wrd11 = Wrd15;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_33;
  Wrd8 = Wrd12;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_31;
  Wrd20 = Wrd24;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_29;
  Wrd26 = Wrd30;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_27;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_27;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_27;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd27.pObj));

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd21.pObj));

DEFLABEL (label_18)
  (Wrd20.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_10])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_25)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_3_16);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_39;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_38)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_37;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_30]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (label_37)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_9 9
#define LABEL_4_11 11
#define LABEL_4_12 13
#define LABEL_4_13 15
#define LABEL_4_6 17
#define LABEL_4_14 19
#define LABEL_4_10 21
#define LABEL_4_18 23
#define LABEL_4_16 25
#define LABEL_4_17 27
#define LABEL_4_20 29
#define LABEL_4_22 31
#define LABEL_4_23 33
#define LABEL_4_24 35
#define LABEL_4_25 37
#define LABEL_4_31 39
#define LABEL_4_26 41
#define LABEL_4_34 43
#define LABEL_4_35 45
#define LABEL_4_27 47
#define TAG_4_28 22
#define LABEL_4_38 49
#define LABEL_4_30 51
#define LABEL_4_33 53
#define LABEL_4_42 55
#define LABEL_4_36 57
#define LABEL_4_37 59
#define LABEL_4_39 61
#define LABEL_4_40 63
#define LABEL_4_48 65
#define LABEL_4_41 67
#define LABEL_4_43 69
#define LABEL_4_52 71
#define LABEL_4_45 73
#define LABEL_4_47 75
#define LABEL_4_50 77
#define LABEL_4_51 79
#define LABEL_4_54 81
#define LABEL_4_53 83
#define ENVIRONMENT_LABEL_4_3 128
#define DEBUGGING_LABEL_4_2 127
#define OBJECT_4_9 126
#define OBJECT_4_8 125
#define OBJECT_4_7 124
#define OBJECT_4_6 123
#define OBJECT_4_5 122
#define OBJECT_4_4 121
#define OBJECT_4_3 120
#define OBJECT_4_2 119
#define OBJECT_4_1 118
#define OBJECT_4_0 117
#define EXECUTE_CACHE_4_46 85
#define EXECUTE_CACHE_4_44 87
#define EXECUTE_CACHE_4_32 89
#define EXECUTE_CACHE_4_29 91
#define EXECUTE_CACHE_4_21 93
#define EXECUTE_CACHE_4_49 95
#define EXECUTE_CACHE_4_19 97
#define EXECUTE_CACHE_4_15 99
#define EXECUTE_CACHE_4_8 101
#define FREE_REFERENCE_4_12 104
#define FREE_REFERENCE_4_11 105
#define FREE_REFERENCE_4_10 106
#define FREE_REFERENCE_4_9 107
#define FREE_REFERENCE_4_8 108
#define FREE_REFERENCE_4_7 109
#define FREE_REFERENCE_4_6 110
#define FREE_REFERENCE_4_5 111
#define FREE_REFERENCE_4_4 112
#define FREE_REFERENCE_4_3 113
#define FREE_REFERENCE_4_2 114
#define FREE_REFERENCE_4_1 115
#define FREE_REFERENCE_4_0 116
#define FREE_REFERENCES_LABEL_4_0 84
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto assemble_objects_43;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto label_45;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto label_48;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto label_49;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_4_14);
      goto label_50;

    case 9:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_4_18);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_4_22);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_4_23);
      goto label_53;

    case 16:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_4_31);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_4_34);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_4_35);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_4_27);
      goto lambda_64;

    case 23:
      current_block = (Rpc - LABEL_4_38);
      goto label_57;

    case 24:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_4_42);
      goto label_58;

    case 27:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_18;

    case 28:
      current_block = (Rpc - LABEL_4_37);
      goto continuation_17;

    case 29:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_32;

    case 30:
      current_block = (Rpc - LABEL_4_40);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_4_48);
      goto label_59;

    case 32:
      current_block = (Rpc - LABEL_4_41);
      goto continuation_30;

    case 33:
      current_block = (Rpc - LABEL_4_43);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_4_52);
      goto label_60;

    case 35:
      current_block = (Rpc - LABEL_4_45);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_4_47);
      goto continuation_33;

    case 37:
      current_block = (Rpc - LABEL_4_50);
      goto continuation_23;

    case 38:
      current_block = (Rpc - LABEL_4_51);
      goto continuation_22;

    case 39:
      current_block = (Rpc - LABEL_4_54);
      goto label_61;

    case 40:
      current_block = (Rpc - LABEL_4_53);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assemble_objects_63)
DEFLABEL (assemble_objects_43)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_93;
  Wrd11 = Wrd15;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_91;
  Wrd5 = Wrd9;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_89;
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_66;
  Wrd13 = Wrd17;

DEFLABEL (label_65)
  (Wrd25.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd26.Obj) = (current_block [OBJECT_4_1]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd21.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd21.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd14.pObj));

DEFLABEL (label_47)
  (Wrd13.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_87;
  Wrd32 = Wrd36;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 47))
    goto label_85;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd41.uLng)));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_84)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_83;
  Wrd12 = Wrd16;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd7.Lng) + (Wrd9.Lng));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_5]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_81;
  Wrd14 = Wrd18;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_6]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_79;
  Wrd21 = Wrd25;

DEFLABEL (label_78)
  (Wrd27.Obj) = (* (Rsp++));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd30.Lng) = (FIXNUM_QUOTIENT ((Wrd28.Lng), (Wrd29.Lng)));
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd31.Obj);
  Wrd34 = Wrd30;
  (Wrd35.Lng) = ((Wrd34.Lng) - 1L);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd43.Lng) = ((Wrd38.Lng) + (Wrd35.Lng));
  (Wrd46.Lng) = (FIXNUM_QUOTIENT ((Wrd43.Lng), (Wrd34.Lng)));
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_77;
  Wrd8 = Wrd12;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 2);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_27])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  ((Wrd15.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_75;
  Wrd10 = Wrd14;

DEFLABEL (label_74)
  Wrd9 = Wrd10;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_73;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if (multiply_with_overflow ((Wrd23.Lng), 2, (& (Wrd22.Lng))))
    goto label_73;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_72)
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_9]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_71;
  Wrd15 = Wrd19;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_4_41);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 2);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_4_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_69;
  Wrd11 = Wrd15;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_49]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_4_47);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_4_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_46]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_4_45);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_48])), (Wrd12.pObj));

DEFLABEL (label_59)
  (Wrd11.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_42])), (Wrd16.pObj));

DEFLABEL (label_58)
  (Wrd15.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd17.Obj) = (current_block [OBJECT_4_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_34])), (Wrd11.pObj));

DEFLABEL (label_55)
  (Wrd10.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_31])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_23])), (Wrd22.pObj));

DEFLABEL (label_53)
  (Wrd21.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_22])), (Wrd15.pObj));

DEFLABEL (label_52)
  (Wrd14.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_18])), (Wrd13.pObj));

DEFLABEL (label_51)
  (Wrd12.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd33.pObj));

DEFLABEL (label_48)
  (Wrd32.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_9])), (Wrd6.pObj));

DEFLABEL (label_46)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_14])), (Wrd6.pObj));

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd12.pObj));

DEFLABEL (label_45)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_4_27);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_8]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_101;
  Wrd14 = Wrd18;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_37);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 2);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd18.Lng) + 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_44]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_43);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_6]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_50]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_51]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_11]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_99;
  Wrd16 = Wrd20;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_97;
  Wrd8 = Wrd12;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_4_53);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_50);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_95;

DEFLABEL (label_94)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_9]), 3);

DEFLABEL (label_95)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_94;
  ((Wrd14.pObj) [1]) = Rvl;
  Rvl = (current_block [OBJECT_4_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_54])), (Wrd9.pObj));

DEFLABEL (label_61)
  (Wrd8.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_52])), (Wrd17.pObj));

DEFLABEL (label_60)
  (Wrd16.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_38])), (Wrd15.pObj));

DEFLABEL (label_57)
  (Wrd14.Obj) = Rvl;
  goto label_100;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_6 13
#define LABEL_5_12 15
#define LABEL_5_13 17
#define ENVIRONMENT_LABEL_5_3 30
#define DEBUGGING_LABEL_5_2 29
#define OBJECT_5_5 28
#define OBJECT_5_4 27
#define OBJECT_5_3 26
#define OBJECT_5_2 25
#define OBJECT_5_1 24
#define OBJECT_5_0 23
#define EXECUTE_CACHE_5_11 19
#define EXECUTE_CACHE_5_10 21
#define FREE_REFERENCES_LABEL_5_0 18
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto assemble_an_object_11;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assemble_an_object_20)
DEFLABEL (assemble_an_object_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_5_1]))
    goto label_32;
  if ((Wrd14.Obj) == (current_block [OBJECT_5_3]))
    goto label_21;
  (Wrd18.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_21)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_31;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_30)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_29;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_28)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_27;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (Wrd9.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_25;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_24)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_23;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_22)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_15)
  (Wrd32.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_14)
  (Wrd23.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_33;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  Rvl = ((Wrd48.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_8 7
#define LABEL_6_9 9
#define LABEL_6_6 11
#define LABEL_6_10 13
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define OBJECT_6_5 24
#define OBJECT_6_4 23
#define OBJECT_6_3 22
#define OBJECT_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_11 15
#define EXECUTE_CACHE_6_5 17
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
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
      goto insert_objectsB_9;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_objectsB_16)
DEFLABEL (insert_objectsB_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_6_0]))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_24;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_23)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_22;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_21)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_20;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_19)
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 1);

DEFLABEL (label_12)
  (Wrd19.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd35.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));
  (Wrd41.Obj) = (Rsp [2]);
  if ((Wrd41.Obj) == (Wrd35.Obj))
    goto label_26;
  (Wrd42.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [1]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define LABEL_7_5 15
#define TAG_7_6 6
#define LABEL_7_12 17
#define LABEL_7_13 19
#define LABEL_7_15 21
#define LABEL_7_17 23
#define LABEL_7_18 25
#define LABEL_7_19 27
#define LABEL_7_20 29
#define LABEL_7_22 31
#define LABEL_7_24 33
#define LABEL_7_26 35
#define LABEL_7_27 37
#define LABEL_7_28 39
#define LABEL_7_30 41
#define LABEL_7_31 43
#define LABEL_7_32 45
#define LABEL_7_33 47
#define LABEL_7_34 49
#define LABEL_7_35 51
#define LABEL_7_36 53
#define LABEL_7_37 55
#define LABEL_7_38 57
#define LABEL_7_42 59
#define LABEL_7_45 61
#define LABEL_7_46 63
#define LABEL_7_47 65
#define LABEL_7_48 67
#define LABEL_7_52 69
#define LABEL_7_53 71
#define LABEL_7_49 73
#define LABEL_7_50 75
#define LABEL_7_43 77
#define LABEL_7_57 79
#define LABEL_7_58 81
#define LABEL_7_39 83
#define LABEL_7_40 85
#define LABEL_7_63 87
#define LABEL_7_64 89
#define LABEL_7_67 91
#define LABEL_7_68 93
#define LABEL_7_72 95
#define LABEL_7_73 97
#define LABEL_7_21 99
#define LABEL_7_75 101
#define LABEL_7_23 103
#define LABEL_7_14 105
#define LABEL_7_76 107
#define LABEL_7_77 109
#define LABEL_7_54 111
#define LABEL_7_82 113
#define LABEL_7_85 115
#define LABEL_7_89 117
#define LABEL_7_59 119
#define LABEL_7_60 121
#define LABEL_7_91 123
#define LABEL_7_65 125
#define LABEL_7_66 127
#define LABEL_7_69 129
#define TAG_7_70 63
#define LABEL_7_92 131
#define LABEL_7_93 133
#define LABEL_7_79 135
#define LABEL_7_95 137
#define LABEL_7_96 139
#define LABEL_7_80 141
#define LABEL_7_83 143
#define LABEL_7_84 145
#define LABEL_7_86 147
#define TAG_7_87 72
#define LABEL_7_98 149
#define LABEL_7_99 151
#define LABEL_7_100 153
#define LABEL_7_88 155
#define LABEL_7_94 157
#define LABEL_7_101 159
#define LABEL_7_102 161
#define LABEL_7_103 163
#define LABEL_7_107 165
#define LABEL_7_108 167
#define LABEL_7_104 169
#define LABEL_7_106 171
#define ENVIRONMENT_LABEL_7_3 241
#define DEBUGGING_LABEL_7_2 240
#define OBJECT_7_25 239
#define OBJECT_7_24 238
#define OBJECT_7_23 237
#define OBJECT_7_22 236
#define OBJECT_7_21 235
#define OBJECT_7_20 234
#define OBJECT_7_19 233
#define OBJECT_7_18 232
#define OBJECT_7_17 231
#define OBJECT_7_16 230
#define OBJECT_7_15 229
#define OBJECT_7_14 228
#define OBJECT_7_13 227
#define OBJECT_7_12 226
#define OBJECT_7_11 225
#define OBJECT_7_10 224
#define OBJECT_7_9 223
#define OBJECT_7_8 222
#define OBJECT_7_7 221
#define OBJECT_7_6 220
#define OBJECT_7_5 219
#define OBJECT_7_4 218
#define OBJECT_7_3 217
#define OBJECT_7_2 216
#define OBJECT_7_1 215
#define OBJECT_7_0 214
#define EXECUTE_CACHE_7_105 173
#define EXECUTE_CACHE_7_97 175
#define EXECUTE_CACHE_7_90 177
#define EXECUTE_CACHE_7_81 179
#define EXECUTE_CACHE_7_71 181
#define EXECUTE_CACHE_7_62 183
#define EXECUTE_CACHE_7_61 185
#define EXECUTE_CACHE_7_56 187
#define EXECUTE_CACHE_7_55 189
#define EXECUTE_CACHE_7_78 191
#define EXECUTE_CACHE_7_74 193
#define EXECUTE_CACHE_7_51 195
#define EXECUTE_CACHE_7_44 197
#define EXECUTE_CACHE_7_41 199
#define EXECUTE_CACHE_7_29 201
#define EXECUTE_CACHE_7_25 203
#define EXECUTE_CACHE_7_16 205
#define FREE_REFERENCE_7_5 208
#define FREE_REFERENCE_7_4 209
#define FREE_REFERENCE_7_3 210
#define FREE_REFERENCE_7_2 211
#define FREE_REFERENCE_7_1 212
#define FREE_REFERENCE_7_0 213
#define FREE_REFERENCES_LABEL_7_0 172
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd7;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd83;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd143;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd111;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd161;
  machine_word Wrd162;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd145;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd207;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd206;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd191;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd190;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd177;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd250;
  machine_word Wrd240;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd246;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd223;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd266;
  machine_word Wrd274;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd262;
  machine_word Wrd264;
  machine_word Wrd265;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd255;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd252;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd309;
  machine_word Wrd308;
  machine_word Wrd302;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd327;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd297;
  machine_word Wrd320;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd294;
  machine_word Wrd291;
  machine_word Wrd283;
  machine_word Wrd285;
  machine_word Wrd287;
  machine_word Wrd286;
  machine_word Wrd352;
  machine_word Wrd357;
  machine_word Wrd356;
  machine_word Wrd353;
  machine_word Wrd351;
  machine_word Wrd350;
  machine_word Wrd347;
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd334;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd338;
  machine_word Wrd342;
  machine_word Wrd341;
  machine_word Wrd331;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd378;
  machine_word Wrd370;
  machine_word Wrd372;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd369;
  machine_word Wrd361;
  machine_word Wrd363;
  machine_word Wrd365;
  machine_word Wrd360;
  machine_word Wrd408;
  machine_word Wrd403;
  machine_word Wrd405;
  machine_word Wrd404;
  machine_word Wrd402;
  machine_word Wrd422;
  machine_word Wrd415;
  machine_word Wrd421;
  machine_word Wrd417;
  machine_word Wrd414;
  machine_word Wrd413;
  machine_word Wrd412;
  machine_word Wrd411;
  machine_word Wrd410;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd390;
  machine_word Wrd386;
  machine_word Wrd398;
  machine_word Wrd394;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd393;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd379;
  machine_word Wrd380;
  machine_word Wrd385;
  machine_word Wrd384;
  machine_word Wrd381;
  machine_word Wrd358;
  machine_word Wrd300;
  machine_word Wrd426;
  machine_word Wrd427;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
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
      goto assemble_directivesB_118;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto label_120;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_121;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_122;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_58;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_57;

    case 6:
      current_block = (Rpc - LABEL_7_5);
      goto loop_117;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_145;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto label_146;

    case 9:
      current_block = (Rpc - LABEL_7_15);
      goto label_147;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto label_143;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto label_144;

    case 12:
      current_block = (Rpc - LABEL_7_19);
      goto label_123;

    case 13:
      current_block = (Rpc - LABEL_7_20);
      goto label_124;

    case 14:
      current_block = (Rpc - LABEL_7_22);
      goto label_141;

    case 15:
      current_block = (Rpc - LABEL_7_24);
      goto label_142;

    case 16:
      current_block = (Rpc - LABEL_7_26);
      goto label_138;

    case 17:
      current_block = (Rpc - LABEL_7_27);
      goto label_140;

    case 18:
      current_block = (Rpc - LABEL_7_28);
      goto label_139;

    case 19:
      current_block = (Rpc - LABEL_7_30);
      goto label_136;

    case 20:
      current_block = (Rpc - LABEL_7_31);
      goto label_137;

    case 21:
      current_block = (Rpc - LABEL_7_32);
      goto label_134;

    case 22:
      current_block = (Rpc - LABEL_7_33);
      goto label_135;

    case 23:
      current_block = (Rpc - LABEL_7_34);
      goto label_131;

    case 24:
      current_block = (Rpc - LABEL_7_35);
      goto label_132;

    case 25:
      current_block = (Rpc - LABEL_7_36);
      goto label_133;

    case 26:
      current_block = (Rpc - LABEL_7_37);
      goto label_129;

    case 27:
      current_block = (Rpc - LABEL_7_38);
      goto label_130;

    case 28:
      current_block = (Rpc - LABEL_7_42);
      goto label_128;

    case 29:
      current_block = (Rpc - LABEL_7_45);
      goto label_125;

    case 30:
      current_block = (Rpc - LABEL_7_46);
      goto label_126;

    case 31:
      current_block = (Rpc - LABEL_7_47);
      goto label_127;

    case 32:
      current_block = (Rpc - LABEL_7_48);
      goto continuation_16;

    case 33:
      current_block = (Rpc - LABEL_7_52);
      goto label_148;

    case 34:
      current_block = (Rpc - LABEL_7_53);
      goto label_149;

    case 35:
      current_block = (Rpc - LABEL_7_49);
      goto continuation_15;

    case 36:
      current_block = (Rpc - LABEL_7_50);
      goto continuation_14;

    case 37:
      current_block = (Rpc - LABEL_7_43);
      goto continuation_31;

    case 38:
      current_block = (Rpc - LABEL_7_57);
      goto label_150;

    case 39:
      current_block = (Rpc - LABEL_7_58);
      goto label_151;

    case 40:
      current_block = (Rpc - LABEL_7_39);
      goto continuation_42;

    case 41:
      current_block = (Rpc - LABEL_7_40);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_7_63);
      goto continuation_86;

    case 43:
      current_block = (Rpc - LABEL_7_64);
      goto evaluation_89;

    case 44:
      current_block = (Rpc - LABEL_7_67);
      goto label_152;

    case 45:
      current_block = (Rpc - LABEL_7_68);
      goto actual_bits_78;

    case 46:
      current_block = (Rpc - LABEL_7_72);
      goto continuation_62;

    case 47:
      current_block = (Rpc - LABEL_7_73);
      goto label_161;

    case 48:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_60;

    case 49:
      current_block = (Rpc - LABEL_7_75);
      goto label_153;

    case 50:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_61;

    case 51:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_92;

    case 52:
      current_block = (Rpc - LABEL_7_76);
      goto label_154;

    case 53:
      current_block = (Rpc - LABEL_7_77);
      goto label_155;

    case 54:
      current_block = (Rpc - LABEL_7_54);
      goto continuation_19;

    case 55:
      current_block = (Rpc - LABEL_7_82);
      goto label_156;

    case 56:
      current_block = (Rpc - LABEL_7_85);
      goto block_offset_84;

    case 57:
      current_block = (Rpc - LABEL_7_89);
      goto label_157;

    case 58:
      current_block = (Rpc - LABEL_7_59);
      goto continuation_36;

    case 59:
      current_block = (Rpc - LABEL_7_60);
      goto continuation_44;

    case 60:
      current_block = (Rpc - LABEL_7_91);
      goto label_158;

    case 61:
      current_block = (Rpc - LABEL_7_65);
      goto continuation_88;

    case 62:
      current_block = (Rpc - LABEL_7_66);
      goto continuation_87;

    case 63:
      current_block = (Rpc - LABEL_7_69);
      goto lambda_176;

    case 64:
      current_block = (Rpc - LABEL_7_92);
      goto label_159;

    case 65:
      current_block = (Rpc - LABEL_7_93);
      goto label_160;

    case 66:
      current_block = (Rpc - LABEL_7_79);
      goto continuation_97;

    case 67:
      current_block = (Rpc - LABEL_7_95);
      goto label_162;

    case 68:
      current_block = (Rpc - LABEL_7_96);
      goto label_163;

    case 69:
      current_block = (Rpc - LABEL_7_80);
      goto continuation_96;

    case 70:
      current_block = (Rpc - LABEL_7_83);
      goto continuation_22;

    case 71:
      current_block = (Rpc - LABEL_7_84);
      goto continuation_21;

    case 72:
      current_block = (Rpc - LABEL_7_86);
      goto lambda_178;

    case 73:
      current_block = (Rpc - LABEL_7_98);
      goto label_164;

    case 74:
      current_block = (Rpc - LABEL_7_99);
      goto label_165;

    case 75:
      current_block = (Rpc - LABEL_7_100);
      goto label_166;

    case 76:
      current_block = (Rpc - LABEL_7_88);
      goto continuation_80;

    case 77:
      current_block = (Rpc - LABEL_7_94);
      goto continuation_95;

    case 78:
      current_block = (Rpc - LABEL_7_101);
      goto label_167;

    case 79:
      current_block = (Rpc - LABEL_7_102);
      goto label_168;

    case 80:
      current_block = (Rpc - LABEL_7_103);
      goto continuation_102;

    case 81:
      current_block = (Rpc - LABEL_7_107);
      goto label_169;

    case 82:
      current_block = (Rpc - LABEL_7_108);
      goto label_170;

    case 83:
      current_block = (Rpc - LABEL_7_104);
      goto continuation_101;

    case 84:
      current_block = (Rpc - LABEL_7_106);
      goto continuation_105;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assemble_directivesB_172)
DEFLABEL (assemble_directivesB_118)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 2;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  Wrd34 = Wrd36;
  (Wrd35.Obj) = (Rsp [3]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [3]) = (Wrd32.Obj);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_184;
  Wrd5 = Wrd9;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_182;
  Wrd17 = Wrd21;

DEFLABEL (label_181)
  (Rsp [6]) = (Wrd17.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_180;
  Wrd24 = Wrd28;

DEFLABEL (label_179)
  (Rsp [7]) = (Wrd24.Obj);
  goto loop_117;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd25.pObj));

DEFLABEL (label_122)
  (Wrd24.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_8])), (Wrd18.pObj));

DEFLABEL (label_121)
  (Wrd17.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd6.pObj));

DEFLABEL (label_120)
  (Wrd5.Obj) = Rvl;
  goto label_183;

DEFLABEL (loop_173)
DEFLABEL (loop_117)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_256;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_255;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_254)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_253;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd24.Lng))))
    goto label_253;
  (Wrd18.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_252)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (current_block [OBJECT_7_5]))
    goto label_241;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_7]))
    goto label_232;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_8]))
    goto label_226;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_10]))
    goto label_221;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_12]))
    goto label_214;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_14]))
    goto label_207;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_15]))
    goto label_199;
  if ((Wrd32.Obj) == (current_block [OBJECT_7_17]))
    goto label_185;
  (Wrd48.Obj) = (current_block [OBJECT_7_18]);
  (Rsp [8]) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Rsp [9]) = (Wrd49.Obj);
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_51]));

DEFLABEL (label_185)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_198;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_198;
  (Wrd53.Obj) = ((Wrd57.pObj) [3]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_197)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_196;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd75.Lng))))
    goto label_196;
  (Wrd69.Obj) = ((Wrd73.pObj) [2]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_195)
  (Wrd92.Obj) = (Rsp [3]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 10))
    goto label_194;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd91.Lng))))
    goto label_194;
  (Wrd83.Obj) = ((Wrd89.pObj) [4]);

DEFLABEL (label_193)
  (Rsp [2]) = (Wrd83.Obj);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_48]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_49]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd106.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_50]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd110.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_50);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_56]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_55]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_48);
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_192;
  (Wrd13.Obj) = (Rsp [8]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_192;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_192;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_191)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 47))
    goto label_190;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_189)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_54]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_19)
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_188;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_187;

DEFLABEL (label_186)
  (Wrd12.Obj) = (current_block [OBJECT_7_24]);
  (Rsp [11]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (Rsp [12]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Rsp [13]) = (Wrd14.Obj);
  Rsp = (& (Rsp [11]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_78]));

DEFLABEL (label_187)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_83]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_84]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_21)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_97]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_7_83);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto actual_bits_78;

DEFLABEL (label_188)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_156)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_186;
  goto label_187;

DEFLABEL (label_190)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_53]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_11]), 1);

DEFLABEL (label_149)
  (* (--Rsp)) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [8]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_148)
  (Wrd10.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.Obj) = (current_block [OBJECT_7_13]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_47]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_127)
  (Wrd83.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd79.Obj) = (current_block [OBJECT_7_6]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_46]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_126)
  (* (--Rsp)) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (current_block [OBJECT_7_9]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_45]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_125)
  (* (--Rsp)) = Rvl;
  goto label_197;

DEFLABEL (label_199)
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_206;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd119.Lng))))
    goto label_206;
  (Wrd111.Obj) = ((Wrd117.pObj) [2]);

DEFLABEL (label_205)
  (Rsp [1]) = (Wrd111.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd130.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd130.Obj);
  (Wrd134.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd134.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd139.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (Wrd143.Obj) = (current_block [OBJECT_7_16]);
  (* (Rhp++)) = (Wrd143.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (* (--Rsp)) = (Wrd142.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_44]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_7_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_204;
  Wrd6 = Wrd10;

DEFLABEL (label_203)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_202;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_202;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd42.Lng) > (Wrd43.Lng))
    goto label_201;

DEFLABEL (label_200)
  (Wrd21.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [10]);
  (Rsp [2]) = (Wrd23.Obj);
  goto block_offset_84;

DEFLABEL (label_201)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_59]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd36.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_7_16]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_44]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_7_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (Rsp [2]) = (Wrd6.Obj);
  goto block_offset_84;

DEFLABEL (label_202)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_58]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_151)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  goto label_201;

DEFLABEL (label_204)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_57])), (Wrd7.pObj));

DEFLABEL (label_150)
  (Wrd6.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  (Wrd122.Obj) = (Rsp [1]);
  (Wrd123.Obj) = (current_block [OBJECT_7_6]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_128)
  (Wrd111.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_207)
  (Wrd154.Obj) = (Rsp [1]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 10))
    goto label_213;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd153.Lng))))
    goto label_213;
  (Wrd145.Obj) = ((Wrd151.pObj) [4]);

DEFLABEL (label_212)
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd163.uLng) == 1))
    goto label_211;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd161.Obj) = ((Wrd162.pObj) [0]);

DEFLABEL (label_210)
  (Rsp [0]) = (Wrd161.Obj);
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_39]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_40]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_41]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_7_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_62]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_7_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_61]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_7_60);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_209;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_209;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_208)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  goto evaluation_89;

DEFLABEL (label_209)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_7_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_91]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_158)
  (Wrd5.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_38]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_130)
  (Wrd161.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd156.Obj) = (Rsp [1]);
  (Wrd157.Obj) = (current_block [OBJECT_7_13]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_37]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_129)
  (Wrd145.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_214)
  (Wrd184.Obj) = (Rsp [1]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if (! ((Wrd185.uLng) == 10))
    goto label_220;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd182.Obj) = ((Wrd181.pObj) [0]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd183.Lng))))
    goto label_220;
  (Wrd177.Obj) = ((Wrd181.pObj) [4]);
  (* (--Rsp)) = (Wrd177.Obj);

DEFLABEL (label_219)
  (Wrd200.Obj) = (Rsp [2]);
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd201.uLng) == 10))
    goto label_218;
  (Wrd197.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd198.Obj) = ((Wrd197.pObj) [0]);
  (Wrd199.Lng) = (FIXNUM_TO_LONG (Wrd198.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd199.Lng))))
    goto label_218;
  (Wrd191.Obj) = ((Wrd197.pObj) [2]);

DEFLABEL (label_217)
  (Rsp [1]) = (Wrd191.Obj);
  (Wrd216.Obj) = (Rsp [2]);
  (Wrd217.uLng) = (OBJECT_TYPE (Wrd216.Obj));
  if (! ((Wrd217.uLng) == 10))
    goto label_216;
  (Wrd213.pObj) = (OBJECT_ADDRESS (Wrd216.Obj));
  (Wrd214.Obj) = ((Wrd213.pObj) [0]);
  (Wrd215.Lng) = (FIXNUM_TO_LONG (Wrd214.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd215.Lng))))
    goto label_216;
  (Wrd207.Obj) = ((Wrd213.pObj) [3]);

DEFLABEL (label_215)
  (Rsp [2]) = (Wrd207.Obj);
  goto evaluation_89;

DEFLABEL (label_216)
  (Wrd218.Obj) = (Rsp [2]);
  (Wrd219.Obj) = (current_block [OBJECT_7_9]);
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd218.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_133)
  (Wrd207.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd202.Obj) = (Rsp [2]);
  (Wrd203.Obj) = (current_block [OBJECT_7_6]);
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_35]))));
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd202.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_132)
  (Wrd191.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.Obj) = (current_block [OBJECT_7_13]);
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_131)
  (* (--Rsp)) = Rvl;
  goto label_219;

DEFLABEL (label_221)
  (Wrd232.Obj) = (Rsp [1]);
  (Wrd233.uLng) = (OBJECT_TYPE (Wrd232.Obj));
  if (! ((Wrd233.uLng) == 10))
    goto label_225;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd232.Obj));
  (Wrd230.Obj) = ((Wrd229.pObj) [0]);
  (Wrd231.Lng) = (FIXNUM_TO_LONG (Wrd230.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd231.Lng))))
    goto label_225;
  (Wrd223.Obj) = ((Wrd229.pObj) [2]);

DEFLABEL (label_224)
  (Rsp [1]) = (Wrd223.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd239.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd239.Obj);
  (Wrd246.uLng) = (OBJECT_TYPE (Wrd239.Obj));
  if (! ((Wrd246.uLng) == 47))
    goto label_223;
  (Wrd243.pObj) = (OBJECT_ADDRESS (Wrd239.Obj));
  (Wrd244.Obj) = ((Wrd243.pObj) [1]);
  (Wrd240.Obj) = (MAKE_OBJECT (26, (Wrd244.uLng)));

DEFLABEL (label_222)
  (Rsp [1]) = (Wrd240.Obj);
  goto actual_bits_78;

DEFLABEL (label_223)
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd239.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_11]), 1);

DEFLABEL (label_135)
  (Wrd240.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  (Wrd234.Obj) = (Rsp [1]);
  (Wrd235.Obj) = (current_block [OBJECT_7_6]);
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd238.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  (* (--Rsp)) = (Wrd234.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_134)
  (Wrd223.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_226)
  (Wrd252.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd252.Obj);
  (Wrd256.Obj) = (Rsp [3]);
  (Wrd257.uLng) = (OBJECT_TYPE (Wrd256.Obj));
  if (! ((Wrd257.uLng) == 1))
    goto label_231;
  (Wrd255.pObj) = (OBJECT_ADDRESS (Wrd256.Obj));
  (Wrd253.Obj) = ((Wrd255.pObj) [1]);

DEFLABEL (label_230)
  (Wrd265.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd253.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Rsp [4]) = (Wrd262.Obj);
  (Wrd275.Obj) = (Rsp [1]);
  (Wrd276.uLng) = (OBJECT_TYPE (Wrd275.Obj));
  if (! ((Wrd276.uLng) == 10))
    goto label_229;
  (Wrd272.pObj) = (OBJECT_ADDRESS (Wrd275.Obj));
  (Wrd273.Obj) = ((Wrd272.pObj) [0]);
  (Wrd274.Lng) = (FIXNUM_TO_LONG (Wrd273.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd274.Lng))))
    goto label_229;
  (Wrd266.Obj) = ((Wrd272.pObj) [3]);

DEFLABEL (label_228)
  (Rsp [3]) = (Wrd266.Obj);

DEFLABEL (label_227)
  Rsp = (& (Rsp [2]));
  goto loop_117;

DEFLABEL (label_229)
  (Wrd277.Obj) = (Rsp [1]);
  (Wrd278.Obj) = (current_block [OBJECT_7_9]);
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd281.Obj);
  (* (--Rsp)) = (Wrd278.Obj);
  (* (--Rsp)) = (Wrd277.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_137)
  (Wrd266.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  (Wrd261.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_136)
  (Wrd253.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_232)
  (Wrd286.Obj) = (Rsp [3]);
  (Wrd287.uLng) = (OBJECT_TYPE (Wrd286.Obj));
  if (! ((Wrd287.uLng) == 1))
    goto label_240;
  (Wrd285.pObj) = (OBJECT_ADDRESS (Wrd286.Obj));
  (Wrd283.Obj) = ((Wrd285.pObj) [1]);

DEFLABEL (label_239)
  (Rsp [3]) = (Wrd283.Obj);
  (Wrd294.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd294.Obj);
  (Wrd321.Obj) = (Rsp [2]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if (! ((Wrd322.uLng) == 10))
    goto label_238;
  (Wrd318.pObj) = (OBJECT_ADDRESS (Wrd321.Obj));
  (Wrd319.Obj) = ((Wrd318.pObj) [0]);
  (Wrd320.Lng) = (FIXNUM_TO_LONG (Wrd319.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd320.Lng))))
    goto label_238;
  (Wrd297.Obj) = ((Wrd318.pObj) [2]);
  if ((Wrd297.Obj) == ((SCHEME_OBJECT) 0))
    goto label_236;

DEFLABEL (label_235)
  (Wrd313.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd313.Obj);
  (Wrd314.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd314.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd427.Obj) = (Rsp [7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd427.Obj);
  (Wrd426.pObj) = (& (Rhp [-2]));
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd426.pObj)));

DEFLABEL (label_234)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_233)
  (Rsp [6]) = (Wrd300.Obj);
  (Wrd309.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd309.Obj);
  goto label_227;

DEFLABEL (label_236)
  (Wrd303.Obj) = (Rsp [7]);
  (Wrd304.uLng) = (OBJECT_TYPE (Wrd303.Obj));
  if (! ((Wrd304.uLng) == 1))
    goto label_237;
  (Wrd302.pObj) = (OBJECT_ADDRESS (Wrd303.Obj));
  (Wrd300.Obj) = ((Wrd302.pObj) [1]);
  goto label_234;

DEFLABEL (label_237)
  (Wrd308.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd303.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_139)
  (Wrd300.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_238)
  (Wrd323.Obj) = (Rsp [2]);
  (Wrd324.Obj) = (current_block [OBJECT_7_6]);
  (Wrd327.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd327.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  (* (--Rsp)) = (Wrd323.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_140)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_236;
  goto label_235;

DEFLABEL (label_240)
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd291.Obj);
  (* (--Rsp)) = (Wrd286.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_138)
  (Wrd283.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_241)
  (Wrd331.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd331.Obj);
  (Wrd341.Obj) = (Rsp [2]);
  (Wrd342.uLng) = (OBJECT_TYPE (Wrd341.Obj));
  if (! ((Wrd342.uLng) == 10))
    goto label_251;
  (Wrd338.pObj) = (OBJECT_ADDRESS (Wrd341.Obj));
  (Wrd339.Obj) = ((Wrd338.pObj) [0]);
  (Wrd340.Lng) = (FIXNUM_TO_LONG (Wrd339.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd340.Lng))))
    goto label_251;
  (Wrd334.Obj) = ((Wrd338.pObj) [2]);
  (* (--Rsp)) = (Wrd334.Obj);

DEFLABEL (label_250)
  (Wrd350.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd350.Obj);
  (Wrd351.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd351.Obj);
  (Wrd353.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd356.Obj) = ((Wrd353.pObj) [0]);
  (Wrd357.uLng) = (OBJECT_TYPE (Wrd356.Obj));
  if ((Wrd357.uLng) == 50)
    goto label_249;
  Wrd352 = Wrd356;

DEFLABEL (label_248)
  (* (--Rsp)) = (Wrd352.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_7_72);
  (Wrd16.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_247;
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 26))
    goto label_247;
  if ((Wrd17.Obj) == Rvl)
    goto label_243;

DEFLABEL (label_242)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_7_19]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_7_20]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Rsp [3]) = (Wrd41.Obj);
  (Wrd48.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_7_21]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Rsp [2]) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_74]));

DEFLABEL (label_243)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_246)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_245;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_244)
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_117;

DEFLABEL (label_245)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_75]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_153)
  (Wrd6.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_73]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_161)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_242;
  goto label_243;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_24])), (Wrd353.pObj));

DEFLABEL (label_142)
  (Wrd352.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  (Wrd343.Obj) = (Rsp [2]);
  (Wrd344.Obj) = (current_block [OBJECT_7_6]);
  (Wrd347.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd347.Obj);
  (* (--Rsp)) = (Wrd344.Obj);
  (* (--Rsp)) = (Wrd343.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_141)
  (* (--Rsp)) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_7_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_124)
  (* (--Rsp)) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_123)
  (* (--Rsp)) = Rvl;
  goto label_254;

DEFLABEL (label_256)
  (Wrd358.Obj) = (Rsp [2]);
  if ((Wrd358.Obj) == (Wrd6.Obj))
    goto label_261;
  (Wrd360.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd360.Obj);
  (Wrd365.uLng) = (OBJECT_TYPE (Wrd358.Obj));
  if (! ((Wrd365.uLng) == 1))
    goto label_260;
  (Wrd363.pObj) = (OBJECT_ADDRESS (Wrd358.Obj));
  (Wrd361.Obj) = ((Wrd363.pObj) [0]);

DEFLABEL (label_259)
  (Rsp [1]) = (Wrd361.Obj);
  (Wrd373.Obj) = (Rsp [2]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if (! ((Wrd374.uLng) == 1))
    goto label_258;
  (Wrd372.pObj) = (OBJECT_ADDRESS (Wrd373.Obj));
  (Wrd370.Obj) = ((Wrd372.pObj) [1]);

DEFLABEL (label_257)
  (Rsp [2]) = (Wrd370.Obj);
  goto loop_117;

DEFLABEL (label_258)
  (Wrd378.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd378.Obj);
  (* (--Rsp)) = (Wrd373.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_144)
  (Wrd370.Obj) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  (Wrd369.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd369.Obj);
  (* (--Rsp)) = (Wrd358.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_143)
  (Wrd361.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_261)
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd384.Obj) = ((Wrd381.pObj) [0]);
  (Wrd385.uLng) = (OBJECT_TYPE (Wrd384.Obj));
  if ((Wrd385.uLng) == 50)
    goto label_285;
  Wrd380 = Wrd384;

DEFLABEL (label_284)
  Wrd379 = Wrd380;
  (Wrd391.Obj) = (Rsp [3]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if (! ((Wrd392.uLng) == 26))
    goto label_283;
  (Wrd393.uLng) = (OBJECT_TYPE (Wrd380.Obj));
  if (! ((Wrd393.uLng) == 26))
    goto label_283;
  (Wrd396.Lng) = (FIXNUM_TO_LONG (Wrd391.Obj));
  (Wrd397.Lng) = (FIXNUM_TO_LONG (Wrd380.Obj));
  (Wrd394.Lng) = ((Wrd396.Lng) - (Wrd397.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd394.Lng)))
    goto label_283;
  (Wrd398.Obj) = (LONG_TO_FIXNUM (Wrd394.Lng));
  (* (--Rsp)) = (Wrd398.Obj);

DEFLABEL (label_282)
  (Wrd401.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd401.Obj);
  (Wrd409.Obj) = (Rsp [7]);
  (Wrd410.uLng) = (OBJECT_TYPE (Wrd409.Obj));
  if (! ((Wrd410.uLng) == 26))
    goto label_281;
  (Wrd411.Obj) = (Rsp [2]);
  (Wrd412.pObj) = (OBJECT_ADDRESS (Wrd411.Obj));
  (Wrd413.Obj) = ((Wrd412.pObj) [2]);
  (Wrd414.uLng) = (OBJECT_TYPE (Wrd413.Obj));
  if (! ((Wrd414.uLng) == 26))
    goto label_281;
  (Wrd417.Lng) = (FIXNUM_TO_LONG (Wrd409.Obj));
  (Wrd421.Lng) = (FIXNUM_TO_LONG (Wrd413.Obj));
  (Wrd415.Lng) = ((Wrd417.Lng) - (Wrd421.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd415.Lng)))
    goto label_281;
  (Wrd422.Obj) = (LONG_TO_FIXNUM (Wrd415.Lng));
  (* (--Rsp)) = (Wrd422.Obj);

DEFLABEL (label_280)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_279;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_279;
  if (! (Rvl == (Wrd5.Obj)))
    goto label_276;

DEFLABEL (label_275)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_79]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_80]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_81]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_7_80);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_7_79);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_274;
  Wrd8 = Wrd12;

DEFLABEL (label_273)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_272;
  Wrd14 = Wrd18;

DEFLABEL (label_271)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_7_94);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_270;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_270;
  if (! (Rvl == (Wrd5.Obj)))
    goto label_263;

DEFLABEL (label_262)
  (Wrd38.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (Rsp [7]) = (Wrd39.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [3]);
  (Rsp [5]) = (Wrd40.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_105]));

DEFLABEL (label_263)
  (Wrd15.Obj) = (current_block [OBJECT_7_19]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_269;
  Wrd17 = Wrd21;

DEFLABEL (label_268)
  (Wrd26.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [5]) = (Wrd27.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_103]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_104]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_81]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_7_104);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_7_103);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_21]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [6]) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_106]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_267;
  Wrd17 = Wrd21;

DEFLABEL (label_266)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_265;
  Wrd23 = Wrd27;

DEFLABEL (label_264)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_7_106);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_20]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [7]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_74]));

DEFLABEL (label_265)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_108])), (Wrd24.pObj));

DEFLABEL (label_170)
  (Wrd23.Obj) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_107])), (Wrd18.pObj));

DEFLABEL (label_169)
  (Wrd17.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_102])), (Wrd18.pObj));

DEFLABEL (label_168)
  (Wrd17.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_270)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_101]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_167)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_263;
  goto label_262;

DEFLABEL (label_272)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_96])), (Wrd15.pObj));

DEFLABEL (label_163)
  (Wrd14.Obj) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_95])), (Wrd9.pObj));

DEFLABEL (label_162)
  (Wrd8.Obj) = Rvl;
  goto label_273;

DEFLABEL (label_276)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_278;
  Wrd16 = Wrd20;

DEFLABEL (label_277)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_7_22]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Rsp [6]) = (Wrd30.Obj);
  (Wrd37.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_7_23]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Rsp [7]) = (Wrd45.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_7_19]);
  (Rsp [5]) = (Wrd49.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_78]));

DEFLABEL (label_278)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_77])), (Wrd17.pObj));

DEFLABEL (label_155)
  (Wrd16.Obj) = Rvl;
  goto label_277;

DEFLABEL (label_279)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_76]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_154)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_276;
  goto label_275;

DEFLABEL (label_281)
  (Wrd402.Obj) = (Rsp [7]);
  (Wrd404.Obj) = (Rsp [2]);
  (Wrd405.pObj) = (OBJECT_ADDRESS (Wrd404.Obj));
  (Wrd403.Obj) = ((Wrd405.pObj) [2]);
  (Wrd408.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd408.Obj);
  (* (--Rsp)) = (Wrd403.Obj);
  (* (--Rsp)) = (Wrd402.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_147)
  (* (--Rsp)) = Rvl;
  goto label_280;

DEFLABEL (label_283)
  (Wrd386.Obj) = (Rsp [3]);
  (Wrd390.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd390.Obj);
  (* (--Rsp)) = (Wrd379.Obj);
  (* (--Rsp)) = (Wrd386.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_146)
  (* (--Rsp)) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd381.pObj));

DEFLABEL (label_145)
  (Wrd380.Obj) = Rvl;
  goto label_284;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Wrd300.Obj) = Rvl;
  goto label_233;

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_7_21);
  goto label_246;

DEFLABEL (evaluation_174)
DEFLABEL (evaluation_89)
  INTERRUPT_CHECK (26, LABEL_7_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_63]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [10]);
  if (! ((Wrd14.Obj) == (current_block [OBJECT_7_0])))
    goto label_287;
  (Wrd27.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_7_63);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_286)
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_44]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_7_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_7_65);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto actual_bits_78;

DEFLABEL (label_287)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_289;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_288)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_286;

DEFLABEL (label_289)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_67]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_152)
  (Wrd17.Obj) = Rvl;
  goto label_288;

DEFLABEL (actual_bits_175)
DEFLABEL (actual_bits_78)
  INTERRUPT_CHECK (26, LABEL_7_68);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_70);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_69])));
  Rhp += 8;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd22 = Wrd7;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [9]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [8]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [6]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [7]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [8]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [9]) = (Wrd9.Obj);
  (Rsp [9]) = (Wrd6.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (Rsp [8]) = (Wrd24.Obj);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Rsp [7]) = (Wrd25.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd28.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_71]));

DEFLABEL (block_offset_177)
DEFLABEL (block_offset_84)
  INTERRUPT_CHECK (26, LABEL_7_85);
  (Wrd5.Obj) = (Rsp [8]);
  (Rsp [9]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_87);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_86])));
  Rhp += 7;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd21 = Wrd8;
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd21.pObj) [5]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [6]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [7]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [8]) = (Wrd10.Obj);
  (Rsp [10]) = (Wrd7.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_88]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_294;
  Wrd27 = Wrd31;

DEFLABEL (label_293)
  (Wrd33.Obj) = (Rsp [3]);
  if ((Wrd33.Obj) == (Wrd27.Obj))
    goto label_291;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_290;

DEFLABEL (label_291)
  (Wrd35.Obj) = (current_block [OBJECT_7_25]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_290)
DEFLABEL (label_292)
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_90]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_7_88);
  (Rsp [7]) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [8]) = (Wrd6.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_71]));

DEFLABEL (label_294)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_89])), (Wrd28.pObj));

DEFLABEL (label_157)
  (Wrd27.Obj) = Rvl;
  goto label_293;

DEFLABEL (lambda_176)
  CLOSURE_HEADER (LABEL_7_69);

DEFLABEL (lambda_77)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.Obj) = ((Wrd7.pObj) [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_298;
  (Wrd24.Obj) = ((Wrd7.pObj) [9]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_298;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd30.Lng) + (Wrd34.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_298;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_297)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [7]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd46.Obj) = ((Wrd37.pObj) [8]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_296;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_295)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = ((Wrd55.pObj) [3]);
  (Rsp [7]) = (Wrd57.Obj);
  (Wrd60.Obj) = ((Wrd55.pObj) [4]);
  (Rsp [6]) = (Wrd60.Obj);
  goto loop_117;

DEFLABEL (label_296)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_93]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_160)
  (* (--Rsp)) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [6]);
  (Wrd12.Obj) = ((Wrd11.pObj) [9]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_92]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_159)
  (* (--Rsp)) = Rvl;
  goto label_297;

DEFLABEL (lambda_178)
  CLOSURE_HEADER (LABEL_7_86);

DEFLABEL (lambda_83)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_5]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_304;
  Wrd10 = Wrd14;

DEFLABEL (label_303)
  Wrd9 = Wrd10;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_302;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_302;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd28.Lng) = ((Wrd32.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_302;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_301)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd45.Obj) = ((Wrd36.pObj) [6]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_300;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [1]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_299)
  (Wrd53.Obj) = (Rsp [5]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = ((Wrd54.pObj) [7]);
  (Rsp [7]) = (Wrd56.Obj);
  (Wrd59.Obj) = ((Wrd54.pObj) [8]);
  (Rsp [6]) = (Wrd59.Obj);
  goto loop_117;

DEFLABEL (label_300)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_100]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_166)
  (* (--Rsp)) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_99]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_165)
  (* (--Rsp)) = Rvl;
  goto label_301;

DEFLABEL (label_304)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_98])), (Wrd11.pObj));

DEFLABEL (label_164)
  (Wrd10.Obj) = Rvl;
  goto label_303;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_9 7
#define LABEL_8_10 9
#define LABEL_8_11 11
#define LABEL_8_7 13
#define TAG_8_8 5
#define LABEL_8_12 15
#define LABEL_8_13 17
#define LABEL_8_16 19
#define LABEL_8_17 21
#define LABEL_8_18 23
#define LABEL_8_22 25
#define LABEL_8_24 27
#define LABEL_8_25 29
#define LABEL_8_26 31
#define LABEL_8_32 33
#define LABEL_8_33 35
#define LABEL_8_38 37
#define LABEL_8_39 39
#define LABEL_8_42 41
#define LABEL_8_44 43
#define LABEL_8_45 45
#define LABEL_8_46 47
#define LABEL_8_47 49
#define LABEL_8_43 51
#define LABEL_8_41 53
#define LABEL_8_37 55
#define LABEL_8_35 57
#define LABEL_8_51 59
#define LABEL_8_30 61
#define LABEL_8_52 63
#define LABEL_8_31 65
#define LABEL_8_29 67
#define LABEL_8_54 69
#define LABEL_8_55 71
#define LABEL_8_56 73
#define LABEL_8_28 75
#define LABEL_8_59 77
#define LABEL_8_60 79
#define LABEL_8_23 81
#define LABEL_8_62 83
#define LABEL_8_63 85
#define LABEL_8_20 87
#define LABEL_8_65 89
#define LABEL_8_66 91
#define LABEL_8_67 93
#define LABEL_8_19 95
#define LABEL_8_68 97
#define LABEL_8_69 99
#define LABEL_8_70 101
#define LABEL_8_71 103
#define LABEL_8_72 105
#define LABEL_8_73 107
#define LABEL_8_74 109
#define LABEL_8_75 111
#define LABEL_8_76 113
#define LABEL_8_77 115
#define LABEL_8_14 117
#define LABEL_8_79 119
#define LABEL_8_50 121
#define LABEL_8_80 123
#define LABEL_8_81 125
#define LABEL_8_86 127
#define LABEL_8_87 129
#define LABEL_8_53 131
#define LABEL_8_57 133
#define LABEL_8_88 135
#define LABEL_8_90 137
#define LABEL_8_58 139
#define LABEL_8_64 141
#define LABEL_8_78 143
#define LABEL_8_82 145
#define LABEL_8_83 147
#define LABEL_8_84 149
#define LABEL_8_89 151
#define LABEL_8_101 153
#define LABEL_8_92 155
#define LABEL_8_93 157
#define LABEL_8_95 159
#define LABEL_8_96 161
#define LABEL_8_106 163
#define LABEL_8_97 165
#define LABEL_8_98 167
#define LABEL_8_102 169
#define TAG_8_103 83
#define LABEL_8_107 171
#define LABEL_8_108 173
#define LABEL_8_109 175
#define LABEL_8_104 177
#define LABEL_8_110 179
#define TAG_8_111 88
#define ENVIRONMENT_LABEL_8_3 248
#define DEBUGGING_LABEL_8_2 247
#define OBJECT_8_24 246
#define OBJECT_8_23 245
#define OBJECT_8_22 244
#define OBJECT_8_21 243
#define OBJECT_8_20 242
#define OBJECT_8_19 241
#define OBJECT_8_18 240
#define OBJECT_8_17 239
#define OBJECT_8_16 238
#define OBJECT_8_15 237
#define OBJECT_8_14 236
#define OBJECT_8_13 235
#define OBJECT_8_12 234
#define OBJECT_8_11 233
#define OBJECT_8_10 232
#define OBJECT_8_9 231
#define OBJECT_8_8 230
#define OBJECT_8_7 229
#define OBJECT_8_6 228
#define OBJECT_8_5 227
#define OBJECT_8_4 226
#define OBJECT_8_3 225
#define OBJECT_8_2 224
#define OBJECT_8_1 223
#define OBJECT_8_0 222
#define EXECUTE_CACHE_8_105 181
#define EXECUTE_CACHE_8_100 183
#define EXECUTE_CACHE_8_99 185
#define EXECUTE_CACHE_8_94 187
#define EXECUTE_CACHE_8_91 189
#define EXECUTE_CACHE_8_85 191
#define EXECUTE_CACHE_8_61 193
#define EXECUTE_CACHE_8_49 195
#define EXECUTE_CACHE_8_48 197
#define EXECUTE_CACHE_8_40 199
#define EXECUTE_CACHE_8_36 201
#define EXECUTE_CACHE_8_34 203
#define EXECUTE_CACHE_8_27 205
#define EXECUTE_CACHE_8_21 207
#define EXECUTE_CACHE_8_15 209
#define EXECUTE_CACHE_8_6 211
#define FREE_REFERENCE_8_7 214
#define FREE_REFERENCE_8_6 215
#define FREE_REFERENCE_8_5 216
#define FREE_REFERENCE_8_4 217
#define FREE_REFERENCE_8_3 218
#define FREE_REFERENCE_8_2 219
#define FREE_REFERENCE_8_1 220
#define FREE_REFERENCE_8_0 221
#define FREE_REFERENCES_LABEL_8_0 180
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd71;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd94;
  machine_word Wrd89;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd82;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd92;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd110;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd222;
  machine_word Wrd118;
  machine_word Wrd144;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd150;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd164;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd207;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd206;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd191;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd187;
  machine_word Wrd179;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd217;
  machine_word Wrd221;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd241;
  machine_word Wrd231;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd8;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd253;
  machine_word Wrd249;
  machine_word Wrd261;
  machine_word Wrd257;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd242;
  machine_word Wrd243;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
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
      goto initial_phase_117;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_9);
      goto label_119;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_120;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_56;

    case 5:
      current_block = (Rpc - LABEL_8_7);
      goto loop_115;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto label_136;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto label_137;

    case 8:
      current_block = (Rpc - LABEL_8_16);
      goto label_121;

    case 9:
      current_block = (Rpc - LABEL_8_17);
      goto label_135;

    case 10:
      current_block = (Rpc - LABEL_8_18);
      goto label_122;

    case 11:
      current_block = (Rpc - LABEL_8_22);
      goto label_131;

    case 12:
      current_block = (Rpc - LABEL_8_24);
      goto label_132;

    case 13:
      current_block = (Rpc - LABEL_8_25);
      goto label_133;

    case 14:
      current_block = (Rpc - LABEL_8_26);
      goto label_134;

    case 15:
      current_block = (Rpc - LABEL_8_32);
      goto label_129;

    case 16:
      current_block = (Rpc - LABEL_8_33);
      goto label_130;

    case 17:
      current_block = (Rpc - LABEL_8_38);
      goto label_127;

    case 18:
      current_block = (Rpc - LABEL_8_39);
      goto label_128;

    case 19:
      current_block = (Rpc - LABEL_8_42);
      goto label_126;

    case 20:
      current_block = (Rpc - LABEL_8_44);
      goto label_123;

    case 21:
      current_block = (Rpc - LABEL_8_45);
      goto label_124;

    case 22:
      current_block = (Rpc - LABEL_8_46);
      goto label_125;

    case 23:
      current_block = (Rpc - LABEL_8_47);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_8_43);
      goto continuation_34;

    case 25:
      current_block = (Rpc - LABEL_8_41);
      goto continuation_35;

    case 26:
      current_block = (Rpc - LABEL_8_37);
      goto continuation_37;

    case 27:
      current_block = (Rpc - LABEL_8_35);
      goto continuation_38;

    case 28:
      current_block = (Rpc - LABEL_8_51);
      goto label_138;

    case 29:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_39;

    case 30:
      current_block = (Rpc - LABEL_8_52);
      goto label_139;

    case 31:
      current_block = (Rpc - LABEL_8_31);
      goto continuation_91;

    case 32:
      current_block = (Rpc - LABEL_8_29);
      goto continuation_42;

    case 33:
      current_block = (Rpc - LABEL_8_54);
      goto label_140;

    case 34:
      current_block = (Rpc - LABEL_8_55);
      goto label_141;

    case 35:
      current_block = (Rpc - LABEL_8_56);
      goto new_directiveB_88;

    case 36:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_46;

    case 37:
      current_block = (Rpc - LABEL_8_59);
      goto label_142;

    case 38:
      current_block = (Rpc - LABEL_8_60);
      goto label_143;

    case 39:
      current_block = (Rpc - LABEL_8_23);
      goto continuation_59;

    case 40:
      current_block = (Rpc - LABEL_8_62);
      goto label_144;

    case 41:
      current_block = (Rpc - LABEL_8_63);
      goto label_145;

    case 42:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_61;

    case 43:
      current_block = (Rpc - LABEL_8_65);
      goto label_146;

    case 44:
      current_block = (Rpc - LABEL_8_66);
      goto label_147;

    case 45:
      current_block = (Rpc - LABEL_8_67);
      goto label_148;

    case 46:
      current_block = (Rpc - LABEL_8_19);
      goto continuation_65;

    case 47:
      current_block = (Rpc - LABEL_8_68);
      goto label_149;

    case 48:
      current_block = (Rpc - LABEL_8_69);
      goto label_150;

    case 49:
      current_block = (Rpc - LABEL_8_70);
      goto label_151;

    case 50:
      current_block = (Rpc - LABEL_8_71);
      goto process_fixed_width_104;

    case 51:
      current_block = (Rpc - LABEL_8_72);
      goto label_152;

    case 52:
      current_block = (Rpc - LABEL_8_73);
      goto label_153;

    case 53:
      current_block = (Rpc - LABEL_8_74);
      goto label_154;

    case 54:
      current_block = (Rpc - LABEL_8_75);
      goto label_155;

    case 55:
      current_block = (Rpc - LABEL_8_76);
      goto label_156;

    case 56:
      current_block = (Rpc - LABEL_8_77);
      goto label_157;

    case 57:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_73;

    case 58:
      current_block = (Rpc - LABEL_8_79);
      goto label_158;

    case 59:
      current_block = (Rpc - LABEL_8_50);
      goto continuation_19;

    case 60:
      current_block = (Rpc - LABEL_8_80);
      goto label_159;

    case 61:
      current_block = (Rpc - LABEL_8_81);
      goto label_160;

    case 62:
      current_block = (Rpc - LABEL_8_86);
      goto process_trivial_directive_114;

    case 63:
      current_block = (Rpc - LABEL_8_87);
      goto label_161;

    case 64:
      current_block = (Rpc - LABEL_8_53);
      goto continuation_92;

    case 65:
      current_block = (Rpc - LABEL_8_57);
      goto continuation_87;

    case 66:
      current_block = (Rpc - LABEL_8_88);
      goto collect_groupB_86;

    case 67:
      current_block = (Rpc - LABEL_8_90);
      goto label_162;

    case 68:
      current_block = (Rpc - LABEL_8_58);
      goto continuation_50;

    case 69:
      current_block = (Rpc - LABEL_8_64);
      goto continuation_105;

    case 70:
      current_block = (Rpc - LABEL_8_78);
      goto continuation_75;

    case 71:
      current_block = (Rpc - LABEL_8_82);
      goto continuation_27;

    case 72:
      current_block = (Rpc - LABEL_8_83);
      goto continuation_26;

    case 73:
      current_block = (Rpc - LABEL_8_84);
      goto continuation_25;

    case 74:
      current_block = (Rpc - LABEL_8_89);
      goto continuation_84;

    case 75:
      current_block = (Rpc - LABEL_8_101);
      goto label_163;

    case 76:
      current_block = (Rpc - LABEL_8_92);
      goto continuation_51;

    case 77:
      current_block = (Rpc - LABEL_8_93);
      goto continuation_111;

    case 78:
      current_block = (Rpc - LABEL_8_95);
      goto continuation_76;

    case 79:
      current_block = (Rpc - LABEL_8_96);
      goto continuation_24;

    case 80:
      current_block = (Rpc - LABEL_8_106);
      goto label_164;

    case 81:
      current_block = (Rpc - LABEL_8_97);
      goto continuation_23;

    case 82:
      current_block = (Rpc - LABEL_8_98);
      goto continuation_22;

    case 83:
      current_block = (Rpc - LABEL_8_102);
      goto lambda_175;

    case 84:
      current_block = (Rpc - LABEL_8_107);
      goto label_165;

    case 85:
      current_block = (Rpc - LABEL_8_108);
      goto label_166;

    case 86:
      current_block = (Rpc - LABEL_8_109);
      goto label_167;

    case 87:
      current_block = (Rpc - LABEL_8_104);
      goto continuation_77;

    case 88:
      current_block = (Rpc - LABEL_8_110);
      goto lambda_176;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_phase_169)
DEFLABEL (initial_phase_117)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  ((Wrd25.pObj) [2]) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_180;
  Wrd5 = Wrd9;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_178;
  Wrd11 = Wrd15;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [4]) = (Wrd19.Obj);
  (Rsp [5]) = (Wrd19.Obj);
  (Rsp [6]) = (Wrd19.Obj);
  goto loop_115;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd12.pObj));

DEFLABEL (label_120)
  (Wrd11.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_9])), (Wrd6.pObj));

DEFLABEL (label_119)
  (Wrd5.Obj) = Rvl;
  goto label_179;

DEFLABEL (loop_170)
DEFLABEL (loop_115)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_8_0]))
    goto label_238;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_237;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_236)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 47)
    goto label_233;
  if ((Wrd17.uLng) == 1)
    goto label_181;
  (Wrd20.Obj) = (current_block [OBJECT_8_18]);
  (Rsp [6]) = (Wrd20.Obj);
  (Rsp [7]) = (Wrd16.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_49]));

DEFLABEL (label_181)
  if (! ((Wrd17.uLng) == 1))
    goto label_232;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_231)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (current_block [OBJECT_8_2]))
    goto label_230;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_4]))
    goto label_229;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_5]))
    goto label_214;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_7]))
    goto label_213;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_10]))
    goto label_211;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_11]))
    goto label_206;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_12]))
    goto label_204;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_13]))
    goto label_199;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_14]))
    goto label_196;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_15]))
    goto label_196;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_16]))
    goto label_189;
  if ((Wrd32.Obj) == (current_block [OBJECT_8_17]))
    goto label_182;
  (Wrd56.Obj) = (current_block [OBJECT_8_18]);
  (Rsp [7]) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd57.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_49]));

DEFLABEL (label_182)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_47]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_48]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_47);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_50]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto new_directiveB_88;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_50);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_188;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_188;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_187)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_186;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_186;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_185)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_82]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_83]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_84]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_85]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_8_84);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_100]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_8_83);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_99]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_8_82);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_97]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_98]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_85]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_98);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_100]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_8_97);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_99]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_8_96);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_184;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_183)
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [7]) = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_115;

DEFLABEL (label_184)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_106]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_164)
  (Wrd8.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_8_22]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_81]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_21]), 2);

DEFLABEL (label_160)
  (Wrd21.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_20]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_80]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_21]), 2);

DEFLABEL (label_159)
  (* (--Rsp)) = Rvl;
  goto label_187;

DEFLABEL (label_189)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_43]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_195;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_194)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_193;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_192)
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_5]));
  (Wrd86.Obj) = ((Wrd83.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_191;
  Wrd82 = Wrd86;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_8_43);
  Rsp = (& (Rsp [2]));
  goto process_trivial_directive_114;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_46])), (Wrd83.pObj));

DEFLABEL (label_125)
  (Wrd82.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_45]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_124)
  (* (--Rsp)) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_44]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_123)
  (Wrd66.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_196)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_41]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd93.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_4]));
  (Wrd96.Obj) = ((Wrd93.pObj) [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd97.uLng) == 50)
    goto label_198;
  Wrd92 = Wrd96;

DEFLABEL (label_197)
  (* (--Rsp)) = (Wrd92.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_8_41);
  Rsp = (& (Rsp [2]));
  goto process_trivial_directive_114;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_42])), (Wrd93.pObj));

DEFLABEL (label_126)
  (Wrd92.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_199)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd104.Obj) = (Rsp [2]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_203;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [1]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_202)
  (Wrd111.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd114.Obj) = ((Wrd111.pObj) [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if ((Wrd115.uLng) == 50)
    goto label_201;
  Wrd110 = Wrd114;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd110.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_8_37);
  Rsp = (& (Rsp [2]));
  goto process_trivial_directive_114;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_39])), (Wrd111.pObj));

DEFLABEL (label_128)
  (Wrd110.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_127)
  (* (--Rsp)) = Rvl;
  goto label_202;

DEFLABEL (label_204)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_35]))));
  (* (--Rsp)) = (Wrd118.Obj);

DEFLABEL (label_205)
  (Wrd222.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd222.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_36]));

DEFLABEL (label_206)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd128.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_210;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd129.Obj) = ((Wrd131.pObj) [1]);

DEFLABEL (label_209)
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd140.uLng) == 1))
    goto label_208;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_207)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_34]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_8_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_36]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_8_53);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = (& (Rsp [5]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd6.pObj)));
  (Rsp [1]) = (Wrd8.Obj);
  goto new_directiveB_88;

DEFLABEL (label_208)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_33]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_130)
  (* (--Rsp)) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_129)
  (Wrd129.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_211)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd148.pObj) = (& (Rsp [3]));
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd148.pObj)));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd156.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd157.Obj) = (current_block [OBJECT_8_8]);
  (* (Rhp++)) = (Wrd156.Obj);
  (* (Rhp++)) = (Wrd157.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_212)
  (Wrd166.pObj) = (& (Rhp [-3]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd166.pObj)));
  (* (--Rsp)) = (Wrd167.Obj);
  goto new_directiveB_88;

DEFLABEL (label_213)
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd162.pObj) = (& (Rsp [3]));
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd162.pObj)));
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd170.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd171.Obj) = (current_block [OBJECT_8_8]);
  (Wrd172.Obj) = (current_block [OBJECT_8_9]);
  (* (Rhp++)) = (Wrd170.Obj);
  (* (Rhp++)) = (Wrd171.Obj);
  (* (Rhp++)) = (Wrd172.Obj);
  goto label_212;

DEFLABEL (label_214)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (Wrd176.Obj) = (Rsp [7]);
  if (! ((Wrd176.Obj) == (current_block [OBJECT_8_0])))
    goto label_226;
  (Wrd213.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd214.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd214.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_225)
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (Wrd194.Obj) = (Rsp [3]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 1))
    goto label_224;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd191.Obj) = ((Wrd193.pObj) [1]);

DEFLABEL (label_223)
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if (! ((Wrd202.uLng) == 1))
    goto label_222;
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd201.Obj) = ((Wrd200.pObj) [1]);
  (* (--Rsp)) = (Wrd201.Obj);

DEFLABEL (label_221)
  (Wrd208.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd211.Obj) = ((Wrd208.pObj) [0]);
  (Wrd212.uLng) = (OBJECT_TYPE (Wrd211.Obj));
  if ((Wrd212.uLng) == 50)
    goto label_220;
  Wrd207 = Wrd211;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd207.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_8_23);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_218;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_217)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_216;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_215)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd28.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd29.Obj) = (current_block [OBJECT_8_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd25.pObj) = (& (Rhp [-5]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd25.pObj)));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_64]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.pObj) = (& (Rsp [2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto new_directiveB_88;

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_8_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_94]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_8_93);
  (Rsp [6]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_103);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_102])));
  Rhp += 7;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd21 = Wrd8;
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [5]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [6]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [7]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [8]) = (Wrd10.Obj);
  (Rsp [7]) = (Wrd7.Obj);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_216)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_63]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_145)
  (Wrd14.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_62]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_144)
  (Wrd5.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_26])), (Wrd208.pObj));

DEFLABEL (label_134)
  (Wrd207.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_133)
  (* (--Rsp)) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd199.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_132)
  (Wrd191.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd176.Obj));
  if (! ((Wrd183.uLng) == 1))
    goto label_228;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd176.Obj));
  (Wrd179.Obj) = ((Wrd181.pObj) [0]);

DEFLABEL (label_227)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd179.Obj);
  goto label_225;

DEFLABEL (label_228)
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_131)
  (Wrd179.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_229)
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd217.Obj);
  goto label_205;

DEFLABEL (label_230)
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd221.Obj);
  goto label_205;

DEFLABEL (label_232)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_122)
  (* (--Rsp)) = Rvl;
  goto label_231;

DEFLABEL (label_233)
  (Wrd228.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd229.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd228.Obj);
  (* (Rhp++)) = (Wrd229.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd224.pObj) = (& (Rhp [-3]));
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd224.pObj)));
  (* (--Rsp)) = (Wrd225.Obj);
  if (! ((Wrd17.uLng) == 47))
    goto label_235;
  (Wrd234.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd235.Obj) = ((Wrd234.pObj) [1]);
  (Wrd231.Obj) = (MAKE_OBJECT (26, (Wrd235.uLng)));

DEFLABEL (label_234)
  (Rsp [1]) = (Wrd231.Obj);
  goto process_fixed_width_104;

DEFLABEL (label_235)
  (Wrd241.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_135)
  (Wrd231.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_237)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_236;

DEFLABEL (label_238)
  (Wrd244.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd247.Obj) = ((Wrd244.pObj) [0]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if ((Wrd248.uLng) == 50)
    goto label_244;
  Wrd243 = Wrd247;

DEFLABEL (label_243)
  Wrd242 = Wrd243;
  (Wrd254.Obj) = (Rsp [3]);
  (Wrd255.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if (! ((Wrd255.uLng) == 26))
    goto label_242;
  (Wrd256.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if (! ((Wrd256.uLng) == 26))
    goto label_242;
  (Wrd259.Lng) = (FIXNUM_TO_LONG (Wrd254.Obj));
  (Wrd260.Lng) = (FIXNUM_TO_LONG (Wrd243.Obj));
  (Wrd257.Lng) = ((Wrd259.Lng) + (Wrd260.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd257.Lng)))
    goto label_242;
  (Wrd261.Obj) = (LONG_TO_FIXNUM (Wrd257.Lng));
  (* (--Rsp)) = (Wrd261.Obj);

DEFLABEL (label_241)
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd264.Obj);
  (Wrd265.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd265.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_7]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_240;
  Wrd10 = Wrd14;

DEFLABEL (label_239)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_34]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_8_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto collect_groupB_86;

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_8_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_105]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_8_104);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_111);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_110])));
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

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_79])), (Wrd11.pObj));

DEFLABEL (label_158)
  (Wrd10.Obj) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  (Wrd249.Obj) = (Rsp [3]);
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd242.Obj);
  (* (--Rsp)) = (Wrd249.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_137)
  (* (--Rsp)) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_12])), (Wrd244.pObj));

DEFLABEL (label_136)
  (Wrd243.Obj) = Rvl;
  goto label_243;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_8_35);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_6]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_246;
  Wrd7 = Wrd11;

DEFLABEL (label_245)
  (Rsp [1]) = (Wrd7.Obj);
  goto process_fixed_width_104;

DEFLABEL (label_246)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_51])), (Wrd8.pObj));

DEFLABEL (label_138)
  (Wrd7.Obj) = Rvl;
  goto label_245;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_248;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_247)
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [7]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_115;

DEFLABEL (label_248)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_52]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_139)
  (Wrd6.Obj) = Rvl;
  goto label_247;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_8_29);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_252;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_251)
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_250;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_249)
  (Rsp [6]) = (Wrd15.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [7]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_115;

DEFLABEL (label_250)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_55]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_141)
  (Wrd15.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_54]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_140)
  (Wrd6.Obj) = Rvl;
  goto label_251;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_256;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_255)
  (Wrd20.Obj) = (current_block [OBJECT_8_19]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_254;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_253)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_61]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_8_58);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_92]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_8_92);
  (Wrd9.Obj) = (Rsp [6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [7]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_115;

DEFLABEL (label_254)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_60]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_143)
  (* (--Rsp)) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_59]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_142)
  (Wrd8.Obj) = Rvl;
  goto label_255;

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_8_20);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_262;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_261)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_260;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_259)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_258;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_257)
  (Rsp [1]) = (Wrd22.Obj);
  goto process_fixed_width_104;

DEFLABEL (label_258)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_67]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_148)
  (Wrd22.Obj) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_66]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_147)
  (Wrd15.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_65]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_146)
  (Wrd6.Obj) = Rvl;
  goto label_261;

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_8_19);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_268;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_267)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_266;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_265)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 47))
    goto label_264;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_263)
  (Rsp [1]) = (Wrd22.Obj);
  goto process_fixed_width_104;

DEFLABEL (label_264)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_70]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_151)
  (Wrd22.Obj) = Rvl;
  goto label_263;

DEFLABEL (label_266)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_69]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_150)
  (Wrd15.Obj) = Rvl;
  goto label_265;

DEFLABEL (label_268)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_68]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_149)
  (Wrd6.Obj) = Rvl;
  goto label_267;

DEFLABEL (new_directiveB_171)
DEFLABEL (new_directiveB_88)
  INTERRUPT_CHECK (26, LABEL_8_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  goto collect_groupB_86;

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_8_57);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (process_fixed_width_172)
DEFLABEL (process_fixed_width_104)
  INTERRUPT_CHECK (26, LABEL_8_71);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_282;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_281)
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_280;
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_280;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + (Wrd29.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_280;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_279)
  (Rsp [4]) = (Wrd20.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_278;
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_278;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) + (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_278;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_277)
  (Rsp [5]) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [7]);
  (Wrd46.Obj) = (current_block [OBJECT_8_0]);
  if ((Wrd45.Obj) == (Wrd46.Obj))
    goto label_276;
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_275;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_274)
  (Wrd59.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd63.Obj) = (Rsp [8]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_273;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [0]);

DEFLABEL (label_272)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_271;
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_271;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd78.Lng) = ((Wrd80.Lng) + (Wrd81.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd78.Lng)))
    goto label_271;
  (Wrd74.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));

DEFLABEL (label_270)
  (Wrd82.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd82.Obj);

DEFLABEL (label_269)
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Rsp [7]) = (Wrd83.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_115;

DEFLABEL (label_271)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_77]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_157)
  (Wrd74.Obj) = Rvl;
  goto label_270;

DEFLABEL (label_273)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_76]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_156)
  (Wrd60.Obj) = Rvl;
  goto label_272;

DEFLABEL (label_275)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_75]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_155)
  (Wrd47.Obj) = Rvl;
  goto label_274;

DEFLABEL (label_276)
  (Wrd90.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd94.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  goto label_269;

DEFLABEL (label_278)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_74]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_154)
  (Wrd35.Obj) = Rvl;
  goto label_277;

DEFLABEL (label_280)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_73]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_153)
  (Wrd20.Obj) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_72]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_152)
  (Wrd6.Obj) = Rvl;
  goto label_281;

DEFLABEL (process_trivial_directive_173)
DEFLABEL (process_trivial_directive_114)
  INTERRUPT_CHECK (26, LABEL_8_86);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_284;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_283)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_115;

DEFLABEL (label_284)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_87]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_161)
  (Wrd6.Obj) = Rvl;
  goto label_283;

DEFLABEL (collect_groupB_174)
DEFLABEL (collect_groupB_86)
  INTERRUPT_CHECK (26, LABEL_8_88);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_8_0])))
    goto label_285;
  Rvl = (current_block [OBJECT_8_23]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_285)
  (Wrd11.Obj) = ((Wrd6.pObj) [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_89]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_289;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_288)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_91]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_8_89);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_287;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_286)
  (Wrd20.Obj) = (* (Rsp++));
  (Wrd26.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd27.Obj) = (current_block [OBJECT_8_24]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd23.pObj) = (& (Rhp [-4]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (label_287)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_101]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_163)
  (Wrd5.Obj) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_90]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_162)
  (* (--Rsp)) = Rvl;
  goto label_288;

DEFLABEL (lambda_175)
  CLOSURE_HEADER (LABEL_8_102);

DEFLABEL (lambda_110)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_295;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_295;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd22.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_295;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_294)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [6]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_293;
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_293;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd43.Lng) + (Wrd45.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_293;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_292)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [7]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_291;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_290)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [2]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [5]) = (Wrd65.Obj);
  (Wrd71.Obj) = ((Wrd63.pObj) [8]);
  (Wrd74.Obj) = ((Wrd63.pObj) [3]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Rsp [6]) = (Wrd66.Obj);
  (Wrd75.Obj) = ((Wrd63.pObj) [4]);
  (Rsp [4]) = (Wrd75.Obj);
  goto loop_115;

DEFLABEL (label_291)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_109]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_167)
  (* (--Rsp)) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [6]);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_108]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_166)
  (* (--Rsp)) = Rvl;
  goto label_292;

DEFLABEL (label_295)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [5]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_107]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_165)
  (* (--Rsp)) = Rvl;
  goto label_294;

DEFLABEL (lambda_176)
  CLOSURE_HEADER (LABEL_8_110);

DEFLABEL (lambda_78)
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

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_8 7
#define LABEL_9_9 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define LABEL_9_5 15
#define TAG_9_6 6
#define LABEL_9_14 17
#define LABEL_9_15 19
#define LABEL_9_17 21
#define LABEL_9_19 23
#define LABEL_9_20 25
#define LABEL_9_21 27
#define LABEL_9_22 29
#define LABEL_9_24 31
#define LABEL_9_25 33
#define LABEL_9_30 35
#define LABEL_9_31 37
#define LABEL_9_32 39
#define LABEL_9_33 41
#define LABEL_9_34 43
#define LABEL_9_35 45
#define LABEL_9_36 47
#define LABEL_9_37 49
#define LABEL_9_26 51
#define TAG_9_27 24
#define LABEL_9_45 53
#define LABEL_9_46 55
#define LABEL_9_47 57
#define LABEL_9_28 59
#define LABEL_9_16 61
#define LABEL_9_48 63
#define LABEL_9_49 65
#define LABEL_9_12 67
#define LABEL_9_50 69
#define LABEL_9_51 71
#define LABEL_9_53 73
#define LABEL_9_40 75
#define LABEL_9_54 77
#define LABEL_9_41 79
#define LABEL_9_42 81
#define LABEL_9_52 83
#define ENVIRONMENT_LABEL_9_3 120
#define DEBUGGING_LABEL_9_2 119
#define OBJECT_9_13 118
#define OBJECT_9_12 117
#define OBJECT_9_11 116
#define OBJECT_9_10 115
#define OBJECT_9_9 114
#define OBJECT_9_8 113
#define OBJECT_9_7 112
#define OBJECT_9_6 111
#define OBJECT_9_5 110
#define OBJECT_9_4 109
#define OBJECT_9_3 108
#define OBJECT_9_2 107
#define OBJECT_9_1 106
#define OBJECT_9_0 105
#define EXECUTE_CACHE_9_44 85
#define EXECUTE_CACHE_9_43 87
#define EXECUTE_CACHE_9_39 89
#define EXECUTE_CACHE_9_38 91
#define EXECUTE_CACHE_9_29 93
#define EXECUTE_CACHE_9_23 95
#define EXECUTE_CACHE_9_18 97
#define EXECUTE_CACHE_9_13 99
#define FREE_REFERENCE_9_2 102
#define FREE_REFERENCE_9_1 103
#define FREE_REFERENCE_9_0 104
#define FREE_REFERENCES_LABEL_9_0 84
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd103;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd174;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd191;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd150;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd240;
  machine_word Wrd245;
  machine_word Wrd249;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd224;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd225;
  machine_word Wrd230;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd219;
  machine_word Wrd211;
  machine_word Wrd213;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd194;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd259;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd106;
  machine_word Wrd280;
  machine_word Wrd281;
  machine_word Wrd142;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
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
      goto phase_1_49;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_52;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_22;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_9_5);
      goto loop_48;

    case 7:
      current_block = (Rpc - LABEL_9_14);
      goto label_53;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_54;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto label_66;

    case 10:
      current_block = (Rpc - LABEL_9_19);
      goto label_62;

    case 11:
      current_block = (Rpc - LABEL_9_20);
      goto label_63;

    case 12:
      current_block = (Rpc - LABEL_9_21);
      goto label_64;

    case 13:
      current_block = (Rpc - LABEL_9_22);
      goto label_65;

    case 14:
      current_block = (Rpc - LABEL_9_24);
      goto label_60;

    case 15:
      current_block = (Rpc - LABEL_9_25);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_9_30);
      goto label_57;

    case 17:
      current_block = (Rpc - LABEL_9_31);
      goto label_59;

    case 18:
      current_block = (Rpc - LABEL_9_32);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_9_33);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_9_34);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_9_35);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_9_36);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_9_37);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_9_26);
      goto lambda_78;

    case 25:
      current_block = (Rpc - LABEL_9_45);
      goto label_67;

    case 26:
      current_block = (Rpc - LABEL_9_46);
      goto label_68;

    case 27:
      current_block = (Rpc - LABEL_9_47);
      goto label_69;

    case 28:
      current_block = (Rpc - LABEL_9_28);
      goto continuation_32;

    case 29:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_39;

    case 30:
      current_block = (Rpc - LABEL_9_48);
      goto label_70;

    case 31:
      current_block = (Rpc - LABEL_9_49);
      goto continuation_44;

    case 32:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_43;

    case 33:
      current_block = (Rpc - LABEL_9_50);
      goto label_72;

    case 34:
      current_block = (Rpc - LABEL_9_51);
      goto label_73;

    case 35:
      current_block = (Rpc - LABEL_9_53);
      goto label_71;

    case 36:
      current_block = (Rpc - LABEL_9_40);
      goto continuation_12;

    case 37:
      current_block = (Rpc - LABEL_9_54);
      goto label_74;

    case 38:
      current_block = (Rpc - LABEL_9_41);
      goto continuation_11;

    case 39:
      current_block = (Rpc - LABEL_9_42);
      goto continuation_10;

    case 40:
      current_block = (Rpc - LABEL_9_52);
      goto continuation_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_1_76)
DEFLABEL (phase_1_49)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  Wrd23 = Wrd25;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_82;
  Wrd5 = Wrd9;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_80;
  Wrd14 = Wrd18;

DEFLABEL (label_79)
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [4]) = (Wrd20.Obj);
  (Rsp [5]) = (Wrd20.Obj);
  goto loop_48;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_8])), (Wrd15.pObj));

DEFLABEL (label_52)
  (Wrd14.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd6.pObj));

DEFLABEL (label_51)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (loop_77)
DEFLABEL (loop_48)
  INTERRUPT_CHECK (26, LABEL_9_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_9_0])))
    goto label_92;
  (Wrd275.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd275.Obj);
  (Wrd276.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd276.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_87;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;

DEFLABEL (label_85)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_52]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_84;
  Wrd19 = Wrd23;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_9_52);
  Rvl = (Rsp [7]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_53])), (Wrd20.pObj));

DEFLABEL (label_71)
  (Wrd19.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_87)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_91;
  Wrd26 = Wrd30;

DEFLABEL (label_90)
  Wrd25 = Wrd26;
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_89;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_89;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + (Wrd45.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_89;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_88)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_85;

DEFLABEL (label_89)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_51]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_73)
  (Wrd33.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_50])), (Wrd27.pObj));

DEFLABEL (label_72)
  (Wrd26.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_133;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_132)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_131;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd24.Lng))))
    goto label_131;
  (Wrd18.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_130)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (current_block [OBJECT_9_4]))
    goto label_125;
  if ((Wrd32.Obj) == (current_block [OBJECT_9_6]))
    goto label_116;
  if ((Wrd32.Obj) == (current_block [OBJECT_9_8]))
    goto label_109;
  if ((Wrd32.Obj) == (current_block [OBJECT_9_11]))
    goto label_100;
  if ((Wrd32.Obj) == (current_block [OBJECT_9_12]))
    goto label_93;
  (Wrd42.Obj) = (current_block [OBJECT_9_13]);
  (Rsp [6]) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd43.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_39]));

DEFLABEL (label_93)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_99;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd53.Lng))))
    goto label_99;
  (Wrd45.Obj) = ((Wrd51.pObj) [2]);

DEFLABEL (label_98)
  (Rsp [0]) = (Wrd45.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_97;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_97;
  (Wrd61.Obj) = ((Wrd67.pObj) [3]);

DEFLABEL (label_96)
  (Rsp [1]) = (Wrd61.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_36]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd84.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_37]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_38]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_44]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_43]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_42]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_38]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_44]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_41);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_43]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_40);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_95;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_94)
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_48;

DEFLABEL (label_95)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_54]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (current_block [OBJECT_9_9]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_34]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_56)
  (Wrd61.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.Obj) = (current_block [OBJECT_9_5]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_33]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_55)
  (Wrd45.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  (Wrd92.Obj) = (Rsp [3]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_108;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [1]);

DEFLABEL (label_107)
  (Rsp [3]) = (Wrd89.Obj);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 10))
    goto label_106;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [0]);
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd127.Lng))))
    goto label_106;
  (Wrd103.Obj) = ((Wrd125.pObj) [2]);
  if ((Wrd103.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;

DEFLABEL (label_103)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd120.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Wrd281.Obj) = (Rsp [7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd281.Obj);
  (Wrd280.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd280.pObj)));

DEFLABEL (label_102)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_101)
  (Rsp [6]) = (Wrd106.Obj);
  (Wrd115.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd115.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_48;

DEFLABEL (label_104)
  (Wrd109.Obj) = (Rsp [7]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_105;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);
  goto label_102;

DEFLABEL (label_105)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_32]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_58)
  (Wrd106.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_106)
  (Wrd130.Obj) = (Rsp [2]);
  (Wrd131.Obj) = (current_block [OBJECT_9_5]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_31]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_103;

DEFLABEL (label_108)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_57)
  (Wrd89.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = (Rsp [7]);
  if (! ((Wrd139.Obj) == (current_block [OBJECT_9_0])))
    goto label_113;
  (Wrd192.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd192.Obj);
  (Wrd193.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd193.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd142.Obj) = Rvl;

DEFLABEL (label_112)
  (Wrd184.Obj) = (Rsp [1]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if (! ((Wrd185.uLng) == 10))
    goto label_111;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd182.Obj) = ((Wrd181.pObj) [0]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd183.Lng))))
    goto label_111;
  ((Wrd181.pObj) [3]) = (Wrd142.Obj);

DEFLABEL (label_110)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd153.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_26])));
  Rhp += 8;
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd153.pObj)));
  Wrd170 = Wrd153;
  (Wrd171.Obj) = (Rsp [2]);
  ((Wrd170.pObj) [2]) = (Wrd171.Obj);
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd171.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [2]);
  ((Wrd170.pObj) [3]) = (Wrd169.Obj);
  (Wrd165.Obj) = (Rsp [7]);
  ((Wrd170.pObj) [4]) = (Wrd165.Obj);
  (Wrd163.Obj) = (Rsp [6]);
  ((Wrd170.pObj) [5]) = (Wrd163.Obj);
  (Wrd161.Obj) = (Rsp [5]);
  ((Wrd170.pObj) [6]) = (Wrd161.Obj);
  (Wrd159.Obj) = (Rsp [4]);
  ((Wrd170.pObj) [7]) = (Wrd159.Obj);
  (Wrd157.Obj) = (Rsp [3]);
  ((Wrd170.pObj) [8]) = (Wrd157.Obj);
  (Wrd155.Obj) = (Rsp [1]);
  ((Wrd170.pObj) [9]) = (Wrd155.Obj);
  (Rsp [7]) = (Wrd152.Obj);
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_29]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_9_28);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_111)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.Obj) = (current_block [OBJECT_9_9]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_10]), 3);

DEFLABEL (label_61)
  goto label_110;

DEFLABEL (label_113)
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if (! ((Wrd146.uLng) == 1))
    goto label_115;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd142.Obj) = ((Wrd144.pObj) [0]);

DEFLABEL (label_114)
  Rsp = (& (Rsp [1]));
  goto label_112;

DEFLABEL (label_115)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_60)
  (Wrd142.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 10))
    goto label_124;
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd201.Obj) = ((Wrd200.pObj) [0]);
  (Wrd202.Lng) = (FIXNUM_TO_LONG (Wrd201.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd202.Lng))))
    goto label_124;
  (Wrd194.Obj) = ((Wrd200.pObj) [2]);

DEFLABEL (label_123)
  (Rsp [1]) = (Wrd194.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd210.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd210.Obj);
  (Wrd214.Obj) = (Rsp [2]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd215.uLng) == 1))
    goto label_122;
  (Wrd213.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd211.Obj) = ((Wrd213.pObj) [1]);

DEFLABEL (label_121)
  (Rsp [2]) = (Wrd211.Obj);
  (Wrd226.Obj) = (Rsp [3]);
  (Wrd227.uLng) = (OBJECT_TYPE (Wrd226.Obj));
  if (! ((Wrd227.uLng) == 26))
    goto label_120;
  (Wrd228.Obj) = (Rsp [0]);
  (Wrd229.uLng) = (OBJECT_TYPE (Wrd228.Obj));
  if (! ((Wrd229.uLng) == 26))
    goto label_120;
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd226.Obj));
  (Wrd234.Lng) = (FIXNUM_TO_LONG (Wrd228.Obj));
  (Wrd230.Lng) = ((Wrd232.Lng) + (Wrd234.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd230.Lng)))
    goto label_120;
  (Wrd225.Obj) = (LONG_TO_FIXNUM (Wrd230.Lng));

DEFLABEL (label_119)
  (Rsp [3]) = (Wrd225.Obj);
  (Wrd241.Obj) = (Rsp [4]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if (! ((Wrd242.uLng) == 26))
    goto label_118;
  (Wrd243.Obj) = (Rsp [0]);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if (! ((Wrd244.uLng) == 26))
    goto label_118;
  (Wrd247.Lng) = (FIXNUM_TO_LONG (Wrd241.Obj));
  (Wrd249.Lng) = (FIXNUM_TO_LONG (Wrd243.Obj));
  (Wrd245.Lng) = ((Wrd247.Lng) + (Wrd249.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd245.Lng)))
    goto label_118;
  (Wrd240.Obj) = (LONG_TO_FIXNUM (Wrd245.Lng));

DEFLABEL (label_117)
  (Rsp [4]) = (Wrd240.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_48;

DEFLABEL (label_118)
  (Wrd235.Obj) = (Rsp [4]);
  (Wrd236.Obj) = (Rsp [0]);
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_65)
  (Wrd240.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd220.Obj) = (Rsp [3]);
  (Wrd221.Obj) = (Rsp [0]);
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_64)
  (Wrd225.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_63)
  (Wrd211.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd205.Obj) = (Rsp [1]);
  (Wrd206.Obj) = (current_block [OBJECT_9_5]);
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_62)
  (Wrd194.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_125)
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd254.Obj);
  (Wrd255.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd255.Obj);
  (Wrd256.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd256.Obj);
  (Wrd266.Obj) = (Rsp [4]);
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd266.Obj));
  if (! ((Wrd267.uLng) == 10))
    goto label_129;
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd266.Obj));
  (Wrd264.Obj) = ((Wrd263.pObj) [0]);
  (Wrd265.Lng) = (FIXNUM_TO_LONG (Wrd264.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd265.Lng))))
    goto label_129;
  (Wrd259.Obj) = ((Wrd263.pObj) [2]);
  (* (--Rsp)) = (Wrd259.Obj);

DEFLABEL (label_128)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_127;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_126)
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_48;

DEFLABEL (label_127)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_48]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_70)
  (Wrd6.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd268.Obj) = (Rsp [4]);
  (Wrd269.Obj) = (current_block [OBJECT_9_5]);
  (Wrd272.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_9_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_9_49);
  goto label_86;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Wrd106.Obj) = Rvl;
  goto label_101;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_9_26);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [7]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_142;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_142;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd22.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_142;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_141)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [8]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_140;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_139)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = ((Wrd42.pObj) [3]);
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_135;
  (Wrd48.Obj) = (Rsp [4]);
  goto label_134;

DEFLABEL (label_135)
  (Wrd48.Obj) = (Rsp [5]);

DEFLABEL (label_134)
DEFLABEL (label_138)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [6]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_137;
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_137;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd62.Lng) = ((Wrd66.Lng) + (Wrd67.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_137;
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));

DEFLABEL (label_136)
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [5]);
  (Rsp [4]) = (Wrd68.Obj);
  (Wrd76.Obj) = ((Wrd70.pObj) [9]);
  (Wrd79.Obj) = ((Wrd70.pObj) [4]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Rsp [5]) = (Wrd71.Obj);
  (Rsp [3]) = (Wrd56.Obj);
  goto loop_48;

DEFLABEL (label_137)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_47]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_69)
  (Wrd56.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_140)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_46]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [7]);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_45]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_141;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_12 7
#define LABEL_10_15 9
#define LABEL_10_16 11
#define LABEL_10_18 13
#define LABEL_10_9 15
#define TAG_10_10 6
#define LABEL_10_19 17
#define LABEL_10_20 19
#define LABEL_10_11 21
#define LABEL_10_13 23
#define LABEL_10_14 25
#define LABEL_10_7 27
#define TAG_10_8 12
#define LABEL_10_21 29
#define TAG_10_22 13
#define ENVIRONMENT_LABEL_10_3 45
#define DEBUGGING_LABEL_10_2 44
#define OBJECT_10_6 43
#define OBJECT_10_5 42
#define OBJECT_10_4 41
#define OBJECT_10_3 40
#define OBJECT_10_2 39
#define OBJECT_10_1 38
#define OBJECT_10_0 37
#define EXECUTE_CACHE_10_24 31
#define EXECUTE_CACHE_10_23 33
#define EXECUTE_CACHE_10_17 35
#define FREE_REFERENCES_LABEL_10_0 30
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd18;
  machine_word Wrd57;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto phase_2_19;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_10_12);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_10_15);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_10_16);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10_9);
      goto lambda_30;

    case 7:
      current_block = (Rpc - LABEL_10_19);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_10_20);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_29;

    case 13:
      current_block = (Rpc - LABEL_10_21);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_2_27)
DEFLABEL (phase_2_19)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  Wrd11 = Wrd13;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [3]) = (Wrd9.Obj);
  goto loop_17;

DEFLABEL (loop_28)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_10_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_1])))
    goto label_32;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd70.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 2;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd70.pObj)));
  Wrd73 = Wrd70;
  (Wrd74.Obj) = (Rsp [1]);
  ((Wrd73.pObj) [2]) = (Wrd74.Obj);
  (Wrd72.Obj) = (Rsp [0]);
  ((Wrd73.pObj) [3]) = (Wrd72.Obj);
  Rvl = (Wrd69.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_9])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  ((Wrd16.pObj) [5]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_38;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_37)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_36;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd44.Lng))))
    goto label_36;
  (Wrd38.Obj) = ((Wrd42.pObj) [3]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_35)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_34;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd60.Lng))))
    goto label_34;
  (Wrd54.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_21])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_34)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.Obj) = (current_block [OBJECT_10_5]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Obj) = (current_block [OBJECT_10_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_10_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_39;

DEFLABEL (label_40)
  (Wrd57.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_39)
DEFLABEL (label_47)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_43)
  (Rsp [4]) = (Wrd21.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_42;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd39.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd39.Obj);
  goto loop_17;

DEFLABEL (label_42)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 1);

DEFLABEL (label_24)
  (Wrd24.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_46;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd51.Lng) = ((Wrd55.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd51.Lng)))
    goto label_46;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));
  goto label_44;

DEFLABEL (label_46)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_25)
  (Wrd21.Obj) = Rvl;
  goto label_44;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Wrd21.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_10_7);

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

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_10_21);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_10 11
#define LABEL_11_9 13
#define LABEL_11_13 15
#define LABEL_11_15 17
#define LABEL_11_12 19
#define LABEL_11_16 21
#define LABEL_11_17 23
#define LABEL_11_18 25
#define LABEL_11_22 27
#define LABEL_11_23 29
#define LABEL_11_26 31
#define LABEL_11_27 33
#define LABEL_11_20 35
#define TAG_11_21 16
#define LABEL_11_24 37
#define TAG_11_25 17
#define ENVIRONMENT_LABEL_11_3 56
#define DEBUGGING_LABEL_11_2 55
#define OBJECT_11_7 54
#define OBJECT_11_6 53
#define OBJECT_11_5 52
#define OBJECT_11_4 51
#define OBJECT_11_3 50
#define OBJECT_11_2 49
#define OBJECT_11_1 48
#define OBJECT_11_0 47
#define EXECUTE_CACHE_11_19 39
#define EXECUTE_CACHE_11_14 41
#define EXECUTE_CACHE_11_11 43
#define EXECUTE_CACHE_11_8 45
#define FREE_REFERENCES_LABEL_11_0 38
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd91;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd112;
  machine_word Wrd110;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd116;
  machine_word Wrd114;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd21;
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
      goto process_variable_28;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto loop_26;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_21;

    case 8:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_11_16);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_11_17);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_11_22);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_11_23);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_11_26);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_11_27);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_11_20);
      goto lambda_43;

    case 17:
      current_block = (Rpc - LABEL_11_24);
      goto lambda_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_variable_41)
DEFLABEL (process_variable_28)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto loop_26;

DEFLABEL (loop_42)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_11_6);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_70;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_70;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_69)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (current_block [OBJECT_11_2])))
    goto label_68;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_5);

DEFLABEL (label_68)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_67;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_65;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_11_2]))
    goto label_62;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_63;
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_63;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd122.Lng) > (Wrd124.Lng))
    goto label_51;

DEFLABEL (label_62)
  (Wrd17.Obj) = (Rsp [1]);
  if ((Wrd17.Obj) == (current_block [OBJECT_11_2]))
    goto label_50;
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_61;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_61;
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if ((Wrd118.Lng) > (Wrd120.Lng))
    goto label_51;

DEFLABEL (label_50)
  (Wrd29.Obj) = (Rsp [5]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_46)
  (Wrd31.Obj) = (Rsp [3]);
  (Rsp [7]) = (Wrd31.Obj);
  Rsp = (& (Rsp [7]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_20])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd35 = Wrd34;
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  Rvl = (Wrd33.Obj);

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_49;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_48)
  (Wrd50.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11_15);
  goto label_46;

DEFLABEL (label_49)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd51.Obj) = (Rsp [0]);
  if ((Wrd51.Obj) == (current_block [OBJECT_11_2]))
    goto label_59;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_60;
  (Wrd55.Obj) = (Rsp [7]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_60;
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if ((Wrd114.Lng) > (Wrd116.Lng))
    goto label_53;

DEFLABEL (label_59)
  (Wrd63.Obj) = (Rsp [1]);
  if ((Wrd63.Obj) == (current_block [OBJECT_11_2]))
    goto label_52;
  (Wrd65.Obj) = (Rsp [6]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_58;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_58;
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if ((Wrd110.Lng) > (Wrd112.Lng))
    goto label_53;

DEFLABEL (label_52)
  (Wrd75.Obj) = (Rsp [3]);
  (Rsp [7]) = (Wrd75.Obj);
  Rsp = (& (Rsp [7]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd78.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_24])));
  Rhp += 1;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd78.pObj)));
  Wrd79 = Wrd78;
  (Wrd80.Obj) = (Rsp [0]);
  ((Wrd79.pObj) [2]) = (Wrd80.Obj);
  Rvl = (Wrd77.Obj);
  goto label_45;

DEFLABEL (label_53)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_57;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [1]);

DEFLABEL (label_56)
  (Wrd101.Obj) = (Rsp [4]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_55;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd100.Lng))))
    goto label_55;
  ((Wrd98.pObj) [4]) = (Wrd82.Obj);

DEFLABEL (label_54)
  (Wrd91.Obj) = (current_block [OBJECT_11_7]);
  (Rsp [3]) = (Wrd91.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_26;

DEFLABEL (label_55)
  (Wrd103.Obj) = (Rsp [4]);
  (Wrd104.Obj) = (current_block [OBJECT_11_0]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 3);

DEFLABEL (label_39)
  goto label_54;

DEFLABEL (label_57)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_38)
  (Wrd82.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd69.Obj) = (Rsp [6]);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_60)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (Rsp [7]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_53;

DEFLABEL (label_61)
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_51;

DEFLABEL (label_63)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (Rsp [6]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_51;

DEFLABEL (label_65)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_11_20);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_7]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_11_24);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_11 11
#define LABEL_12_12 13
#define LABEL_12_13 15
#define LABEL_12_14 17
#define LABEL_12_9 19
#define ENVIRONMENT_LABEL_12_3 38
#define DEBUGGING_LABEL_12_2 37
#define OBJECT_12_9 36
#define OBJECT_12_8 35
#define OBJECT_12_7 34
#define OBJECT_12_6 33
#define OBJECT_12_5 32
#define OBJECT_12_4 31
#define OBJECT_12_3 30
#define OBJECT_12_2 29
#define OBJECT_12_1 28
#define OBJECT_12_0 27
#define EXECUTE_CACHE_12_15 21
#define EXECUTE_CACHE_12_10 23
#define EXECUTE_CACHE_12_6 25
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_12_4);
      goto variable_width__fixedB_12;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_12_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_width__fixedB_19)
DEFLABEL (variable_width__fixedB_12)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_28)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd28.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd29.Obj) = (current_block [OBJECT_12_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-5]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd94.Obj) = (Rsp [2]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_27;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd93.Lng))))
    goto label_27;
  (Wrd87.Obj) = (current_block [OBJECT_12_3]);
  ((Wrd91.pObj) [1]) = (Wrd87.Obj);

DEFLABEL (label_26)
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 10))
    goto label_25;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd76.Lng))))
    goto label_25;
  (Wrd70.Obj) = (Rsp [1]);
  ((Wrd74.pObj) [2]) = (Wrd70.Obj);

DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_12_6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_23;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_23;
  ((Wrd57.pObj) [3]) = (Wrd30.Obj);

DEFLABEL (label_22)
  (Wrd35.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_12_6]);
  (Rsp [3]) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_12_8]);
  (Rsp [2]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 3);

DEFLABEL (label_21)
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_20;
  ((Wrd46.pObj) [4]) = (Wrd36.Obj);
  Rvl = (current_block [OBJECT_12_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_12_7]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 3);

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_25)
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd80.Obj) = (current_block [OBJECT_12_0]);
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 3);

DEFLABEL (label_16)
  goto label_24;

DEFLABEL (label_27)
  (Wrd96.Obj) = (Rsp [2]);
  (Wrd97.Obj) = (current_block [OBJECT_12_4]);
  (Wrd98.Obj) = (current_block [OBJECT_12_3]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 3);

DEFLABEL (label_17)
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define OBJECT_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_8 9
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto variable_handler_wrapper_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_handler_wrapper_7)
DEFLABEL (variable_handler_wrapper_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
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
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_13_0]))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_9)
  (Wrd8.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [0]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define LABEL_14_7 11
#define ENVIRONMENT_LABEL_14_3 21
#define DEBUGGING_LABEL_14_2 20
#define OBJECT_14_2 19
#define OBJECT_14_1 18
#define OBJECT_14_0 17
#define EXECUTE_CACHE_14_10 13
#define EXECUTE_CACHE_14_9 15
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_14_4);
      goto list__bit_string_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list__bit_string_11)
DEFLABEL (list__bit_string_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_18)
  if ((Wrd5.Obj) == (current_block [OBJECT_14_1]))
    goto label_16;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_15;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_14)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_13;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_13)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_17;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  Rvl = ((Wrd38.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_6 9
#define LABEL_15_8 11
#define LABEL_15_9 13
#define LABEL_15_10 15
#define LABEL_15_11 17
#define LABEL_15_12 19
#define ENVIRONMENT_LABEL_15_3 26
#define DEBUGGING_LABEL_15_2 25
#define OBJECT_15_4 24
#define OBJECT_15_3 23
#define OBJECT_15_2 22
#define OBJECT_15_1 21
#define OBJECT_15_0 20
#define FREE_REFERENCES_LABEL_15_0 20
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_15_4);
      goto replicate_15;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto do_loop_11;

    case 5:
      current_block = (Rpc - LABEL_15_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_15_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_15_12);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replicate_23)
DEFLABEL (replicate_15)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_26;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_26;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (multiply_with_overflow ((Wrd31.Lng), (Wrd33.Lng), (& (Wrd29.Lng))))
    goto label_26;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_11;

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_11)
  INTERRUPT_CHECK (26, LABEL_15_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_38;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_38;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd31.Lng) < (Wrd33.Lng))
    goto label_30;

DEFLABEL (label_31)
  (Wrd15.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_29;

DEFLABEL (label_30)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rsp = (& (Rsp [3]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 5);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_36;
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_36;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_36;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_34;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_34;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_33)
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_11;

DEFLABEL (label_34)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd24.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_8 7
#define LABEL_16_5 9
#define LABEL_16_6 11
#define LABEL_16_13 13
#define LABEL_16_9 15
#define LABEL_16_15 17
#define LABEL_16_11 19
#define ENVIRONMENT_LABEL_16_3 32
#define DEBUGGING_LABEL_16_2 31
#define OBJECT_16_1 30
#define OBJECT_16_0 29
#define EXECUTE_CACHE_16_14 21
#define EXECUTE_CACHE_16_12 23
#define EXECUTE_CACHE_16_10 25
#define FREE_REFERENCE_16_0 28
#define FREE_REFERENCES_LABEL_16_0 20
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_16_4);
      goto final_padB_6;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_16_15);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_16_11);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (final_padB_13)
DEFLABEL (final_padB_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_22;
  Wrd12 = Wrd16;

DEFLABEL (label_21)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd22.uLng) == 47))
    goto label_20;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_19)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_18;
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_18;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_18;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_17)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_13])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_7])), (Wrd13.pObj));

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_14)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_16_11);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_4 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define LABEL_17_10 15
#define LABEL_17_11 17
#define LABEL_17_12 19
#define LABEL_17_13 21
#define LABEL_17_14 23
#define LABEL_17_15 25
#define LABEL_17_16 27
#define LABEL_17_17 29
#define LABEL_17_18 31
#define LABEL_17_19 33
#define ENVIRONMENT_LABEL_17_3 44
#define DEBUGGING_LABEL_17_2 43
#define OBJECT_17_3 42
#define OBJECT_17_2 41
#define OBJECT_17_1 40
#define OBJECT_17_0 39
#define EXECUTE_CACHE_17_20 35
#define FREE_REFERENCE_17_0 38
#define FREE_REFERENCES_LABEL_17_0 34
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd95;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_9;

    case 1:
      current_block = (Rpc - LABEL_17_4);
      goto Z___padding_directive_15;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_17_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_17_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_17_12);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_17_13);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_17_14);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_17_15);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_17_16);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_17_17);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_17_18);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___padding_directive_31)
DEFLABEL (Z___padding_directive_15)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_59;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_58)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_57;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_56)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_55;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_54)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_53;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_52)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_51;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_50)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_49;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_48)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_47;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_46)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_45;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_44)
  if ((Wrd63.Obj) == (current_block [OBJECT_17_2]))
    goto label_41;
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_40;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_39)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_38;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd80.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_37)
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_36;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd87.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_35)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_34;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd95.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd106.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd106.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd14.Obj) = (current_block [OBJECT_17_3]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_28)
  (Wrd95.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_27)
  (Wrd87.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_26)
  (Wrd80.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_25)
  (Wrd71.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_43;
  Wrd108 = Wrd112;

DEFLABEL (label_42)
  Wrd95 = Wrd108;
  goto label_33;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_14])), (Wrd109.pObj));

DEFLABEL (label_29)
  (Wrd108.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_24)
  (Wrd63.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_23)
  (Wrd56.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_22)
  (Wrd47.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_20)
  (Wrd28.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_58;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd95.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_9 13
#define LABEL_18_11 15
#define LABEL_18_12 17
#define LABEL_18_13 19
#define ENVIRONMENT_LABEL_18_3 31
#define DEBUGGING_LABEL_18_2 30
#define OBJECT_18_2 29
#define OBJECT_18_1 28
#define OBJECT_18_0 27
#define EXECUTE_CACHE_18_15 21
#define EXECUTE_CACHE_18_14 23
#define EXECUTE_CACHE_18_10 25
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bittop_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_18_4);
      goto after_padding_9;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (after_padding_14)
DEFLABEL (after_padding_9)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_16;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Rsp [6]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_16)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_18_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_6 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define ENVIRONMENT_LABEL_3 33
#define DEBUGGING_LABEL_2 32
#define PURIFICATION_ROOT 31
#define OBJECT_6 30
#define OBJECT_5 29
#define OBJECT_4 28
#define OBJECT_3 27
#define OBJECT_2 26
#define OBJECT_1 25
#define OBJECT_0 24
#define FREE_REFERENCE_1 19
#define FREE_REFERENCE_0 20
#define GLOBAL_EXECUTE_CACHE_5 22
#define FREE_REFERENCES_LABEL_0 18
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
bittop_so_688f6a445920c877 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto expression_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_4)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_11)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_10)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	2,
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
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
      goto label_9;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_9)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_15;
  Wrd15 = Wrd19;

DEFLABEL (label_14)
  Wrd14 = Wrd15;
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_13;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_13;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (multiply_with_overflow ((Wrd30.Lng), (Wrd31.Lng), (& (Wrd29.Lng))))
    goto label_13;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_12)
  (Wrd33.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_13)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd16.pObj));

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_bittop_so_688f6a445920c877 [18] =
  {
    { "bittop_so_code_1", 46, bittop_so_code_1 },
    { "bittop_so_code_2", 11, bittop_so_code_2 },
    { "bittop_so_code_3", 18, bittop_so_code_3 },
    { "bittop_so_code_4", 41, bittop_so_code_4 },
    { "bittop_so_code_5", 8, bittop_so_code_5 },
    { "bittop_so_code_6", 6, bittop_so_code_6 },
    { "bittop_so_code_7", 85, bittop_so_code_7 },
    { "bittop_so_code_8", 89, bittop_so_code_8 },
    { "bittop_so_code_9", 41, bittop_so_code_9 },
    { "bittop_so_code_10", 14, bittop_so_code_10 },
    { "bittop_so_code_11", 18, bittop_so_code_11 },
    { "bittop_so_code_12", 9, bittop_so_code_12 },
    { "bittop_so_code_13", 3, bittop_so_code_13 },
    { "bittop_so_code_14", 5, bittop_so_code_14 },
    { "bittop_so_code_15", 9, bittop_so_code_15 },
    { "bittop_so_code_16", 9, bittop_so_code_16 },
    { "bittop_so_code_17", 16, bittop_so_code_17 },
    { "bittop_so_code_18", 9, bittop_so_code_18 }
  };

int
decl_bittop_so_688f6a445920c877 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_bittop_so_688f6a445920c877);
  return (0);
}

DECLARE_COMPILED_CODE ("bittop.so", 8, decl_bittop_so_688f6a445920c877, bittop_so_688f6a445920c877)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_bittop_so_data_688f6a445920c877 [6917] =
  "\x83\x02\x3b\xcb\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x0d\x0d"
  "\xc1\xb9\xc1\xba\x08\x1d\x0d\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d"
  "\xbf\x0d\x1c\x25\xb3\xb4\xb5\xb6\xb7\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82"
  "\x88\x07\x08\x80\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb2"
  "\xc1\x1c\xb6\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xc3\x1c\x1d\x83\x80\xc2\xc3"
  "\x82\xc1\x0d\xc1\x1c\xb4\x0d\x0d\x1c\x0d\x1c\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x08\x0c\x0d\x1c\xb2\x0d\x1c\xb1\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc3\xb2\xb1\x0c"
  "\x1d\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0c\x0d\x0d\x0d"
  "\x0d\x0c\x0c\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x83\x0d\x1c\x1b\x0d\x1c"
  "\x82\x0d\x1c\x0d\x1c\x81\x0d\x1c\xc2\x1c\x80\xb2\xb1\x08\x1b\xb7"
  "\xb6\x0d\x1b\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x82\x1b\x81\x0d\x1c\x08\x88\x0c\x1b\x0d"
  "\x1b\x1b\x0d\x1b\x1b\x1b\x07\x1b\x0d\xb2\x1b\x1b\x1b\x1b\xb1\x08"
  "\x1b\x0d\x1c\x0d\x1c\xb3\xb4\xb5\x1b\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23"
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
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x1b\x82\x1b"
  "\xb2\x1b\x81\x1b\x1b\x80\xb1\x08\x1b\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x81\x1b\x82\xb1\x08\x80\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb2\xb1\x0c\x08"
  "\x1b\x83\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x83\x82\x08\x1b\x80\x1b\x1b"
  "\x1b\x81\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x80\x08\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x08\xb2\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc5\x07\x80\xc2\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb1\xb2\x1b\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x82\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x17\xc3\x1b"
  "\x0d\x1c\x1b\x0d\x1b\xb7\xb6\xb5\xb4\xb3\x17\x82\x1b\x2a\x1b\x2a"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x17\x28\x0d\x26\x1b\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x63\x6b\x2f\x62"
  "\x69\x74\x74\x6f\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x09"
  "\x73\x65\x74\x2d\x63\x64\x72\x21\x07\x68\x6f\x6c\x64\x65\x72\x08"
  "\x63\x6f\x6d\x6d\x65\x6e\x74\x04\x63\x61\x72\x04\x63\x64\x72\x02"
  "\x0b\x65\x6e\x64\x2d\x6c\x61\x62\x65\x6c\x2d\x0a\x2a\x65\x71\x75"
  "\x61\x74\x65\x73\x2a\x0a\x2a\x6f\x62\x6a\x65\x63\x74\x73\x2a\x0f"
  "\x2a\x65\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74\x73\x2a\x13\x2a"
  "\x74\x68\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65"
  "\x2a\x0e\x2a\x73\x74\x61\x72\x74\x2d\x6c\x61\x62\x65\x6c\x2a\x0c"
  "\x2a\x65\x6e\x64\x2d\x6c\x61\x62\x65\x6c\x2a\x09\x07\x09\x07\x03"
  "\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x75\x6e\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x02\x12\x6d\x61\x6b"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x02\x0b"
  "\x6d\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x0a\x05\x13\x73\x68\x61"
  "\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x02"
  "\x19\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x21\x0b\x03\x17\x6c\x61\x70\x3a"
  "\x73\x79\x6e\x74\x61\x78\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69"
  "\x6f\x6e\x03\x0e\x69\x6e\x69\x74\x69\x61\x6c\x2d\x70\x68\x61\x73"
  "\x65\x0c\x04\x07\x72\x65\x6c\x61\x78\x21\x0d\x03\x0a\x6c\x61\x73"
  "\x74\x2d\x70\x61\x69\x72\x03\x0c\x66\x69\x6e\x61\x6c\x2d\x70\x68"
  "\x61\x73\x65\x0e\x03\x0c\x71\x75\x65\x75\x65\x2d\x3e\x6c\x69\x73"
  "\x74\x0f\x03\x11\x61\x73\x73\x65\x6d\x62\x6c\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x73\x10\x03\x18\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61"
  "\x62\x6c\x65\x2d\x3e\x61\x73\x73\x71\x2d\x6c\x69\x73\x74\x0e\x36"
  "\x5e\x81\x85\x02\x35\x5c\x81\x89\x02\x34\x5a\x81\x8b\x02\x33\x58"
  "\x81\x89\x02\x32\x56\x81\x89\x02\x31\x54\x81\x8b\x02\x30\x52\x81"
  "\x87\x02\x2f\x50\x81\x89\x02\x2e\x4e\x81\x89\x02\x2d\x4c\x81\x85"
  "\x02\x2c\x4a\x81\x89\x02\x2b\x48\x81\x89\x02\x2a\x46\x84\x06\x29"
  "\x44\x81\x83\x02\x28\x42\x81\x83\x02\x27\x40\x81\x85\x02\x26\x3e"
  "\x81\x89\x02\x25\x3c\x81\x89\x02\x24\x3a\x81\x87\x02\x23\x38\x81"
  "\x87\x02\x22\x36\x81\x83\x02\x21\x34\x81\x85\x02\x20\x32\x81\x83"
  "\x02\x1f\x30\x81\x83\x02\x1e\x2e\x81\x85\x02\x1d\x2c\x81\x83\x02"
  "\x1c\x2a\x81\x83\x02\x1b\x28\x81\x85\x02\x1a\x26\x81\x83\x02\x19"
  "\x24\x81\x83\x02\x18\x22\x81\x85\x02\x17\x20\x81\x83\x02\x16\x1e"
  "\x81\x83\x02\x15\x1c\x81\x85\x02\x14\x1a\x81\x83\x02\x13\x18\x81"
  "\x83\x02\x12\x16\x81\x85\x02\x11\x14\x81\x83\x02\x10\x12\x81\x83"
  "\x02\x0f\x10\x81\x83\x02\x0e\x0e\x81\x8f\x02\x0d\x0c\x81\x8d\x02"
  "\x0c\x0a\x81\x8b\x02\x0b\x08\x81\x89\x02\x0a\x06\x81\x85\x02\x09"
  "\x04\x84\x06\x5d\x91\x01\x11\x02\x02\x15\x66\x69\x6e\x69\x73\x68"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x21\x02\x14"
  "\x63\x6c\x65\x61\x72\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62"
  "\x6c\x65\x21\x04\x08\x70\x68\x61\x73\x65\x2d\x32\x12\x02\x0b\x04"
  "\x08\x70\x68\x61\x73\x65\x2d\x31\x0b\x06\x41\x18\x81\x89\x02\x40"
  "\x16\x81\x87\x02\x3f\x14\x81\x87\x02\x3e\x12\x81\x89\x02\x3d\x10"
  "\x81\x87\x02\x3c\x0e\x81\x89\x02\x3b\x0c\x81\x87\x02\x3a\x0a\x81"
  "\x89\x02\x39\x08\x81\x87\x02\x38\x06\x81\x89\x02\x37\x04\x84\x06"
  "\x17\x28\x13\x02\x14\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x6c\x6c\x6f\x63\x61\x74\x65\x14\x0c\x73\x74\x61\x72\x74\x69"
  "\x6e\x67\x2d\x70\x63\x15\x09\x04\x03\x16\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x74\x61\x62\x6c\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x04"
  "\x13\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x2d\x76\x61"
  "\x6c\x75\x65\x16\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x1d"
  "\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x69\x6e\x69\x74"
  "\x69\x61\x6c\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x03\x0f\x2d\x3e"
  "\x62\x69\x74\x73\x74\x72\x69\x6e\x67\x2d\x70\x63\x17\x03\x0e\x62"
  "\x69\x6e\x64\x69\x6e\x67\x2d\x76\x61\x6c\x75\x65\x05\x15\x61\x73"
  "\x73\x65\x6d\x62\x6c\x65\x2d\x64\x69\x72\x65\x63\x74\x69\x76\x65"
  "\x73\x21\x18\x04\x13\x73\x65\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67"
  "\x2d\x76\x61\x6c\x75\x65\x21\x03\x15\x69\x6e\x74\x65\x72\x76\x61"
  "\x6c\x2d\x66\x69\x6e\x61\x6c\x2d\x76\x61\x6c\x75\x65\x0a\x53\x26"
  "\x81\x87\x02\x52\x24\x81\x85\x02\x51\x22\x81\x87\x02\x50\x20\x81"
  "\x85\x02\x4f\x1e\x81\x89\x02\x4e\x1c\x81\x83\x02\x4d\x1a\x83\x04"
  "\x4c\x18\x81\x89\x02\x4b\x16\x81\x85\x02\x4a\x14\x81\x87\x02\x49"
  "\x12\x81\x83\x02\x48\x10\x81\x85\x02\x47\x0e\x81\x8d\x02\x46\x0c"
  "\x81\x8b\x02\x45\x0a\x81\x85\x02\x44\x08\x81\x83\x02\x43\x06\x81"
  "\x87\x02\x42\x04\x83\x04\x25\x41\x19\x02\x0c\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x74\x21\x1a\x02\x10\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x73\x65\x74\x2d\x74\x79\x70\x65\x0c\x77\x72\x69\x74\x65\x2d\x62"
  "\x69\x74\x73\x21\x15\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x14\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2d\x73\x6c\x6f\x74\x12\x62\x69"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x1b"
  "\x1a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x72\x6f\x73\x73\x2d"
  "\x63\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x3f\x14\x73\x63\x68\x65\x6d"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x77\x69\x64\x74\x68\x1c\x13"
  "\x61\x73\x73\x65\x6d\x62\x6c\x65\x2d\x61\x6e\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x1d\x18\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69"
  "\x6e\x74\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x13\x73\x63\x68\x65"
  "\x6d\x65\x2d\x64\x61\x74\x75\x6d\x2d\x77\x69\x64\x74\x68\x0c\x66"
  "\x6c\x6f\x61\x74\x2d\x77\x69\x64\x74\x68\x14\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x07\x76"
  "\x65\x63\x74\x6f\x72\x10\x6d\x61\x6e\x69\x66\x65\x73\x74\x2d\x76"
  "\x65\x63\x74\x6f\x72\x16\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x21\x13\x6d\x61\x6e\x69"
  "\x66\x65\x73\x74\x2d\x6e\x6d\x2d\x76\x65\x63\x74\x6f\x72\x1a\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x73\x65\x74\x2d\x74\x79\x70\x65\x0e\x03\x0f\x04\x04\x6d\x61\x70"
  "\x1e\x03\x10\x75\x63\x6f\x64\x65\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x1f\x04\x1f\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x1e\x77"
  "\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c\x79\x2d\x6e"
  "\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x03\x0b\x75\x63"
  "\x6f\x64\x65\x2d\x74\x79\x70\x65\x06\x10\x73\x75\x62\x76\x65\x63"
  "\x74\x6f\x72\x2d\x66\x69\x6c\x6c\x21\x05\x10\x69\x6e\x73\x65\x72"
  "\x74\x2d\x6f\x62\x6a\x65\x63\x74\x73\x21\x1f\x0a\x7c\x54\x81\x8d"
  "\x02\x7b\x52\x81\x8f\x02\x7a\x50\x81\x8b\x02\x79\x4e\x81\x87\x02"
  "\x78\x4c\x81\x95\x02\x77\x4a\x81\x8d\x02\x76\x48\x81\x8d\x02\x75"
  "\x46\x81\x85\x02\x74\x44\x81\x93\x02\x73\x42\x81\x99\x02\x72\x40"
  "\x81\x8f\x02\x71\x3e\x81\x8d\x02\x70\x3c\x81\x87\x02\x6f\x3a\x81"
  "\x83\x02\x6e\x38\x81\x95\x02\x6d\x36\x81\x8d\x02\x6c\x34\x81\x91"
  "\x02\x6b\x32\x81\x89\x02\x6a\x30\x81\x83\x02\x69\x2e\x81\x91\x02"
  "\x68\x2c\x81\x91\x02\x67\x2a\x81\x8d\x02\x66\x28\x81\x93\x02\x65"
  "\x26\x81\x8f\x02\x64\x24\x81\x8d\x02\x63\x22\x81\x8d\x02\x62\x20"
  "\x81\x8b\x02\x61\x1e\x81\x89\x02\x60\x1c\x81\x8b\x02\x5f\x1a\x81"
  "\x87\x02\x5e\x18\x81\x8d\x02\x5d\x16\x81\x85\x02\x5c\x14\x81\x87"
  "\x02\x5b\x12\x81\x85\x02\x5a\x10\x81\x85\x02\x59\x0e\x81\x89\x02"
  "\x58\x0c\x81\x87\x02\x57\x0a\x81\x85\x02\x56\x08\x81\x83\x02\x55"
  "\x06\x81\x87\x02\x54\x04\x83\x04\x53\x81\x01\x20\x02\x21\x61\x73"
  "\x73\x65\x6d\x62\x6c\x65\x2d\x61\x6e\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6b\x69\x6e\x64\x12\x73"
  "\x63\x68\x65\x6d\x65\x2d\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e"
  "\x21\x0e\x73\x63\x68\x65\x6d\x65\x2d\x6f\x62\x6a\x65\x63\x74\x22"
  "\x04\x09\x65\x76\x61\x6c\x75\x61\x74\x65\x23\x04\x06\x65\x72\x72"
  "\x6f\x72\x24\x03\x84\x01\x12\x81\x87\x02\x83\x01\x10\x81\x87\x02"
  "\x82\x01\x0e\x81\x85\x02\x81\x01\x0c\x81\x89\x02\x80\x01\x0a\x81"
  "\x89\x02\x7f\x08\x81\x89\x02\x7e\x06\x81\x83\x02\x7d\x04\x83\x04"
  "\x11\x1f\x25\x02\x13\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x21\x24\x69\x6e\x73\x65\x72\x74\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x73\x21\x3a\x20\x6f\x62\x6a\x65\x63\x74\x20"
  "\x70\x68\x61\x73\x65\x20\x65\x72\x72\x6f\x72\x02\x04\x24\x05\x1f"
  "\x03\x8a\x01\x0e\x81\x87\x02\x89\x01\x0c\x81\x87\x02\x88\x01\x0a"
  "\x81\x89\x02\x87\x01\x08\x81\x89\x02\x86\x01\x06\x81\x89\x02\x85"
  "\x01\x04\x85\x08\x0d\x1b\x26\x02\x08\x22\x61\x73\x73\x65\x6d\x62"
  "\x6c\x65\x2d\x64\x69\x72\x65\x63\x74\x69\x76\x65\x73\x21\x3a\x20"
  "\x42\x61\x64\x20\x70\x61\x64\x64\x69\x6e\x67\x0d\x62\x69\x74\x2d"
  "\x70\x6f\x73\x69\x74\x69\x6f\x6e\x03\x70\x63\x0a\x61\x63\x74\x75"
  "\x61\x6c\x2d\x70\x63\x0c\x72\x65\x73\x6f\x6c\x76\x65\x64\x2d\x70"
  "\x63\x22\x61\x73\x73\x65\x6d\x62\x6c\x65\x2d\x64\x69\x72\x65\x63"
  "\x74\x69\x76\x65\x73\x21\x3a\x20\x70\x68\x61\x73\x65\x20\x65\x72"
  "\x72\x6f\x72\x28\x61\x73\x73\x65\x6d\x62\x6c\x65\x2d\x64\x69\x72"
  "\x65\x63\x74\x69\x76\x65\x73\x21\x3a\x20\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x64\x69\x72\x65\x63\x74\x69\x76\x65\x08\x70\x61\x64\x64"
  "\x69\x6e\x67\x27\x02\x2d\x0d\x62\x6c\x6f\x63\x6b\x2d\x6f\x66\x66"
  "\x73\x65\x74\x28\x1a\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x77\x69"
  "\x64\x74\x68\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29\x0b"
  "\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2a\x1b\x09\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2b\x12\x66\x69\x78\x65\x64\x2d\x77\x69\x64"
  "\x74\x68\x2d\x67\x72\x6f\x75\x70\x2c\x05\x74\x69\x63\x6b\x2d\x06"
  "\x6c\x61\x62\x65\x6c\x2e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x2f\x15\x15\x6d\x61\x78\x69\x6d\x75\x6d\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x6f\x66\x66\x73\x65\x74\x09\x13\x62\x6c\x6f\x63\x6b\x2d"
  "\x6f\x66\x66\x73\x65\x74\x2d\x77\x69\x64\x74\x68\x30\x07\x03\x04"
  "\x61\x62\x73\x04\x16\x03\x0d\x2d\x3e\x6d\x61\x63\x68\x69\x6e\x65"
  "\x2d\x70\x63\x16\x03\x11\x73\x65\x6c\x65\x63\x74\x6f\x72\x2f\x68"
  "\x61\x6e\x64\x6c\x65\x72\x31\x04\x23\x04\x24\x06\x24\x05\x24\x03"
  "\x17\x05\x08\x70\x61\x64\x64\x69\x66\x79\x32\x03\x10\x73\x65\x6c"
  "\x65\x63\x74\x6f\x72\x2f\x6c\x65\x6e\x67\x74\x68\x33\x03\x19\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72\x2d"
  "\x77\x72\x61\x70\x70\x65\x72\x34\x06\x14\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x2d\x69\x6e\x73\x65\x72\x74\x21\x35\x03\x0a"
  "\x66\x69\x6e\x61\x6c\x2d\x70\x61\x64\x36\x04\x19\x62\x6c\x6f\x63"
  "\x6b\x2d\x6f\x66\x66\x73\x65\x74\x2d\x3e\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x04\x0a\x72\x65\x70\x6c\x69\x63\x61\x74\x65\x37"
  "\x05\x0b\x66\x69\x6e\x61\x6c\x2d\x70\x61\x64\x21\x38\x12\xdf\x01"
  "\xac\x01\x81\x91\x02\xde\x01\xaa\x01\x81\x93\x02\xdd\x01\xa8\x01"
  "\x81\x95\x02\xdc\x01\xa6\x01\x81\x93\x02\xdb\x01\xa4\x01\x81\x91"
  "\x02\xda\x01\xa2\x01\x81\x91\x02\xd9\x01\xa0\x01\x81\x91\x02\xd8"
  "\x01\x9e\x01\x81\x93\x02\xd7\x01\x9c\x01\x81\x97\x02\xd6\x01\x9a"
  "\x01\x81\x8d\x02\xd5\x01\x98\x01\x81\x89\x02\xd4\x01\x96\x01\x81"
  "\x89\x02\xd3\x01\x94\x01\x81\x85\x02\xd2\x01\x92\x01\x81\x9f\x02"
  "\xd1\x01\x90\x01\x81\x9d\x02\xd0\x01\x8e\x01\x81\x93\x02\xcf\x01"
  "\x8c\x01\x81\x97\x02\xce\x01\x8a\x01\x81\x95\x02\xcd\x01\x88\x01"
  "\x81\x91\x02\xcc\x01\x86\x01\x81\x8d\x02\xcb\x01\x84\x01\x81\x89"
  "\x02\xca\x01\x82\x01\x81\x85\x02\xc9\x01\x80\x01\x81\x99\x02\xc8"
  "\x01\x7e\x81\x97\x02\xc7\x01\x7c\x81\x99\x02\xc6\x01\x7a\x81\x97"
  "\x02\xc5\x01\x78\x81\x95\x02\xc4\x01\x76\x81\x99\x02\xc3\x01\x74"
  "\x81\x97\x02\xc2\x01\x72\x81\x9d\x02\xc1\x01\x70\x81\x9d\x02\xc0"
  "\x01\x6e\x81\x91\x02\xbf\x01\x6c\x81\x91\x02\xbe\x01\x6a\x81\x93"
  "\x02\xbd\x01\x68\x81\x83\x02\xbc\x01\x66\x81\x95\x02\xbb\x01\x64"
  "\x81\x95\x02\xba\x01\x62\x81\x85\x02\xb9\x01\x60\x81\x85\x02\xb8"
  "\x01\x5e\x81\x95\x02\xb7\x01\x5c\x81\x9d\x02\xb6\x01\x5a\x81\x97"
  "\x02\xb5\x01\x58\x81\x9b\x02\xb4\x01\x56\x81\x97\x02\xb3\x01\x54"
  "\x81\x95\x02\xb2\x01\x52\x81\x95\x02\xb1\x01\x50\x81\x95\x02\xb0"
  "\x01\x4e\x81\x93\x02\xaf\x01\x4c\x81\xa1\x02\xae\x01\x4a\x81\x9b"
  "\x02\xad\x01\x48\x81\x9b\x02\xac\x01\x46\x81\x9b\x02\xab\x01\x44"
  "\x81\x99\x02\xaa\x01\x42\x81\x99\x02\xa9\x01\x40\x81\x97\x02\xa8"
  "\x01\x3e\x81\x95\x02\xa7\x01\x3c\x81\x95\x02\xa6\x01\x3a\x81\x95"
  "\x02\xa5\x01\x38\x81\x95\x02\xa4\x01\x36\x81\x97\x02\xa3\x01\x34"
  "\x81\x97\x02\xa2\x01\x32\x81\x95\x02\xa1\x01\x30\x81\x95\x02\xa0"
  "\x01\x2e\x81\x95\x02\x9f\x01\x2c\x81\x95\x02\x9e\x01\x2a\x81\x95"
  "\x02\x9d\x01\x28\x81\x97\x02\x9c\x01\x26\x81\x97\x02\x9b\x01\x24"
  "\x81\x95\x02\x9a\x01\x22\x81\x87\x02\x99\x01\x20\x81\x97\x02\x98"
  "\x01\x1e\x81\x93\x02\x97\x01\x1c\x81\x91\x02\x96\x01\x1a\x81\x91"
  "\x02\x95\x01\x18\x81\x91\x02\x94\x01\x16\x81\x95\x02\x93\x01\x14"
  "\x81\x91\x02\x92\x01\x12\x81\x91\x02\x91\x01\x10\x81\x91\x02\x90"
  "\x01\x0e\x81\x95\x02\x8f\x01\x0c\x81\x97\x02\x8e\x01\x0a\x81\x91"
  "\x02\x8d\x01\x08\x81\x91\x02\x8c\x01\x06\x81\x89\x02\x8b\x01\x04"
  "\x85\x08\xab\x01\xf2\x01\x39\x02\x09\x2c\x02\x2f\x09\x74\x69\x63"
  "\x6b\x2d\x6f\x66\x66\x3a\x21\x69\x6e\x69\x74\x69\x61\x6c\x2d\x70"
  "\x68\x61\x73\x65\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x64\x69"
  "\x72\x65\x63\x74\x69\x76\x65\x27\x0c\x65\x6e\x74\x72\x79\x2d\x70"
  "\x6f\x69\x6e\x74\x21\x22\x07\x65\x71\x75\x61\x74\x65\x28\x2e\x3a"
  "\x2d\x06\x67\x72\x6f\x75\x70\x29\x2a\x1b\x2b\x15\x17\x6d\x61\x78"
  "\x69\x6d\x75\x6d\x2d\x70\x61\x64\x64\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x3a\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f"
  "\x72\x2b\x30\x09\x09\x02\x0a\x03\x36\x04\x18\x6c\x61\x62\x65\x6c"
  "\x2d\x3e\x6d\x61\x63\x68\x69\x6e\x65\x2d\x69\x6e\x74\x65\x72\x76"
  "\x61\x6c\x30\x04\x1e\x05\x11\x73\x65\x74\x2d\x6c\x61\x62\x65\x6c"
  "\x2d\x76\x61\x6c\x75\x65\x21\x28\x03\x2b\x04\x0e\x61\x64\x64\x2d"
  "\x74\x6f\x2d\x71\x75\x65\x75\x65\x21\x03\x14\x2d\x3e\x70\x61\x64"
  "\x64\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x69\x76\x65\x2b\x04"
  "\x24\x04\x07\x61\x70\x70\x65\x6e\x64\x03\x16\x03\x09\x72\x65\x76"
  "\x65\x72\x73\x65\x21\x03\x17\x76\x61\x72\x69\x61\x62\x6c\x65\x2d"
  "\x77\x69\x64\x74\x68\x2d\x6c\x65\x6e\x67\x74\x68\x73\x22\x03\x17"
  "\x05\x32\x03\x0f\x11\xb8\x02\xb4\x01\x81\x85\x02\xb7\x02\xb2\x01"
  "\x81\x93\x02\xb6\x02\xb0\x01\x81\x8b\x02\xb5\x02\xae\x01\x81\x89"
  "\x02\xb4\x02\xac\x01\x81\x87\x02\xb3\x02\xaa\x01\x81\x87\x02\xb2"
  "\x02\xa8\x01\x81\x9d\x02\xb1\x02\xa6\x01\x81\x97\x02\xb0\x02\xa4"
  "\x01\x81\x93\x02\xaf\x02\xa2\x01\x81\x95\x02\xae\x02\xa0\x01\x81"
  "\x93\x02\xad\x02\x9e\x01\x81\x91\x02\xac\x02\x9c\x01\x81\x93\x02"
  "\xab\x02\x9a\x01\x81\x87\x02\xaa\x02\x98\x01\x81\x85\x02\xa9\x02"
  "\x96\x01\x81\x9b\x02\xa8\x02\x94\x01\x81\x95\x02\xa7\x02\x92\x01"
  "\x81\x93\x02\xa6\x02\x90\x01\x81\x93\x02\xa5\x02\x8e\x01\x81\x91"
  "\x02\xa4\x02\x8c\x01\x81\x93\x02\xa3\x02\x8a\x01\x81\x87\x02\xa2"
  "\x02\x88\x01\x81\x83\x02\xa1\x02\x86\x01\x81\x85\x02\xa0\x02\x84"
  "\x01\x81\x83\x02\x9f\x02\x82\x01\x81\x8f\x02\x9e\x02\x80\x01\x81"
  "\x8f\x02\x9d\x02\x7e\x81\x93\x02\x9c\x02\x7c\x81\x91\x02\x9b\x02"
  "\x7a\x81\x91\x02\x9a\x02\x78\x81\x99\x02\x99\x02\x76\x81\x91\x02"
  "\x98\x02\x74\x81\x95\x02\x97\x02\x72\x81\x95\x02\x96\x02\x70\x81"
  "\x93\x02\x95\x02\x6e\x81\x93\x02\x94\x02\x6c\x81\x93\x02\x93\x02"
  "\x6a\x81\x93\x02\x92\x02\x68\x81\x93\x02\x91\x02\x66\x81\x93\x02"
  "\x90\x02\x64\x81\x93\x02\x8f\x02\x62\x81\x93\x02\x8e\x02\x60\x81"
  "\x93\x02\x8d\x02\x5e\x81\x93\x02\x8c\x02\x5c\x81\x93\x02\x8b\x02"
  "\x5a\x81\x93\x02\x8a\x02\x58\x81\x93\x02\x89\x02\x56\x81\x97\x02"
  "\x88\x02\x54\x81\x97\x02\x87\x02\x52\x81\x95\x02\x86\x02\x50\x81"
  "\x97\x02\x85\x02\x4e\x81\x95\x02\x84\x02\x4c\x81\x93\x02\x83\x02"
  "\x4a\x81\x85\x02\x82\x02\x48\x81\x93\x02\x81\x02\x46\x81\x93\x02"
  "\x80\x02\x44\x81\x93\x02\xff\x01\x42\x81\x83\x02\xfe\x01\x40\x81"
  "\x93\x02\xfd\x01\x3e\x81\x93\x02\xfc\x01\x3c\x81\x93\x02\xfb\x01"
  "\x3a\x81\x93\x02\xfa\x01\x38\x81\x93\x02\xf9\x01\x36\x81\x93\x02"
  "\xf8\x01\x34\x81\x93\x02\xf7\x01\x32\x81\x93\x02\xf6\x01\x30\x81"
  "\x97\x02\xf5\x01\x2e\x81\x95\x02\xf4\x01\x2c\x81\x95\x02\xf3\x01"
  "\x2a\x81\x97\x02\xf2\x01\x28\x81\x97\x02\xf1\x01\x26\x81\x95\x02"
  "\xf0\x01\x24\x81\x89\x02\xef\x01\x22\x81\x89\x02\xee\x01\x20\x81"
  "\x99\x02\xed\x01\x1e\x81\x97\x02\xec\x01\x1c\x81\x97\x02\xeb\x01"
  "\x1a\x81\x95\x02\xea\x01\x18\x81\x91\x02\xe9\x01\x16\x81\x93\x02"
  "\xe8\x01\x14\x81\x8f\x02\xe7\x01\x12\x81\x8f\x02\xe6\x01\x10\x81"
  "\x8f\x02\xe5\x01\x0e\x81\x8f\x02\xe4\x01\x0c\x81\x93\x02\xe3\x01"
  "\x0a\x81\x89\x02\xe2\x01\x08\x81\x87\x02\xe1\x01\x06\x81\x83\x02"
  "\xe0\x01\x04\x83\x04\xb3\x01\xf9\x01\x21\x02\x0a\x1b\x70\x68\x61"
  "\x73\x65\x2d\x31\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x64\x69"
  "\x72\x65\x63\x74\x69\x76\x65\x27\x2d\x1a\x29\x2c\x2e\x2f\x15\x3a"
  "\x09\x04\x03\x36\x05\x28\x04\x30\x03\x22\x03\x16\x04\x24\x03\x17"
  "\x05\x32\x09\xe1\x02\x54\x81\x91\x02\xe0\x02\x52\x81\x9b\x02\xdf"
  "\x02\x50\x81\x95\x02\xde\x02\x4e\x81\x91\x02\xdd\x02\x4c\x81\x93"
  "\x02\xdc\x02\x4a\x81\x97\x02\xdb\x02\x48\x81\x91\x02\xda\x02\x46"
  "\x81\x91\x02\xd9\x02\x44\x81\x8d\x02\xd8\x02\x42\x81\x8f\x02\xd7"
  "\x02\x40\x81\x91\x02\xd6\x02\x3e\x81\x91\x02\xd5\x02\x3c\x81\x91"
  "\x02\xd4\x02\x3a\x81\x8d\x02\xd3\x02\x38\x81\x89\x02\xd2\x02\x36"
  "\x81\x87\x02\xd1\x02\x34\x81\x87\x02\xd0\x02\x32\x81\x99\x02\xcf"
  "\x02\x30\x81\x93\x02\xce\x02\x2e\x81\x91\x02\xcd\x02\x2c\x81\x91"
  "\x02\xcc\x02\x2a\x81\x91\x02\xcb\x02\x28\x81\x93\x02\xca\x02\x26"
  "\x81\x93\x02\xc9\x02\x24\x81\x91\x02\xc8\x02\x22\x81\x91\x02\xc7"
  "\x02\x20\x81\x93\x02\xc6\x02\x1e\x81\x8f\x02\xc5\x02\x1c\x81\x8f"
  "\x02\xc4\x02\x1a\x81\x8f\x02\xc3\x02\x18\x81\x91\x02\xc2\x02\x16"
  "\x81\x97\x02\xc1\x02\x14\x81\x8f\x02\xc0\x02\x12\x81\x8d\x02\xbf"
  "\x02\x10\x81\x8d\x02\xbe\x02\x0e\x81\x91\x02\xbd\x02\x0c\x81\x93"
  "\x02\xbc\x02\x0a\x81\x91\x02\xbb\x02\x08\x81\x8d\x02\xba\x02\x06"
  "\x81\x87\x02\xb9\x02\x04\x84\x06\x53\x79\x3a\x02\x0b\x2f\x04\x23"
  "\x03\x10\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x76\x61\x6c\x75\x65"
  "\x73\x06\x11\x70\x72\x6f\x63\x65\x73\x73\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x30\x04\xef\x02\x1e\x81\x87\x02\xee\x02\x1c\x81\x85"
  "\x02\xed\x02\x1a\x81\x85\x02\xec\x02\x18\x81\x83\x02\xeb\x02\x16"
  "\x81\x89\x02\xea\x02\x14\x81\x8b\x02\xe9\x02\x12\x81\x8d\x02\xe8"
  "\x02\x10\x81\x87\x02\xe7\x02\x0e\x81\x8b\x02\xe6\x02\x0c\x81\x89"
  "\x02\xe5\x02\x0a\x81\x87\x02\xe4\x02\x08\x81\x8b\x02\xe3\x02\x06"
  "\x81\x89\x02\xe2\x02\x04\x84\x06\x1d\x2e\x2e\x02\x0c\x1a\x29\x56"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x77\x69\x64\x74\x68\x20\x66\x69"
  "\x65\x6c\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x72\x65"
  "\x73\x6f\x6c\x76\x65\x64\x3a\x2f\x04\x24\x03\x0e\x73\x65\x6c\x65"
  "\x63\x74\x6f\x72\x2f\x68\x69\x67\x68\x03\x0d\x73\x65\x6c\x65\x63"
  "\x74\x6f\x72\x2f\x6c\x6f\x77\x04\x17\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x77\x69\x64\x74\x68\x2d\x3e\x66\x69\x78\x65\x64\x21\x2d"
  "\x05\x81\x03\x26\x81\x85\x02\x80\x03\x24\x81\x85\x02\xff\x02\x22"
  "\x81\x91\x02\xfe\x02\x20\x81\x91\x02\xfd\x02\x1e\x81\x91\x02\xfc"
  "\x02\x1c\x81\x91\x02\xfb\x02\x1a\x81\x93\x02\xfa\x02\x18\x81\x91"
  "\x02\xf9\x02\x16\x81\x91\x02\xf8\x02\x14\x81\x8f\x02\xf7\x02\x12"
  "\x81\x91\x02\xf6\x02\x10\x81\x91\x02\xf5\x02\x0e\x81\x8d\x02\xf4"
  "\x02\x0c\x81\x8f\x02\xf3\x02\x0a\x81\x8b\x02\xf2\x02\x08\x81\x8b"
  "\x02\xf1\x02\x06\x81\x8d\x02\xf0\x02\x04\x86\x0a\x25\x39\x29\x02"
  "\x0d\x02\x1a\x2c\x2a\x2f\x03\x33\x03\x31\x03\x34\x04\x8a\x03\x14"
  "\x81\x8b\x02\x89\x03\x12\x81\x89\x02\x88\x03\x10\x81\x89\x02\x87"
  "\x03\x0e\x81\x89\x02\x86\x03\x0c\x81\x8b\x02\x85\x03\x0a\x81\x89"
  "\x02\x84\x03\x08\x81\x87\x02\x83\x03\x06\x81\x85\x02\x82\x03\x04"
  "\x84\x06\x13\x27\x33\x02\x0e\x14\x03\x11\x6c\x69\x73\x74\x2d\x3e"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x31\x02\x8d\x03\x08\x81"
  "\x85\x02\x8c\x03\x06\x81\x85\x02\x8b\x03\x04\x83\x04\x07\x10\x2c"
  "\x02\x0f\x03\x31\x04\x13\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f"
  "\x6e\x2d\x61\x70\x70\x65\x6e\x64\x03\x92\x03\x0c\x81\x85\x02\x91"
  "\x03\x0a\x81\x87\x02\x90\x03\x08\x81\x83\x02\x8f\x03\x06\x81\x83"
  "\x02\x8e\x03\x04\x83\x04\x0b\x16\x2a\x02\x10\x1a\x62\x69\x74\x2d"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x2d\x72"
  "\x69\x67\x68\x74\x21\x10\x6d\x61\x6b\x65\x2d\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x1b\x9b\x03\x14\x81\x8f\x02\x9a\x03\x12\x81"
  "\x8f\x02\x99\x03\x10\x81\x8f\x02\x98\x03\x0e\x81\x8d\x02\x97\x03"
  "\x0c\x81\x8d\x02\x96\x03\x0a\x81\x87\x02\x95\x03\x08\x81\x8b\x02"
  "\x94\x03\x06\x81\x85\x02\x93\x03\x04\x84\x06\x13\x1b\x28\x02\x11"
  "\x02\x1b\x0f\x70\x61\x64\x64\x69\x6e\x67\x2d\x73\x74\x72\x69\x6e"
  "\x67\x24\x02\x03\x36\x06\x35\x04\x37\x04\xa4\x03\x14\x83\x04\xa3"
  "\x03\x12\x81\x8d\x02\xa2\x03\x10\x81\x8d\x02\xa1\x03\x0e\x81\x8b"
  "\x02\xa0\x03\x0c\x81\x89\x02\x9f\x03\x0a\x81\x87\x02\x9e\x03\x08"
  "\x81\x8b\x02\x9d\x03\x06\x81\x8b\x02\x9c\x03\x04\x85\x08\x13\x21"
  "\x36\x02\x12\x27\x24\x02\x04\x07\x6d\x6f\x64\x75\x6c\x6f\x02\xb4"
  "\x03\x22\x81\x87\x02\xb3\x03\x20\x81\x89\x02\xb2\x03\x1e\x81\x89"
  "\x02\xb1\x03\x1c\x81\x89\x02\xb0\x03\x1a\x81\x89\x02\xaf\x03\x18"
  "\x81\x89\x02\xae\x03\x16\x81\x89\x02\xad\x03\x14\x81\x89\x02\xac"
  "\x03\x12\x81\x89\x02\xab\x03\x10\x81\x85\x02\xaa\x03\x0e\x81\x85"
  "\x02\xa9\x03\x0c\x81\x83\x02\xa8\x03\x0a\x81\x83\x02\xa7\x03\x08"
  "\x81\x83\x02\xa6\x03\x06\x83\x04\xa5\x03\x04\x81\x87\x02\x21\x2d"
  "\x35\x02\x13\x2f\x03\x16\x03\x17\x05\x32\x04\xbd\x03\x14\x81\x97"
  "\x02\xbc\x03\x12\x81\x91\x02\xbb\x03\x10\x81\x8f\x02\xba\x03\x0e"
  "\x81\x97\x02\xb9\x03\x0c\x81\x91\x02\xb8\x03\x0a\x81\x8f\x02\xb7"
  "\x03\x08\x81\x8b\x02\xb6\x03\x06\x81\x89\x02\xb5\x03\x04\x86\x0a"
  "\x13\x20\x32\x13\x2f\x2f\x32\x04\x35\x06\x36\x04\x28\x04\x2a\x04"
  "\x2c\x04\x33\x04\x29\x04\x2e\x04\x3a\x04\x21\x04\x39\x04\x26\x04"
  "\x25\x04\x20\x04\x19\x04\x11\x0e\x61\x66\x74\x65\x72\x2d\x70\x61"
  "\x64\x64\x69\x6e\x67\x2b\x38\x37\x31\x34\x2d\x30\x12\x0b\x0c\x18"
  "\x1f\x1d\x10\x0e\x11\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x15\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x75"
  "\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x68\x65\x61\x64\x65\x72\x2d\x77"
  "\x6f\x72\x64\x73\x3a\x0d\x09\x61\x73\x73\x65\x6d\x62\x6c\x65\x09"
  "\x0a\x13\x04\x11\x04\x0a\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x1c\x3a\x03\x08\x12\x80\x80\x04"
  "\x07\x10\x81\x81\x02\x06\x0e\x81\x81\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04"
  "\x81\x83\x02\x11\x22";

SCHEME_OBJECT *
bittop_so_data_688f6a445920c877 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_bittop_so_data_688f6a445920c877 [0]))), (sizeof (prog_bittop_so_data_688f6a445920c877)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("bittop.so", bittop_so_data_688f6a445920c877)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("bittop.so", "41de86fbec4b9275")
