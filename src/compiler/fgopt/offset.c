/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_9 7
#define TAG_1_10 2
#define LABEL_1_7 9
#define TAG_1_8 3
#define LABEL_1_15 11
#define LABEL_1_16 13
#define LABEL_1_17 15
#define LABEL_1_18 17
#define LABEL_1_19 19
#define LABEL_1_20 21
#define LABEL_1_21 23
#define LABEL_1_22 25
#define LABEL_1_23 27
#define LABEL_1_12 29
#define TAG_1_13 13
#define LABEL_1_26 31
#define LABEL_1_24 33
#define LABEL_1_30 35
#define LABEL_1_25 37
#define LABEL_1_28 39
#define LABEL_1_34 41
#define LABEL_1_29 43
#define LABEL_1_36 45
#define LABEL_1_37 47
#define LABEL_1_39 49
#define LABEL_1_40 51
#define LABEL_1_44 53
#define LABEL_1_33 55
#define LABEL_1_45 57
#define LABEL_1_48 59
#define LABEL_1_43 61
#define LABEL_1_49 63
#define LABEL_1_50 65
#define LABEL_1_51 67
#define LABEL_1_52 69
#define LABEL_1_53 71
#define LABEL_1_38 73
#define LABEL_1_56 75
#define LABEL_1_41 77
#define LABEL_1_57 79
#define LABEL_1_58 81
#define LABEL_1_59 83
#define LABEL_1_60 85
#define LABEL_1_62 87
#define LABEL_1_65 89
#define LABEL_1_66 91
#define LABEL_1_46 93
#define LABEL_1_55 95
#define LABEL_1_63 97
#define LABEL_1_70 99
#define LABEL_1_71 101
#define LABEL_1_72 103
#define LABEL_1_61 105
#define ENVIRONMENT_LABEL_1_3 165
#define DEBUGGING_LABEL_1_2 164
#define OBJECT_1_12 163
#define OBJECT_1_11 162
#define OBJECT_1_10 161
#define OBJECT_1_9 160
#define OBJECT_1_8 159
#define OBJECT_1_7 158
#define OBJECT_1_6 157
#define OBJECT_1_5 156
#define OBJECT_1_4 155
#define OBJECT_1_3 154
#define OBJECT_1_2 153
#define OBJECT_1_1 152
#define OBJECT_1_0 151
#define EXECUTE_CACHE_1_74 107
#define EXECUTE_CACHE_1_73 109
#define EXECUTE_CACHE_1_69 111
#define EXECUTE_CACHE_1_68 113
#define EXECUTE_CACHE_1_67 115
#define EXECUTE_CACHE_1_64 117
#define EXECUTE_CACHE_1_54 119
#define EXECUTE_CACHE_1_47 121
#define EXECUTE_CACHE_1_42 123
#define EXECUTE_CACHE_1_35 125
#define EXECUTE_CACHE_1_32 127
#define EXECUTE_CACHE_1_31 129
#define EXECUTE_CACHE_1_27 131
#define EXECUTE_CACHE_1_14 133
#define EXECUTE_CACHE_1_11 135
#define EXECUTE_CACHE_1_6 137
#define FREE_REFERENCE_1_6 140
#define FREE_REFERENCE_1_5 141
#define FREE_REFERENCE_1_4 142
#define FREE_REFERENCE_1_3 143
#define FREE_REFERENCE_1_2 144
#define FREE_REFERENCE_1_1 145
#define FREE_REFERENCE_1_0 146
#define FREE_ASSIGNMENT_1_2 148
#define FREE_ASSIGNMENT_1_1 149
#define FREE_ASSIGNMENT_1_0 150
#define FREE_REFERENCES_LABEL_1_0 106
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd82;
  machine_word Wrd90;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd48;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd65;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd25;
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto compute_node_offsets_61;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_100;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto swapB_99;

    case 4:
      current_block = (Rpc - LABEL_1_15);
      goto label_63;

    case 5:
      current_block = (Rpc - LABEL_1_16);
      goto label_64;

    case 6:
      current_block = (Rpc - LABEL_1_17);
      goto label_65;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto label_66;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_1_20);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto label_69;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto label_70;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto label_71;

    case 13:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_101;

    case 14:
      current_block = (Rpc - LABEL_1_26);
      goto label_72;

    case 15:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_1_30);
      goto label_73;

    case 17:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_34;

    case 19:
      current_block = (Rpc - LABEL_1_34);
      goto label_74;

    case 20:
      current_block = (Rpc - LABEL_1_29);
      goto lambda_33;

    case 21:
      current_block = (Rpc - LABEL_1_36);
      goto label_75;

    case 22:
      current_block = (Rpc - LABEL_1_37);
      goto label_76;

    case 23:
      current_block = (Rpc - LABEL_1_39);
      goto label_78;

    case 24:
      current_block = (Rpc - LABEL_1_40);
      goto label_79;

    case 25:
      current_block = (Rpc - LABEL_1_44);
      goto label_77;

    case 26:
      current_block = (Rpc - LABEL_1_33);
      goto lambda_38;

    case 27:
      current_block = (Rpc - LABEL_1_45);
      goto label_80;

    case 28:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_31;

    case 29:
      current_block = (Rpc - LABEL_1_43);
      goto continuation_28;

    case 30:
      current_block = (Rpc - LABEL_1_49);
      goto label_81;

    case 31:
      current_block = (Rpc - LABEL_1_50);
      goto label_82;

    case 32:
      current_block = (Rpc - LABEL_1_51);
      goto label_84;

    case 33:
      current_block = (Rpc - LABEL_1_52);
      goto label_85;

    case 34:
      current_block = (Rpc - LABEL_1_53);
      goto label_83;

    case 35:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_24;

    case 36:
      current_block = (Rpc - LABEL_1_56);
      goto label_86;

    case 37:
      current_block = (Rpc - LABEL_1_41);
      goto lambda_21;

    case 38:
      current_block = (Rpc - LABEL_1_57);
      goto label_87;

    case 39:
      current_block = (Rpc - LABEL_1_58);
      goto label_88;

    case 40:
      current_block = (Rpc - LABEL_1_59);
      goto label_91;

    case 41:
      current_block = (Rpc - LABEL_1_60);
      goto label_92;

    case 42:
      current_block = (Rpc - LABEL_1_62);
      goto label_93;

    case 43:
      current_block = (Rpc - LABEL_1_65);
      goto label_89;

    case 44:
      current_block = (Rpc - LABEL_1_66);
      goto label_90;

    case 45:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_36;

    case 46:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_26;

    case 47:
      current_block = (Rpc - LABEL_1_63);
      goto continuation_14;

    case 48:
      current_block = (Rpc - LABEL_1_70);
      goto label_94;

    case 49:
      current_block = (Rpc - LABEL_1_71);
      goto label_95;

    case 50:
      current_block = (Rpc - LABEL_1_72);
      goto label_96;

    case 51:
      current_block = (Rpc - LABEL_1_61);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_node_offsets_98)
DEFLABEL (compute_node_offsets_61)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 3;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd24.Obj);
  Wrd20 = Wrd26;
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [3]) = (Wrd18.Obj);
  ((Wrd20.pObj) [4]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_12])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (swapB_99)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (swapB_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_131;

DEFLABEL (label_130)
  Wrd5 = Wrd9;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_126)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_123)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  Wrd57 = Wrd61;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_117)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_114)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  Wrd109 = Wrd113;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_108)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_105)
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_107)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_71)
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_22])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_70)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_112;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_21])), (Wrd110.pObj));

DEFLABEL (label_69)
  (Wrd109.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_115;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_68)
  goto label_114;

DEFLABEL (label_119)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_118;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_67)
  goto label_117;

DEFLABEL (label_122)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_121;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_18])), (Wrd58.pObj));

DEFLABEL (label_66)
  (Wrd57.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_125)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_124;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_65)
  goto label_123;

DEFLABEL (label_128)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_127;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_64)
  goto label_126;

DEFLABEL (label_131)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_130;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_15])), (Wrd6.pObj));

DEFLABEL (label_63)
  (Wrd5.Obj) = Rvl;
  goto label_129;

DEFLABEL (lambda_101)
  CLOSURE_HEADER (LABEL_1_12);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_137;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_137;
  (Wrd16.Obj) = ((Wrd22.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_136)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_135;
  Wrd10 = Wrd14;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_133;
  Wrd8 = Wrd12;

DEFLABEL (label_132)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_34])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd11.pObj));

DEFLABEL (label_73)
  (Wrd10.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_1_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_136;

DEFLABEL (lambda_102)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_1_29);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_162;
  Wrd5 = Wrd9;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_160;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_160;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_159)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_152;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_151;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd39.Lng))))
    goto label_151;
  (Wrd33.Obj) = ((Wrd37.pObj) [11]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_150)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_149;
  Wrd8 = Wrd12;

DEFLABEL (label_148)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_147;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_147;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_146)
  (Wrd30.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd30.Obj))
    goto label_142;
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_140;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd40.Lng))))
    goto label_140;
  (Wrd32.Obj) = ((Wrd38.pObj) [20]);

DEFLABEL (label_139)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_138)
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (label_140)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_1_10]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_83)
DEFLABEL (label_141)
  (Wrd32.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_145;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd56.Lng))))
    goto label_145;
  (Wrd48.Obj) = ((Wrd54.pObj) [20]);

DEFLABEL (label_144)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_143;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd70.Lng) = ((Wrd71.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd70.Lng)))
    goto label_143;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));
  goto label_139;

DEFLABEL (label_143)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_85)
  goto label_141;

DEFLABEL (label_145)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Obj) = (current_block [OBJECT_1_10]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_84)
  (Wrd48.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_1_5]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_82)
  (Wrd14.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_49])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_1_8]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_152)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_158;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd58.Lng))))
    goto label_158;
  (Wrd52.Obj) = ((Wrd56.pObj) [9]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_157)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_156;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd74.Lng))))
    goto label_156;
  (Wrd68.Obj) = ((Wrd72.pObj) [10]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_155)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_42]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_154;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_154;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_153)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (label_154)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_1_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (current_block [OBJECT_1_7]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_1_6]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_5]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_76)
  (Wrd11.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_36])), (Wrd6.pObj));

DEFLABEL (label_75)
  (Wrd5.Obj) = Rvl;
  goto label_161;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (Wrd32.Obj) = Rvl;
  goto label_138;

DEFLABEL (lambda_103)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_1_33);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_165;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd13.Lng))))
    goto label_165;
  (Wrd5.Obj) = ((Wrd11.pObj) [19]);

DEFLABEL (label_164)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_163;
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_163)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_69]));

DEFLABEL (label_165)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_80)
  (Wrd5.Obj) = Rvl;
  goto label_164;

DEFLABEL (lambda_104)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_1_41);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_191;
  Wrd5 = Wrd9;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_189;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_189;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_188)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_172;

DEFLABEL (label_171)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_170;
  Wrd28 = Wrd32;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_168;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_168;
  (Wrd34.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_167)
  (Wrd50.Obj) = (* (Rsp++));
  if ((Wrd34.Obj) == (Wrd50.Obj))
    goto label_166;
  (Wrd51.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [1]) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_68]));

DEFLABEL (label_166)
  (Wrd52.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd52.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_67]));

DEFLABEL (label_168)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_1_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_66]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_90)
  (Wrd34.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_65])), (Wrd29.pObj));

DEFLABEL (label_89)
  (Wrd28.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_187;
  Wrd54 = Wrd58;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_185;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd68.Lng))))
    goto label_185;
  (Wrd60.Obj) = ((Wrd66.pObj) [3]);

DEFLABEL (label_184)
  (Wrd76.Obj) = (* (Rsp++));
  if (! ((Wrd60.Obj) == (Wrd76.Obj)))
    goto label_171;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_183;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd88.Lng))))
    goto label_183;
  (Wrd82.Obj) = ((Wrd86.pObj) [19]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_182)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_63]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_64]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_63);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_180;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_179;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_179;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_178)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_177;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_177;
  (Wrd25.Obj) = ((Wrd28.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_176)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_175;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd45.Lng))))
    goto label_175;
  (Wrd37.Obj) = ((Wrd43.pObj) [17]);

DEFLABEL (label_174)
  (Wrd53.Obj) = (Rsp [0]);
  if ((Wrd53.Obj) == (Wrd37.Obj))
    goto label_173;
  (Wrd54.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_74]));

DEFLABEL (label_173)
  (Wrd56.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [1]) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_73]));

DEFLABEL (label_175)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_1_12]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_72]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_96)
  (Wrd37.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd33.Obj) = (current_block [OBJECT_1_11]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_71]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_1_11]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_70]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_94)
  (Wrd8.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_180)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_181)
  (Wrd5.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_68]));

DEFLABEL (label_183)
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.Obj) = (current_block [OBJECT_1_9]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_62]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (current_block [OBJECT_1_5]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_92)
  (Wrd60.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_59])), (Wrd55.pObj));

DEFLABEL (label_91)
  (Wrd54.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_58]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_57])), (Wrd6.pObj));

DEFLABEL (label_87)
  (Wrd5.Obj) = Rvl;
  goto label_190;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_61);
  goto label_181;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_10 9
#define LABEL_2_7 11
#define LABEL_2_12 13
#define LABEL_2_13 15
#define LABEL_2_9 17
#define LABEL_2_14 19
#define LABEL_2_15 21
#define ENVIRONMENT_LABEL_2_3 40
#define DEBUGGING_LABEL_2_2 39
#define OBJECT_2_4 38
#define OBJECT_2_3 37
#define OBJECT_2_2 36
#define OBJECT_2_1 35
#define OBJECT_2_0 34
#define EXECUTE_CACHE_2_16 23
#define EXECUTE_CACHE_2_11 25
#define EXECUTE_CACHE_2_8 27
#define FREE_REFERENCE_2_1 30
#define FREE_REFERENCE_2_0 31
#define FREE_ASSIGNMENT_2_0 33
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd25;
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
      goto enqueue_grafted_proceduresB_7;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enqueue_grafted_proceduresB_16)
DEFLABEL (enqueue_grafted_proceduresB_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [19]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_24;
  Wrd9 = Wrd13;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_20)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd19.pObj));

DEFLABEL (label_14)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_20;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_2_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lambda_17)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_31)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd28.Obj) = (current_block [OBJECT_2_4]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 10)
    goto label_28;

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_28)
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd38.Lng))))
    goto label_27;
  Rvl = ((Wrd36.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_8 7
#define LABEL_3_4 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define LABEL_3_13 19
#define ENVIRONMENT_LABEL_3_3 35
#define DEBUGGING_LABEL_3_2 34
#define OBJECT_3_3 33
#define OBJECT_3_2 32
#define OBJECT_3_1 31
#define OBJECT_3_0 30
#define EXECUTE_CACHE_3_15 21
#define EXECUTE_CACHE_3_14 23
#define EXECUTE_CACHE_3_7 25
#define FREE_REFERENCE_3_1 28
#define FREE_REFERENCE_3_0 29
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
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
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_3_4);
      goto walk_rvalue_9;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_rvalue_18)
DEFLABEL (walk_rvalue_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_31;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_30)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_20;

DEFLABEL (label_19)
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_20)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_29;
  Wrd30 = Wrd34;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_27;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd44.Lng))))
    goto label_27;
  (Wrd36.Obj) = ((Wrd42.pObj) [3]);

DEFLABEL (label_26)
  (Wrd52.Obj) = (* (Rsp++));
  if (! ((Wrd36.Obj) == (Wrd52.Obj)))
    goto label_19;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_25;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd64.Lng))))
    goto label_25;
  (Wrd58.Obj) = ((Wrd62.pObj) [19]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_24)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_22;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd86.Lng))))
    goto label_22;
  (Wrd80.Obj) = ((Wrd84.pObj) [3]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_21)
  (Wrd94.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_22)
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd90.Obj) = (current_block [OBJECT_3_0]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto label_19;

DEFLABEL (label_25)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_3_3]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_3_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_14)
  (Wrd36.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd31.pObj));

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_3_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_12)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_8);
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_9 9
#define LABEL_4_10 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define LABEL_4_13 17
#define ENVIRONMENT_LABEL_4_3 34
#define DEBUGGING_LABEL_4_2 33
#define OBJECT_4_3 32
#define OBJECT_4_2 31
#define OBJECT_4_1 30
#define OBJECT_4_0 29
#define EXECUTE_CACHE_4_14 19
#define EXECUTE_CACHE_4_8 21
#define EXECUTE_CACHE_4_6 23
#define FREE_REFERENCE_4_2 26
#define FREE_REFERENCE_4_1 27
#define FREE_REFERENCE_4_0 28
#define FREE_REFERENCES_LABEL_4_0 18
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_4_4);
      goto maybe_enqueue_procedureB_7;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_enqueue_procedureB_15)
DEFLABEL (maybe_enqueue_procedureB_7)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_24)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd30.Obj)))
    goto label_16;
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_23;
  Wrd33 = Wrd37;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_21;
  (Wrd39.Obj) = ((Wrd45.pObj) [3]);

DEFLABEL (label_20)
  (Wrd55.Obj) = (* (Rsp++));
  if (! ((Wrd39.Obj) == (Wrd55.Obj)))
    goto label_16;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_19;
  Wrd59 = Wrd63;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd60.pObj));

DEFLABEL (label_13)
  (Wrd59.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_4_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_12)
  (Wrd39.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd34.pObj));

DEFLABEL (label_11)
  (Wrd33.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_4_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_9])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 19
#define DEBUGGING_LABEL_5_2 18
#define EXECUTE_CACHE_5_8 11
#define FREE_REFERENCE_5_1 14
#define FREE_REFERENCE_5_0 15
#define FREE_ASSIGNMENT_5_0 17
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_5_4);
      goto enqueue_procedureB_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enqueue_procedureB_7)
DEFLABEL (enqueue_procedureB_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_10)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_9;
  Wrd28 = Wrd32;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd29.pObj));

DEFLABEL (label_5)
  (Wrd28.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_12)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_6])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_4)
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_4 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_6_4);
      goto walk_next_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_4)
DEFLABEL (walk_next_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_1 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_9 9
#define EXECUTE_CACHE_7_7 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto update_reference_context_offsetB_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_reference_context_offsetB_7)
DEFLABEL (update_reference_context_offsetB_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_11;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_11;
  if ((Wrd7.Obj) == Rvl)
    goto label_10;

DEFLABEL (label_9)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_7_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define ENVIRONMENT_LABEL_8_3 27
#define DEBUGGING_LABEL_8_2 26
#define OBJECT_8_4 25
#define OBJECT_8_3 24
#define OBJECT_8_2 23
#define OBJECT_8_1 22
#define OBJECT_8_0 21
#define EXECUTE_CACHE_8_12 15
#define EXECUTE_CACHE_8_11 17
#define EXECUTE_CACHE_8_6 19
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd61;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto update_reference_context_fake_offsetB_6;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_reference_context_fake_offsetB_13)
DEFLABEL (update_reference_context_fake_offsetB_6)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd5.Obj) = ((Wrd11.pObj) [19]);

DEFLABEL (label_23)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_22;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd27.Lng) = (-1 - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_22;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [1]);
  if (! ((Wrd32.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  (Wrd58.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd58.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_15)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_20;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if ((Wrd61.Lng) == 0)
    goto label_14;

DEFLABEL (label_19)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_18;
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_18;
  if ((Wrd41.Obj) == (Wrd43.Obj))
    goto label_17;

DEFLABEL (label_16)
  (Wrd51.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_8_3]);
  (Rsp [2]) = (Wrd52.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_8_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (label_20)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_14;

DEFLABEL (label_22)
  (Wrd21.Obj) = (current_block [OBJECT_8_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_2 19
#define OBJECT_9_1 18
#define OBJECT_9_0 17
#define EXECUTE_CACHE_9_9 11
#define EXECUTE_CACHE_9_6 13
#define FREE_REFERENCE_9_0 16
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto walk_return_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_return_10)
DEFLABEL (walk_return_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_16;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_16;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_15)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_14;
  Wrd24 = Wrd28;

DEFLABEL (label_13)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd24.Obj) == (Wrd30.Obj)))
    goto label_11;
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_9_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_8])), (Wrd25.pObj));

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_9_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_13 15
#define LABEL_10_14 17
#define LABEL_10_16 19
#define LABEL_10_17 21
#define LABEL_10_19 23
#define LABEL_10_20 25
#define LABEL_10_22 27
#define LABEL_10_23 29
#define LABEL_10_25 31
#define LABEL_10_27 33
#define LABEL_10_29 35
#define LABEL_10_31 37
#define LABEL_10_33 39
#define LABEL_10_35 41
#define LABEL_10_34 43
#define LABEL_10_40 45
#define LABEL_10_30 47
#define LABEL_10_26 49
#define LABEL_10_42 51
#define LABEL_10_24 53
#define LABEL_10_44 55
#define LABEL_10_21 57
#define LABEL_10_46 59
#define LABEL_10_18 61
#define LABEL_10_49 63
#define LABEL_10_15 65
#define LABEL_10_51 67
#define LABEL_10_12 69
#define LABEL_10_52 71
#define LABEL_10_54 73
#define LABEL_10_56 75
#define LABEL_10_57 77
#define LABEL_10_58 79
#define LABEL_10_9 81
#define LABEL_10_60 83
#define LABEL_10_61 85
#define LABEL_10_62 87
#define LABEL_10_63 89
#define LABEL_10_38 91
#define LABEL_10_67 93
#define LABEL_10_39 95
#define LABEL_10_43 97
#define LABEL_10_69 99
#define LABEL_10_45 101
#define LABEL_10_71 103
#define LABEL_10_72 105
#define LABEL_10_48 107
#define LABEL_10_73 109
#define LABEL_10_75 111
#define LABEL_10_53 113
#define LABEL_10_76 115
#define LABEL_10_77 117
#define LABEL_10_78 119
#define LABEL_10_80 121
#define LABEL_10_64 123
#define LABEL_10_82 125
#define LABEL_10_83 127
#define LABEL_10_66 129
#define LABEL_10_68 131
#define LABEL_10_70 133
#define LABEL_10_74 135
#define LABEL_10_85 137
#define LABEL_10_86 139
#define LABEL_10_87 141
#define LABEL_10_88 143
#define LABEL_10_89 145
#define LABEL_10_90 147
#define LABEL_10_81 149
#define LABEL_10_91 151
#define LABEL_10_92 153
#define LABEL_10_93 155
#define LABEL_10_94 157
#define LABEL_10_95 159
#define LABEL_10_96 161
#define ENVIRONMENT_LABEL_10_3 224
#define DEBUGGING_LABEL_10_2 223
#define OBJECT_10_18 222
#define OBJECT_10_17 221
#define OBJECT_10_16 220
#define OBJECT_10_15 219
#define OBJECT_10_14 218
#define OBJECT_10_13 217
#define OBJECT_10_12 216
#define OBJECT_10_11 215
#define OBJECT_10_10 214
#define OBJECT_10_9 213
#define OBJECT_10_8 212
#define OBJECT_10_7 211
#define OBJECT_10_6 210
#define OBJECT_10_5 209
#define OBJECT_10_4 208
#define OBJECT_10_3 207
#define OBJECT_10_2 206
#define OBJECT_10_1 205
#define OBJECT_10_0 204
#define EXECUTE_CACHE_10_84 163
#define EXECUTE_CACHE_10_79 165
#define EXECUTE_CACHE_10_65 167
#define EXECUTE_CACHE_10_59 169
#define EXECUTE_CACHE_10_55 171
#define EXECUTE_CACHE_10_50 173
#define EXECUTE_CACHE_10_47 175
#define EXECUTE_CACHE_10_41 177
#define EXECUTE_CACHE_10_37 179
#define EXECUTE_CACHE_10_36 181
#define EXECUTE_CACHE_10_32 183
#define EXECUTE_CACHE_10_28 185
#define EXECUTE_CACHE_10_6 187
#define FREE_REFERENCE_10_13 190
#define FREE_REFERENCE_10_12 191
#define FREE_REFERENCE_10_11 192
#define FREE_REFERENCE_10_10 193
#define FREE_REFERENCE_10_9 194
#define FREE_REFERENCE_10_8 195
#define FREE_REFERENCE_10_7 196
#define FREE_REFERENCE_10_6 197
#define FREE_REFERENCE_10_5 198
#define FREE_REFERENCE_10_4 199
#define FREE_REFERENCE_10_3 200
#define FREE_REFERENCE_10_2 201
#define FREE_REFERENCE_10_1 202
#define FREE_REFERENCE_10_0 203
#define FREE_REFERENCES_LABEL_10_0 162
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
offset_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd89;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd37;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd85;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd110;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd141;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd161;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd181;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd200;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd197;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd220;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd253;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd240;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto walk_node_83;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_85;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_86;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto label_102;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_87;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto label_101;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_88;

    case 8:
      current_block = (Rpc - LABEL_10_16);
      goto label_100;

    case 9:
      current_block = (Rpc - LABEL_10_17);
      goto label_89;

    case 10:
      current_block = (Rpc - LABEL_10_19);
      goto label_99;

    case 11:
      current_block = (Rpc - LABEL_10_20);
      goto label_90;

    case 12:
      current_block = (Rpc - LABEL_10_22);
      goto label_98;

    case 13:
      current_block = (Rpc - LABEL_10_23);
      goto label_91;

    case 14:
      current_block = (Rpc - LABEL_10_25);
      goto label_96;

    case 15:
      current_block = (Rpc - LABEL_10_27);
      goto label_97;

    case 16:
      current_block = (Rpc - LABEL_10_29);
      goto label_92;

    case 17:
      current_block = (Rpc - LABEL_10_31);
      goto label_95;

    case 18:
      current_block = (Rpc - LABEL_10_33);
      goto label_93;

    case 19:
      current_block = (Rpc - LABEL_10_35);
      goto label_94;

    case 20:
      current_block = (Rpc - LABEL_10_34);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_10_40);
      goto label_103;

    case 22:
      current_block = (Rpc - LABEL_10_30);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_10_26);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_10_42);
      goto label_105;

    case 25:
      current_block = (Rpc - LABEL_10_24);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_10_44);
      goto label_104;

    case 27:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_10_46);
      goto label_106;

    case 29:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_35;

    case 30:
      current_block = (Rpc - LABEL_10_49);
      goto label_107;

    case 31:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_43;

    case 32:
      current_block = (Rpc - LABEL_10_51);
      goto label_108;

    case 33:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_46;

    case 34:
      current_block = (Rpc - LABEL_10_52);
      goto label_109;

    case 35:
      current_block = (Rpc - LABEL_10_54);
      goto label_113;

    case 36:
      current_block = (Rpc - LABEL_10_56);
      goto label_110;

    case 37:
      current_block = (Rpc - LABEL_10_57);
      goto label_111;

    case 38:
      current_block = (Rpc - LABEL_10_58);
      goto label_112;

    case 39:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_59;

    case 40:
      current_block = (Rpc - LABEL_10_60);
      goto label_114;

    case 41:
      current_block = (Rpc - LABEL_10_61);
      goto label_115;

    case 42:
      current_block = (Rpc - LABEL_10_62);
      goto label_117;

    case 43:
      current_block = (Rpc - LABEL_10_63);
      goto label_116;

    case 44:
      current_block = (Rpc - LABEL_10_38);
      goto continuation_14;

    case 45:
      current_block = (Rpc - LABEL_10_67);
      goto label_118;

    case 46:
      current_block = (Rpc - LABEL_10_39);
      goto continuation_13;

    case 47:
      current_block = (Rpc - LABEL_10_43);
      goto continuation_24;

    case 48:
      current_block = (Rpc - LABEL_10_69);
      goto label_119;

    case 49:
      current_block = (Rpc - LABEL_10_45);
      goto continuation_31;

    case 50:
      current_block = (Rpc - LABEL_10_71);
      goto label_120;

    case 51:
      current_block = (Rpc - LABEL_10_72);
      goto continuation_39;

    case 52:
      current_block = (Rpc - LABEL_10_48);
      goto continuation_37;

    case 53:
      current_block = (Rpc - LABEL_10_73);
      goto label_122;

    case 54:
      current_block = (Rpc - LABEL_10_75);
      goto label_121;

    case 55:
      current_block = (Rpc - LABEL_10_53);
      goto continuation_54;

    case 56:
      current_block = (Rpc - LABEL_10_76);
      goto label_123;

    case 57:
      current_block = (Rpc - LABEL_10_77);
      goto label_124;

    case 58:
      current_block = (Rpc - LABEL_10_78);
      goto label_125;

    case 59:
      current_block = (Rpc - LABEL_10_80);
      goto continuation_65;

    case 60:
      current_block = (Rpc - LABEL_10_64);
      goto continuation_63;

    case 61:
      current_block = (Rpc - LABEL_10_82);
      goto label_127;

    case 62:
      current_block = (Rpc - LABEL_10_83);
      goto label_126;

    case 63:
      current_block = (Rpc - LABEL_10_66);
      goto continuation_16;

    case 64:
      current_block = (Rpc - LABEL_10_68);
      goto continuation_26;

    case 65:
      current_block = (Rpc - LABEL_10_70);
      goto continuation_33;

    case 66:
      current_block = (Rpc - LABEL_10_74);
      goto continuation_41;

    case 67:
      current_block = (Rpc - LABEL_10_85);
      goto continuation_75;

    case 68:
      current_block = (Rpc - LABEL_10_86);
      goto continuation_78;

    case 69:
      current_block = (Rpc - LABEL_10_87);
      goto continuation_74;

    case 70:
      current_block = (Rpc - LABEL_10_88);
      goto label_134;

    case 71:
      current_block = (Rpc - LABEL_10_89);
      goto label_135;

    case 72:
      current_block = (Rpc - LABEL_10_90);
      goto continuation_69;

    case 73:
      current_block = (Rpc - LABEL_10_81);
      goto continuation_67;

    case 74:
      current_block = (Rpc - LABEL_10_91);
      goto label_128;

    case 75:
      current_block = (Rpc - LABEL_10_92);
      goto label_129;

    case 76:
      current_block = (Rpc - LABEL_10_93);
      goto label_130;

    case 77:
      current_block = (Rpc - LABEL_10_94);
      goto label_131;

    case 78:
      current_block = (Rpc - LABEL_10_95);
      goto label_132;

    case 79:
      current_block = (Rpc - LABEL_10_96);
      goto label_133;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_137)
DEFLABEL (walk_node_83)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_186;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_186;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_185)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_184;
  Wrd22 = Wrd26;

DEFLABEL (label_183)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_181;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_180;
  Wrd30 = Wrd34;

DEFLABEL (label_179)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_177;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_176;
  Wrd38 = Wrd42;

DEFLABEL (label_175)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_173;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_172;
  Wrd46 = Wrd50;

DEFLABEL (label_171)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_169;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_168;
  Wrd54 = Wrd58;

DEFLABEL (label_167)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_165;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_164;
  Wrd62 = Wrd66;

DEFLABEL (label_163)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_150;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_7]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_149;
  Wrd70 = Wrd74;

DEFLABEL (label_148)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_144;
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_8]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_143;
  Wrd78 = Wrd82;

DEFLABEL (label_142)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_138;
  (Wrd85.Obj) = (current_block [OBJECT_10_6]);
  (Rsp [1]) = (Wrd85.Obj);
  (Rsp [2]) = (Wrd84.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_37]));

DEFLABEL (label_138)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd101.Obj) = (Rsp [3]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_140;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd100.Lng))))
    goto label_140;
  (Wrd94.Obj) = ((Wrd98.pObj) [9]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_139)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (label_140)
  (Wrd103.Obj) = (Rsp [3]);
  (Wrd104.Obj) = (current_block [OBJECT_10_3]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_94)
DEFLABEL (label_141)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_33])), (Wrd79.pObj));

DEFLABEL (label_93)
  (Wrd78.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd120.Obj) = (Rsp [2]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_146;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd119.Lng))))
    goto label_146;
  (Wrd113.Obj) = ((Wrd117.pObj) [7]);
  (* (--Rsp)) = (Wrd113.Obj);

DEFLABEL (label_145)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (label_146)
  (Wrd122.Obj) = (Rsp [2]);
  (Wrd123.Obj) = (current_block [OBJECT_10_4]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_95)
DEFLABEL (label_147)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_29])), (Wrd71.pObj));

DEFLABEL (label_92)
  (Wrd70.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_150)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd131.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_6]));
  (Wrd134.Obj) = ((Wrd131.pObj) [0]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if ((Wrd135.uLng) == 50)
    goto label_162;
  Wrd130 = Wrd134;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd130.Obj);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_26]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd148.Obj) = (Rsp [4]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 10))
    goto label_160;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd147.Lng))))
    goto label_160;
  (Wrd141.Obj) = ((Wrd145.pObj) [10]);
  (* (--Rsp)) = (Wrd141.Obj);

DEFLABEL (label_159)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_28]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10_26);
  (Wrd26.Obj) = (* (Rsp++));
  if (Rvl == (Wrd26.Obj))
    goto label_157;
  (Wrd5.Obj) = (Rsp [3]);

DEFLABEL (label_156)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_155)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_43]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_154;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_154;
  (Wrd12.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_153)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_10_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_152;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_152;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_10_68);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_152)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_10_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_69]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_10_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_44]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (label_157)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_158;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd38.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_158;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  goto label_156;

DEFLABEL (label_158)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_42]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_105)
  (Wrd5.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_160)
  (Wrd150.Obj) = (Rsp [4]);
  (Wrd151.Obj) = (current_block [OBJECT_10_5]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_25])), (Wrd131.pObj));

DEFLABEL (label_96)
  (Wrd130.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_23])), (Wrd63.pObj));

DEFLABEL (label_91)
  (Wrd62.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_165)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd158.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd168.Obj) = (Rsp [3]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if (! ((Wrd169.uLng) == 10))
    goto label_166;
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd168.Obj));
  (Wrd166.Obj) = ((Wrd165.pObj) [0]);
  (Wrd167.Lng) = (FIXNUM_TO_LONG (Wrd166.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd167.Lng))))
    goto label_166;
  (Wrd161.Obj) = ((Wrd165.pObj) [8]);
  (* (--Rsp)) = (Wrd161.Obj);
  goto label_139;

DEFLABEL (label_166)
  (Wrd170.Obj) = (Rsp [3]);
  (Wrd171.Obj) = (current_block [OBJECT_10_2]);
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_98)
  goto label_141;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_20])), (Wrd55.pObj));

DEFLABEL (label_90)
  (Wrd54.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_169)
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (Wrd178.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd178.Obj);
  (Wrd188.Obj) = (Rsp [3]);
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd188.Obj));
  if (! ((Wrd189.uLng) == 10))
    goto label_170;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd188.Obj));
  (Wrd186.Obj) = ((Wrd185.pObj) [0]);
  (Wrd187.Lng) = (FIXNUM_TO_LONG (Wrd186.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd187.Lng))))
    goto label_170;
  (Wrd181.Obj) = ((Wrd185.pObj) [8]);
  (* (--Rsp)) = (Wrd181.Obj);
  goto label_139;

DEFLABEL (label_170)
  (Wrd190.Obj) = (Rsp [3]);
  (Wrd191.Obj) = (current_block [OBJECT_10_2]);
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_99)
  goto label_141;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_17])), (Wrd47.pObj));

DEFLABEL (label_89)
  (Wrd46.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_173)
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (Wrd207.Obj) = (Rsp [2]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd208.uLng) == 10))
    goto label_174;
  (Wrd204.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd205.Obj) = ((Wrd204.pObj) [0]);
  (Wrd206.Lng) = (FIXNUM_TO_LONG (Wrd205.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd206.Lng))))
    goto label_174;
  (Wrd200.Obj) = ((Wrd204.pObj) [7]);
  (* (--Rsp)) = (Wrd200.Obj);
  goto label_145;

DEFLABEL (label_174)
  (Wrd209.Obj) = (Rsp [2]);
  (Wrd210.Obj) = (current_block [OBJECT_10_4]);
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_100)
  goto label_147;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_14])), (Wrd39.pObj));

DEFLABEL (label_88)
  (Wrd38.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_177)
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd217.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd217.Obj);
  (Wrd227.Obj) = (Rsp [3]);
  (Wrd228.uLng) = (OBJECT_TYPE (Wrd227.Obj));
  if (! ((Wrd228.uLng) == 10))
    goto label_178;
  (Wrd224.pObj) = (OBJECT_ADDRESS (Wrd227.Obj));
  (Wrd225.Obj) = ((Wrd224.pObj) [0]);
  (Wrd226.Lng) = (FIXNUM_TO_LONG (Wrd225.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd226.Lng))))
    goto label_178;
  (Wrd220.Obj) = ((Wrd224.pObj) [9]);
  (* (--Rsp)) = (Wrd220.Obj);
  goto label_139;

DEFLABEL (label_178)
  (Wrd229.Obj) = (Rsp [3]);
  (Wrd230.Obj) = (current_block [OBJECT_10_3]);
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  (* (--Rsp)) = (Wrd229.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_101)
  goto label_141;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_11])), (Wrd31.pObj));

DEFLABEL (label_87)
  (Wrd30.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_181)
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (Wrd237.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd247.Obj) = (Rsp [3]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if (! ((Wrd248.uLng) == 10))
    goto label_182;
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd247.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (Wrd246.Lng) = (FIXNUM_TO_LONG (Wrd245.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd246.Lng))))
    goto label_182;
  (Wrd240.Obj) = ((Wrd244.pObj) [8]);
  (* (--Rsp)) = (Wrd240.Obj);
  goto label_139;

DEFLABEL (label_182)
  (Wrd249.Obj) = (Rsp [3]);
  (Wrd250.Obj) = (current_block [OBJECT_10_2]);
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd249.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_102)
  goto label_141;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_8])), (Wrd23.pObj));

DEFLABEL (label_86)
  (Wrd22.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_185;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_190;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_190;
  (Wrd14.Obj) = ((Wrd18.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_189)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_188;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_188;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_187)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_66);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_188)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_10_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_67]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_118)
  (* (--Rsp)) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_10_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_40]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_189;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_30);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_10_24);
  (Wrd5.Obj) = Rvl;
  goto label_155;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_10_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_194;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_194;
  (Wrd11.Obj) = ((Wrd15.pObj) [10]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_193)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_47]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_10_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_192;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_192;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_191)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_10_70);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_192)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_10_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_71]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_120)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_10_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_46]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_202;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_202;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_201)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_50]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_10_48);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_198;

DEFLABEL (label_197)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_74]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_196;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_196;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_195)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_10_74);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_196)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_10_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_75]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_72]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_200;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd38.Lng))))
    goto label_200;
  (Wrd32.Obj) = ((Wrd36.pObj) [10]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_199)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_47]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_10_72);
  goto label_197;

DEFLABEL (label_200)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.Obj) = (current_block [OBJECT_10_5]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_73]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_122)
  (* (--Rsp)) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_10_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_49]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_107)
  (* (--Rsp)) = Rvl;
  goto label_201;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_10_15);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_204;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_204;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_203)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_204)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_51]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_108)
  (Wrd10.Obj) = Rvl;
  goto label_203;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_222;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_222;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_221)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_10_7]))
    goto label_212;
  if ((Wrd5.Obj) == (current_block [OBJECT_10_8]))
    goto label_205;
  Rvl = (current_block [OBJECT_10_11]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_205)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_211;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd35.Lng))))
    goto label_211;
  (Wrd27.Obj) = ((Wrd33.pObj) [10]);

DEFLABEL (label_210)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_209;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd51.Lng))))
    goto label_209;
  (Wrd43.Obj) = ((Wrd49.pObj) [11]);

DEFLABEL (label_208)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_207;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [0]);

DEFLABEL (label_206)
  (Rsp [1]) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_59]));

DEFLABEL (label_207)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_58]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_10]), 1);

DEFLABEL (label_112)
  (Wrd59.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (current_block [OBJECT_10_9]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_57]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_111)
  (Wrd43.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_10_5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_56]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_110)
  (Wrd27.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_212)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_53]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_220;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd77.Lng))))
    goto label_220;
  (Wrd71.Obj) = ((Wrd75.pObj) [10]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_219)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_55]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_10_53);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_218;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_218;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_217)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_216;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_215)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_9]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_214;
  Wrd29 = Wrd33;

DEFLABEL (label_213)
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_79]));

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_78])), (Wrd30.pObj));

DEFLABEL (label_125)
  (Wrd29.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_77]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_15]), 1);

DEFLABEL (label_124)
  (Wrd21.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_76]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_123)
  (Wrd5.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (current_block [OBJECT_10_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_54]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_52]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_109)
  (Wrd5.Obj) = Rvl;
  goto label_221;

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_261;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_261;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_260)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_259;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd29.Lng))))
    goto label_259;
  (Wrd21.Obj) = ((Wrd27.pObj) [10]);

DEFLABEL (label_258)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_257;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd68.Lng))))
    goto label_257;
  (Wrd39.Obj) = ((Wrd66.pObj) [4]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_254;

DEFLABEL (label_253)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_64]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_65]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_10_64);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_250;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_252;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd19.Lng))))
    goto label_252;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [20]) = (Wrd13.Obj);

DEFLABEL (label_251)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_80]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_84]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_10_80);

DEFLABEL (label_250)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_81]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_249;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd39.Lng))))
    goto label_249;
  (Wrd33.Obj) = ((Wrd37.pObj) [7]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_248)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_10_81);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_90]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_247;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_247;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_246)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_10]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_245;
  Wrd26 = Wrd30;

DEFLABEL (label_244)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (Wrd26.Obj))
    goto label_242;
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_11]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_241;
  Wrd34 = Wrd38;

DEFLABEL (label_240)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == (Wrd34.Obj))
    goto label_237;
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_12]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_239;
  Wrd42 = Wrd46;

DEFLABEL (label_238)
  (Wrd48.Obj) = (Rsp [0]);
  if ((Wrd48.Obj) == (Wrd42.Obj))
    goto label_237;
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_6]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_236;
  Wrd50 = Wrd54;

DEFLABEL (label_235)
  (Wrd56.Obj) = (Rsp [0]);
  if (! ((Wrd56.Obj) == (Wrd50.Obj)))
    goto label_232;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_87]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_65]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_10_87);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_230;
  (Wrd79.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_229;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd88.Lng))))
    goto label_229;
  (Wrd80.Obj) = ((Wrd86.pObj) [4]);

DEFLABEL (label_228)
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd103.uLng) == 10))
    goto label_227;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd102.Lng))))
    goto label_227;
  (Wrd96.Obj) = ((Wrd100.pObj) [7]);

DEFLABEL (label_226)
  (Rsp [1]) = (Wrd96.Obj);
  (Wrd110.Obj) = (Rsp [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if ((Wrd111.uLng) == 26)
    goto label_224;

DEFLABEL (label_223)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_224)
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd113.uLng) == 26))
    goto label_223;
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  (Wrd114.Lng) = ((Wrd116.Lng) + (Wrd118.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd114.Lng)))
    goto label_223;
  (Wrd75.Obj) = (LONG_TO_FIXNUM (Wrd114.Lng));
  Rsp = (& (Rsp [3]));

DEFLABEL (label_225)
  (Rsp [3]) = (Wrd75.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (label_227)
  (Wrd105.Obj) = (current_block [OBJECT_10_4]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_89]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_135)
  (Wrd96.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  (Wrd91.Obj) = (Rsp [4]);
  (Wrd92.Obj) = (current_block [OBJECT_10_12]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_88]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_134)
  (Wrd80.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_230)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_85]))));
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_231)
  (Wrd122.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd123.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_47]));

DEFLABEL (label_232)
  (Wrd57.Obj) = (current_block [OBJECT_10_18]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_13]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_234;
  Wrd59 = Wrd63;

DEFLABEL (label_233)
  (Rsp [1]) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_37]));

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_96])), (Wrd60.pObj));

DEFLABEL (label_133)
  (Wrd59.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_95])), (Wrd51.pObj));

DEFLABEL (label_132)
  (Wrd50.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_237)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_86]))));
  (* (--Rsp)) = (Wrd71.Obj);
  goto label_231;

DEFLABEL (label_239)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_94])), (Wrd43.pObj));

DEFLABEL (label_131)
  (Wrd42.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_93])), (Wrd35.pObj));

DEFLABEL (label_130)
  (Wrd34.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_242)
  (Wrd75.Obj) = (Rsp [5]);

DEFLABEL (label_243)
  Rsp = (& (Rsp [2]));
  goto label_225;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_92])), (Wrd27.pObj));

DEFLABEL (label_129)
  (Wrd26.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_10_12]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_91]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_13]), 2);

DEFLABEL (label_128)
  (* (--Rsp)) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Obj) = (current_block [OBJECT_10_4]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_82]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_127)
  (* (--Rsp)) = Rvl;
  goto label_248;

DEFLABEL (label_252)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_10_16]);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_83]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_17]), 3);

DEFLABEL (label_126)
  goto label_251;

DEFLABEL (label_254)
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd41.Obj);
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_256;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_256;
  (Wrd42.Obj) = ((Wrd48.pObj) [2]);

DEFLABEL (label_255)
  (Rsp [1]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_59]));

DEFLABEL (label_256)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (current_block [OBJECT_10_14]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_63]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_13]), 2);

DEFLABEL (label_116)
  (Wrd42.Obj) = Rvl;
  goto label_255;

DEFLABEL (label_257)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (current_block [OBJECT_10_12]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_62]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_13]), 2);

DEFLABEL (label_117)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_254;
  goto label_253;

DEFLABEL (label_259)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_10_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_61]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_115)
  (Wrd21.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_60]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_114)
  (* (--Rsp)) = Rvl;
  goto label_260;

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_10_85);
  (Wrd125.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd125.Obj);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd128.uLng) == 26)
    goto label_263;

DEFLABEL (label_262)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_263)
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  (Wrd129.Lng) = ((Wrd131.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd129.Lng)))
    goto label_262;
  (Wrd75.Obj) = (LONG_TO_FIXNUM (Wrd129.Lng));
  goto label_243;

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_10_86);
  goto label_242;

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_10_90);
  (Wrd75.Obj) = Rvl;
  goto label_225;

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
offset_so_3b36b0adf6e9d0c9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	1,
	1,
	3,
	2,
	2,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 10)
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

static const struct liarc_code_S arr_decl_offset_so_3b36b0adf6e9d0c9 [10] =
  {
    { "offset_so_code_1", 52, offset_so_code_1 },
    { "offset_so_code_2", 10, offset_so_code_2 },
    { "offset_so_code_3", 9, offset_so_code_3 },
    { "offset_so_code_4", 8, offset_so_code_4 },
    { "offset_so_code_5", 4, offset_so_code_5 },
    { "offset_so_code_6", 2, offset_so_code_6 },
    { "offset_so_code_7", 3, offset_so_code_7 },
    { "offset_so_code_8", 6, offset_so_code_8 },
    { "offset_so_code_9", 4, offset_so_code_9 },
    { "offset_so_code_10", 80, offset_so_code_10 }
  };

int
decl_offset_so_3b36b0adf6e9d0c9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_offset_so_3b36b0adf6e9d0c9);
  return (0);
}

DECLARE_COMPILED_CODE ("offset.so", 3, decl_offset_so_3b36b0adf6e9d0c9, offset_so_3b36b0adf6e9d0c9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_offset_so_data_3b36b0adf6e9d0c9 [3027] =
  "\xed\x01\x1d\xd9\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x83\x02"
  "\x02\x02\x02\x02\x82\xc2\xb9\x84\x80\x1d\x08\x0d\xba\x0d\xbb\x0d"
  "\xbc\x25\xb2\xb3\xb4\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x02\xc1\x1c\x84\xb1\x02\xb3\x25"
  "\xb3\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x83\x88\x02\x80\xb1\x82\xb7\xb5\x24\x28\x1b"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1d"
  "\x82\xb1\x80\xb7\xb5\xb4\x24\x28\x0d\xbf\x28\x0d\xbd\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb4\x25\xb4\xb2\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x1d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x87\xb1\x02\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x82\x0d\x1c\x24"
  "\x28\xb7\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbf\x1d\xb0\x02\x88\x0c\xc3\x02\xc1\x81\xc2\x83\x1d\x1b\x02\x0d"
  "\x1c\x0d\x0c\x02\x86\x02\x02\xb1\x80\x0d\x0d\x0d\x0d\x0d\x0d\xb6"
  "\x0d\x0d\x1b\x1b\x0d\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x1b\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\xb7\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1e\x1e\x1e\x17\x1b\x1b\x1b\x1b\x1b\xb5\x1b\x1b\x1b\x0d\xb4\xb2"
  "\xb3\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f\x6f\x66"
  "\x66\x73\x65\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11\x14"
  "\x13\x0b\x0a\x09\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x02"
  "\x12\x2a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x71\x75\x65\x75"
  "\x65\x2a\x15\x2a\x67\x72\x61\x66\x74\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x73\x2a\x0d\x2a\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x73\x2a\x04\x1c\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x17\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x2f\x70\x75\x73\x68\x0e\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x74\x61\x67\x0a\x62\x6c\x6f\x63\x6b\x2d\x74\x61\x67"
  "\x08\x02\x0b\x6d\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x05\x13\x73"
  "\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e"
  "\x64\x03\x14\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65"
  "\x2d\x6d\x61\x72\x6b\x73\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78"
  "\x74\x2d\x6e\x6f\x64\x65\x09\x04\x12\x71\x75\x65\x75\x65\x2d\x6d"
  "\x61\x70\x21\x2f\x75\x6e\x73\x61\x66\x65\x04\x0a\x77\x61\x6c\x6b"
  "\x2d\x6e\x6f\x64\x65\x0a\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x0b\x05\x0b\x03\x19\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74\x0c\x04\x0a"
  "\x77\x61\x6c\x6b\x2d\x6e\x65\x78\x74\x0d\x03\x13\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x03\x1c"
  "\x65\x6e\x71\x75\x65\x75\x65\x2d\x67\x72\x61\x66\x74\x65\x64\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x21\x0e\x04\x0c\x77\x61"
  "\x6c\x6b\x2d\x72\x76\x61\x6c\x75\x65\x0f\x04\x1e\x73\x65\x74\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x2f\x6f\x66\x66\x73\x65\x74\x21\x10\x04\x21\x75\x70\x64\x61"
  "\x74\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74\x21\x11\x04\x26\x75"
  "\x70\x64\x61\x74\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x66\x61\x6b\x65\x2d\x6f\x66\x66"
  "\x73\x65\x74\x21\x12\x11\x37\x6a\x81\x85\x02\x36\x68\x81\x85\x02"
  "\x35\x66\x81\x83\x02\x34\x64\x81\x83\x02\x33\x62\x81\x83\x02\x32"
  "\x60\x81\x83\x02\x31\x5e\x81\x83\x02\x30\x5c\x81\x87\x02\x2f\x5a"
  "\x81\x85\x02\x2e\x58\x81\x87\x02\x2d\x56\x81\x87\x02\x2c\x54\x81"
  "\x85\x02\x2b\x52\x81\x87\x02\x2a\x50\x81\x85\x02\x29\x4e\x84\x06"
  "\x28\x4c\x81\x85\x02\x27\x4a\x81\x83\x02\x26\x48\x81\x87\x02\x25"
  "\x46\x81\x87\x02\x24\x44\x81\x87\x02\x23\x42\x81\x89\x02\x22\x40"
  "\x81\x87\x02\x21\x3e\x81\x83\x02\x20\x3c\x81\x85\x02\x1f\x3a\x81"
  "\x83\x02\x1e\x38\x83\x04\x1d\x36\x81\x85\x02\x1c\x34\x81\x87\x02"
  "\x1b\x32\x81\x85\x02\x1a\x30\x81\x85\x02\x19\x2e\x81\x83\x02\x18"
  "\x2c\x83\x04\x17\x2a\x81\x85\x02\x16\x28\x81\x83\x02\x15\x26\x81"
  "\x87\x02\x14\x24\x81\x87\x02\x13\x22\x81\x83\x02\x12\x20\x81\x89"
  "\x02\x11\x1e\x81\x83\x02\x10\x1c\x81\x83\x02\x0f\x1a\x81\x85\x02"
  "\x0e\x18\x81\x83\x02\x0d\x16\x81\x83\x02\x0c\x14\x81\x85\x02\x0b"
  "\x12\x81\x83\x02\x0a\x10\x81\x83\x02\x09\x0e\x81\x85\x02\x08\x0c"
  "\x81\x83\x02\x07\x0a\x81\x83\x02\x06\x08\x81\x83\x02\x05\x06\x81"
  "\x87\x02\x04\x04\x83\x04\x69\xa6\x01\x13\x02\x08\x04\x63\x61\x72"
  "\x14\x13\x02\x19\x6d\x61\x79\x62\x65\x2d\x65\x6e\x71\x75\x65\x75"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21\x15\x03\x04\x04"
  "\x6d\x61\x70\x04\x07\x61\x70\x70\x65\x6e\x64\x04\x0b\x04\x41\x16"
  "\x81\x83\x02\x40\x14\x81\x83\x02\x3f\x12\x81\x83\x02\x3e\x10\x81"
  "\x83\x02\x3d\x0e\x81\x83\x02\x3c\x0c\x83\x04\x3b\x0a\x81\x85\x02"
  "\x3a\x08\x81\x83\x02\x39\x06\x81\x85\x02\x38\x04\x83\x04\x15\x29"
  "\x16\x02\x13\x03\x04\x11\x03\x0b\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x3f\x03\x15\x04\x4a\x14\x81\x87\x02\x49\x12\x81\x87\x02\x48"
  "\x10\x81\x85\x02\x47\x0e\x81\x87\x02\x46\x0c\x81\x85\x02\x45\x0a"
  "\x84\x06\x44\x08\x81\x85\x02\x43\x06\x81\x83\x02\x42\x04\x81\x83"
  "\x02\x13\x24\x17\x02\x02\x04\x03\x13\x72\x76\x61\x6c\x75\x65\x2d"
  "\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x03\x13\x65\x6e\x71"
  "\x75\x65\x75\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21\x04"
  "\x05\x6d\x65\x6d\x71\x04\x52\x12\x81\x85\x02\x51\x10\x81\x85\x02"
  "\x50\x0e\x81\x83\x02\x4f\x0c\x81\x85\x02\x4e\x0a\x81\x83\x02\x4d"
  "\x08\x81\x83\x02\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x11\x23\x18"
  "\x02\x02\x03\x04\x10\x65\x6e\x71\x75\x65\x75\x65\x21\x2f\x75\x6e"
  "\x73\x61\x66\x65\x02\x56\x0a\x81\x83\x02\x55\x08\x81\x83\x02\x54"
  "\x06\x81\x83\x02\x53\x04\x83\x04\x09\x14\x19\x02\x02\x04\x0a\x03"
  "\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x03\x58\x06"
  "\x84\x06\x57\x04\x81\x85\x02\x05\x0e\x1a\x02\x08\x02\x13\x6d\x69"
  "\x73\x6d\x61\x74\x63\x68\x65\x64\x20\x6f\x66\x66\x73\x65\x74\x73"
  "\x03\x0c\x04\x10\x04\x06\x65\x72\x72\x6f\x72\x1b\x04\x5b\x08\x81"
  "\x87\x02\x5a\x06\x81\x85\x02\x59\x04\x84\x06\x07\x13\x1c\x02\x09"
  "\x02\x13\x6d\x69\x73\x6d\x61\x74\x63\x68\x65\x64\x20\x6f\x66\x66"
  "\x73\x65\x74\x73\x13\x03\x0c\x04\x1b\x04\x10\x04\x61\x0e\x81\x89"
  "\x02\x60\x0c\x81\x89\x02\x5f\x0a\x81\x87\x02\x5e\x08\x81\x87\x02"
  "\x5d\x06\x81\x85\x02\x5c\x04\x84\x06\x0d\x1c\x10\x02\x0a\x02\x19"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x2f\x65\x66\x66\x65\x63\x74\x0c\x02\x03\x04\x0f\x03\x65\x0a"
  "\x81\x8b\x02\x64\x08\x81\x89\x02\x63\x06\x81\x87\x02\x62\x04\x85"
  "\x08\x09\x16\x02\x0b\x1a\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x74\x79\x70\x65\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x14\x04\x63\x64\x72"
  "\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x02\x14\x0b\x07"
  "\x72\x65\x74\x75\x72\x6e\x14\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x64\x65"
  "\x20\x74\x79\x70\x65\x3a\x0a\x09\x08\x13\x76\x69\x72\x74\x75\x61"
  "\x6c\x2d\x72\x65\x74\x75\x72\x6e\x2d\x74\x61\x67\x10\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x08\x70\x6f\x70"
  "\x2d\x74\x61\x67\x0f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d"
  "\x74\x61\x67\x0f\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x61\x67\x14\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69"
  "\x74\x65\x2d\x74\x61\x67\x0c\x66\x67\x2d\x6e\x6f\x6f\x70\x2d\x74"
  "\x61\x67\x0e\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x74\x61\x67"
  "\x15\x0c\x1b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x18\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f"
  "\x76\x61\x6c\x75\x65\x14\x0f\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61"
  "\x72\x6b\x21\x03\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2a\x2f\x74\x79\x70\x65\x03\x09\x04\x11\x04\x1b\x04\x0d\x04"
  "\x0f\x03\x13\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x64\x3f\x03\x15\x05\x0c\x77\x61\x6c\x6b\x2d\x72\x65"
  "\x74\x75\x72\x6e\x1b\x03\x15\x72\x76\x61\x6c\x75\x65\x2f\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x04\x0b\x03\x0e\xb5"
  "\x01\xa2\x01\x81\x85\x02\xb4\x01\xa0\x01\x81\x83\x02\xb3\x01\x9e"
  "\x01\x81\x83\x02\xb2\x01\x9c\x01\x81\x83\x02\xb1\x01\x9a\x01\x81"
  "\x83\x02\xb0\x01\x98\x01\x81\x8b\x02\xaf\x01\x96\x01\x81\x89\x02"
  "\xae\x01\x94\x01\x81\x89\x02\xad\x01\x92\x01\x81\x85\x02\xac\x01"
  "\x90\x01\x81\x85\x02\xab\x01\x8e\x01\x81\x83\x02\xaa\x01\x8c\x01"
  "\x81\x83\x02\xa9\x01\x8a\x01\x81\x83\x02\xa8\x01\x88\x01\x81\x87"
  "\x02\xa7\x01\x86\x01\x81\x87\x02\xa6\x01\x84\x01\x81\x87\x02\xa5"
  "\x01\x82\x01\x81\x87\x02\xa4\x01\x80\x01\x81\x89\x02\xa3\x01\x7e"
  "\x81\x8b\x02\xa2\x01\x7c\x81\x89\x02\xa1\x01\x7a\x81\x89\x02\xa0"
  "\x01\x78\x81\x87\x02\x9f\x01\x76\x81\x87\x02\x9e\x01\x74\x81\x87"
  "\x02\x9d\x01\x72\x81\x87\x02\x9c\x01\x70\x81\x89\x02\x9b\x01\x6e"
  "\x81\x8b\x02\x9a\x01\x6c\x81\x87\x02\x99\x01\x6a\x81\x87\x02\x98"
  "\x01\x68\x81\x89\x02\x97\x01\x66\x81\x87\x02\x96\x01\x64\x81\x89"
  "\x02\x95\x01\x62\x81\x87\x02\x94\x01\x60\x81\x8b\x02\x93\x01\x5e"
  "\x81\x89\x02\x92\x01\x5c\x81\x87\x02\x91\x01\x5a\x81\x89\x02\x90"
  "\x01\x58\x81\x89\x02\x8f\x01\x56\x81\x89\x02\x8e\x01\x54\x81\x87"
  "\x02\x8d\x01\x52\x81\x87\x02\x8c\x01\x50\x81\x87\x02\x8b\x01\x4e"
  "\x81\x87\x02\x8a\x01\x4c\x81\x87\x02\x89\x01\x4a\x81\x89\x02\x88"
  "\x01\x48\x81\x87\x02\x87\x01\x46\x81\x87\x02\x86\x01\x44\x81\x87"
  "\x02\x85\x01\x42\x81\x87\x02\x84\x01\x40\x81\x89\x02\x83\x01\x3e"
  "\x81\x87\x02\x82\x01\x3c\x81\x8b\x02\x81\x01\x3a\x81\x87\x02\x80"
  "\x01\x38\x81\x8b\x02\x7f\x36\x81\x87\x02\x7e\x34\x81\x89\x02\x7d"
  "\x32\x81\x8b\x02\x7c\x30\x81\x87\x02\x7b\x2e\x81\x8d\x02\x7a\x2c"
  "\x81\x87\x02\x79\x2a\x81\x8b\x02\x78\x28\x81\x87\x02\x77\x26\x81"
  "\x89\x02\x76\x24\x81\x87\x02\x75\x22\x81\x8d\x02\x74\x20\x81\x89"
  "\x02\x73\x1e\x81\x87\x02\x72\x1c\x81\x8b\x02\x71\x1a\x81\x87\x02"
  "\x70\x18\x81\x8b\x02\x6f\x16\x81\x87\x02\x6e\x14\x81\x89\x02\x6d"
  "\x12\x81\x87\x02\x6c\x10\x81\x8b\x02\x6b\x0e\x81\x87\x02\x6a\x0c"
  "\x81\x8b\x02\x69\x0a\x81\x87\x02\x68\x08\x81\x85\x02\x67\x06\x81"
  "\x85\x02\x66\x04\x84\x06\xa1\x01\xe1\x01\x14\x0b\x0c\x0c\x14\x04"
  "\x04\x10\x04\x1c\x04\x1a\x06\x19\x04\x18\x04\x17\x0a\x16\x04\x13"
  "\x04\x0e\x0a\x1b\x12\x11\x0d\x15\x0f\x0e\x15\x63\x6f\x6d\x70\x75"
  "\x74\x65\x2d\x6e\x6f\x64\x65\x2d\x6f\x66\x66\x73\x65\x74\x73\x0e"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
offset_so_data_3b36b0adf6e9d0c9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_offset_so_data_3b36b0adf6e9d0c9 [0]))), (sizeof (prog_offset_so_data_3b36b0adf6e9d0c9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("offset.so", offset_so_data_3b36b0adf6e9d0c9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("offset.so", "f29cb9d3ddf97ef8")
