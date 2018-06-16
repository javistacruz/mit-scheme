/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_10 11
#define TAG_1_11 4
#define LABEL_1_8 13
#define TAG_1_9 5
#define LABEL_1_13 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define LABEL_1_18 25
#define LABEL_1_19 27
#define LABEL_1_20 29
#define LABEL_1_21 31
#define LABEL_1_22 33
#define LABEL_1_23 35
#define LABEL_1_24 37
#define LABEL_1_25 39
#define LABEL_1_26 41
#define LABEL_1_27 43
#define LABEL_1_28 45
#define LABEL_1_29 47
#define LABEL_1_30 49
#define LABEL_1_31 51
#define LABEL_1_32 53
#define LABEL_1_33 55
#define LABEL_1_34 57
#define LABEL_1_35 59
#define LABEL_1_36 61
#define ENVIRONMENT_LABEL_1_3 89
#define DEBUGGING_LABEL_1_2 88
#define OBJECT_1_1 87
#define OBJECT_1_0 86
#define EXECUTE_CACHE_1_12 63
#define FREE_REFERENCE_1_10 66
#define FREE_REFERENCE_1_9 67
#define FREE_REFERENCE_1_8 68
#define FREE_REFERENCE_1_7 69
#define FREE_REFERENCE_1_6 70
#define FREE_REFERENCE_1_5 71
#define FREE_REFERENCE_1_4 72
#define FREE_REFERENCE_1_3 73
#define FREE_REFERENCE_1_2 74
#define FREE_REFERENCE_1_1 75
#define FREE_REFERENCE_1_0 76
#define FREE_ASSIGNMENT_1_7 78
#define FREE_ASSIGNMENT_1_6 79
#define FREE_ASSIGNMENT_1_5 80
#define FREE_ASSIGNMENT_1_4 81
#define FREE_ASSIGNMENT_1_3 82
#define FREE_ASSIGNMENT_1_2 83
#define FREE_ASSIGNMENT_1_1 84
#define FREE_ASSIGNMENT_1_0 85
#define FREE_REFERENCES_LABEL_1_0 62
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
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
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto parse_file_attributes_item_51;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_53;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_54;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_55;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_83;

    case 5:
      current_block = (Rpc - LABEL_1_8);
      goto swapB_82;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_57;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_58;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_59;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto label_61;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto label_66;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto label_67;

    case 18:
      current_block = (Rpc - LABEL_1_25);
      goto label_68;

    case 19:
      current_block = (Rpc - LABEL_1_26);
      goto label_69;

    case 20:
      current_block = (Rpc - LABEL_1_27);
      goto label_70;

    case 21:
      current_block = (Rpc - LABEL_1_28);
      goto label_71;

    case 22:
      current_block = (Rpc - LABEL_1_29);
      goto label_72;

    case 23:
      current_block = (Rpc - LABEL_1_30);
      goto label_73;

    case 24:
      current_block = (Rpc - LABEL_1_31);
      goto label_74;

    case 25:
      current_block = (Rpc - LABEL_1_32);
      goto label_75;

    case 26:
      current_block = (Rpc - LABEL_1_33);
      goto label_76;

    case 27:
      current_block = (Rpc - LABEL_1_34);
      goto label_77;

    case 28:
      current_block = (Rpc - LABEL_1_35);
      goto label_78;

    case 29:
      current_block = (Rpc - LABEL_1_36);
      goto label_79;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_file_attributes_item_81)
DEFLABEL (parse_file_attributes_item_51)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_89;
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd19.pObj) = (& (Rhp [-1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_87;
  Wrd26 = Wrd30;

DEFLABEL (label_86)
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_85;
  Wrd39 = Wrd43;

DEFLABEL (label_84)
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-1]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd49.pObj) = (& (Rhp [-1]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd86.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 8;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  Wrd84 = Wrd86;
  (Wrd85.Obj) = (Rsp [8]);
  ((Wrd84.pObj) [2]) = (Wrd85.Obj);
  (Wrd82.Obj) = (Rsp [7]);
  ((Wrd84.pObj) [3]) = (Wrd82.Obj);
  (Wrd79.Obj) = (Rsp [6]);
  ((Wrd84.pObj) [4]) = (Wrd79.Obj);
  (Wrd76.Obj) = (Rsp [5]);
  ((Wrd84.pObj) [5]) = (Wrd76.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  ((Wrd84.pObj) [6]) = (Wrd73.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  ((Wrd84.pObj) [7]) = (Wrd70.Obj);
  ((Wrd84.pObj) [8]) = (Wrd47.Obj);
  ((Wrd84.pObj) [9]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd57 = Wrd54;
  (Wrd58.Obj) = (Rsp [10]);
  ((Wrd57.pObj) [2]) = (Wrd58.Obj);
  (Wrd56.Obj) = (Rsp [9]);
  ((Wrd57.pObj) [3]) = (Wrd56.Obj);
  (Rsp [9]) = (Wrd53.Obj);
  (Rsp [10]) = (Wrd87.Obj);
  (Rsp [8]) = (Wrd87.Obj);
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd40.pObj));

DEFLABEL (label_55)
  (Wrd39.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd27.pObj));

DEFLABEL (label_54)
  (Wrd26.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (swapB_82)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (swapB_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_161;

DEFLABEL (label_160)
  Wrd5 = Wrd9;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_158;

DEFLABEL (label_157)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_156)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [9]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_155;

DEFLABEL (label_154)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_153)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_152;

DEFLABEL (label_151)
  Wrd57 = Wrd61;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_149;

DEFLABEL (label_148)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_147)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [8]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_146;

DEFLABEL (label_145)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_144)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_143;

DEFLABEL (label_142)
  Wrd109 = Wrd113;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_140;

DEFLABEL (label_139)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_138)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [7]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_137;

DEFLABEL (label_136)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_135)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_134;

DEFLABEL (label_133)
  Wrd161 = Wrd165;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_131;

DEFLABEL (label_130)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_129)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [6]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_126)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  Wrd213 = Wrd217;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_120)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [5]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_117)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  Wrd265 = Wrd269;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_111)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [4]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_108)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  Wrd317 = Wrd321;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_102)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [3]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_101;

DEFLABEL (label_100)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_99)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_10]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  Wrd369 = Wrd373;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_93)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [2]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_90)
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_92)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_36])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_79)
  goto label_90;

DEFLABEL (label_95)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_35])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_78)
  goto label_93;

DEFLABEL (label_98)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_97;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_34])), (Wrd370.pObj));

DEFLABEL (label_77)
  (Wrd369.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_101)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_100;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_33])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_76)
  goto label_99;

DEFLABEL (label_104)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_32])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_75)
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_31])), (Wrd318.pObj));

DEFLABEL (label_74)
  (Wrd317.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_30])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_73)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_29])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_72)
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_115;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_28])), (Wrd266.pObj));

DEFLABEL (label_71)
  (Wrd265.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_119)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_118;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_27])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_70)
  goto label_117;

DEFLABEL (label_122)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_121;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_26])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_69)
  goto label_120;

DEFLABEL (label_125)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_124;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_25])), (Wrd214.pObj));

DEFLABEL (label_68)
  (Wrd213.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_128)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_127;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_24])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_67)
  goto label_126;

DEFLABEL (label_131)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_130;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_66)
  goto label_129;

DEFLABEL (label_134)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_133;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_22])), (Wrd162.pObj));

DEFLABEL (label_65)
  (Wrd161.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_137)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_136;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_64)
  goto label_135;

DEFLABEL (label_140)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_139;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_63)
  goto label_138;

DEFLABEL (label_143)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_142;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_19])), (Wrd110.pObj));

DEFLABEL (label_62)
  (Wrd109.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_146)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_145;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_61)
  goto label_144;

DEFLABEL (label_149)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_148;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_60)
  goto label_147;

DEFLABEL (label_152)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_151;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_16])), (Wrd58.pObj));

DEFLABEL (label_59)
  (Wrd57.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_155)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_154;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_58)
  goto label_153;

DEFLABEL (label_158)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_157;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_57)
  goto label_156;

DEFLABEL (label_161)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_160;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_13])), (Wrd6.pObj));

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_159;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_10 11
#define TAG_2_11 4
#define LABEL_2_8 13
#define TAG_2_9 5
#define LABEL_2_13 15
#define LABEL_2_14 17
#define LABEL_2_15 19
#define LABEL_2_16 21
#define LABEL_2_17 23
#define LABEL_2_18 25
#define LABEL_2_19 27
#define LABEL_2_20 29
#define LABEL_2_21 31
#define LABEL_2_22 33
#define LABEL_2_23 35
#define LABEL_2_24 37
#define LABEL_2_25 39
#define LABEL_2_26 41
#define LABEL_2_27 43
#define LABEL_2_28 45
#define LABEL_2_29 47
#define LABEL_2_30 49
#define LABEL_2_31 51
#define LABEL_2_32 53
#define LABEL_2_33 55
#define LABEL_2_34 57
#define LABEL_2_35 59
#define LABEL_2_36 61
#define ENVIRONMENT_LABEL_2_3 90
#define DEBUGGING_LABEL_2_2 89
#define OBJECT_2_2 88
#define OBJECT_2_1 87
#define OBJECT_2_0 86
#define EXECUTE_CACHE_2_12 63
#define FREE_REFERENCE_2_10 66
#define FREE_REFERENCE_2_9 67
#define FREE_REFERENCE_2_8 68
#define FREE_REFERENCE_2_7 69
#define FREE_REFERENCE_2_6 70
#define FREE_REFERENCE_2_5 71
#define FREE_REFERENCE_2_4 72
#define FREE_REFERENCE_2_3 73
#define FREE_REFERENCE_2_2 74
#define FREE_REFERENCE_2_1 75
#define FREE_REFERENCE_2_0 76
#define FREE_ASSIGNMENT_2_7 78
#define FREE_ASSIGNMENT_2_6 79
#define FREE_ASSIGNMENT_2_5 80
#define FREE_ASSIGNMENT_2_4 81
#define FREE_ASSIGNMENT_2_3 82
#define FREE_ASSIGNMENT_2_2 83
#define FREE_ASSIGNMENT_2_1 84
#define FREE_ASSIGNMENT_2_0 85
#define FREE_REFERENCES_LABEL_2_0 62
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
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
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      goto parse_file_attributes_value_51;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_53;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_54;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_55;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto lambda_83;

    case 5:
      current_block = (Rpc - LABEL_2_8);
      goto swapB_82;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto label_57;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto label_58;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto label_59;

    case 10:
      current_block = (Rpc - LABEL_2_17);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_2_18);
      goto label_61;

    case 12:
      current_block = (Rpc - LABEL_2_19);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_2_20);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_2_21);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_2_22);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_2_23);
      goto label_66;

    case 17:
      current_block = (Rpc - LABEL_2_24);
      goto label_67;

    case 18:
      current_block = (Rpc - LABEL_2_25);
      goto label_68;

    case 19:
      current_block = (Rpc - LABEL_2_26);
      goto label_69;

    case 20:
      current_block = (Rpc - LABEL_2_27);
      goto label_70;

    case 21:
      current_block = (Rpc - LABEL_2_28);
      goto label_71;

    case 22:
      current_block = (Rpc - LABEL_2_29);
      goto label_72;

    case 23:
      current_block = (Rpc - LABEL_2_30);
      goto label_73;

    case 24:
      current_block = (Rpc - LABEL_2_31);
      goto label_74;

    case 25:
      current_block = (Rpc - LABEL_2_32);
      goto label_75;

    case 26:
      current_block = (Rpc - LABEL_2_33);
      goto label_76;

    case 27:
      current_block = (Rpc - LABEL_2_34);
      goto label_77;

    case 28:
      current_block = (Rpc - LABEL_2_35);
      goto label_78;

    case 29:
      current_block = (Rpc - LABEL_2_36);
      goto label_79;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_file_attributes_value_81)
DEFLABEL (parse_file_attributes_value_51)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_89;
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_87;
  Wrd26 = Wrd30;

DEFLABEL (label_86)
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_85;
  Wrd39 = Wrd43;

DEFLABEL (label_84)
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-1]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd49.pObj) = (& (Rhp [-1]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd86.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 8;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  Wrd84 = Wrd86;
  (Wrd85.Obj) = (Rsp [8]);
  ((Wrd84.pObj) [2]) = (Wrd85.Obj);
  (Wrd82.Obj) = (Rsp [7]);
  ((Wrd84.pObj) [3]) = (Wrd82.Obj);
  (Wrd79.Obj) = (Rsp [6]);
  ((Wrd84.pObj) [4]) = (Wrd79.Obj);
  (Wrd76.Obj) = (Rsp [5]);
  ((Wrd84.pObj) [5]) = (Wrd76.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  ((Wrd84.pObj) [6]) = (Wrd73.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  ((Wrd84.pObj) [7]) = (Wrd70.Obj);
  ((Wrd84.pObj) [8]) = (Wrd47.Obj);
  ((Wrd84.pObj) [9]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd57 = Wrd54;
  (Wrd58.Obj) = (Rsp [10]);
  ((Wrd57.pObj) [2]) = (Wrd58.Obj);
  (Wrd56.Obj) = (Rsp [9]);
  ((Wrd57.pObj) [3]) = (Wrd56.Obj);
  (Rsp [9]) = (Wrd53.Obj);
  (Rsp [10]) = (Wrd87.Obj);
  (Rsp [8]) = (Wrd87.Obj);
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd40.pObj));

DEFLABEL (label_55)
  (Wrd39.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd27.pObj));

DEFLABEL (label_54)
  (Wrd26.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (swapB_82)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (swapB_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_161;

DEFLABEL (label_160)
  Wrd5 = Wrd9;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_158;

DEFLABEL (label_157)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_156)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [9]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_155;

DEFLABEL (label_154)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_153)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_152;

DEFLABEL (label_151)
  Wrd57 = Wrd61;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_149;

DEFLABEL (label_148)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_147)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [8]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_146;

DEFLABEL (label_145)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_144)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_5]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_143;

DEFLABEL (label_142)
  Wrd109 = Wrd113;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_140;

DEFLABEL (label_139)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_138)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [7]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_137;

DEFLABEL (label_136)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_135)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_6]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_134;

DEFLABEL (label_133)
  Wrd161 = Wrd165;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_131;

DEFLABEL (label_130)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_129)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [6]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_126)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_7]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  Wrd213 = Wrd217;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_120)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [5]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_117)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  Wrd265 = Wrd269;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_111)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [4]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_108)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_9]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  Wrd317 = Wrd321;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_102)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [3]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_101;

DEFLABEL (label_100)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_99)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_10]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  Wrd369 = Wrd373;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_7]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_93)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [2]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_7]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_90)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_92)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_36])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_79)
  goto label_90;

DEFLABEL (label_95)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_35])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_78)
  goto label_93;

DEFLABEL (label_98)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_97;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_34])), (Wrd370.pObj));

DEFLABEL (label_77)
  (Wrd369.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_101)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_100;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_33])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_76)
  goto label_99;

DEFLABEL (label_104)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_32])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_75)
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_31])), (Wrd318.pObj));

DEFLABEL (label_74)
  (Wrd317.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_30])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_73)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_29])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_72)
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_115;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_28])), (Wrd266.pObj));

DEFLABEL (label_71)
  (Wrd265.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_119)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_118;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_27])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_70)
  goto label_117;

DEFLABEL (label_122)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_121;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_26])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_69)
  goto label_120;

DEFLABEL (label_125)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_124;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_25])), (Wrd214.pObj));

DEFLABEL (label_68)
  (Wrd213.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_128)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_127;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_24])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_67)
  goto label_126;

DEFLABEL (label_131)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_130;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_23])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_66)
  goto label_129;

DEFLABEL (label_134)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_133;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_22])), (Wrd162.pObj));

DEFLABEL (label_65)
  (Wrd161.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_137)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_136;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_21])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_64)
  goto label_135;

DEFLABEL (label_140)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_139;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_63)
  goto label_138;

DEFLABEL (label_143)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_142;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_19])), (Wrd110.pObj));

DEFLABEL (label_62)
  (Wrd109.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_146)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_145;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_61)
  goto label_144;

DEFLABEL (label_149)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_148;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_60)
  goto label_147;

DEFLABEL (label_152)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_151;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_16])), (Wrd58.pObj));

DEFLABEL (label_59)
  (Wrd57.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_155)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_154;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_58)
  goto label_153;

DEFLABEL (label_158)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_157;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_57)
  goto label_156;

DEFLABEL (label_161)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_160;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_13])), (Wrd6.pObj));

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_159;

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
file_attributes_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parse_file_attributes_line_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_file_attributes_line_4)
DEFLABEL (parse_file_attributes_line_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define LABEL_4_10 17
#define LABEL_4_15 19
#define LABEL_4_19 21
#define LABEL_4_20 23
#define LABEL_4_17 25
#define LABEL_4_21 27
#define LABEL_4_22 29
#define LABEL_4_23 31
#define LABEL_4_25 33
#define LABEL_4_26 35
#define LABEL_4_27 37
#define LABEL_4_29 39
#define LABEL_4_33 41
#define LABEL_4_30 43
#define LABEL_4_24 45
#define LABEL_4_34 47
#define ENVIRONMENT_LABEL_4_3 88
#define DEBUGGING_LABEL_4_2 87
#define OBJECT_4_10 86
#define OBJECT_4_9 85
#define OBJECT_4_8 84
#define OBJECT_4_7 83
#define OBJECT_4_6 82
#define OBJECT_4_5 81
#define OBJECT_4_4 80
#define OBJECT_4_3 79
#define OBJECT_4_2 78
#define OBJECT_4_1 77
#define OBJECT_4_0 76
#define EXECUTE_CACHE_4_37 49
#define EXECUTE_CACHE_4_36 51
#define EXECUTE_CACHE_4_35 53
#define EXECUTE_CACHE_4_32 55
#define EXECUTE_CACHE_4_31 57
#define EXECUTE_CACHE_4_28 59
#define EXECUTE_CACHE_4_18 61
#define EXECUTE_CACHE_4_16 63
#define EXECUTE_CACHE_4_14 65
#define EXECUTE_CACHE_4_13 67
#define EXECUTE_CACHE_4_6 69
#define FREE_REFERENCE_4_3 72
#define FREE_REFERENCE_4_2 73
#define FREE_REFERENCE_4_1 74
#define FREE_REFERENCE_4_0 75
#define FREE_REFERENCES_LABEL_4_0 48
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd100;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd39;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd102;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd119;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd79;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto tokenize_file_attributes_line_32;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto tokenize_30;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_29;

    case 9:
      current_block = (Rpc - LABEL_4_19);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_4_21);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_4_22);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_4_23);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_4_25);
      goto label_43;

    case 16:
      current_block = (Rpc - LABEL_4_26);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_4_27);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_4_33);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_4_34);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tokenize_file_attributes_line_46)
DEFLABEL (tokenize_file_attributes_line_32)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto tokenize_30;

DEFLABEL (tokenize_47)
DEFLABEL (tokenize_30)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_93;
  Wrd6 = Wrd10;

DEFLABEL (label_92)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_91;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_91;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if (! ((Wrd51.Lng) > (Wrd52.Lng)))
    goto label_49;

DEFLABEL (label_48)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_15);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd7.Obj) = (Rsp [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd9.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (label_50)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_84;
  Wrd14 = Wrd18;

DEFLABEL (label_83)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == (Wrd14.Obj))
    goto label_80;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_82;
  Wrd22 = Wrd26;

DEFLABEL (label_81)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_80;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_79;
  Wrd30 = Wrd34;

DEFLABEL (label_78)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_74;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd92.Obj) = (current_block [OBJECT_4_5]);
  (Wrd95.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd95.Lng))))
    goto label_73;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd92.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_72;

DEFLABEL (label_71)
  (Wrd45.Obj) = (current_block [OBJECT_4_7]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd55.Lng)))
    goto label_52;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 2);

DEFLABEL (label_52)
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd49.Obj) == (Wrd51.Obj))
    goto label_54;
  (Wrd47.Obj) = (current_block [OBJECT_4_9]);
  goto label_53;

DEFLABEL (label_54)
  (Wrd47.Obj) = (current_block [OBJECT_4_8]);

DEFLABEL (label_53)
DEFLABEL (label_70)
  Rsp = (& (Rsp [3]));
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;

DEFLABEL (label_65)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  if (! ((Wrd76.Obj) == (current_block [OBJECT_4_0])))
    goto label_64;
  (Wrd90.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_19);
  (Wrd79.Obj) = Rvl;

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd79.Obj);
  if (! ((Wrd79.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_56;

DEFLABEL (label_55)
  Rsp = (& (Rsp [1]));
  goto tokenize_30;

DEFLABEL (label_56)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_35]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_34);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Rsp [5]) = (Wrd8.Obj);
  goto label_57;

DEFLABEL (label_58)
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd14.Obj);

DEFLABEL (label_57)
DEFLABEL (label_59)
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_62;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_62;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto tokenize_30;

DEFLABEL (label_62)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_44)
  (Wrd15.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd79.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_63;

DEFLABEL (label_66)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_69;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd64.Lng) = ((Wrd66.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd64.Lng)))
    goto label_69;
  (Wrd61.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));

DEFLABEL (label_68)
  (Rsp [1]) = (Wrd61.Obj);

DEFLABEL (label_67)
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd124.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (Rsp [2]) = (Wrd120.Obj);
  goto label_55;

DEFLABEL (label_69)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_41)
  (Wrd61.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_73)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (label_74)
  (Wrd102.Obj) = (Rsp [5]);
  if (! ((Wrd102.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_75;
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd118.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd118.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_4_24);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_77;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  (Wrd111.Lng) = ((Wrd113.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd111.Lng)))
    goto label_77;
  (Wrd108.Obj) = (LONG_TO_FIXNUM (Wrd111.Lng));

DEFLABEL (label_76)
  (Rsp [1]) = (Wrd108.Obj);
  goto label_55;

DEFLABEL (label_77)
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_43)
  (Wrd108.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_23])), (Wrd31.pObj));

DEFLABEL (label_40)
  (Wrd30.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd119.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [1]) = (Wrd119.Obj);
  goto label_67;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_22])), (Wrd23.pObj));

DEFLABEL (label_39)
  (Wrd22.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_21])), (Wrd15.pObj));

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_90;
  Wrd28 = Wrd32;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_88;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_87)
  (Wrd43.Obj) = (* (Rsp++));
  if (! ((Wrd34.Obj) == (Wrd43.Obj)))
    goto label_85;
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_88)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_37)
  (Wrd34.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd29.pObj));

DEFLABEL (label_36)
  (Wrd28.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_48;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd7.pObj));

DEFLABEL (label_34)
  (Wrd6.Obj) = Rvl;
  goto label_92;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_8 5
#define LABEL_5_9 7
#define LABEL_5_10 9
#define LABEL_5_14 11
#define LABEL_5_5 13
#define LABEL_5_6 15
#define LABEL_5_15 17
#define LABEL_5_17 19
#define LABEL_5_12 21
#define ENVIRONMENT_LABEL_5_3 35
#define DEBUGGING_LABEL_5_2 34
#define OBJECT_5_2 33
#define OBJECT_5_1 32
#define OBJECT_5_0 31
#define EXECUTE_CACHE_5_16 23
#define EXECUTE_CACHE_5_13 25
#define EXECUTE_CACHE_5_11 27
#define EXECUTE_CACHE_5_7 29
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_5_4);
      goto trim_initial_token_11;

    case 1:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto do_loop_9;

    case 9:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trim_initial_token_16)
DEFLABEL (trim_initial_token_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (* (--Rsp)) = Rvl;
  goto do_loop_9;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_14);
  goto label_18;

DEFLABEL (do_loop_17)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_5_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (Rsp [0]) = Rvl;
  goto do_loop_9;

DEFLABEL (label_20)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 30))
    goto label_25;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));

DEFLABEL (label_24)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_23;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd41.Lng) == 0)
    goto label_22;

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto label_18;

DEFLABEL (label_23)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (label_25)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_13)
  (Wrd23.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define LABEL_6_14 17
#define LABEL_6_15 19
#define LABEL_6_18 21
#define LABEL_6_19 23
#define LABEL_6_17 25
#define ENVIRONMENT_LABEL_6_3 40
#define DEBUGGING_LABEL_6_2 39
#define OBJECT_6_3 38
#define OBJECT_6_2 37
#define OBJECT_6_1 36
#define OBJECT_6_0 35
#define EXECUTE_CACHE_6_16 27
#define EXECUTE_CACHE_6_13 29
#define EXECUTE_CACHE_6_10 31
#define EXECUTE_CACHE_6_7 33
#define FREE_REFERENCES_LABEL_6_0 26
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6_4);
      goto trim_final_token_14;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto do_loop_12;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_6_18);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_6_19);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trim_final_token_23)
DEFLABEL (trim_final_token_14)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 30))
    goto label_28;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_27)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_26;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) - 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_26;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_26)
  (Wrd18.Obj) = (current_block [OBJECT_6_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_17)
  (Wrd22.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  goto do_loop_12;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_12)
  INTERRUPT_CHECK (26, LABEL_6_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 30))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_31)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_30;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd27.Lng) = ((Wrd28.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_30;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_17);
  (Rsp [0]) = Rvl;
  goto do_loop_12;

DEFLABEL (label_30)
  (Wrd22.Obj) = (current_block [OBJECT_6_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 30))
    goto label_38;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (Wrd33.Obj) = (MAKE_OBJECT (26, (Wrd37.uLng)));

DEFLABEL (label_37)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_36;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd52.Lng) == 0)
    goto label_35;

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_20)
  (Wrd33.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define LABEL_7_12 15
#define LABEL_7_16 17
#define LABEL_7_8 19
#define LABEL_7_19 21
#define LABEL_7_20 23
#define LABEL_7_17 25
#define LABEL_7_18 27
#define LABEL_7_13 29
#define LABEL_7_22 31
#define LABEL_7_14 33
#define LABEL_7_21 35
#define LABEL_7_23 37
#define LABEL_7_24 39
#define LABEL_7_25 41
#define LABEL_7_26 43
#define LABEL_7_27 45
#define LABEL_7_28 47
#define LABEL_7_29 49
#define LABEL_7_30 51
#define LABEL_7_31 53
#define LABEL_7_32 55
#define LABEL_7_33 57
#define LABEL_7_34 59
#define ENVIRONMENT_LABEL_7_3 81
#define DEBUGGING_LABEL_7_2 80
#define OBJECT_7_9 79
#define OBJECT_7_8 78
#define OBJECT_7_7 77
#define OBJECT_7_6 76
#define OBJECT_7_5 75
#define OBJECT_7_4 74
#define OBJECT_7_3 73
#define OBJECT_7_2 72
#define OBJECT_7_1 71
#define OBJECT_7_0 70
#define EXECUTE_CACHE_7_35 61
#define EXECUTE_CACHE_7_15 63
#define EXECUTE_CACHE_7_7 65
#define FREE_REFERENCE_7_1 68
#define FREE_REFERENCE_7_0 69
#define FREE_REFERENCES_LABEL_7_0 60
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd98;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_4);
      goto tokens__alist_46;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_48;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto group_42;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto label_50;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_7_19);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_7_20);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_29;

    case 12:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_28;

    case 13:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_37;

    case 14:
      current_block = (Rpc - LABEL_7_22);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_36;

    case 16:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_7_24);
      goto parse_attribute_25;

    case 19:
      current_block = (Rpc - LABEL_7_25);
      goto label_56;

    case 20:
      current_block = (Rpc - LABEL_7_26);
      goto label_57;

    case 21:
      current_block = (Rpc - LABEL_7_27);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_7_28);
      goto label_58;

    case 23:
      current_block = (Rpc - LABEL_7_29);
      goto label_59;

    case 24:
      current_block = (Rpc - LABEL_7_30);
      goto label_60;

    case 25:
      current_block = (Rpc - LABEL_7_31);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_7_32);
      goto label_62;

    case 27:
      current_block = (Rpc - LABEL_7_33);
      goto ill_formed_45;

    case 28:
      current_block = (Rpc - LABEL_7_34);
      goto continuation_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tokens__alist_65)
DEFLABEL (tokens__alist_46)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_69;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_81;
  Wrd13 = Wrd17;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd7.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  goto group_42;

DEFLABEL (label_70)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_79;
  Wrd13 = Wrd17;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto parse_attribute_25;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_21);
  (Wrd10.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_77;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_76)
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  if ((Wrd11.Obj) == (Wrd20.Obj))
    goto label_73;
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd20.Obj);

DEFLABEL (label_72)
  (Wrd43.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_75;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_74)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_7_3]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  goto label_72;

DEFLABEL (label_75)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_54)
  (Wrd27.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_53)
  (Wrd11.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd14.pObj));

DEFLABEL (label_49)
  (Wrd13.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd14.pObj));

DEFLABEL (label_48)
  (Wrd13.Obj) = Rvl;
  goto label_80;

DEFLABEL (group_66)
DEFLABEL (group_42)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_86;
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_7_0])))
    goto label_82;
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_82)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (* (--Rsp)) = Rvl;
  goto parse_attribute_25;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_83;

DEFLABEL (label_84)
  (Wrd8.Obj) = (Rsp [1]);

DEFLABEL (label_83)
DEFLABEL (label_85)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_86)
  if (! ((Wrd6.uLng) == 1))
    goto label_98;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_97)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_96;
  Wrd28 = Wrd32;

DEFLABEL (label_95)
  (Wrd34.Obj) = (Rsp [0]);
  if (! ((Wrd34.Obj) == (Wrd28.Obj)))
    goto label_92;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  goto parse_attribute_25;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_87;

DEFLABEL (label_88)
  (Wrd8.Obj) = (Rsp [1]);

DEFLABEL (label_87)
DEFLABEL (label_91)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_90;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_89)
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto group_42;

DEFLABEL (label_90)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd39.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_94;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_93)
  (Rsp [3]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  goto group_42;

DEFLABEL (label_94)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_52)
  (Wrd40.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd29.pObj));

DEFLABEL (label_51)
  (Wrd28.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (parse_attribute_67)
DEFLABEL (parse_attribute_25)
  INTERRUPT_CHECK (26, LABEL_7_24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_123;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_122)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_121;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_120)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd103.Obj) = (current_block [OBJECT_7_4]);
  (Wrd106.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd106.Lng))))
    goto label_119;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd103.Obj));
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_118;

DEFLABEL (label_117)
  (Wrd31.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd41.Lng)))
    goto label_99;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_5]), 2);

DEFLABEL (label_99)
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_101;
  (Wrd33.Obj) = (current_block [OBJECT_7_8]);
  goto label_100;

DEFLABEL (label_101)
  (Wrd33.Obj) = (current_block [OBJECT_7_7]);

DEFLABEL (label_100)
DEFLABEL (label_116)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd33.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_103;

DEFLABEL (label_102)
  Rsp = (& (Rsp [2]));
  goto ill_formed_45;

DEFLABEL (label_103)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_102;
  if (! ((Wrd45.uLng) == 1))
    goto label_115;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_114)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_113;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_112)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_111;
  Wrd65 = Wrd69;

DEFLABEL (label_110)
  (Wrd71.Obj) = (Rsp [0]);
  if ((Wrd71.Obj) == (Wrd65.Obj))
    goto label_105;

DEFLABEL (label_104)
  Rsp = (& (Rsp [4]));
  goto ill_formed_45;

DEFLABEL (label_105)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_104;
  if (! ((Wrd74.uLng) == 1))
    goto label_109;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);

DEFLABEL (label_108)
  (Rsp [0]) = (Wrd75.Obj);
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_107;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_106)
  (Rsp [1]) = (Wrd84.Obj);
  if (! ((Wrd84.Obj) == (current_block [OBJECT_7_0])))
    goto label_104;
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_62)
  (Wrd84.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_61)
  (Wrd75.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_30])), (Wrd66.pObj));

DEFLABEL (label_60)
  (Wrd65.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  Rsp = (& (Rsp [2]));
  goto label_103;

DEFLABEL (label_119)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_5]), 2);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_118;

DEFLABEL (label_121)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_57)
  (Wrd14.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  goto label_103;

DEFLABEL (ill_formed_68)
DEFLABEL (ill_formed_45)
  INTERRUPT_CHECK (26, LABEL_7_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_7_34);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_11 9
#define LABEL_8_7 11
#define LABEL_8_9 13
#define LABEL_8_10 15
#define LABEL_8_13 17
#define LABEL_8_17 19
#define LABEL_8_15 21
#define LABEL_8_19 23
#define LABEL_8_21 25
#define LABEL_8_23 27
#define LABEL_8_24 29
#define LABEL_8_22 31
#define LABEL_8_26 33
#define LABEL_8_27 35
#define LABEL_8_25 37
#define LABEL_8_31 39
#define LABEL_8_32 41
#define LABEL_8_33 43
#define LABEL_8_34 45
#define LABEL_8_28 47
#define LABEL_8_30 49
#define LABEL_8_39 51
#define LABEL_8_35 53
#define TAG_8_36 25
#define LABEL_8_38 55
#define LABEL_8_41 57
#define LABEL_8_40 59
#define LABEL_8_43 61
#define LABEL_8_42 63
#define LABEL_8_45 65
#define LABEL_8_44 67
#define LABEL_8_47 69
#define LABEL_8_46 71
#define LABEL_8_49 73
#define LABEL_8_48 75
#define LABEL_8_51 77
#define LABEL_8_50 79
#define LABEL_8_53 81
#define LABEL_8_52 83
#define LABEL_8_55 85
#define LABEL_8_54 87
#define LABEL_8_57 89
#define LABEL_8_56 91
#define LABEL_8_59 93
#define LABEL_8_58 95
#define LABEL_8_61 97
#define LABEL_8_60 99
#define LABEL_8_63 101
#define LABEL_8_62 103
#define LABEL_8_65 105
#define LABEL_8_64 107
#define LABEL_8_67 109
#define LABEL_8_66 111
#define LABEL_8_69 113
#define LABEL_8_68 115
#define LABEL_8_71 117
#define LABEL_8_70 119
#define LABEL_8_72 121
#define LABEL_8_74 123
#define LABEL_8_75 125
#define LABEL_8_76 127
#define ENVIRONMENT_LABEL_8_3 197
#define DEBUGGING_LABEL_8_2 196
#define OBJECT_8_22 195
#define OBJECT_8_21 194
#define OBJECT_8_20 193
#define OBJECT_8_19 192
#define OBJECT_8_18 191
#define OBJECT_8_17 190
#define OBJECT_8_16 189
#define OBJECT_8_15 188
#define OBJECT_8_14 187
#define OBJECT_8_13 186
#define OBJECT_8_12 185
#define OBJECT_8_11 184
#define OBJECT_8_10 183
#define OBJECT_8_9 182
#define OBJECT_8_8 181
#define OBJECT_8_7 180
#define OBJECT_8_6 179
#define OBJECT_8_5 178
#define OBJECT_8_4 177
#define OBJECT_8_3 176
#define OBJECT_8_2 175
#define OBJECT_8_1 174
#define OBJECT_8_0 173
#define EXECUTE_CACHE_8_73 129
#define EXECUTE_CACHE_8_37 131
#define EXECUTE_CACHE_8_29 133
#define EXECUTE_CACHE_8_20 135
#define EXECUTE_CACHE_8_16 137
#define EXECUTE_CACHE_8_14 139
#define EXECUTE_CACHE_8_18 141
#define EXECUTE_CACHE_8_12 143
#define EXECUTE_CACHE_8_8 145
#define FREE_REFERENCE_8_20 148
#define FREE_REFERENCE_8_19 149
#define FREE_REFERENCE_8_18 150
#define FREE_REFERENCE_8_17 151
#define FREE_REFERENCE_8_16 152
#define FREE_REFERENCE_8_15 153
#define FREE_REFERENCE_8_14 154
#define FREE_REFERENCE_8_13 155
#define FREE_REFERENCE_8_12 156
#define FREE_REFERENCE_8_11 157
#define FREE_REFERENCE_8_10 158
#define FREE_REFERENCE_8_9 159
#define FREE_REFERENCE_8_8 160
#define FREE_REFERENCE_8_7 161
#define FREE_REFERENCE_8_6 162
#define FREE_REFERENCE_8_5 163
#define FREE_REFERENCE_8_4 164
#define FREE_REFERENCE_8_3 165
#define FREE_REFERENCE_8_2 166
#define FREE_REFERENCE_8_1 167
#define FREE_REFERENCE_8_0 168
#define FREE_ASSIGNMENT_8_2 170
#define FREE_ASSIGNMENT_8_1 171
#define FREE_ASSIGNMENT_8_0 172
#define FREE_REFERENCES_LABEL_8_0 128
#define NUMBER_OF_LINKER_SECTIONS_8_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto initialize_packageB_43;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_45;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_8_17);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_8_19);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_8_21);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_8_23);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_8_24);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_8_26);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_8_27);
      goto lambda_11;

    case 17:
      current_block = (Rpc - LABEL_8_25);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_8_31);
      goto label_51;

    case 19:
      current_block = (Rpc - LABEL_8_32);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_8_33);
      goto lambda_8;

    case 21:
      current_block = (Rpc - LABEL_8_34);
      goto label_53;

    case 22:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_10;

    case 23:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_8_39);
      goto label_54;

    case 25:
      current_block = (Rpc - LABEL_8_35);
      goto lambda_78;

    case 26:
      current_block = (Rpc - LABEL_8_38);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_8_41);
      goto label_55;

    case 28:
      current_block = (Rpc - LABEL_8_40);
      goto continuation_19;

    case 29:
      current_block = (Rpc - LABEL_8_43);
      goto label_56;

    case 30:
      current_block = (Rpc - LABEL_8_42);
      goto continuation_20;

    case 31:
      current_block = (Rpc - LABEL_8_45);
      goto label_57;

    case 32:
      current_block = (Rpc - LABEL_8_44);
      goto continuation_21;

    case 33:
      current_block = (Rpc - LABEL_8_47);
      goto label_58;

    case 34:
      current_block = (Rpc - LABEL_8_46);
      goto continuation_22;

    case 35:
      current_block = (Rpc - LABEL_8_49);
      goto label_59;

    case 36:
      current_block = (Rpc - LABEL_8_48);
      goto continuation_23;

    case 37:
      current_block = (Rpc - LABEL_8_51);
      goto label_60;

    case 38:
      current_block = (Rpc - LABEL_8_50);
      goto continuation_24;

    case 39:
      current_block = (Rpc - LABEL_8_53);
      goto label_61;

    case 40:
      current_block = (Rpc - LABEL_8_52);
      goto continuation_25;

    case 41:
      current_block = (Rpc - LABEL_8_55);
      goto label_62;

    case 42:
      current_block = (Rpc - LABEL_8_54);
      goto continuation_26;

    case 43:
      current_block = (Rpc - LABEL_8_57);
      goto label_63;

    case 44:
      current_block = (Rpc - LABEL_8_56);
      goto continuation_27;

    case 45:
      current_block = (Rpc - LABEL_8_59);
      goto label_64;

    case 46:
      current_block = (Rpc - LABEL_8_58);
      goto continuation_28;

    case 47:
      current_block = (Rpc - LABEL_8_61);
      goto label_65;

    case 48:
      current_block = (Rpc - LABEL_8_60);
      goto continuation_29;

    case 49:
      current_block = (Rpc - LABEL_8_63);
      goto label_66;

    case 50:
      current_block = (Rpc - LABEL_8_62);
      goto continuation_30;

    case 51:
      current_block = (Rpc - LABEL_8_65);
      goto label_67;

    case 52:
      current_block = (Rpc - LABEL_8_64);
      goto continuation_31;

    case 53:
      current_block = (Rpc - LABEL_8_67);
      goto label_68;

    case 54:
      current_block = (Rpc - LABEL_8_66);
      goto continuation_32;

    case 55:
      current_block = (Rpc - LABEL_8_69);
      goto label_69;

    case 56:
      current_block = (Rpc - LABEL_8_68);
      goto continuation_33;

    case 57:
      current_block = (Rpc - LABEL_8_71);
      goto label_70;

    case 58:
      current_block = (Rpc - LABEL_8_70);
      goto continuation_34;

    case 59:
      current_block = (Rpc - LABEL_8_72);
      goto continuation_35;

    case 60:
      current_block = (Rpc - LABEL_8_74);
      goto label_71;

    case 61:
      current_block = (Rpc - LABEL_8_75);
      goto label_72;

    case 62:
      current_block = (Rpc - LABEL_8_76);
      goto label_73;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_75)
DEFLABEL (initialize_packageB_43)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_137;
  Wrd5 = Wrd9;

DEFLABEL (label_136)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_135;
  Wrd5 = Wrd9;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_133;
  Wrd11 = Wrd15;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_131;
  Wrd8 = Wrd12;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_129;
  Wrd14 = Wrd18;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_127;
  Wrd8 = Wrd12;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_125;
  Wrd8 = Wrd12;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_123;
  Wrd14 = Wrd18;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_11;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_121;
  Wrd8 = Wrd12;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_11;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_119;
  Wrd8 = Wrd12;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_11;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_117;
  Wrd8 = Wrd12;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_8_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_115;
  Wrd8 = Wrd12;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_113;
  Wrd8 = Wrd12;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_111;
  Wrd8 = Wrd12;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_8_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_109;
  Wrd8 = Wrd12;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_8_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_107;
  Wrd8 = Wrd12;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_8_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_14]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_105;
  Wrd8 = Wrd12;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_8_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_15]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_103;
  Wrd8 = Wrd12;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_8_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_16]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_101;
  Wrd8 = Wrd12;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_8_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_17]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_99;
  Wrd8 = Wrd12;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_8_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_18]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_97;
  Wrd8 = Wrd12;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_8_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_18]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_95;
  Wrd8 = Wrd12;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_8_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_19]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_93;
  Wrd8 = Wrd12;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_8_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_19]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_91;
  Wrd8 = Wrd12;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_8_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_20]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_89;
  Wrd8 = Wrd12;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_8_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_73]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_8_72);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_85)
  Rsp = (& (Rsp [2]));
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_1]));
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_82)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_2]));
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_79)
  Rsp = (& (Rsp [4]));
  Rvl = (current_block [OBJECT_8_7]);
  goto pop_return;

DEFLABEL (label_81)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_76])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_73)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_75])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_72)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_74])), (Wrd6.pObj), Rvl);

DEFLABEL (label_71)
  goto label_85;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_71])), (Wrd9.pObj));

DEFLABEL (label_70)
  (Wrd8.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_69])), (Wrd9.pObj));

DEFLABEL (label_69)
  (Wrd8.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_67])), (Wrd9.pObj));

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_65])), (Wrd9.pObj));

DEFLABEL (label_67)
  (Wrd8.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_63])), (Wrd9.pObj));

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_61])), (Wrd9.pObj));

DEFLABEL (label_65)
  (Wrd8.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_59])), (Wrd9.pObj));

DEFLABEL (label_64)
  (Wrd8.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_57])), (Wrd9.pObj));

DEFLABEL (label_63)
  (Wrd8.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_55])), (Wrd9.pObj));

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_53])), (Wrd9.pObj));

DEFLABEL (label_61)
  (Wrd8.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_51])), (Wrd9.pObj));

DEFLABEL (label_60)
  (Wrd8.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_49])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_47])), (Wrd9.pObj));

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_45])), (Wrd9.pObj));

DEFLABEL (label_57)
  (Wrd8.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_43])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_41])), (Wrd9.pObj));

DEFLABEL (label_55)
  (Wrd8.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_39])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_32])), (Wrd15.pObj));

DEFLABEL (label_52)
  (Wrd14.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_31])), (Wrd9.pObj));

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_26])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_24])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_23])), (Wrd9.pObj));

DEFLABEL (label_48)
  (Wrd8.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd12.pObj));

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_17])), (Wrd6.pObj));

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_136;

DEFLABEL (lambda_76)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_8_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_35])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_37]));

DEFLABEL (lambda_77)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_8_33);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_141;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_140)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 10)
    goto label_139;

DEFLABEL (label_138)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_8]), 3);

DEFLABEL (label_139)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_138;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_138;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd20.pObj) = (& ((Wrd28.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [1]) = (Wrd21.Obj);
  Rvl = (current_block [OBJECT_8_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_141)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_53)
  (Wrd7.Obj) = Rvl;
  goto label_140;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_8_35);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define FREE_REFERENCE_9_0 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto handler_newline_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_newline_4)
DEFLABEL (handler_newline_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define FREE_REFERENCE_10_0 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_10_4);
      goto handler_colon_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_colon_4)
DEFLABEL (handler_colon_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 9
#define DEBUGGING_LABEL_11_2 8
#define FREE_REFERENCE_11_0 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
file_attributes_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_11_4);
      goto handler_semicolon_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handler_semicolon_4)
DEFLABEL (handler_semicolon_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_8 9
#define ENVIRONMENT_LABEL_3 23
#define DEBUGGING_LABEL_2 22
#define PURIFICATION_ROOT 21
#define OBJECT_7 20
#define OBJECT_6 19
#define OBJECT_5 18
#define OBJECT_4 17
#define OBJECT_3 16
#define OBJECT_2 15
#define OBJECT_1 14
#define OBJECT_0 13
#define GLOBAL_EXECUTE_CACHE_5 11
#define FREE_REFERENCES_LABEL_0 10
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
file_attributes_so_81ff563ab58c1655 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto expression_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_6)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_7])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_10)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_9)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	3,
	2,
	1,
	1,
	2,
	1,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 11)
      goto label_8;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_8)
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
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3]);
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd27.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

INVOKE_INTERFACE_TARGET_1
}

static const struct liarc_code_S arr_decl_file_attributes_so_81ff563ab58c1655 [11] =
  {
    { "file_attributes_so_code_1", 30, file_attributes_so_code_1 },
    { "file_attributes_so_code_2", 30, file_attributes_so_code_2 },
    { "file_attributes_so_code_3", 2, file_attributes_so_code_3 },
    { "file_attributes_so_code_4", 23, file_attributes_so_code_4 },
    { "file_attributes_so_code_5", 10, file_attributes_so_code_5 },
    { "file_attributes_so_code_6", 12, file_attributes_so_code_6 },
    { "file_attributes_so_code_7", 29, file_attributes_so_code_7 },
    { "file_attributes_so_code_8", 63, file_attributes_so_code_8 },
    { "file_attributes_so_code_9", 2, file_attributes_so_code_9 },
    { "file_attributes_so_code_10", 2, file_attributes_so_code_10 },
    { "file_attributes_so_code_11", 2, file_attributes_so_code_11 }
  };

int
decl_file_attributes_so_81ff563ab58c1655 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_file_attributes_so_81ff563ab58c1655);
  return (0);
}

DECLARE_COMPILED_CODE ("file-attributes.so", 4, decl_file_attributes_so_81ff563ab58c1655, file_attributes_so_81ff563ab58c1655)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_file_attributes_so_data_81ff563ab58c1655 [3786] =
  "\xd0\x01\x1d\xb6\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x02\x0d"
  "\xb9\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x25"
  "\x0d\x1c\x0d\x1c\x0d\x1c\xb1\xb2\xb3\xb4\xb5\xb6\xb7\x1b\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x82\x88\x1d\x0d\x02\xb1\xb2\xb3\xb4\xb5\xb6"
  "\xb7\x1b\x25\x0d\x0d\x1c\x0d\xb1\xb2\xb3\xb4\xb5\xb6\xb7\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x83\x88\x28\x0d\x1c\x28\x0d\xbf\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\x0c\x06\x07\x85\xc2\xbd"
  "\x02\x0c\x0c\xc1\xbc\x80\x08\x0d\xbb\x0d\xba\x0d\xb9\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x0c\x82\xc1\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x82"
  "\x0c\x83\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x07\x85"
  "\xb5\x02\x0d\xc1\xb4\x08\xb1\xb2\x24\x28\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\xc3\x1d\xc1\x0f\x02\x0c\x0c\x0f\x0f\x1b\x1b\x1b\x25\x1b\x0d\x0d"
  "\x0d\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x0d\x1c\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\xb1\x24\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x17\xb8\x88\xb0\x0d\x0d\x08\x0d\xb1\x1b"
  "\xb2\x9a\x1b\x1b\x1b\x0d\xb7\x1b\x1b\x1b\xb3\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x17\xb4\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x83\xb6\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x17\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5e\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02"
  "\x0b\x1e\x2a\x70\x61\x72\x73\x65\x72\x2d\x61\x73\x73\x6f\x63\x69"
  "\x61\x74\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x73\x3f\x2a\x19"
  "\x2a\x70\x61\x72\x73\x65\x72\x2d\x61\x74\x6f\x6d\x2d\x64\x65\x6c"
  "\x69\x6d\x69\x74\x65\x72\x73\x2a\x1f\x2a\x70\x61\x72\x73\x65\x72"
  "\x2d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x73\x3f\x2a\x16\x2a\x70\x61\x72\x73\x65\x72\x2d"
  "\x63\x6f\x6e\x73\x74\x69\x74\x75\x65\x6e\x74\x73\x2a\x29\x2a\x70"
  "\x61\x72\x73\x65\x72\x2d\x65\x6e\x61\x62\x6c\x65\x2d\x66\x69\x6c"
  "\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x70\x61\x72"
  "\x73\x69\x6e\x67\x3f\x2a\x17\x2a\x70\x61\x72\x73\x65\x72\x2d\x6b"
  "\x65\x79\x77\x6f\x72\x64\x2d\x73\x74\x79\x6c\x65\x2a\x0f\x2a\x70"
  "\x61\x72\x73\x65\x72\x2d\x72\x61\x64\x69\x78\x2a\x0f\x2a\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2a\x09\x09\x1d\x66\x69"
  "\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x0a\x26\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x2f\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62"
  "\x75\x74\x65\x73\x2d\x63\x6f\x6e\x73\x74\x69\x74\x75\x65\x6e\x74"
  "\x73\x0b\x29\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x61\x74\x6f\x6d"
  "\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x73\x0c\x09\x0c\x05\x13"
  "\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69"
  "\x6e\x64\x0d\x02\x22\x3e\x81\x83\x02\x21\x3c\x81\x85\x02\x20\x3a"
  "\x81\x83\x02\x1f\x38\x81\x83\x02\x1e\x36\x81\x85\x02\x1d\x34\x81"
  "\x83\x02\x1c\x32\x81\x83\x02\x1b\x30\x81\x85\x02\x1a\x2e\x81\x83"
  "\x02\x19\x2c\x81\x83\x02\x18\x2a\x81\x85\x02\x17\x28\x81\x83\x02"
  "\x16\x26\x81\x83\x02\x15\x24\x81\x85\x02\x14\x22\x81\x83\x02\x13"
  "\x20\x81\x83\x02\x12\x1e\x81\x85\x02\x11\x1c\x81\x83\x02\x10\x1a"
  "\x81\x83\x02\x0f\x18\x81\x85\x02\x0e\x16\x81\x83\x02\x0d\x14\x81"
  "\x83\x02\x0c\x12\x81\x85\x02\x0b\x10\x81\x83\x02\x0a\x0e\x81\x83"
  "\x02\x09\x0c\x81\x83\x02\x08\x0a\x81\x91\x02\x07\x08\x81\x8d\x02"
  "\x06\x06\x81\x85\x02\x05\x04\x84\x06\x3d\x5a\x0e\x02\x02\x07\x70"
  "\x72\x65\x66\x69\x78\x0b\x09\x09\x1b\x73\x79\x73\x74\x65\x6d\x2d"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x70\x61\x72\x73\x65\x72\x2d\x74\x61"
  "\x62\x6c\x65\x16\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x63\x6f\x6e"
  "\x73\x74\x69\x74\x75\x65\x6e\x74\x73\x0f\x19\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x2f\x61\x74\x6f\x6d\x2d\x64\x65\x6c\x69\x6d\x69\x74"
  "\x65\x72\x73\x09\x0c\x05\x0d\x02\x40\x3e\x81\x83\x02\x3f\x3c\x81"
  "\x85\x02\x3e\x3a\x81\x83\x02\x3d\x38\x81\x83\x02\x3c\x36\x81\x85"
  "\x02\x3b\x34\x81\x83\x02\x3a\x32\x81\x83\x02\x39\x30\x81\x85\x02"
  "\x38\x2e\x81\x83\x02\x37\x2c\x81\x83\x02\x36\x2a\x81\x85\x02\x35"
  "\x28\x81\x83\x02\x34\x26\x81\x83\x02\x33\x24\x81\x85\x02\x32\x22"
  "\x81\x83\x02\x31\x20\x81\x83\x02\x30\x1e\x81\x85\x02\x2f\x1c\x81"
  "\x83\x02\x2e\x1a\x81\x83\x02\x2d\x18\x81\x85\x02\x2c\x16\x81\x83"
  "\x02\x2b\x14\x81\x83\x02\x2a\x12\x81\x85\x02\x29\x10\x81\x83\x02"
  "\x28\x0e\x81\x83\x02\x27\x0c\x81\x83\x02\x26\x0a\x81\x91\x02\x25"
  "\x08\x81\x8d\x02\x24\x06\x81\x85\x02\x23\x04\x84\x06\x3d\x5b\x0d"
  "\x02\x04\x1e\x74\x6f\x6b\x65\x6e\x69\x7a\x65\x2d\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x6c\x69\x6e\x65"
  "\x09\x03\x0e\x74\x6f\x6b\x65\x6e\x73\x2d\x3e\x61\x6c\x69\x73\x74"
  "\x03\x42\x06\x81\x87\x02\x41\x04\x85\x08\x05\x0d\x02\x04\x2d\x2a"
  "\x2d\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x21"
  "\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x66\x69\x6c\x65\x20"
  "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x20\x6c\x69\x6e\x65\x2e"
  "\x21\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x66\x69\x6c\x65"
  "\x20\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x20\x6c\x69\x73\x74"
  "\x2e\x04\x63\x61\x72\x20\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2d\x63\x6f\x6e\x66\x75\x73\x69\x6f\x6e\x2d"
  "\x6c\x69\x6d\x69\x74\x0c\x63\x6f\x6c\x6f\x6e\x2d\x74\x6f\x6b\x65"
  "\x6e\x10\x73\x65\x6d\x69\x63\x6f\x6c\x6f\x6e\x2d\x74\x6f\x6b\x65"
  "\x6e\x0e\x6e\x65\x77\x6c\x69\x6e\x65\x2d\x74\x6f\x6b\x65\x6e\x10"
  "\x05\x03\x11\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x70\x61\x72"
  "\x73\x65\x72\x04\x1c\x70\x61\x72\x73\x65\x2d\x66\x69\x6c\x65\x2d"
  "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x76\x61\x6c\x75\x65"
  "\x11\x04\x1b\x70\x61\x72\x73\x65\x2d\x66\x69\x6c\x65\x2d\x61\x74"
  "\x74\x72\x69\x62\x75\x74\x65\x73\x2d\x69\x74\x65\x6d\x12\x03\x05"
  "\x77\x61\x72\x6e\x13\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x3f\x03\x13\x74\x72\x69\x6d\x2d\x69\x6e\x69\x74\x69\x61\x6c"
  "\x2d\x74\x6f\x6b\x65\x6e\x14\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d"
  "\x6e\x61\x6d\x65\x15\x03\x14\x65\x72\x72\x6f\x72\x3a\x70\x72\x65"
  "\x6d\x61\x74\x75\x72\x65\x2d\x65\x6f\x66\x03\x11\x74\x72\x69\x6d"
  "\x2d\x66\x69\x6e\x61\x6c\x2d\x74\x6f\x6b\x65\x6e\x16\x04\x0f\x73"
  "\x74\x72\x69\x6e\x67\x2d\x73\x75\x66\x66\x69\x78\x3f\x17\x03\x08"
  "\x72\x65\x76\x65\x72\x73\x65\x18\x0c\x59\x30\x81\x8d\x02\x58\x2e"
  "\x81\x8d\x02\x57\x2c\x81\x8f\x02\x56\x2a\x81\x8d\x02\x55\x28\x81"
  "\x8d\x02\x54\x26\x81\x8d\x02\x53\x24\x81\x83\x02\x52\x22\x81\x8d"
  "\x02\x51\x20\x81\x8d\x02\x50\x1e\x81\x8d\x02\x4f\x1c\x81\x8d\x02"
  "\x4e\x1a\x81\x8d\x02\x4d\x18\x81\x8d\x02\x4c\x16\x81\x8d\x02\x4b"
  "\x14\x81\x8b\x02\x4a\x12\x81\x8b\x02\x49\x10\x81\x8f\x02\x48\x0e"
  "\x81\x8d\x02\x47\x0c\x81\x8b\x02\x46\x0a\x81\x8b\x02\x45\x08\x81"
  "\x8b\x02\x44\x06\x81\x85\x02\x43\x04\x84\x06\x2f\x59\x19\x02\x03"
  "\x2a\x2d\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x1a\x03\x15\x03\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d"
  "\x62\x6f\x6c\x1b\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x61\x69"
  "\x6c\x04\x0f\x73\x74\x72\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78"
  "\x3f\x05\x63\x16\x81\x83\x02\x62\x14\x81\x83\x02\x61\x12\x81\x85"
  "\x02\x60\x10\x81\x85\x02\x5f\x0e\x81\x83\x02\x5e\x0c\x81\x83\x02"
  "\x5d\x0a\x81\x83\x02\x5c\x08\x81\x83\x02\x5b\x06\x81\x83\x02\x5a"
  "\x04\x83\x04\x15\x24\x1c\x02\x03\x2d\x2a\x1a\x03\x15\x04\x0c\x73"
  "\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x04\x17\x03\x1b\x05\x6f"
  "\x1a\x81\x83\x02\x6e\x18\x81\x85\x02\x6d\x16\x81\x85\x02\x6c\x14"
  "\x81\x83\x02\x6b\x12\x81\x83\x02\x6a\x10\x81\x83\x02\x69\x0e\x81"
  "\x83\x02\x68\x0c\x81\x85\x02\x67\x0a\x81\x85\x02\x66\x08\x81\x85"
  "\x02\x65\x06\x81\x83\x02\x64\x04\x83\x04\x19\x29\x1b\x02\x08\x21"
  "\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x66\x69\x6c\x65\x20"
  "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x20\x6c\x69\x73\x74\x2e"
  "\x1e\x05\x6d\x6f\x64\x65\x04\x63\x64\x72\x03\x04\x05\x6d\x65\x6d"
  "\x71\x03\x18\x03\x13\x04\x8c\x01\x3c\x81\x81\x02\x8b\x01\x3a\x81"
  "\x81\x02\x8a\x01\x38\x81\x89\x02\x89\x01\x36\x81\x89\x02\x88\x01"
  "\x34\x81\x89\x02\x87\x01\x32\x81\x87\x02\x86\x01\x30\x81\x85\x02"
  "\x85\x01\x2e\x81\x83\x02\x84\x01\x2c\x81\x85\x02\x83\x01\x2a\x81"
  "\x83\x02\x82\x01\x28\x81\x83\x02\x81\x01\x26\x81\x85\x02\x80\x01"
  "\x24\x81\x83\x02\x7f\x22\x81\x8b\x02\x7e\x20\x81\x89\x02\x7d\x1e"
  "\x81\x89\x02\x7c\x1c\x81\x89\x02\x7b\x1a\x81\x87\x02\x7a\x18\x81"
  "\x83\x02\x79\x16\x81\x83\x02\x78\x14\x81\x83\x02\x77\x12\x81\x89"
  "\x02\x76\x10\x81\x89\x02\x75\x0e\x81\x87\x02\x74\x0c\x81\x87\x02"
  "\x73\x0a\x81\x87\x02\x72\x08\x81\x83\x02\x71\x06\x81\x87\x02\x70"
  "\x04\x83\x04\x3b\x52\x1a\x02\x09\x01\x5d\x01\x55\x01\x75\x01\x47"
  "\x01\x67\x01\x24\x01\x23\x01\x2d\x01\x61\x01\x28\x01\x3c\x01\x3b"
  "\x01\x2a\x01\x29\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21"
  "\x02\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x01"
  "\x0b\x81\x02\x11\x62\x42\x6f\x4f\x64\x44\x78\x58\x69\x49\x65\x45"
  "\x73\x53\x6c\x4c\x0d\x28\x29\x5b\x5d\x7b\x7d\x22\x3a\x3b\x27\x60"
  "\x2c\x01\xac\x01\x01\xbc\x01\x0a\x0c\x0b\x04\x0f\x18\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x2f\x6e\x75\x6d\x62\x65\x72\x2d\x6c\x65\x61"
  "\x64\x65\x72\x73\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x77\x68"
  "\x69\x74\x65\x73\x70\x61\x63\x65\x13\x68\x61\x6e\x64\x6c\x65\x72"
  "\x3a\x77\x68\x69\x74\x65\x73\x70\x61\x63\x65\x10\x68\x61\x6e\x64"
  "\x6c\x65\x72\x3a\x6e\x65\x77\x6c\x69\x6e\x65\x18\x0d\x68\x61\x6e"
  "\x64\x6c\x65\x72\x3a\x61\x74\x6f\x6d\x0f\x68\x61\x6e\x64\x6c\x65"
  "\x72\x3a\x73\x79\x6d\x62\x6f\x6c\x0f\x68\x61\x6e\x64\x6c\x65\x72"
  "\x3a\x6e\x75\x6d\x62\x65\x72\x0d\x68\x61\x6e\x64\x6c\x65\x72\x3a"
  "\x6c\x69\x73\x74\x0f\x68\x61\x6e\x64\x6c\x65\x72\x3a\x76\x65\x63"
  "\x74\x6f\x72\x1a\x68\x61\x6e\x64\x6c\x65\x72\x3a\x63\x6c\x6f\x73"
  "\x65\x2d\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x73\x0e\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x63\x6f\x6c\x6f\x6e\x17\x12\x68\x61\x6e"
  "\x64\x6c\x65\x72\x3a\x73\x65\x6d\x69\x63\x6f\x6c\x6f\x6e\x15\x0e"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x71\x75\x6f\x74\x65\x13\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65"
  "\x10\x68\x61\x6e\x64\x6c\x65\x72\x3a\x75\x6e\x71\x75\x6f\x74\x65"
  "\x0f\x68\x61\x6e\x64\x6c\x65\x72\x3a\x73\x74\x72\x69\x6e\x67\x10"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x73\x70\x65\x63\x69\x61\x6c\x0e"
  "\x68\x61\x6e\x64\x6c\x65\x72\x3a\x66\x61\x6c\x73\x65\x0d\x68\x61"
  "\x6e\x64\x6c\x65\x72\x3a\x74\x72\x75\x65\x0d\x68\x61\x6e\x64\x6c"
  "\x65\x72\x3a\x63\x68\x61\x72\x16\x04\x09\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x04\x0f\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x75\x6e\x69"
  "\x6f\x6e\x13\x05\x13\x03\x11\x73\x74\x72\x69\x6e\x67\x2d\x3e\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x04\x14\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x04\x0c\x6d\x61"
  "\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x03\x11\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x73\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x04\x12\x6d\x61\x6b\x65\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x74\x61\x62\x6c\x65\x0a\xcb\x01\x80\x01\x81\x89\x02"
  "\xca\x01\x7e\x81\x89\x02\xc9\x01\x7c\x81\x8d\x02\xc8\x01\x7a\x81"
  "\x8d\x02\xc7\x01\x78\x81\x8d\x02\xc6\x01\x76\x81\x8f\x02\xc5\x01"
  "\x74\x81\x8d\x02\xc4\x01\x72\x81\x8f\x02\xc3\x01\x70\x81\x8d\x02"
  "\xc2\x01\x6e\x81\x8f\x02\xc1\x01\x6c\x81\x8d\x02\xc0\x01\x6a\x81"
  "\x8f\x02\xbf\x01\x68\x81\x8d\x02\xbe\x01\x66\x81\x8f\x02\xbd\x01"
  "\x64\x81\x8d\x02\xbc\x01\x62\x81\x8f\x02\xbb\x01\x60\x81\x8d\x02"
  "\xba\x01\x5e\x81\x8f\x02\xb9\x01\x5c\x81\x8d\x02\xb8\x01\x5a\x81"
  "\x8f\x02\xb7\x01\x58\x81\x8d\x02\xb6\x01\x56\x81\x8f\x02\xb5\x01"
  "\x54\x81\x8d\x02\xb4\x01\x52\x81\x8f\x02\xb3\x01\x50\x81\x8d\x02"
  "\xb2\x01\x4e\x81\x8f\x02\xb1\x01\x4c\x81\x8d\x02\xb0\x01\x4a\x81"
  "\x8f\x02\xaf\x01\x48\x81\x8d\x02\xae\x01\x46\x81\x8f\x02\xad\x01"
  "\x44\x81\x8d\x02\xac\x01\x42\x81\x8f\x02\xab\x01\x40\x81\x8d\x02"
  "\xaa\x01\x3e\x81\x8f\x02\xa9\x01\x3c\x81\x8d\x02\xa8\x01\x3a\x81"
  "\x8f\x02\xa7\x01\x38\x81\x8d\x02\xa6\x01\x36\x81\x85\x02\xa5\x01"
  "\x34\x81\x8f\x02\xa4\x01\x32\x81\x8d\x02\xa3\x01\x30\x81\x87\x02"
  "\xa2\x01\x2e\x81\x87\x02\xa1\x01\x2c\x81\x87\x02\xa0\x01\x2a\x81"
  "\x91\x02\x9f\x01\x28\x81\x8f\x02\x9e\x01\x26\x81\x8d\x02\x9d\x01"
  "\x24\x81\x87\x02\x9c\x01\x22\x81\x8f\x02\x9b\x01\x20\x81\x8d\x02"
  "\x9a\x01\x1e\x81\x91\x02\x99\x01\x1c\x81\x8f\x02\x98\x01\x1a\x81"
  "\x8b\x02\x97\x01\x18\x81\x89\x02\x96\x01\x16\x81\x87\x02\x95\x01"
  "\x14\x81\x89\x02\x94\x01\x12\x81\x87\x02\x93\x01\x10\x81\x87\x02"
  "\x92\x01\x0e\x81\x85\x02\x91\x01\x0c\x81\x85\x02\x90\x01\x0a\x81"
  "\x89\x02\x8f\x01\x08\x81\x83\x02\x8e\x01\x06\x81\x81\x02\x8d\x01"
  "\x04\x82\x02\x7f\xc6\x01\x13\x02\x0a\x10\x02\xcd\x01\x06\x81\x89"
  "\x02\xcc\x01\x04\x86\x0a\x05\x0a\x0f\x02\x0b\x02\xcf\x01\x06\x81"
  "\x89\x02\xce\x01\x04\x86\x0a\x05\x0a\x02\x0c\x02\xd1\x01\x06\x81"
  "\x89\x02\xd0\x01\x04\x86\x0a\x05\x0a\x0c\x0a\x73\x65\x6d\x69\x63"
  "\x6f\x6c\x6f\x6e\x08\x6e\x65\x77\x6c\x69\x6e\x65\x06\x63\x6f\x6c"
  "\x6f\x6e\x10\x15\x17\x18\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x16\x14\x09\x1b\x70\x61"
  "\x72\x73\x65\x2d\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75"
  "\x74\x65\x73\x2d\x6c\x69\x6e\x65\x11\x12\x0a\x0b\x0c\x10\x04\x04"
  "\x0f\x04\x13\x04\x1a\x04\x1b\x04\x1c\x04\x19\x04\x04\x0d\x04\x0e"
  "\x04\x10\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x04\x0a\x80\x80\x04\x03\x08\x81\x81\x02\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x83\x02\x09\x18";

SCHEME_OBJECT *
file_attributes_so_data_81ff563ab58c1655 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_file_attributes_so_data_81ff563ab58c1655 [0]))), (sizeof (prog_file_attributes_so_data_81ff563ab58c1655)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_8]));
}

DECLARE_COMPILED_DATA_NS ("file-attributes.so", file_attributes_so_data_81ff563ab58c1655)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("file-attributes.so", "829a850be23c20d0")
