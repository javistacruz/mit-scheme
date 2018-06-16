/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_10 9
#define LABEL_1_8 11
#define LABEL_1_13 13
#define LABEL_1_9 15
#define LABEL_1_15 17
#define LABEL_1_12 19
#define LABEL_1_16 21
#define LABEL_1_18 23
#define LABEL_1_17 25
#define LABEL_1_19 27
#define LABEL_1_21 29
#define LABEL_1_20 31
#define LABEL_1_22 33
#define LABEL_1_24 35
#define LABEL_1_23 37
#define LABEL_1_25 39
#define LABEL_1_27 41
#define LABEL_1_26 43
#define LABEL_1_28 45
#define LABEL_1_29 47
#define LABEL_1_30 49
#define LABEL_1_31 51
#define LABEL_1_32 53
#define LABEL_1_33 55
#define LABEL_1_34 57
#define LABEL_1_35 59
#define LABEL_1_36 61
#define LABEL_1_37 63
#define LABEL_1_38 65
#define LABEL_1_39 67
#define LABEL_1_40 69
#define LABEL_1_41 71
#define LABEL_1_42 73
#define LABEL_1_43 75
#define LABEL_1_44 77
#define LABEL_1_45 79
#define LABEL_1_46 81
#define LABEL_1_47 83
#define LABEL_1_49 85
#define ENVIRONMENT_LABEL_1_3 138
#define DEBUGGING_LABEL_1_2 137
#define OBJECT_1_16 136
#define OBJECT_1_15 135
#define OBJECT_1_14 134
#define OBJECT_1_13 133
#define OBJECT_1_12 132
#define OBJECT_1_11 131
#define OBJECT_1_10 130
#define OBJECT_1_9 129
#define OBJECT_1_8 128
#define OBJECT_1_7 127
#define OBJECT_1_6 126
#define OBJECT_1_5 125
#define OBJECT_1_4 124
#define OBJECT_1_3 123
#define OBJECT_1_2 122
#define OBJECT_1_1 121
#define OBJECT_1_0 120
#define EXECUTE_CACHE_1_48 87
#define EXECUTE_CACHE_1_14 89
#define EXECUTE_CACHE_1_11 91
#define EXECUTE_CACHE_1_6 93
#define FREE_REFERENCE_1_12 96
#define FREE_REFERENCE_1_11 97
#define FREE_REFERENCE_1_10 98
#define FREE_REFERENCE_1_9 99
#define FREE_REFERENCE_1_8 100
#define FREE_REFERENCE_1_7 101
#define FREE_REFERENCE_1_6 102
#define FREE_REFERENCE_1_5 103
#define FREE_REFERENCE_1_4 104
#define FREE_REFERENCE_1_3 105
#define FREE_REFERENCE_1_2 106
#define FREE_REFERENCE_1_1 107
#define FREE_REFERENCE_1_0 108
#define FREE_ASSIGNMENT_1_9 110
#define FREE_ASSIGNMENT_1_8 111
#define FREE_ASSIGNMENT_1_7 112
#define FREE_ASSIGNMENT_1_6 113
#define FREE_ASSIGNMENT_1_5 114
#define FREE_ASSIGNMENT_1_4 115
#define FREE_ASSIGNMENT_1_3 116
#define FREE_ASSIGNMENT_1_2 117
#define FREE_ASSIGNMENT_1_1 118
#define FREE_ASSIGNMENT_1_0 119
#define FREE_REFERENCES_LABEL_1_0 86
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd263;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd249;
  machine_word Wrd243;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd231;
  machine_word Wrd225;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd226;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd212;
  machine_word Wrd209;
  machine_word Wrd205;
  machine_word Wrd207;
  machine_word Wrd208;
  machine_word Wrd199;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd184;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd179;
  machine_word Wrd175;
  machine_word Wrd177;
  machine_word Wrd178;
  machine_word Wrd169;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd164;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd163;
  machine_word Wrd154;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd147;
  machine_word Wrd148;
  machine_word Wrd139;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd124;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_35;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto label_42;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_1_21);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_1_24);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_1_25);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_1_27);
      goto label_48;

    case 20:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_1_28);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_1_29);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_1_30);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_1_31);
      goto label_52;

    case 25:
      current_block = (Rpc - LABEL_1_32);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_1_33);
      goto label_54;

    case 27:
      current_block = (Rpc - LABEL_1_34);
      goto label_55;

    case 28:
      current_block = (Rpc - LABEL_1_35);
      goto label_56;

    case 29:
      current_block = (Rpc - LABEL_1_36);
      goto label_57;

    case 30:
      current_block = (Rpc - LABEL_1_37);
      goto label_58;

    case 31:
      current_block = (Rpc - LABEL_1_38);
      goto label_59;

    case 32:
      current_block = (Rpc - LABEL_1_39);
      goto label_60;

    case 33:
      current_block = (Rpc - LABEL_1_40);
      goto label_61;

    case 34:
      current_block = (Rpc - LABEL_1_41);
      goto label_62;

    case 35:
      current_block = (Rpc - LABEL_1_42);
      goto label_63;

    case 36:
      current_block = (Rpc - LABEL_1_43);
      goto label_64;

    case 37:
      current_block = (Rpc - LABEL_1_44);
      goto label_65;

    case 38:
      current_block = (Rpc - LABEL_1_45);
      goto label_66;

    case 39:
      current_block = (Rpc - LABEL_1_46);
      goto label_67;

    case 40:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_34;

    case 41:
      current_block = (Rpc - LABEL_1_49);
      goto label_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_70)
DEFLABEL (initialize_packageB_35)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_143;

DEFLABEL (label_142)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_141)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_140;
  Wrd23 = Wrd27;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_138;
  Wrd8 = Wrd12;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_134)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_133;
  Wrd21 = Wrd25;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_131;

DEFLABEL (label_130)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_129)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_128;
  Wrd21 = Wrd25;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_126;

DEFLABEL (label_125)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_124)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_123;
  Wrd21 = Wrd25;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_119)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_118;
  Wrd21 = Wrd25;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_114)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_113;
  Wrd19 = Wrd23;

DEFLABEL (label_112)
  (Wrd28.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_111;
  Wrd34 = Wrd38;

DEFLABEL (label_110)
  (Wrd43.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_109;
  Wrd49 = Wrd53;

DEFLABEL (label_108)
  (Wrd58.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd59.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_107;
  Wrd64 = Wrd68;

DEFLABEL (label_106)
  (Wrd73.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd74.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd80.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd83.Obj) = ((Wrd80.pObj) [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd84.uLng) == 50)
    goto label_105;
  Wrd79 = Wrd83;

DEFLABEL (label_104)
  (Wrd88.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (Wrd89.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_103;
  Wrd94 = Wrd98;

DEFLABEL (label_102)
  (Wrd103.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (Wrd104.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_101;
  Wrd109 = Wrd113;

DEFLABEL (label_100)
  (Wrd118.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Wrd119.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd128.Obj) = ((Wrd125.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_99;
  Wrd124 = Wrd128;

DEFLABEL (label_98)
  (Wrd133.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd132.pObj) = (& (Rhp [-2]));
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd132.pObj)));
  (Wrd134.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd130.Obj);
  (* (Rhp++)) = (Wrd134.Obj);
  (Wrd136.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd136.pObj)));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd140.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd143.Obj) = ((Wrd140.pObj) [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd144.uLng) == 50)
    goto label_97;
  Wrd139 = Wrd143;

DEFLABEL (label_96)
  (Wrd148.Obj) = (current_block [OBJECT_1_11]);
  (* (Rhp++)) = (Wrd148.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd147.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd147.pObj)));
  (Wrd149.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd149.Obj);
  (Wrd151.pObj) = (& (Rhp [-2]));
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd151.pObj)));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd155.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd158.Obj) = ((Wrd155.pObj) [0]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if ((Wrd159.uLng) == 50)
    goto label_95;
  Wrd154 = Wrd158;

DEFLABEL (label_94)
  (Wrd163.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd163.Obj);
  (* (Rhp++)) = (Wrd154.Obj);
  (Wrd162.pObj) = (& (Rhp [-2]));
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd162.pObj)));
  (Wrd164.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd160.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd166.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd166.pObj)));
  (* (--Rsp)) = (Wrd167.Obj);
  (Wrd170.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd173.Obj) = ((Wrd170.pObj) [0]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if ((Wrd174.uLng) == 50)
    goto label_93;
  Wrd169 = Wrd173;

DEFLABEL (label_92)
  (Wrd178.Obj) = (current_block [OBJECT_1_13]);
  (* (Rhp++)) = (Wrd178.Obj);
  (* (Rhp++)) = (Wrd169.Obj);
  (Wrd177.pObj) = (& (Rhp [-2]));
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd177.pObj)));
  (Wrd179.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd175.Obj);
  (* (Rhp++)) = (Wrd179.Obj);
  (Wrd181.pObj) = (& (Rhp [-2]));
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd181.pObj)));
  (* (--Rsp)) = (Wrd182.Obj);
  (Wrd185.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_10]));
  (Wrd188.Obj) = ((Wrd185.pObj) [0]);
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd188.Obj));
  if ((Wrd189.uLng) == 50)
    goto label_91;
  Wrd184 = Wrd188;

DEFLABEL (label_90)
  (Wrd193.Obj) = (current_block [OBJECT_1_14]);
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd184.Obj);
  (Wrd192.pObj) = (& (Rhp [-2]));
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd192.pObj)));
  (Wrd194.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd190.Obj);
  (* (Rhp++)) = (Wrd194.Obj);
  (Wrd196.pObj) = (& (Rhp [-2]));
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd196.pObj)));
  (* (--Rsp)) = (Wrd197.Obj);
  (Wrd200.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd203.Obj) = ((Wrd200.pObj) [0]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 50)
    goto label_89;
  Wrd199 = Wrd203;

DEFLABEL (label_88)
  (Wrd208.Obj) = (current_block [OBJECT_1_15]);
  (* (Rhp++)) = (Wrd208.Obj);
  (* (Rhp++)) = (Wrd199.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd209.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd205.Obj);
  (* (Rhp++)) = (Wrd209.Obj);
  (Wrd212.pObj) = (& (Rhp [-2]));
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd212.pObj)));
  (Wrd213.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd221.Obj) = ((Wrd213.pObj) [0]);
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if ((Wrd222.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd213.pObj) [0]) = (Wrd210.Obj);

DEFLABEL (label_85)
  (Wrd226.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_11]));
  (Wrd229.Obj) = ((Wrd226.pObj) [0]);
  (Wrd230.uLng) = (OBJECT_TYPE (Wrd229.Obj));
  if ((Wrd230.uLng) == 50)
    goto label_84;
  Wrd225 = Wrd229;

DEFLABEL (label_83)
  (Wrd231.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd239.Obj) = ((Wrd231.pObj) [0]);
  (Wrd240.uLng) = (OBJECT_TYPE (Wrd239.Obj));
  if ((Wrd240.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd231.pObj) [0]) = (Wrd225.Obj);

DEFLABEL (label_80)
  (Wrd244.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_12]));
  (Wrd247.Obj) = ((Wrd244.pObj) [0]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if ((Wrd248.uLng) == 50)
    goto label_79;
  Wrd243 = Wrd247;

DEFLABEL (label_78)
  (Wrd249.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_8]));
  (Wrd257.Obj) = ((Wrd249.pObj) [0]);
  (Wrd258.uLng) = (OBJECT_TYPE (Wrd257.Obj));
  if ((Wrd258.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd249.pObj) [0]) = (Wrd243.Obj);

DEFLABEL (label_75)
  (Wrd263.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd263.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_48]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_72)
  Rvl = (current_block [OBJECT_1_16]);
  goto pop_return;

DEFLABEL (label_74)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_49])), (Wrd6.pObj), Rvl);

DEFLABEL (label_68)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd257.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_46])), (Wrd249.pObj), (Wrd243.Obj));

DEFLABEL (label_67)
  goto label_75;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_45])), (Wrd244.pObj));

DEFLABEL (label_66)
  (Wrd243.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  if ((Wrd239.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_44])), (Wrd231.pObj), (Wrd225.Obj));

DEFLABEL (label_65)
  goto label_80;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_43])), (Wrd226.pObj));

DEFLABEL (label_64)
  (Wrd225.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_87)
  if ((Wrd221.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_42])), (Wrd213.pObj), (Wrd210.Obj));

DEFLABEL (label_63)
  goto label_85;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_41])), (Wrd200.pObj));

DEFLABEL (label_62)
  (Wrd199.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_40])), (Wrd185.pObj));

DEFLABEL (label_61)
  (Wrd184.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_39])), (Wrd170.pObj));

DEFLABEL (label_60)
  (Wrd169.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_38])), (Wrd155.pObj));

DEFLABEL (label_59)
  (Wrd154.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_37])), (Wrd140.pObj));

DEFLABEL (label_58)
  (Wrd139.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_36])), (Wrd125.pObj));

DEFLABEL (label_57)
  (Wrd124.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_35])), (Wrd110.pObj));

DEFLABEL (label_56)
  (Wrd109.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_34])), (Wrd95.pObj));

DEFLABEL (label_55)
  (Wrd94.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd80.pObj));

DEFLABEL (label_54)
  (Wrd79.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_32])), (Wrd65.pObj));

DEFLABEL (label_53)
  (Wrd64.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_31])), (Wrd50.pObj));

DEFLABEL (label_52)
  (Wrd49.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd35.pObj));

DEFLABEL (label_51)
  (Wrd34.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_29])), (Wrd20.pObj));

DEFLABEL (label_50)
  (Wrd19.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_116)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_115;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_28])), (Wrd6.pObj), Rvl);

DEFLABEL (label_49)
  goto label_114;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd22.pObj));

DEFLABEL (label_48)
  (Wrd21.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_121)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_120;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_47)
  goto label_119;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_24])), (Wrd22.pObj));

DEFLABEL (label_46)
  (Wrd21.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_126)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_125;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_45)
  goto label_124;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd22.pObj));

DEFLABEL (label_44)
  (Wrd21.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_131)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_130;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_43)
  goto label_129;

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd22.pObj));

DEFLABEL (label_42)
  (Wrd21.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_136)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_41)
  goto label_134;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd24.pObj));

DEFLABEL (label_38)
  (Wrd23.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_143)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_142;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_37)
  goto label_141;

DEFLABEL (lambda_71)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_145;
  Wrd6 = Wrd10;

DEFLABEL (label_144)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_145)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd7.pObj));

DEFLABEL (label_40)
  (Wrd6.Obj) = Rvl;
  goto label_144;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_7 7
#define TAG_2_8 2
#define LABEL_2_12 9
#define LABEL_2_9 11
#define LABEL_2_11 13
#define LABEL_2_15 15
#define LABEL_2_13 17
#define LABEL_2_21 19
#define LABEL_2_19 21
#define LABEL_2_18 23
#define ENVIRONMENT_LABEL_2_3 46
#define DEBUGGING_LABEL_2_2 45
#define OBJECT_2_1 44
#define OBJECT_2_0 43
#define EXECUTE_CACHE_2_23 25
#define EXECUTE_CACHE_2_22 27
#define EXECUTE_CACHE_2_20 29
#define EXECUTE_CACHE_2_17 31
#define EXECUTE_CACHE_2_16 33
#define EXECUTE_CACHE_2_14 35
#define EXECUTE_CACHE_2_10 37
#define EXECUTE_CACHE_2_6 39
#define FREE_REFERENCE_2_0 42
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto pp_17;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_22;

    case 3:
      current_block = (Rpc - LABEL_2_12);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pp_21)
DEFLABEL (pp_17)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_2_0])))
    goto label_31;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_30)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_5;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_5;

DEFLABEL (label_24)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = (Wrd5.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd12.Obj);

DEFLABEL (label_25)
DEFLABEL (label_27)
  Rsp = (& (Rsp [3]));
  goto lambda_5;

DEFLABEL (label_29)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_28;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_30;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd16.Obj) = ((Wrd12.pObj) [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_33;
  Wrd21 = Wrd25;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd22.pObj));

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_17 17
#define LABEL_3_18 19
#define LABEL_3_19 21
#define LABEL_3_20 23
#define LABEL_3_14 25
#define LABEL_3_15 27
#define ENVIRONMENT_LABEL_3_3 48
#define DEBUGGING_LABEL_3_2 47
#define OBJECT_3_9 46
#define OBJECT_3_8 45
#define OBJECT_3_7 44
#define OBJECT_3_6 43
#define OBJECT_3_5 42
#define OBJECT_3_4 41
#define OBJECT_3_3 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_16 29
#define EXECUTE_CACHE_3_13 31
#define EXECUTE_CACHE_3_12 33
#define EXECUTE_CACHE_3_6 35
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd58;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
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
      goto pp_description_default_25;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto loop_23;

    case 8:
      current_block = (Rpc - LABEL_3_18);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_3_19);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_3_20);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pp_description_default_34)
DEFLABEL (pp_description_default_25)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 62)
    goto label_41;
  (Wrd21.Obj) = (current_block [OBJECT_3_2]);
  (Wrd24.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd24.Lng))))
    goto label_40;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  if ((Wrd10.Obj) == (Wrd8.Obj))
    goto label_39;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_9]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_39;

DEFLABEL (label_41)
  (Wrd31.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  if (! ((Wrd8.uLng) == 62))
    goto label_45;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd32.Obj) = (MAKE_OBJECT (26, (Wrd37.uLng)));

DEFLABEL (label_44)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_43;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd49.Lng) = ((Wrd50.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_43;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_42)
  goto loop_23;

DEFLABEL (label_43)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_28)
  (Wrd32.Obj) = Rvl;
  goto label_44;

DEFLABEL (loop_35)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_3_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_52;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd58.Lng) < 0))
    goto label_47;

DEFLABEL (label_46)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_51;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_51;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_51;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd17.pObj) = (& ((Wrd23.pObj) [(Wrd14.Lng)]));
  (Wrd12.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_50)
  (Wrd36.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Rsp [1]) = (Wrd41.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_49;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd52.Lng) = ((Wrd54.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd52.Lng)))
    goto label_49;
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd49.Obj);
  goto loop_23;

DEFLABEL (label_49)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_32)
  (Wrd49.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 2);

DEFLABEL (label_31)
  (Wrd12.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_10 7
#define LABEL_4_8 9
#define LABEL_4_7 11
#define LABEL_4_12 13
#define LABEL_4_17 15
#define LABEL_4_13 17
#define LABEL_4_18 19
#define LABEL_4_22 21
#define LABEL_4_24 23
#define LABEL_4_25 25
#define LABEL_4_26 27
#define LABEL_4_28 29
#define LABEL_4_20 31
#define LABEL_4_21 33
#define LABEL_4_30 35
#define LABEL_4_31 37
#define LABEL_4_27 39
#define LABEL_4_34 41
#define LABEL_4_35 43
#define LABEL_4_33 45
#define LABEL_4_36 47
#define LABEL_4_37 49
#define LABEL_4_38 51
#define LABEL_4_39 53
#define LABEL_4_40 55
#define LABEL_4_41 57
#define ENVIRONMENT_LABEL_4_3 93
#define DEBUGGING_LABEL_4_2 92
#define OBJECT_4_10 91
#define OBJECT_4_9 90
#define OBJECT_4_8 89
#define OBJECT_4_7 88
#define OBJECT_4_6 87
#define OBJECT_4_5 86
#define OBJECT_4_4 85
#define OBJECT_4_3 84
#define OBJECT_4_2 83
#define OBJECT_4_1 82
#define OBJECT_4_0 81
#define EXECUTE_CACHE_4_32 59
#define EXECUTE_CACHE_4_29 61
#define EXECUTE_CACHE_4_23 63
#define EXECUTE_CACHE_4_19 65
#define EXECUTE_CACHE_4_16 67
#define EXECUTE_CACHE_4_15 69
#define EXECUTE_CACHE_4_14 71
#define EXECUTE_CACHE_4_11 73
#define EXECUTE_CACHE_4_9 75
#define EXECUTE_CACHE_4_6 77
#define FREE_REFERENCE_4_0 80
#define FREE_REFERENCES_LABEL_4_0 58
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto unsyntax_entity_50;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_4_17);
      goto label_52;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_4_22);
      goto loop_22;

    case 10:
      current_block = (Rpc - LABEL_4_24);
      goto label_56;

    case 11:
      current_block = (Rpc - LABEL_4_25);
      goto label_53;

    case 12:
      current_block = (Rpc - LABEL_4_26);
      goto label_54;

    case 13:
      current_block = (Rpc - LABEL_4_28);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_28;

    case 15:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_4_30);
      goto unsyntax_entry_49;

    case 17:
      current_block = (Rpc - LABEL_4_31);
      goto label_57;

    case 18:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_4_34);
      goto label_58;

    case 20:
      current_block = (Rpc - LABEL_4_35);
      goto label_59;

    case 21:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_4_36);
      goto label_60;

    case 23:
      current_block = (Rpc - LABEL_4_37);
      goto label_61;

    case 24:
      current_block = (Rpc - LABEL_4_38);
      goto label_62;

    case 25:
      current_block = (Rpc - LABEL_4_39);
      goto label_63;

    case 26:
      current_block = (Rpc - LABEL_4_40);
      goto label_64;

    case 27:
      current_block = (Rpc - LABEL_4_41);
      goto label_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_entity_67)
DEFLABEL (unsyntax_entity_50)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_71;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_70)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto loop_22;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto unsyntax_entry_49;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_74)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_73)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_74;

DEFLABEL (loop_68)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_4_22);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_1])))
    goto label_76;
  (Wrd49.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd49.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (label_76)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_89;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;

DEFLABEL (label_83)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_82;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_81)
  goto unsyntax_entry_49;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_27);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_80;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_80;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_79)
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_78;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_77)
  (Rsp [2]) = (Wrd32.Obj);
  goto loop_22;

DEFLABEL (label_78)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_59)
  (Wrd32.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_58)
  (Wrd26.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_88;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_88;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_86;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_85)
  (Rsp [2]) = (Wrd21.Obj);
  goto loop_22;

DEFLABEL (label_86)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_54)
  (Wrd21.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_53)
  (Wrd15.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  goto label_83;

DEFLABEL (unsyntax_entry_69)
DEFLABEL (unsyntax_entry_49)
  INTERRUPT_CHECK (26, LABEL_4_30);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_110;
  Wrd5 = Wrd9;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_7])))
    goto label_90;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (label_90)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_8])))
    goto label_107;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_93;

DEFLABEL (label_92)
  Rvl = (Rsp [0]);

DEFLABEL (label_91)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_93)
  if (! ((Wrd7.uLng) == 1))
    goto label_106;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_105)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_4_10])))
    goto label_92;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_104;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_103)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_92;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_102;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_101)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_100;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_99)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_92;
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_98;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_97)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_96;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_95)
  (Rsp [0]) = (Wrd56.Obj);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd68.uLng) == 1)
    goto label_94;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_94)
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  Rvl = ((Wrd65.pObj) [0]);
  goto label_91;

DEFLABEL (label_96)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_65)
  (Wrd56.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_64)
  (Wrd47.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_63)
  (Wrd39.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_62)
  (Wrd30.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_61)
  (Wrd20.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_60)
  (Wrd10.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  if ((Wrd5.Obj) == (current_block [OBJECT_4_9]))
    goto label_108;

DEFLABEL (label_108)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_31])), (Wrd6.pObj));

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_109;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_6 5
#define LABEL_5_8 7
#define LABEL_5_4 9
#define LABEL_5_9 11
#define LABEL_5_11 13
#define LABEL_5_14 15
#define LABEL_5_13 17
#define LABEL_5_16 19
#define LABEL_5_17 21
#define LABEL_5_18 23
#define LABEL_5_19 25
#define LABEL_5_20 27
#define LABEL_5_21 29
#define LABEL_5_22 31
#define LABEL_5_23 33
#define LABEL_5_24 35
#define LABEL_5_25 37
#define LABEL_5_26 39
#define LABEL_5_27 41
#define ENVIRONMENT_LABEL_5_3 66
#define DEBUGGING_LABEL_5_2 65
#define OBJECT_5_8 64
#define OBJECT_5_7 63
#define OBJECT_5_6 62
#define OBJECT_5_5 61
#define OBJECT_5_4 60
#define OBJECT_5_3 59
#define OBJECT_5_2 58
#define OBJECT_5_1 57
#define OBJECT_5_0 56
#define EXECUTE_CACHE_5_28 43
#define EXECUTE_CACHE_5_15 45
#define EXECUTE_CACHE_5_12 47
#define EXECUTE_CACHE_5_10 49
#define EXECUTE_CACHE_5_7 51
#define FREE_REFERENCE_5_1 54
#define FREE_REFERENCE_5_0 55
#define FREE_REFERENCES_LABEL_5_0 42
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd124;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_26;

    case 3:
      current_block = (Rpc - LABEL_5_4);
      goto pretty_print_31;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_29;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_5_18);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_5_20);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_5_21);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_5_22);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_5_23);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_5_24);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_5_25);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_5_26);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_5_27);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pretty_print_47)
DEFLABEL (pretty_print_31)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_5_1]))
    goto label_86;
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_85)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  if ((Wrd12.Obj) == (current_block [OBJECT_5_1]))
    goto label_49;
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_48;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_48)
DEFLABEL (label_84)
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  if (! ((Wrd19.Obj) == (current_block [OBJECT_5_1])))
    goto label_83;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_82)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  (Wrd129.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd129.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_80)
  (Wrd5.Obj) = (Rsp [6]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_52;

DEFLABEL (label_51)
  (Wrd10.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_5_11);
  Rvl = (current_block [OBJECT_5_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_52)
  if (! ((Wrd8.uLng) == 1))
    goto label_79;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_78)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_5_5])))
    goto label_51;
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_77;
  Wrd21 = Wrd25;

DEFLABEL (label_76)
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_75;
  Wrd29 = Wrd33;

DEFLABEL (label_74)
  if ((Wrd29.Obj) == (current_block [OBJECT_5_6]))
    goto label_57;

DEFLABEL (label_56)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_55;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_54)
  (Wrd49.Obj) = (current_block [OBJECT_5_8]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd36.Obj);

DEFLABEL (label_53)
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd121.Obj);
  goto label_50;

DEFLABEL (label_55)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_37)
  (Wrd36.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_73;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_72)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_56;
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_71;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_70)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_69;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [0]);

DEFLABEL (label_68)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_56;
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_67;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_66)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_65;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_64)
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_63;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [1]);

DEFLABEL (label_62)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_61;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd102.Obj) = ((Wrd103.pObj) [0]);

DEFLABEL (label_60)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_59;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd109.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_58)
  (Wrd116.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd124.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  goto label_53;

DEFLABEL (label_59)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_45)
  (Wrd109.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_44)
  (Wrd102.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_43)
  (Wrd93.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_41)
  (Wrd77.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_40)
  (Wrd69.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_39)
  (Wrd60.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_38)
  (Wrd50.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_18])), (Wrd30.pObj));

DEFLABEL (label_36)
  (Wrd29.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_17])), (Wrd22.pObj));

DEFLABEL (label_35)
  (Wrd21.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd128.Obj) = (Rsp [7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd128.Obj);
  goto label_80;

DEFLABEL (label_83)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_82;

DEFLABEL (label_86)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_91;
  Wrd31 = Wrd35;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_89;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_87;

DEFLABEL (label_88)
  (Wrd54.Obj) = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_87)
  goto label_85;

DEFLABEL (label_89)
  (Wrd44.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_85;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_9])), (Wrd32.pObj));

DEFLABEL (label_33)
  (Wrd31.Obj) = Rvl;
  goto label_90;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 6
#define DEBUGGING_LABEL_6_2 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  Rvl = (current_block [OBJECT_6_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  Rvl = (current_block [OBJECT_7_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 6
#define DEBUGGING_LABEL_8_2 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  Rvl = (current_block [OBJECT_8_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 6
#define DEBUGGING_LABEL_9_2 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = (current_block [OBJECT_9_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 6
#define DEBUGGING_LABEL_10_2 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  Rvl = (current_block [OBJECT_10_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto pph_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_object_3)
DEFLABEL (pph_object_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto pph_start_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_start_string_3)
DEFLABEL (pph_start_string_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto pph_end_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_end_string_3)
DEFLABEL (pph_end_string_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto pph_as_codeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_as_codeP_3)
DEFLABEL (pph_as_codeP_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto pph_depth_limit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_depth_limit_3)
DEFLABEL (pph_depth_limit_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto pph_breadth_limit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_breadth_limit_3)
DEFLABEL (pph_breadth_limit_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 17
#define DEBUGGING_LABEL_17_2 16
#define OBJECT_17_3 15
#define OBJECT_17_2 14
#define OBJECT_17_1 13
#define OBJECT_17_0 12
#define FREE_REFERENCE_17_0 11
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto pretty_printer_highlightP_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pretty_printer_highlightP_10)
DEFLABEL (pretty_printer_highlightP_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_17_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_17_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_11 13
#define LABEL_18_7 15
#define LABEL_18_12 17
#define ENVIRONMENT_LABEL_18_3 27
#define DEBUGGING_LABEL_18_2 26
#define OBJECT_18_2 25
#define OBJECT_18_1 24
#define OBJECT_18_0 23
#define EXECUTE_CACHE_18_10 19
#define FREE_REFERENCE_18_0 22
#define FREE_REFERENCES_LABEL_18_0 18
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_18_4);
      goto with_highlight_strings_printed_7;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto lambda_1;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_highlight_strings_printed_14)
DEFLABEL (with_highlight_strings_printed_7)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  goto lambda_1;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_18_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (lambda_15)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_18_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_22;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_21;
  Wrd9 = Wrd13;

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_11])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_24;
  Wrd15 = Wrd19;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_9])), (Wrd16.pObj));

DEFLABEL (label_11)
  (Wrd15.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 11
#define DEBUGGING_LABEL_19_2 10
#define OBJECT_19_3 9
#define OBJECT_19_2 8
#define OBJECT_19_1 7
#define OBJECT_19_0 6
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_19_4);
      goto pph_start_string_length_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_start_string_length_7)
DEFLABEL (pph_start_string_length_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 30)
    goto label_9;
  Rvl = (current_block [OBJECT_19_3]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd22.uLng) == 30)
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_10)
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd29.uLng)));
  goto label_8;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_3 9
#define OBJECT_20_2 8
#define OBJECT_20_1 7
#define OBJECT_20_0 6
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_20_4);
      goto pph_end_string_length_3;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pph_end_string_length_7)
DEFLABEL (pph_end_string_length_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 30)
    goto label_9;
  Rvl = (current_block [OBJECT_20_3]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd22.uLng) == 30)
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_10)
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd29.uLng)));
  goto label_8;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_10 13
#define LABEL_21_13 15
#define TAG_21_14 6
#define LABEL_21_16 17
#define LABEL_21_17 19
#define LABEL_21_18 21
#define LABEL_21_11 23
#define TAG_21_12 10
#define LABEL_21_20 25
#define LABEL_21_21 27
#define LABEL_21_22 29
#define LABEL_21_23 31
#define LABEL_21_24 33
#define LABEL_21_25 35
#define LABEL_21_26 37
#define LABEL_21_27 39
#define LABEL_21_28 41
#define LABEL_21_29 43
#define LABEL_21_30 45
#define LABEL_21_31 47
#define LABEL_21_32 49
#define LABEL_21_19 51
#define LABEL_21_33 53
#define LABEL_21_34 55
#define LABEL_21_37 57
#define LABEL_21_40 59
#define ENVIRONMENT_LABEL_21_3 93
#define DEBUGGING_LABEL_21_2 92
#define OBJECT_21_1 91
#define OBJECT_21_0 90
#define EXECUTE_CACHE_21_41 61
#define EXECUTE_CACHE_21_39 63
#define EXECUTE_CACHE_21_38 65
#define EXECUTE_CACHE_21_36 67
#define EXECUTE_CACHE_21_35 69
#define EXECUTE_CACHE_21_15 71
#define EXECUTE_CACHE_21_9 73
#define FREE_REFERENCE_21_8 76
#define FREE_REFERENCE_21_7 77
#define FREE_REFERENCE_21_6 78
#define FREE_REFERENCE_21_5 79
#define FREE_REFERENCE_21_4 80
#define FREE_REFERENCE_21_3 81
#define FREE_REFERENCE_21_2 82
#define FREE_REFERENCE_21_1 83
#define FREE_REFERENCE_21_0 84
#define FREE_ASSIGNMENT_21_3 86
#define FREE_ASSIGNMENT_21_2 87
#define FREE_ASSIGNMENT_21_1 88
#define FREE_ASSIGNMENT_21_0 89
#define FREE_REFERENCES_LABEL_21_0 60
#define NUMBER_OF_LINKER_SECTIONS_21_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd7;
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
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd82;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd5;
  machine_word Wrd35;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto pp_top_level_40;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_42;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_43;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_44;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto lambda_66;

    case 7:
      current_block = (Rpc - LABEL_21_16);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_21_17);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_21_18);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_21_11);
      goto swapB_65;

    case 11:
      current_block = (Rpc - LABEL_21_20);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_21_21);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_21_22);
      goto label_51;

    case 14:
      current_block = (Rpc - LABEL_21_23);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_21_24);
      goto label_53;

    case 16:
      current_block = (Rpc - LABEL_21_25);
      goto label_54;

    case 17:
      current_block = (Rpc - LABEL_21_26);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_21_27);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_21_28);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_21_29);
      goto label_58;

    case 21:
      current_block = (Rpc - LABEL_21_30);
      goto label_59;

    case 22:
      current_block = (Rpc - LABEL_21_31);
      goto label_60;

    case 23:
      current_block = (Rpc - LABEL_21_32);
      goto continuation_9;

    case 24:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_6;

    case 25:
      current_block = (Rpc - LABEL_21_33);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_21_34);
      goto continuation_10;

    case 27:
      current_block = (Rpc - LABEL_21_37);
      goto continuation_8;

    case 28:
      current_block = (Rpc - LABEL_21_40);
      goto label_62;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pp_top_level_64)
DEFLABEL (pp_top_level_40)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_75)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_74;
  Wrd10 = Wrd14;

DEFLABEL (label_73)
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_72;
  Wrd26 = Wrd30;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd26.Obj);
  if (! ((Wrd26.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd82.Obj) = (Rsp [6]);
  (Rsp [0]) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_67)
  Wrd35 = Wrd26;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_70)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_69;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd41.Lng) = ((Wrd42.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_69;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_68)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd80.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_11])));
  Rhp += 4;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd73.pObj) = (& (Rhp [-1]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd73.pObj)));
  (Rsp [1]) = (Wrd74.Obj);
  (Wrd79.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd77.pObj) = (& (Rhp [-1]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd77.pObj)));
  (Rsp [4]) = (Wrd78.Obj);
  Wrd70 = Wrd80;
  ((Wrd70.pObj) [2]) = (Wrd78.Obj);
  (Wrd68.Obj) = (Rsp [3]);
  ((Wrd70.pObj) [3]) = (Wrd68.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  ((Wrd70.pObj) [4]) = (Wrd65.Obj);
  ((Wrd70.pObj) [5]) = (Wrd74.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_13])));
  Rhp += 5;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd55 = Wrd46;
  (Wrd56.Obj) = (Rsp [9]);
  ((Wrd55.pObj) [2]) = (Wrd56.Obj);
  (Wrd54.Obj) = (Rsp [8]);
  ((Wrd55.pObj) [3]) = (Wrd54.Obj);
  (Wrd52.Obj) = (Rsp [7]);
  ((Wrd55.pObj) [4]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [6]);
  ((Wrd55.pObj) [5]) = (Wrd50.Obj);
  (Wrd48.Obj) = (Rsp [5]);
  ((Wrd55.pObj) [6]) = (Wrd48.Obj);
  (Rsp [8]) = (Wrd45.Obj);
  (Rsp [7]) = (Wrd81.Obj);
  (Rsp [9]) = (Wrd81.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_15]));

DEFLABEL (label_69)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd27.pObj));

DEFLABEL (label_43)
  (Wrd26.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd11.pObj));

DEFLABEL (label_42)
  (Wrd10.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_78;
  Wrd85 = Wrd89;

DEFLABEL (label_77)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd85.Obj);
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd86.pObj));

DEFLABEL (label_45)
  (Wrd85.Obj) = Rvl;
  goto label_77;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd35.Obj) = Rvl;
  goto label_70;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_21_13);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_92;
  Wrd5 = Wrd9;

DEFLABEL (label_91)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_87;
  Wrd12 = Wrd16;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_85)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd22.pObj) [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_19);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_84;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (! ((Wrd54.Lng) > 0))
    goto label_80;

DEFLABEL (label_83)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_32]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_37]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_38]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_37);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_7]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_82;
  Wrd5 = Wrd9;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_41]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_32);

DEFLABEL (label_80)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_34]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_36]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_34);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [5]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_39]));

DEFLABEL (label_79)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_34]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_35]));

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_40])), (Wrd6.pObj));

DEFLABEL (label_62)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_83;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_18])), (Wrd13.pObj));

DEFLABEL (label_47)
  (Wrd12.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_4]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_90;
  Wrd28 = Wrd32;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_85;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_17])), (Wrd29.pObj));

DEFLABEL (label_48)
  (Wrd28.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_16])), (Wrd6.pObj));

DEFLABEL (label_46)
  (Wrd5.Obj) = Rvl;
  goto label_91;

DEFLABEL (swapB_65)
  CLOSURE_HEADER (LABEL_21_11);

DEFLABEL (swapB_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_6]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  Wrd5 = Wrd9;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_123)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_120)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_7]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  Wrd57 = Wrd61;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_114)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_111)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_8]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  Wrd109 = Wrd113;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_105)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_102)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_101;

DEFLABEL (label_100)
  Wrd161 = Wrd165;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_96)
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
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_93)
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_95)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_31])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_60)
  goto label_93;

DEFLABEL (label_98)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_97;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_30])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_59)
  goto label_96;

DEFLABEL (label_101)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_100;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_21_29])), (Wrd162.pObj));

DEFLABEL (label_58)
  (Wrd161.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_104)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_28])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_57)
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_27])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_56)
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_21_26])), (Wrd110.pObj));

DEFLABEL (label_55)
  (Wrd109.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_25])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_54)
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_115;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_24])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_53)
  goto label_114;

DEFLABEL (label_119)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_118;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_21_23])), (Wrd58.pObj));

DEFLABEL (label_52)
  (Wrd57.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_122)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_121;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_51)
  goto label_120;

DEFLABEL (label_125)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_124;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_50)
  goto label_123;

DEFLABEL (label_128)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_127;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_21_20])), (Wrd6.pObj));

DEFLABEL (label_49)
  (Wrd5.Obj) = Rvl;
  goto label_126;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCE_22_0 10
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto Z__unparse_char_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_char_4)
DEFLABEL (Z__unparse_char_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCE_23_0 10
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto Z__unparse_string_0;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_string_4)
DEFLABEL (Z__unparse_string_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 13
#define DEBUGGING_LABEL_24_2 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_6 7
#define FREE_REFERENCE_24_0 10
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_24_4);
      goto Z__unparse_open_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_open_4)
DEFLABEL (Z__unparse_open_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 13
#define DEBUGGING_LABEL_25_2 12
#define OBJECT_25_0 11
#define EXECUTE_CACHE_25_6 7
#define FREE_REFERENCE_25_0 10
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_25_4);
      goto Z__unparse_close_0;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_close_4)
DEFLABEL (Z__unparse_close_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 13
#define DEBUGGING_LABEL_26_2 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCE_26_0 10
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_26_4);
      goto Z__unparse_space_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_space_4)
DEFLABEL (Z__unparse_space_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 13
#define DEBUGGING_LABEL_27_2 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCE_27_0 10
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_27_4);
      goto Z__unparse_newline_0;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_newline_4)
DEFLABEL (Z__unparse_newline_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define LABEL_28_10 11
#define TAG_28_11 4
#define LABEL_28_8 13
#define TAG_28_9 5
#define LABEL_28_14 15
#define LABEL_28_15 17
#define LABEL_28_16 19
#define LABEL_28_17 21
#define LABEL_28_18 23
#define LABEL_28_19 25
#define ENVIRONMENT_LABEL_28_3 43
#define DEBUGGING_LABEL_28_2 42
#define OBJECT_28_1 41
#define OBJECT_28_0 40
#define EXECUTE_CACHE_28_13 27
#define EXECUTE_CACHE_28_12 29
#define FREE_REFERENCE_28_4 32
#define FREE_REFERENCE_28_3 33
#define FREE_REFERENCE_28_2 34
#define FREE_REFERENCE_28_1 35
#define FREE_REFERENCE_28_0 36
#define FREE_ASSIGNMENT_28_1 38
#define FREE_ASSIGNMENT_28_0 39
#define FREE_REFERENCES_LABEL_28_0 26
#define NUMBER_OF_LINKER_SECTIONS_28_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_28_4);
      goto print_non_code_node_16;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto lambda_30;

    case 5:
      current_block = (Rpc - LABEL_28_8);
      goto swapB_29;

    case 6:
      current_block = (Rpc - LABEL_28_14);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_28_15);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_28_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_28_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_28_18);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_28_19);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_non_code_node_28)
DEFLABEL (print_non_code_node_16)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_38;
  Wrd5 = Wrd9;

DEFLABEL (label_37)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_33;
  Wrd12 = Wrd16;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_31)
  (Wrd21.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_8])));
  Rhp += 2;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd41.pObj) = (& (Rhp [-1]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd41.pObj)));
  (Rsp [2]) = (Wrd42.Obj);
  Wrd38 = Wrd44;
  ((Wrd38.pObj) [2]) = (Wrd42.Obj);
  ((Wrd38.pObj) [3]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_10])));
  Rhp += 3;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd29 = Wrd24;
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  (Rsp [3]) = (Wrd45.Obj);
  (Rsp [5]) = (Wrd45.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd13.pObj));

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_36;
  Wrd46 = Wrd50;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_31;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd47.pObj));

DEFLABEL (label_20)
  (Wrd46.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_28_10);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (swapB_29)
  CLOSURE_HEADER (LABEL_28_8);

DEFLABEL (swapB_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  Wrd5 = Wrd9;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_51)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_48)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  Wrd57 = Wrd61;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_42)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_26)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_25)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_28_17])), (Wrd58.pObj));

DEFLABEL (label_24)
  (Wrd57.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_23)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_22)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_28_14])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_9 9
#define TAG_29_10 3
#define LABEL_29_7 11
#define TAG_29_8 4
#define LABEL_29_13 13
#define LABEL_29_14 15
#define LABEL_29_15 17
#define LABEL_29_16 19
#define LABEL_29_17 21
#define LABEL_29_18 23
#define ENVIRONMENT_LABEL_29_3 39
#define DEBUGGING_LABEL_29_2 38
#define OBJECT_29_0 37
#define EXECUTE_CACHE_29_12 25
#define EXECUTE_CACHE_29_11 27
#define FREE_REFERENCE_29_3 30
#define FREE_REFERENCE_29_2 31
#define FREE_REFERENCE_29_1 32
#define FREE_REFERENCE_29_0 33
#define FREE_ASSIGNMENT_29_1 35
#define FREE_ASSIGNMENT_29_0 36
#define FREE_REFERENCES_LABEL_29_0 24
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto print_code_node_15;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto lambda_28;

    case 4:
      current_block = (Rpc - LABEL_29_7);
      goto swapB_27;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_29_14);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_29_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_29_16);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_29_17);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_29_18);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_code_node_26)
DEFLABEL (print_code_node_15)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_32;
  Wrd5 = Wrd9;

DEFLABEL (label_31)
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_30;
  Wrd14 = Wrd18;

DEFLABEL (label_29)
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_7])));
  Rhp += 2;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  Wrd39 = Wrd41;
  (Wrd40.Obj) = (Rsp [2]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  ((Wrd39.pObj) [3]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_9])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd30 = Wrd25;
  (Wrd31.Obj) = (Rsp [5]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [4]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd24.Obj);
  (Rsp [3]) = (Wrd42.Obj);
  (Rsp [5]) = (Wrd42.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd15.pObj));

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_29_9);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (swapB_27)
  CLOSURE_HEADER (LABEL_29_7);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  Wrd5 = Wrd9;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_45)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_42)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  Wrd57 = Wrd61;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_36)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_29_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_24)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_23)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_29_16])), (Wrd58.pObj));

DEFLABEL (label_22)
  (Wrd57.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_21)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_20)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_29_13])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_8 13
#define LABEL_30_12 15
#define ENVIRONMENT_LABEL_30_3 26
#define DEBUGGING_LABEL_30_2 25
#define OBJECT_30_1 24
#define OBJECT_30_0 23
#define EXECUTE_CACHE_30_11 17
#define EXECUTE_CACHE_30_7 19
#define FREE_REFERENCE_30_0 22
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_30_4);
      goto print_data_column_4;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_data_column_11)
DEFLABEL (print_data_column_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_19;
  Wrd9 = Wrd13;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_17;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_17;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_15;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_15;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_14)
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_30_1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_12])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_6 5
#define LABEL_31_5 7
#define LABEL_31_9 9
#define LABEL_31_10 11
#define LABEL_31_8 13
#define LABEL_31_12 15
#define ENVIRONMENT_LABEL_31_3 26
#define DEBUGGING_LABEL_31_2 25
#define OBJECT_31_1 24
#define OBJECT_31_0 23
#define EXECUTE_CACHE_31_11 17
#define EXECUTE_CACHE_31_7 19
#define FREE_REFERENCE_31_0 22
#define FREE_REFERENCES_LABEL_31_0 16
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_31_4);
      goto print_data_table_4;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_data_table_11)
DEFLABEL (print_data_table_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_19;
  Wrd9 = Wrd13;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_17;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_17;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_15;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_15;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_14)
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_31_1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_12])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_5 3
#define LABEL_32_4 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_14 11
#define LABEL_32_15 13
#define LABEL_32_13 15
#define LABEL_32_17 17
#define LABEL_32_18 19
#define LABEL_32_19 21
#define LABEL_32_20 23
#define LABEL_32_21 25
#define LABEL_32_11 27
#define LABEL_32_24 29
#define LABEL_32_25 31
#define LABEL_32_26 33
#define TAG_32_27 15
#define LABEL_32_29 35
#define LABEL_32_30 37
#define LABEL_32_31 39
#define LABEL_32_32 41
#define LABEL_32_33 43
#define LABEL_32_34 45
#define LABEL_32_35 47
#define LABEL_32_37 49
#define LABEL_32_38 51
#define LABEL_32_40 53
#define ENVIRONMENT_LABEL_32_3 94
#define DEBUGGING_LABEL_32_2 93
#define OBJECT_32_11 92
#define OBJECT_32_10 91
#define OBJECT_32_9 90
#define OBJECT_32_8 89
#define OBJECT_32_7 88
#define OBJECT_32_6 87
#define OBJECT_32_5 86
#define OBJECT_32_4 85
#define OBJECT_32_3 84
#define OBJECT_32_2 83
#define OBJECT_32_1 82
#define OBJECT_32_0 81
#define EXECUTE_CACHE_32_39 55
#define EXECUTE_CACHE_32_36 57
#define EXECUTE_CACHE_32_28 59
#define EXECUTE_CACHE_32_23 61
#define EXECUTE_CACHE_32_22 63
#define EXECUTE_CACHE_32_16 65
#define EXECUTE_CACHE_32_12 67
#define EXECUTE_CACHE_32_10 69
#define EXECUTE_CACHE_32_9 71
#define EXECUTE_CACHE_32_6 73
#define FREE_REFERENCE_32_4 76
#define FREE_REFERENCE_32_3 77
#define FREE_REFERENCE_32_2 78
#define FREE_REFERENCE_32_1 79
#define FREE_REFERENCE_32_0 80
#define FREE_REFERENCES_LABEL_32_0 54
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd47;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_32_4);
      goto print_node_30;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_32_14);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_32_15);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_32_13);
      goto continuation_23;

    case 7:
      current_block = (Rpc - LABEL_32_17);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_32_18);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_32_19);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_32_20);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_32_21);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_32_24);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_32_25);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_32_26);
      goto lambda_52;

    case 16:
      current_block = (Rpc - LABEL_32_29);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_32_30);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_32_31);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_32_32);
      goto label_46;

    case 20:
      current_block = (Rpc - LABEL_32_33);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_32_34);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_32_35);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_32_37);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_32_38);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_32_40);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_node_51)
DEFLABEL (print_node_30)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_53;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (label_53)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_32_0]);
  (Wrd37.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd37.Lng))))
    goto label_83;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_82;

DEFLABEL (label_81)
  (Wrd15.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_54;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_54)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_56;
  (Wrd17.Obj) = (current_block [OBJECT_32_4]);
  goto label_55;

DEFLABEL (label_56)
  (Wrd17.Obj) = (current_block [OBJECT_32_3]);

DEFLABEL (label_55)
DEFLABEL (label_80)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;

DEFLABEL (label_57)
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (label_58)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_60;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_60;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_59)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_26])));
  Rhp += 4;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd32 = Wrd25;
  (Wrd33.Obj) = (Rsp [3]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [4]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [5]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (label_60)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_32_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_63;
  Wrd37 = Wrd41;

DEFLABEL (label_62)
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_24])), (Wrd38.pObj));

DEFLABEL (label_41)
  (Wrd37.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_79;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_79;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_78)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_77;
  Wrd26 = Wrd30;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_75;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_75;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_74)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_73;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_73;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_72)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd41.uLng) == 30))
    goto label_71;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd37.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));

DEFLABEL (label_70)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_69;
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_69;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd54.Lng) = ((Wrd56.Lng) + (Wrd57.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd54.Lng)))
    goto label_69;
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_68)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_67;
  Wrd60 = Wrd64;

DEFLABEL (label_66)
  if ((Wrd60.Obj) == (current_block [OBJECT_32_9]))
    goto label_65;
  (Wrd67.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd68.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (label_65)
  (Wrd70.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd71.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_21])), (Wrd61.pObj));

DEFLABEL (label_39)
  (Wrd60.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_8]), 1);

DEFLABEL (label_37)
  (Wrd37.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_32_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_36)
  (Wrd21.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_15])), (Wrd27.pObj));

DEFLABEL (label_34)
  (Wrd26.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_32_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  Rsp = (& (Rsp [2]));
  goto label_57;

DEFLABEL (label_83)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_82;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_57;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_32_26);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_105;
  Wrd6 = Wrd10;

DEFLABEL (label_104)
  if ((Wrd6.Obj) == (current_block [OBJECT_32_9]))
    goto label_85;
  (Wrd13.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_84;

DEFLABEL (label_85)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_84)
DEFLABEL (label_103)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [5]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_102;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd26.Lng))))
    goto label_102;
  (Wrd18.Obj) = ((Wrd24.pObj) [5]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_101)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (current_block [OBJECT_32_11]))
    goto label_98;
  (Wrd41.Obj) = (Rsp [1]);
  if ((Wrd38.Obj) == (Wrd41.Obj))
    goto label_98;
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_4]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_94;
  Wrd46 = Wrd50;

DEFLABEL (label_93)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_92)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [4]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_91;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd64.Lng))))
    goto label_91;
  (Wrd56.Obj) = ((Wrd62.pObj) [4]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_90)
  (Wrd76.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [5]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_36]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_32_35);
  (Wrd5.Obj) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_89;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 26))
    goto label_89;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.Lng) = ((Wrd23.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_89;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_88)
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_38]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_39]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32_38);
  (Wrd5.Obj) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_87;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 26))
    goto label_87;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.Lng) = ((Wrd23.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_87;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_86)
  (Rsp [3]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_87)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_40]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_49)
  (Wrd13.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_48)
  (Wrd13.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [4]);
  (Wrd72.Obj) = (current_block [OBJECT_32_7]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_33])), (Wrd47.pObj));

DEFLABEL (label_44)
  (Wrd46.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_95)
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_3]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_97;
  Wrd85 = Wrd89;

DEFLABEL (label_96)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd85.Obj);
  goto label_92;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_32])), (Wrd86.pObj));

DEFLABEL (label_46)
  (Wrd85.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_98)
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_100;
  Wrd93 = Wrd97;

DEFLABEL (label_99)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_92;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_31])), (Wrd94.pObj));

DEFLABEL (label_47)
  (Wrd93.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [5]);
  (Wrd34.Obj) = (current_block [OBJECT_32_10]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_30]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_29])), (Wrd7.pObj));

DEFLABEL (label_42)
  (Wrd6.Obj) = Rvl;
  goto label_104;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_5 3
#define LABEL_33_6 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_9 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define LABEL_33_13 17
#define LABEL_33_14 19
#define LABEL_33_15 21
#define LABEL_33_16 23
#define LABEL_33_17 25
#define LABEL_33_4 27
#define LABEL_33_18 29
#define LABEL_33_19 31
#define LABEL_33_20 33
#define LABEL_33_22 35
#define LABEL_33_23 37
#define LABEL_33_24 39
#define LABEL_33_26 41
#define LABEL_33_25 43
#define ENVIRONMENT_LABEL_33_3 62
#define DEBUGGING_LABEL_33_2 61
#define OBJECT_33_2 60
#define OBJECT_33_1 59
#define OBJECT_33_0 58
#define EXECUTE_CACHE_33_28 45
#define EXECUTE_CACHE_33_27 47
#define EXECUTE_CACHE_33_21 49
#define EXECUTE_CACHE_33_10 51
#define FREE_REFERENCE_33_3 54
#define FREE_REFERENCE_33_2 55
#define FREE_REFERENCE_33_1 56
#define FREE_REFERENCE_33_0 57
#define FREE_REFERENCES_LABEL_33_0 44
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd58;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd131;
  machine_word Wrd129;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd118;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd67;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd161;
  machine_word Wrd165;
  machine_word Wrd168;
  machine_word Wrd166;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd149;
  machine_word Wrd150;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd148;
  machine_word Wrd144;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd135;
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
      current_block = (Rpc - LABEL_33_5);
      goto continuation_11;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_33_14);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_33_16);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_33_17);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_33_4);
      goto print_list_node_17;

    case 13:
      current_block = (Rpc - LABEL_33_18);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_33_19);
      goto label_20;

    case 15:
      current_block = (Rpc - LABEL_33_20);
      goto label_21;

    case 16:
      current_block = (Rpc - LABEL_33_22);
      goto label_25;

    case 17:
      current_block = (Rpc - LABEL_33_23);
      goto label_24;

    case 18:
      current_block = (Rpc - LABEL_33_24);
      goto label_22;

    case 19:
      current_block = (Rpc - LABEL_33_26);
      goto label_23;

    case 20:
      current_block = (Rpc - LABEL_33_25);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_list_node_35)
DEFLABEL (print_list_node_17)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_71;
  Wrd5 = Wrd9;

DEFLABEL (label_70)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_13);
  (Wrd88.Obj) = Rvl;
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_69;
  (Wrd96.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd96.uLng) == 26))
    goto label_69;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd97.Lng) = ((Wrd99.Lng) + (Wrd100.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd97.Lng)))
    goto label_69;
  (Wrd101.Obj) = (LONG_TO_FIXNUM (Wrd97.Lng));
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_68)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_67;
  Wrd103 = Wrd107;

DEFLABEL (label_66)
  Wrd102 = Wrd103;
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_65;
  (Wrd116.Obj) = (Rsp [3]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 26))
    goto label_65;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd118.Lng) = ((Wrd119.Lng) - (Wrd121.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd118.Lng)))
    goto label_65;
  (Wrd114.Obj) = (LONG_TO_FIXNUM (Wrd118.Lng));

DEFLABEL (label_64)
  (Wrd122.Obj) = (* (Rsp++));
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd123.uLng) == 26))
    goto label_63;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_63;
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! ((Wrd133.Lng) > (Wrd134.Lng)))
    goto label_37;

DEFLABEL (label_36)
  (Wrd131.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd131.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (label_37)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_62;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_61)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_60;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_59)
  if ((Wrd28.Obj) == (current_block [OBJECT_33_1]))
    goto label_58;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_57;
  Wrd38 = Wrd42;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_55;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_53)
  (Wrd58.Obj) = (Rsp [0]);
  if (! ((Wrd58.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd135.Obj) = Rvl;
  (Wrd141.Obj) = (Rsp [3]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 26))
    goto label_52;
  (Wrd143.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd143.uLng) == 26))
    goto label_52;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd144.Lng) = ((Wrd146.Lng) + (Wrd147.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd144.Lng)))
    goto label_52;
  (Wrd148.Obj) = (LONG_TO_FIXNUM (Wrd144.Lng));
  (* (--Rsp)) = (Wrd148.Obj);

DEFLABEL (label_51)
  (Wrd151.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd154.Obj) = ((Wrd151.pObj) [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if ((Wrd155.uLng) == 50)
    goto label_50;
  Wrd150 = Wrd154;

DEFLABEL (label_49)
  Wrd149 = Wrd150;
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd162.uLng) == 26))
    goto label_48;
  (Wrd163.Obj) = (Rsp [5]);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd164.uLng) == 26))
    goto label_48;
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd150.Obj));
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  (Wrd165.Lng) = ((Wrd166.Lng) - (Wrd168.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd165.Lng)))
    goto label_48;
  (Wrd161.Obj) = (LONG_TO_FIXNUM (Wrd165.Lng));

DEFLABEL (label_47)
  (Wrd169.Obj) = (* (Rsp++));
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd170.uLng) == 26))
    goto label_46;
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd171.uLng) == 26))
    goto label_46;
  (Wrd180.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  (Wrd181.Lng) = (FIXNUM_TO_LONG (Wrd169.Obj));
  if (! ((Wrd180.Lng) > (Wrd181.Lng)))
    goto label_39;

DEFLABEL (label_38)
  (Wrd178.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd178.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (label_39)
  (Wrd60.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd60.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [1]);
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_42;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd67.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_42)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_23]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_24)
  (Wrd67.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_45;
  Wrd78 = Wrd82;

DEFLABEL (label_44)
  Wrd67 = Wrd78;
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_22])), (Wrd79.pObj));

DEFLABEL (label_25)
  (Wrd78.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

DEFLABEL (label_48)
  (Wrd157.Obj) = (Rsp [5]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_32)
  (Wrd161.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_7])), (Wrd151.pObj));

DEFLABEL (label_31)
  (Wrd150.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd136.Obj) = (Rsp [3]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_26]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_24])), (Wrd39.pObj));

DEFLABEL (label_22)
  (Wrd38.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_53;

DEFLABEL (label_60)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_21)
  (Wrd28.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_65)
  (Wrd110.Obj) = (Rsp [3]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_28)
  (Wrd114.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_15])), (Wrd104.pObj));

DEFLABEL (label_27)
  (Wrd103.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_18])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_70;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Wrd67.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_7 7
#define LABEL_34_8 9
#define LABEL_34_13 11
#define LABEL_34_14 13
#define TAG_34_15 5
#define LABEL_34_17 15
#define LABEL_34_11 17
#define LABEL_34_19 19
#define LABEL_34_22 21
#define LABEL_34_23 23
#define LABEL_34_21 25
#define LABEL_34_24 27
#define ENVIRONMENT_LABEL_34_3 54
#define DEBUGGING_LABEL_34_2 53
#define OBJECT_34_7 52
#define OBJECT_34_6 51
#define OBJECT_34_5 50
#define OBJECT_34_4 49
#define OBJECT_34_3 48
#define OBJECT_34_2 47
#define OBJECT_34_1 46
#define OBJECT_34_0 45
#define EXECUTE_CACHE_34_20 29
#define EXECUTE_CACHE_34_18 31
#define EXECUTE_CACHE_34_16 33
#define EXECUTE_CACHE_34_12 35
#define EXECUTE_CACHE_34_10 37
#define EXECUTE_CACHE_34_9 39
#define EXECUTE_CACHE_34_6 41
#define FREE_REFERENCE_34_0 44
#define FREE_REFERENCES_LABEL_34_0 28
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd40;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto print_guaranteed_node_12;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_34_13);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_34_14);
      goto lambda_23;

    case 6:
      current_block = (Rpc - LABEL_34_17);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_34_19);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_34_22);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_34_23);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_34_21);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_34_24);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_guaranteed_node_22)
DEFLABEL (print_guaranteed_node_12)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_34_0]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd35.Lng))))
    goto label_45;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd15.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_25;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_25)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_27;
  (Wrd17.Obj) = (current_block [OBJECT_34_4]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd17.Obj) = (current_block [OBJECT_34_3]);

DEFLABEL (label_26)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (label_29)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_35;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_35;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_34)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_33;
  Wrd26 = Wrd30;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_21);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_23])), (Wrd27.pObj));

DEFLABEL (label_18)
  (Wrd26.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_34_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_38;
  Wrd32 = Wrd36;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_20]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_19])), (Wrd33.pObj));

DEFLABEL (label_19)
  (Wrd32.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_41;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_41;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_14])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (label_41)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_34_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_28;

DEFLABEL (label_45)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_34_14);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_47;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_47;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_46)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (label_47)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_34_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_5 7
#define LABEL_35_8 9
#define LABEL_35_9 11
#define LABEL_35_11 13
#define LABEL_35_10 15
#define LABEL_35_13 17
#define LABEL_35_14 19
#define LABEL_35_16 21
#define LABEL_35_15 23
#define LABEL_35_17 25
#define ENVIRONMENT_LABEL_35_3 40
#define DEBUGGING_LABEL_35_2 39
#define OBJECT_35_5 38
#define OBJECT_35_4 37
#define OBJECT_35_3 36
#define OBJECT_35_2 35
#define OBJECT_35_1 34
#define OBJECT_35_0 33
#define EXECUTE_CACHE_35_12 27
#define EXECUTE_CACHE_35_7 29
#define FREE_REFERENCE_35_0 32
#define FREE_REFERENCES_LABEL_35_0 26
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_35_4);
      goto print_guaranteed_list_node_12;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_35_9);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_35_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_35_14);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_35_16);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_35_17);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_guaranteed_list_node_22)
DEFLABEL (print_guaranteed_list_node_12)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_27;
  Wrd9 = Wrd13;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  goto loop_10;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_26;

DEFLABEL (loop_23)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_35_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  if ((Wrd5.Obj) == (current_block [OBJECT_35_3]))
    goto label_32;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_35_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_31;
  Wrd19 = Wrd23;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_10;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_16])), (Wrd20.pObj));

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_34;
  Wrd26 = Wrd30;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_35_4]);
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_14])), (Wrd27.pObj));

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_9 11
#define LABEL_36_8 13
#define LABEL_36_11 15
#define LABEL_36_13 17
#define ENVIRONMENT_LABEL_36_3 28
#define DEBUGGING_LABEL_36_2 27
#define OBJECT_36_3 26
#define OBJECT_36_2 25
#define OBJECT_36_1 24
#define OBJECT_36_0 23
#define EXECUTE_CACHE_36_12 19
#define EXECUTE_CACHE_36_10 21
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd13;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_36_4);
      goto print_column_10;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_36_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_column_17)
DEFLABEL (print_column_10)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  if ((Wrd5.Obj) == (current_block [OBJECT_36_1]))
    goto label_21;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_36_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (label_20)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_23;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto label_19;

DEFLABEL (label_23)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_14)
  (Wrd29.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_11);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_6 9
#define LABEL_37_9 11
#define LABEL_37_10 13
#define LABEL_37_12 15
#define ENVIRONMENT_LABEL_37_3 26
#define DEBUGGING_LABEL_37_2 25
#define OBJECT_37_3 24
#define OBJECT_37_2 23
#define OBJECT_37_1 22
#define OBJECT_37_0 21
#define EXECUTE_CACHE_37_11 17
#define EXECUTE_CACHE_37_8 19
#define FREE_REFERENCES_LABEL_37_0 16
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_37_4);
      goto print_guaranteed_column_9;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_37_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_guaranteed_column_15)
DEFLABEL (print_guaranteed_column_9)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_37_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_20)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_37_2])))
    goto label_17;
  Rvl = (current_block [OBJECT_37_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_8 7
#define LABEL_38_9 9
#define LABEL_38_10 11
#define LABEL_38_14 13
#define LABEL_38_6 15
#define LABEL_38_12 17
#define LABEL_38_16 19
#define LABEL_38_17 21
#define LABEL_38_19 23
#define LABEL_38_20 25
#define LABEL_38_21 27
#define LABEL_38_22 29
#define ENVIRONMENT_LABEL_38_3 50
#define DEBUGGING_LABEL_38_2 49
#define OBJECT_38_5 48
#define OBJECT_38_4 47
#define OBJECT_38_3 46
#define OBJECT_38_2 45
#define OBJECT_38_1 44
#define OBJECT_38_0 43
#define EXECUTE_CACHE_38_18 31
#define EXECUTE_CACHE_38_15 33
#define EXECUTE_CACHE_38_13 35
#define EXECUTE_CACHE_38_11 37
#define EXECUTE_CACHE_38_7 39
#define FREE_REFERENCE_38_0 42
#define FREE_REFERENCES_LABEL_38_0 30
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd7;
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
      goto print_guaranteed_table_15;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto print_row_14;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_38_14);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_38_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_38_19);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_38_20);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_38_21);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_38_22);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_guaranteed_table_25)
DEFLABEL (print_guaranteed_table_15)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto print_row_14;

DEFLABEL (print_row_26)
DEFLABEL (print_row_14)
  INTERRUPT_CHECK (26, LABEL_38_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_38_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_27;
  Rvl = (current_block [OBJECT_38_2]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (Wrd6.Obj)))
    goto label_28;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [2]) = (Wrd6.Obj);
  goto print_row_14;

DEFLABEL (label_28)
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_42;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_38_17);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_35)
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_34;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_34;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd23.Lng) = ((Wrd24.Lng) - (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_34;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_33)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_32;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd32.Lng) = ((Wrd33.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_32;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_31)
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_30;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  goto print_row_14;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_22]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 1);

DEFLABEL (label_23)
  (Wrd34.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  (Wrd30.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_21)
  (Wrd20.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_14])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_10 11
#define LABEL_39_9 13
#define LABEL_39_11 15
#define LABEL_39_13 17
#define LABEL_39_12 19
#define LABEL_39_15 21
#define LABEL_39_16 23
#define LABEL_39_17 25
#define LABEL_39_19 27
#define LABEL_39_20 29
#define LABEL_39_21 31
#define LABEL_39_22 33
#define LABEL_39_24 35
#define LABEL_39_25 37
#define LABEL_39_26 39
#define LABEL_39_23 41
#define LABEL_39_27 43
#define LABEL_39_28 45
#define LABEL_39_29 47
#define LABEL_39_30 49
#define LABEL_39_31 51
#define LABEL_39_34 53
#define LABEL_39_35 55
#define LABEL_39_33 57
#define LABEL_39_36 59
#define LABEL_39_37 61
#define LABEL_39_38 63
#define LABEL_39_40 65
#define LABEL_39_41 67
#define LABEL_39_42 69
#define LABEL_39_43 71
#define LABEL_39_39 73
#define LABEL_39_45 75
#define LABEL_39_46 77
#define LABEL_39_47 79
#define LABEL_39_49 81
#define LABEL_39_50 83
#define LABEL_39_52 85
#define LABEL_39_54 87
#define LABEL_39_56 89
#define LABEL_39_57 91
#define LABEL_39_59 93
#define LABEL_39_48 95
#define LABEL_39_60 97
#define LABEL_39_53 99
#define LABEL_39_61 101
#define LABEL_39_62 103
#define LABEL_39_63 105
#define LABEL_39_65 107
#define LABEL_39_58 109
#define LABEL_39_64 111
#define LABEL_39_66 113
#define LABEL_39_70 115
#define LABEL_39_71 117
#define LABEL_39_73 119
#define LABEL_39_44 121
#define LABEL_39_74 123
#define LABEL_39_67 125
#define LABEL_39_75 127
#define LABEL_39_76 129
#define LABEL_39_77 131
#define LABEL_39_68 133
#define LABEL_39_78 135
#define LABEL_39_72 137
#define LABEL_39_79 139
#define LABEL_39_80 141
#define ENVIRONMENT_LABEL_39_3 170
#define DEBUGGING_LABEL_39_2 169
#define OBJECT_39_8 168
#define OBJECT_39_7 167
#define OBJECT_39_6 166
#define OBJECT_39_5 165
#define OBJECT_39_4 164
#define OBJECT_39_3 163
#define OBJECT_39_2 162
#define OBJECT_39_1 161
#define OBJECT_39_0 160
#define EXECUTE_CACHE_39_69 143
#define EXECUTE_CACHE_39_55 145
#define EXECUTE_CACHE_39_51 147
#define EXECUTE_CACHE_39_32 149
#define EXECUTE_CACHE_39_18 151
#define EXECUTE_CACHE_39_14 153
#define EXECUTE_CACHE_39_8 155
#define FREE_REFERENCE_39_1 158
#define FREE_REFERENCE_39_0 159
#define FREE_REFERENCES_LABEL_39_0 142
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd67;
  machine_word Wrd78;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd52;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_39_4);
      goto maybe_print_table_86;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_88;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_89;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_90;

    case 5:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_39_11);
      goto label_92;

    case 7:
      current_block = (Rpc - LABEL_39_13);
      goto label_91;

    case 8:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_39_15);
      goto label_93;

    case 10:
      current_block = (Rpc - LABEL_39_16);
      goto label_94;

    case 11:
      current_block = (Rpc - LABEL_39_17);
      goto default_85;

    case 12:
      current_block = (Rpc - LABEL_39_19);
      goto loop_20;

    case 13:
      current_block = (Rpc - LABEL_39_20);
      goto label_95;

    case 14:
      current_block = (Rpc - LABEL_39_21);
      goto label_96;

    case 15:
      current_block = (Rpc - LABEL_39_22);
      goto label_97;

    case 16:
      current_block = (Rpc - LABEL_39_24);
      goto label_98;

    case 17:
      current_block = (Rpc - LABEL_39_25);
      goto label_100;

    case 18:
      current_block = (Rpc - LABEL_39_26);
      goto label_99;

    case 19:
      current_block = (Rpc - LABEL_39_23);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_39_27);
      goto label_101;

    case 21:
      current_block = (Rpc - LABEL_39_28);
      goto label_102;

    case 22:
      current_block = (Rpc - LABEL_39_29);
      goto label_103;

    case 23:
      current_block = (Rpc - LABEL_39_30);
      goto try_columns_81;

    case 24:
      current_block = (Rpc - LABEL_39_31);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_39_34);
      goto label_104;

    case 26:
      current_block = (Rpc - LABEL_39_35);
      goto label_105;

    case 27:
      current_block = (Rpc - LABEL_39_33);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_39_36);
      goto try_78;

    case 29:
      current_block = (Rpc - LABEL_39_37);
      goto label_106;

    case 30:
      current_block = (Rpc - LABEL_39_38);
      goto continuation_60;

    case 31:
      current_block = (Rpc - LABEL_39_40);
      goto find_widths_58;

    case 32:
      current_block = (Rpc - LABEL_39_41);
      goto continuation_73;

    case 33:
      current_block = (Rpc - LABEL_39_42);
      goto continuation_66;

    case 34:
      current_block = (Rpc - LABEL_39_43);
      goto label_120;

    case 35:
      current_block = (Rpc - LABEL_39_39);
      goto continuation_61;

    case 36:
      current_block = (Rpc - LABEL_39_45);
      goto label_111;

    case 37:
      current_block = (Rpc - LABEL_39_46);
      goto label_107;

    case 38:
      current_block = (Rpc - LABEL_39_47);
      goto label_110;

    case 39:
      current_block = (Rpc - LABEL_39_49);
      goto label_108;

    case 40:
      current_block = (Rpc - LABEL_39_50);
      goto label_109;

    case 41:
      current_block = (Rpc - LABEL_39_52);
      goto fitP_39;

    case 42:
      current_block = (Rpc - LABEL_39_54);
      goto label_112;

    case 43:
      current_block = (Rpc - LABEL_39_56);
      goto recur_56;

    case 44:
      current_block = (Rpc - LABEL_39_57);
      goto label_113;

    case 45:
      current_block = (Rpc - LABEL_39_59);
      goto label_114;

    case 46:
      current_block = (Rpc - LABEL_39_48);
      goto continuation_69;

    case 47:
      current_block = (Rpc - LABEL_39_60);
      goto label_115;

    case 48:
      current_block = (Rpc - LABEL_39_53);
      goto continuation_27;

    case 49:
      current_block = (Rpc - LABEL_39_61);
      goto label_116;

    case 50:
      current_block = (Rpc - LABEL_39_62);
      goto label_117;

    case 51:
      current_block = (Rpc - LABEL_39_63);
      goto label_118;

    case 52:
      current_block = (Rpc - LABEL_39_65);
      goto label_119;

    case 53:
      current_block = (Rpc - LABEL_39_58);
      goto continuation_55;

    case 54:
      current_block = (Rpc - LABEL_39_64);
      goto continuation_31;

    case 55:
      current_block = (Rpc - LABEL_39_66);
      goto label_121;

    case 56:
      current_block = (Rpc - LABEL_39_70);
      goto loop_48;

    case 57:
      current_block = (Rpc - LABEL_39_71);
      goto label_122;

    case 58:
      current_block = (Rpc - LABEL_39_73);
      goto label_123;

    case 59:
      current_block = (Rpc - LABEL_39_44);
      goto continuation_71;

    case 60:
      current_block = (Rpc - LABEL_39_74);
      goto label_124;

    case 61:
      current_block = (Rpc - LABEL_39_67);
      goto continuation_33;

    case 62:
      current_block = (Rpc - LABEL_39_75);
      goto label_125;

    case 63:
      current_block = (Rpc - LABEL_39_76);
      goto label_126;

    case 64:
      current_block = (Rpc - LABEL_39_77);
      goto label_127;

    case 65:
      current_block = (Rpc - LABEL_39_68);
      goto continuation_32;

    case 66:
      current_block = (Rpc - LABEL_39_78);
      goto label_128;

    case 67:
      current_block = (Rpc - LABEL_39_72);
      goto continuation_43;

    case 68:
      current_block = (Rpc - LABEL_39_79);
      goto label_129;

    case 69:
      current_block = (Rpc - LABEL_39_80);
      goto label_130;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_print_table_132)
DEFLABEL (maybe_print_table_86)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_155;
  Wrd6 = Wrd10;

DEFLABEL (label_154)
  Wrd5 = Wrd6;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_153;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_153;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) - (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_153;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_152)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_151;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_151;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_150)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_149;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 4L))
    goto label_142;

DEFLABEL (label_141)
  Rsp = (& (Rsp [3]));
  goto default_85;

DEFLABEL (label_142)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_148;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_147)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_146;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_146;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_146;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_145)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_144;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_143)
  (Wrd28.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  goto loop_20;

DEFLABEL (label_144)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 1);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (label_149)
  (Wrd25.Obj) = (current_block [OBJECT_39_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_92)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  goto label_141;

DEFLABEL (label_151)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd7.pObj));

DEFLABEL (label_88)
  (Wrd6.Obj) = Rvl;
  goto label_154;

DEFLABEL (default_133)
DEFLABEL (default_85)
  INTERRUPT_CHECK (26, LABEL_39_17);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (loop_134)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_39_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_176;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_176;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd72.Lng) > (Wrd74.Lng)))
    goto label_157;

DEFLABEL (label_156)
  Rsp = (& (Rsp [3]));
  goto try_columns_81;

DEFLABEL (label_157)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_175;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd69.Lng) < 0)
    goto label_169;

DEFLABEL (label_168)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_167;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_167;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_166)
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_165;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_164)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_23);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_163;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_163;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_162)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_161;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_161;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_161;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_160)
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_159;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_158)
  (Rsp [1]) = (Wrd27.Obj);
  goto loop_20;

DEFLABEL (label_159)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_29]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 1);

DEFLABEL (label_103)
  (Wrd27.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_28]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_102)
  (Wrd19.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_101)
  (Wrd10.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_24]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_97)
  (Wrd26.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_174;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if ((Wrd47.Lng) > 2L)
    goto label_171;

DEFLABEL (label_170)
  Rsp = (& (Rsp [6]));
  goto default_85;

DEFLABEL (label_171)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_173;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd58.Lng) = ((Wrd60.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd58.Lng)))
    goto label_173;
  (Wrd55.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));

DEFLABEL (label_172)
  (Rsp [3]) = (Wrd55.Obj);
  goto label_156;

DEFLABEL (label_173)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_26]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_99)
  (Wrd55.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_174)
  (Wrd63.Obj) = (current_block [OBJECT_39_0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_25]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_100)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_170;
  goto label_171;

DEFLABEL (label_175)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_96)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_168;
  goto label_169;

DEFLABEL (label_176)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_95)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_157;
  goto label_156;

DEFLABEL (try_columns_135)
DEFLABEL (try_columns_81)
  INTERRUPT_CHECK (26, LABEL_39_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_180;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_180;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_179)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_178;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_178;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_178;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd21.pObj) = (& ((Wrd26.pObj) [(Wrd18.Lng)]));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_177)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_39_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto try_78;

DEFLABEL (label_178)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_35]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_5]), 2);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_104)
  (Wrd12.Obj) = Rvl;
  goto label_179;

DEFLABEL (try_136)
DEFLABEL (try_78)
  INTERRUPT_CHECK (26, LABEL_39_36);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_203;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd8.Lng) < 2L))
    goto label_182;

DEFLABEL (label_181)
  Rsp = (& (Rsp [6]));
  goto default_85;

DEFLABEL (label_182)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto find_widths_58;

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_39_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto fitP_39;

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_39_39);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_199;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_199;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_198)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_197;
  if ((Wrd17.Obj) == (current_block [OBJECT_39_0]))
    goto label_184;

DEFLABEL (label_196)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_48]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_195;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_195;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_194)
  (Wrd40.Obj) = (Rsp [8]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_193;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_193;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) + (Wrd46.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_193;
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_192)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_69)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_191;
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_191;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_191;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_190)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_66)
  (Wrd69.Obj) = Rvl;
  (Wrd68.Obj) = (* (Rsp++));
  (Wrd70.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd70.uLng) == 26))
    goto label_189;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_189;
  if (! (Rvl == (Wrd68.Obj)))
    goto label_184;

DEFLABEL (label_188)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_44]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.pObj) = (& (Rsp [5]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd81.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd84.Obj);
  goto find_widths_58;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_39_44);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_41]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [4]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_187;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_187;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_186)
  goto fitP_39;

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_39_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_184;
  (Wrd49.Obj) = (Rsp [0]);
  goto label_183;

DEFLABEL (label_184)
  (Wrd49.Obj) = (Rsp [1]);

DEFLABEL (label_183)
DEFLABEL (label_185)
  Rsp = (& (Rsp [1]));
  (Rsp [9]) = (Wrd49.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_51]));

DEFLABEL (label_187)
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_74]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_124)
  (* (--Rsp)) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_43]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_120)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_184;
  goto label_188;

DEFLABEL (label_191)
  (Wrd9.Obj) = (Rsp [9]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_115)
  (* (--Rsp)) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd35.Obj) = (Rsp [8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_50]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_109)
  (* (--Rsp)) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_49]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_108)
  (Wrd29.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd52.Obj) = (current_block [OBJECT_39_0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_47]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_110)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_196;
  goto label_184;

DEFLABEL (label_199)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_107)
  (* (--Rsp)) = Rvl;
  goto label_198;

DEFLABEL (label_200)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_202;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd64.Lng) = ((Wrd66.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd64.Lng)))
    goto label_202;
  (Wrd61.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));

DEFLABEL (label_201)
  (Rsp [1]) = (Wrd61.Obj);
  Rsp = (& (Rsp [1]));
  goto try_78;

DEFLABEL (label_202)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_45]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_111)
  (Wrd61.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_203)
  (Wrd20.Obj) = (current_block [OBJECT_39_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_37]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_106)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_182;
  goto label_181;

DEFLABEL (find_widths_137)
DEFLABEL (find_widths_58)
  INTERRUPT_CHECK (26, LABEL_39_40);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto recur_56;

DEFLABEL (fitP_138)
DEFLABEL (fitP_39)
  INTERRUPT_CHECK (26, LABEL_39_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_227;
  Wrd10 = Wrd14;

DEFLABEL (label_226)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_55]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_39_53);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_225;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_225;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_224)
  (Wrd15.Obj) = (* (Rsp++));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_223;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_223;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_223;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_222)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_221;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_221;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! ((Wrd65.Lng) < (Wrd66.Lng)))
    goto label_205;

DEFLABEL (label_204)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_205)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_64]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_220;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd54.Lng) = ((Wrd58.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd54.Lng)))
    goto label_220;
  (Wrd59.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_219)
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_31)
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_218;
  (Wrd20.Obj) = ((Wrd15.pObj) [7]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_218;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd26.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_218;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_217)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_67]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_68]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_69]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_39_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_216;
  Wrd6 = Wrd10;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_55]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_39_67);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_214;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_214;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_214;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_213)
  (Wrd19.Obj) = (* (Rsp++));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_212;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_212;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd28.Lng) = ((Wrd29.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_212;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_211)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_210;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_210;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd51.Lng) < (Wrd52.Lng))
    goto label_207;

DEFLABEL (label_208)
  Rvl = (current_block [OBJECT_39_8]);
  goto label_206;

DEFLABEL (label_207)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_206)
DEFLABEL (label_209)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_210)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_77]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_127)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_208;
  goto label_207;

DEFLABEL (label_212)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_76]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_126)
  (Wrd25.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_125)
  (Wrd11.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_78])), (Wrd7.pObj));

DEFLABEL (label_128)
  (Wrd6.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Wrd8.Obj) = ((Wrd7.pObj) [7]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_66]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_65]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  goto label_219;

DEFLABEL (label_221)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_63]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_118)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_205;
  goto label_204;

DEFLABEL (label_223)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_62]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_117)
  (Wrd21.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_61]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_116)
  (Wrd9.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_54])), (Wrd11.pObj));

DEFLABEL (label_112)
  (Wrd10.Obj) = Rvl;
  goto label_226;

DEFLABEL (recur_139)
DEFLABEL (recur_56)
  DLINK_INTERRUPT_CHECK (25, LABEL_39_56);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_232;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_232;
  if (! ((Wrd5.Obj) == (Wrd9.Obj)))
    goto label_229;

DEFLABEL (label_228)
  Rvl = (current_block [OBJECT_39_7]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_229)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_58]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_231;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_231;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_230)
  Rdl = (& (Rsp [2]));
  goto recur_56;

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_39_58);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  goto loop_48;

DEFLABEL (label_231)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_59]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_114)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_230;

DEFLABEL (label_232)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_57]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_113)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_229;
  goto label_228;

DEFLABEL (loop_140)
DEFLABEL (loop_48)
  INTERRUPT_CHECK (26, LABEL_39_70);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_244;
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_244;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd72.Lng) < (Wrd78.Lng))
    goto label_234;

DEFLABEL (label_233)
  (Wrd26.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_234)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_72]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd56.Obj) = (Rsp [8]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [1]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_243;
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_243;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd55.Lng))))
    goto label_243;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd42.pObj) = (& ((Wrd53.pObj) [(Wrd35.Lng)]));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_242)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_39_72);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_241;
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_241;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_241;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_240)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_239;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_239;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if ((Wrd33.Lng) > (Wrd35.Lng))
    goto label_236;

DEFLABEL (label_237)
  (Wrd30.Obj) = (Rsp [2]);
  goto label_235;

DEFLABEL (label_236)
  (Wrd30.Obj) = (Rsp [0]);

DEFLABEL (label_235)
DEFLABEL (label_238)
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_48;

DEFLABEL (label_239)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_80]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_130)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_237;
  goto label_236;

DEFLABEL (label_241)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_79]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_129)
  (Wrd10.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  (Wrd63.Obj) = (Rsp [8]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd66.pObj) [0]);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_73]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_5]), 2);

DEFLABEL (label_123)
  (* (--Rsp)) = Rvl;
  goto label_242;

DEFLABEL (label_244)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [7]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_71]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_122)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_233;
  goto label_234;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_5 7
#define LABEL_40_9 9
#define LABEL_40_10 11
#define LABEL_40_11 13
#define LABEL_40_12 15
#define LABEL_40_8 17
#define LABEL_40_16 19
#define LABEL_40_14 21
#define LABEL_40_19 23
#define LABEL_40_18 25
#define LABEL_40_22 27
#define LABEL_40_21 29
#define LABEL_40_24 31
#define LABEL_40_23 33
#define LABEL_40_26 35
#define LABEL_40_27 37
#define LABEL_40_28 39
#define ENVIRONMENT_LABEL_40_3 64
#define DEBUGGING_LABEL_40_2 63
#define OBJECT_40_5 62
#define OBJECT_40_4 61
#define OBJECT_40_3 60
#define OBJECT_40_2 59
#define OBJECT_40_1 58
#define OBJECT_40_0 57
#define EXECUTE_CACHE_40_29 41
#define EXECUTE_CACHE_40_25 43
#define EXECUTE_CACHE_40_20 45
#define EXECUTE_CACHE_40_17 47
#define EXECUTE_CACHE_40_15 49
#define EXECUTE_CACHE_40_13 51
#define EXECUTE_CACHE_40_7 53
#define FREE_REFERENCE_40_0 56
#define FREE_REFERENCES_LABEL_40_0 40
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_40_4);
      goto print_combination_17;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_40_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_40_12);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_40_16);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_40_19);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_40_18);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_40_22);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_40_21);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_40_24);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_40_23);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_40_26);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_40_27);
      goto label_29;

    case 18:
      current_block = (Rpc - LABEL_40_28);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_combination_32)
DEFLABEL (print_combination_17)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_56;
  Wrd9 = Wrd13;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_54;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_54;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_53)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_52;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_52;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_51)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_50;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_49)
  if ((Wrd28.Obj) == (current_block [OBJECT_40_2]))
    goto label_46;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_43;
  Wrd9 = Wrd13;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_40_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_40_23);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_39;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_39;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_37;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_37;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) + (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_37;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_35;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_29]));

DEFLABEL (label_35)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_28]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_30)
  (Wrd27.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_29)
  (Wrd19.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_28)
  (Wrd10.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_22])), (Wrd10.pObj));

DEFLABEL (label_26)
  (Wrd9.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_48;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_13]));

DEFLABEL (label_48)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_6])), (Wrd10.pObj));

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_55;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_58;
  Wrd6 = Wrd10;

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_4]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_16])), (Wrd7.pObj));

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define LABEL_41_8 7
#define LABEL_41_7 9
#define LABEL_41_11 11
#define LABEL_41_10 13
#define LABEL_41_14 15
#define LABEL_41_15 17
#define LABEL_41_13 19
#define LABEL_41_16 21
#define LABEL_41_17 23
#define LABEL_41_18 25
#define LABEL_41_19 27
#define LABEL_41_21 29
#define LABEL_41_20 31
#define LABEL_41_23 33
#define LABEL_41_24 35
#define LABEL_41_25 37
#define ENVIRONMENT_LABEL_41_3 55
#define DEBUGGING_LABEL_41_2 54
#define OBJECT_41_6 53
#define OBJECT_41_5 52
#define OBJECT_41_4 51
#define OBJECT_41_3 50
#define OBJECT_41_2 49
#define OBJECT_41_1 48
#define OBJECT_41_0 47
#define EXECUTE_CACHE_41_22 39
#define EXECUTE_CACHE_41_12 41
#define EXECUTE_CACHE_41_9 43
#define FREE_REFERENCE_41_0 46
#define FREE_REFERENCES_LABEL_41_0 38
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto special_printer_15;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_41_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_41_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_41_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_41_17);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_41_18);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_41_19);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_41_21);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_41_20);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_41_23);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_41_24);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_41_25);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_printer_29)
DEFLABEL (special_printer_15)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_53;
  Wrd9 = Wrd13;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_49;
  Wrd9 = Wrd13;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_13);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_47;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_46)
  if ((Wrd5.Obj) == (current_block [OBJECT_41_4]))
    goto label_33;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_45;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_45;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_44)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_43;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = ((Wrd37.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd35.Lng)))
    goto label_43;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_42)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_20]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd47.Obj) = (Rsp [5]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_41;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_41_20);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_39;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd16.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_39;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_37;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_37;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_37;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_36)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_35;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_34)
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_41_15);

DEFLABEL (label_33)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_32;
  Wrd54 = Wrd58;

DEFLABEL (label_31)
  (Rsp [2]) = (Wrd54.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_41_5]);
  (Rsp [3]) = (Wrd60.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_17])), (Wrd55.pObj));

DEFLABEL (label_24)
  (Wrd54.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_25]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_24]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd6.Obj) = (current_block [OBJECT_41_6]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.Obj) = (current_block [OBJECT_41_6]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_14])), (Wrd10.pObj));

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_8])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define EXECUTE_CACHE_42_5 5
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto kernel_forced_indentation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (kernel_forced_indentation_3)
DEFLABEL (kernel_forced_indentation_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define ENVIRONMENT_LABEL_43_3 18
#define DEBUGGING_LABEL_43_2 17
#define EXECUTE_CACHE_43_10 9
#define EXECUTE_CACHE_43_9 11
#define EXECUTE_CACHE_43_8 13
#define EXECUTE_CACHE_43_6 15
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_43_4);
      goto kernel_pressured_indentation_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (kernel_pressured_indentation_5)
DEFLABEL (kernel_pressured_indentation_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (label_6)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_6 5
#define LABEL_44_5 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_11 13
#define ENVIRONMENT_LABEL_44_3 27
#define DEBUGGING_LABEL_44_2 26
#define OBJECT_44_4 25
#define OBJECT_44_3 24
#define OBJECT_44_2 23
#define OBJECT_44_1 22
#define OBJECT_44_0 21
#define EXECUTE_CACHE_44_12 15
#define EXECUTE_CACHE_44_10 17
#define EXECUTE_CACHE_44_7 19
#define FREE_REFERENCES_LABEL_44_0 14
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_44_4);
      goto kernel_print_procedure_7;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (kernel_print_procedure_13)
DEFLABEL (kernel_print_procedure_7)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd14.Obj) = (Rsp [0]);
  if (! ((Wrd14.Obj) == (current_block [OBJECT_44_3])))
    goto label_14;
  Rvl = (current_block [OBJECT_44_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_5 3
#define LABEL_45_4 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define LABEL_45_8 11
#define LABEL_45_9 13
#define LABEL_45_11 15
#define LABEL_45_14 17
#define LABEL_45_10 19
#define LABEL_45_16 21
#define LABEL_45_13 23
#define LABEL_45_18 25
#define LABEL_45_20 27
#define LABEL_45_17 29
#define LABEL_45_23 31
#define LABEL_45_24 33
#define LABEL_45_26 35
#define LABEL_45_27 37
#define LABEL_45_21 39
#define LABEL_45_30 41
#define LABEL_45_32 43
#define LABEL_45_25 45
#define LABEL_45_34 47
#define LABEL_45_35 49
#define LABEL_45_36 51
#define LABEL_45_37 53
#define LABEL_45_38 55
#define LABEL_45_39 57
#define LABEL_45_40 59
#define LABEL_45_41 61
#define LABEL_45_42 63
#define LABEL_45_43 65
#define LABEL_45_47 67
#define LABEL_45_45 69
#define LABEL_45_49 71
#define LABEL_45_50 73
#define LABEL_45_46 75
#define LABEL_45_52 77
#define LABEL_45_53 79
#define LABEL_45_48 81
#define LABEL_45_55 83
#define LABEL_45_56 85
#define LABEL_45_31 87
#define LABEL_45_58 89
#define LABEL_45_51 91
#define LABEL_45_59 93
#define LABEL_45_60 95
#define LABEL_45_57 97
#define LABEL_45_62 99
#define LABEL_45_63 101
#define LABEL_45_64 103
#define LABEL_45_65 105
#define LABEL_45_61 107
#define LABEL_45_68 109
#define LABEL_45_67 111
#define LABEL_45_69 113
#define LABEL_45_70 115
#define ENVIRONMENT_LABEL_45_3 155
#define DEBUGGING_LABEL_45_2 154
#define OBJECT_45_13 153
#define OBJECT_45_12 152
#define OBJECT_45_11 151
#define OBJECT_45_10 150
#define OBJECT_45_9 149
#define OBJECT_45_8 148
#define OBJECT_45_7 147
#define OBJECT_45_6 146
#define OBJECT_45_5 145
#define OBJECT_45_4 144
#define OBJECT_45_3 143
#define OBJECT_45_2 142
#define OBJECT_45_1 141
#define OBJECT_45_0 140
#define EXECUTE_CACHE_45_66 117
#define EXECUTE_CACHE_45_54 119
#define EXECUTE_CACHE_45_44 121
#define EXECUTE_CACHE_45_33 123
#define EXECUTE_CACHE_45_29 125
#define EXECUTE_CACHE_45_28 127
#define EXECUTE_CACHE_45_22 129
#define EXECUTE_CACHE_45_19 131
#define EXECUTE_CACHE_45_15 133
#define EXECUTE_CACHE_45_12 135
#define FREE_REFERENCE_45_1 138
#define FREE_REFERENCE_45_0 139
#define FREE_REFERENCES_LABEL_45_0 116
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd111;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd27;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
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
      current_block = (Rpc - LABEL_45_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_45_4);
      goto kernel_print_let_expression_57;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_59;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_64;

    case 4:
      current_block = (Rpc - LABEL_45_8);
      goto label_60;

    case 5:
      current_block = (Rpc - LABEL_45_9);
      goto label_63;

    case 6:
      current_block = (Rpc - LABEL_45_11);
      goto label_61;

    case 7:
      current_block = (Rpc - LABEL_45_14);
      goto label_62;

    case 8:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_45_16);
      goto label_65;

    case 10:
      current_block = (Rpc - LABEL_45_13);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_45_18);
      goto label_66;

    case 12:
      current_block = (Rpc - LABEL_45_20);
      goto lambda_2;

    case 13:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_45_23);
      goto label_67;

    case 15:
      current_block = (Rpc - LABEL_45_24);
      goto label_68;

    case 16:
      current_block = (Rpc - LABEL_45_26);
      goto label_69;

    case 17:
      current_block = (Rpc - LABEL_45_27);
      goto label_70;

    case 18:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_1;

    case 19:
      current_block = (Rpc - LABEL_45_30);
      goto continuation_31;

    case 20:
      current_block = (Rpc - LABEL_45_32);
      goto label_84;

    case 21:
      current_block = (Rpc - LABEL_45_25);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_45_34);
      goto label_71;

    case 23:
      current_block = (Rpc - LABEL_45_35);
      goto label_72;

    case 24:
      current_block = (Rpc - LABEL_45_36);
      goto label_73;

    case 25:
      current_block = (Rpc - LABEL_45_37);
      goto label_74;

    case 26:
      current_block = (Rpc - LABEL_45_38);
      goto label_75;

    case 27:
      current_block = (Rpc - LABEL_45_39);
      goto label_76;

    case 28:
      current_block = (Rpc - LABEL_45_40);
      goto label_77;

    case 29:
      current_block = (Rpc - LABEL_45_41);
      goto label_78;

    case 30:
      current_block = (Rpc - LABEL_45_42);
      goto label_79;

    case 31:
      current_block = (Rpc - LABEL_45_43);
      goto label_80;

    case 32:
      current_block = (Rpc - LABEL_45_47);
      goto label_81;

    case 33:
      current_block = (Rpc - LABEL_45_45);
      goto continuation_32;

    case 34:
      current_block = (Rpc - LABEL_45_49);
      goto label_82;

    case 35:
      current_block = (Rpc - LABEL_45_50);
      goto label_83;

    case 36:
      current_block = (Rpc - LABEL_45_46);
      goto continuation_48;

    case 37:
      current_block = (Rpc - LABEL_45_52);
      goto label_85;

    case 38:
      current_block = (Rpc - LABEL_45_53);
      goto label_86;

    case 39:
      current_block = (Rpc - LABEL_45_48);
      goto continuation_35;

    case 40:
      current_block = (Rpc - LABEL_45_55);
      goto label_87;

    case 41:
      current_block = (Rpc - LABEL_45_56);
      goto label_88;

    case 42:
      current_block = (Rpc - LABEL_45_31);
      goto continuation_38;

    case 43:
      current_block = (Rpc - LABEL_45_58);
      goto label_89;

    case 44:
      current_block = (Rpc - LABEL_45_51);
      goto continuation_51;

    case 45:
      current_block = (Rpc - LABEL_45_59);
      goto label_90;

    case 46:
      current_block = (Rpc - LABEL_45_60);
      goto label_91;

    case 47:
      current_block = (Rpc - LABEL_45_57);
      goto continuation_39;

    case 48:
      current_block = (Rpc - LABEL_45_62);
      goto label_92;

    case 49:
      current_block = (Rpc - LABEL_45_63);
      goto label_93;

    case 50:
      current_block = (Rpc - LABEL_45_64);
      goto label_94;

    case 51:
      current_block = (Rpc - LABEL_45_65);
      goto label_95;

    case 52:
      current_block = (Rpc - LABEL_45_61);
      goto continuation_44;

    case 53:
      current_block = (Rpc - LABEL_45_68);
      goto label_96;

    case 54:
      current_block = (Rpc - LABEL_45_67);
      goto continuation_45;

    case 55:
      current_block = (Rpc - LABEL_45_69);
      goto label_97;

    case 56:
      current_block = (Rpc - LABEL_45_70);
      goto label_98;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (kernel_print_let_expression_100)
DEFLABEL (kernel_print_let_expression_57)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_190;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_189)
  if ((Wrd5.Obj) == (current_block [OBJECT_45_1]))
    goto label_186;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_185;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_184)
  (Wrd70.Obj) = (current_block [OBJECT_45_3]);
  (Wrd73.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd73.Lng))))
    goto label_183;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_182;

DEFLABEL (label_181)
  (Wrd31.Obj) = (current_block [OBJECT_45_5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd41.Lng)))
    goto label_102;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_102)
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_104;
  (Wrd33.Obj) = (current_block [OBJECT_45_7]);
  goto label_103;

DEFLABEL (label_104)
  (Wrd33.Obj) = (current_block [OBJECT_45_6]);

DEFLABEL (label_103)
DEFLABEL (label_180)
  Rsp = (& (Rsp [3]));
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_177;

DEFLABEL (label_176)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_175;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_174)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_173;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_172)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_45_17);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_171;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_171;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_170)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_169;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_169;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_169;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_168)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_167;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_166)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_165;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_164)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_28]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_25);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_163;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_163;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_163;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_162)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_161;
  Wrd20 = Wrd24;

DEFLABEL (label_160)
  Wrd19 = Wrd20;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_159;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd33.Lng) = (Wrd34.Lng);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_159;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_158)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_157;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_157;
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd117.Lng) > (Wrd118.Lng))
    goto label_146;

DEFLABEL (label_145)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_144;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_143)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_142;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_141)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd62.uLng) == 1)
    goto label_114;

DEFLABEL (label_113)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_45]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_45_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_112;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_111)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_110;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_109)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_45_48);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_108;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_107)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_106;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd14.Obj);
  goto lambda_2;

DEFLABEL (label_106)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_56]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_88)
  (Wrd14.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_55]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_87)
  (Wrd5.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_50]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_49]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_82)
  (Wrd10.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_45_8]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_140;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  (Wrd78.Lng) = ((Wrd80.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd78.Lng)))
    goto label_140;
  (Wrd83.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_139)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_138;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_137)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_136;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd93.Obj) = ((Wrd94.pObj) [0]);

DEFLABEL (label_135)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_134;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [1]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_133)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_44]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_45_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (current_block [OBJECT_45_10]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_132;
  Wrd125 = Wrd129;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_45_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_130;
  Wrd9 = Wrd13;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_45_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_128;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_128;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_127)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_126;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_125)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_124;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_123)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_122;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_66]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_45_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_120;
  Wrd9 = Wrd13;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_45_67);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_118;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_117)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_116;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_115)
  (Rsp [0]) = (Wrd14.Obj);
  goto lambda_2;

DEFLABEL (label_116)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_70]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_98)
  (Wrd14.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_69]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_97)
  (Wrd5.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_68])), (Wrd10.pObj));

DEFLABEL (label_96)
  (Wrd9.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_65]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_64]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_94)
  (Wrd27.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_63]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_93)
  (Wrd18.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_62]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_58])), (Wrd10.pObj));

DEFLABEL (label_89)
  (Wrd9.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_32])), (Wrd126.pObj));

DEFLABEL (label_84)
  (Wrd125.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_43]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_42]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_79)
  (Wrd93.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_41]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_78)
  (Wrd84.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.Obj) = (current_block [OBJECT_45_11]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_40]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_39]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_76)
  (Wrd55.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_38]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_75)
  (Wrd46.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_46]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (current_block [OBJECT_45_10]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd112.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd115.Obj) = ((Wrd112.pObj) [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd116.uLng) == 50)
    goto label_156;
  Wrd111 = Wrd115;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd111.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_45_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_154;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_153)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_152;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_54]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_45_51);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_150;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_149)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_148;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_147)
  (Rsp [0]) = (Wrd14.Obj);
  goto lambda_2;

DEFLABEL (label_148)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_60]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_91)
  (Wrd14.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_59]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_53]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_52]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_85)
  (Wrd8.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_47])), (Wrd112.pObj));

DEFLABEL (label_81)
  (Wrd111.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_157)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_37]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_74)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  goto label_146;

DEFLABEL (label_159)
  (Wrd27.Obj) = (current_block [OBJECT_45_8]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_36]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_73)
  (Wrd31.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_35])), (Wrd21.pObj));

DEFLABEL (label_72)
  (Wrd20.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_27]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_69)
  (Wrd30.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_67)
  (Wrd10.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_45_8]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_179;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_178)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (label_179)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_178;

DEFLABEL (label_182)
  Rsp = (& (Rsp [2]));
  goto label_176;

DEFLABEL (label_183)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_181;
  goto label_182;

DEFLABEL (label_185)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_184;

DEFLABEL (label_186)
  (Wrd80.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd80.Obj);
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_188;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [0]);

DEFLABEL (label_187)
  (Rsp [1]) = (Wrd81.Obj);
  Rsp = (& (Rsp [1]));
  goto label_178;

DEFLABEL (label_188)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_64)
  (Wrd81.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_59)
  (Wrd5.Obj) = Rvl;
  goto label_189;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_192;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_191)
  goto lambda_2;

DEFLABEL (label_192)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_177;
  goto label_176;

DEFLABEL (lambda_101)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_45_20);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_45_1])))
    goto label_193;
  Rvl = (current_block [OBJECT_45_9]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_193)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_29]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define LABEL_46_9 9
#define LABEL_46_8 11
#define LABEL_46_11 13
#define LABEL_46_12 15
#define LABEL_46_13 17
#define LABEL_46_14 19
#define LABEL_46_16 21
#define LABEL_46_19 23
#define LABEL_46_15 25
#define LABEL_46_22 27
#define LABEL_46_18 29
#define LABEL_46_23 31
#define LABEL_46_21 33
#define LABEL_46_24 35
#define LABEL_46_25 37
#define LABEL_46_26 39
#define ENVIRONMENT_LABEL_46_3 60
#define DEBUGGING_LABEL_46_2 59
#define OBJECT_46_5 58
#define OBJECT_46_4 57
#define OBJECT_46_3 56
#define OBJECT_46_2 55
#define OBJECT_46_1 54
#define OBJECT_46_0 53
#define EXECUTE_CACHE_46_27 41
#define EXECUTE_CACHE_46_20 43
#define EXECUTE_CACHE_46_17 45
#define EXECUTE_CACHE_46_10 47
#define EXECUTE_CACHE_46_7 49
#define FREE_REFERENCE_46_0 52
#define FREE_REFERENCES_LABEL_46_0 40
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_46_4);
      goto kernel_print_case_expression_19;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_46_11);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_46_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_46_13);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_46_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_46_16);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_46_19);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_46_15);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_46_22);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_46_23);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_46_21);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_46_24);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_46_25);
      goto print_cases_18;

    case 18:
      current_block = (Rpc - LABEL_46_26);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (kernel_print_case_expression_34)
DEFLABEL (kernel_print_case_expression_19)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_61;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_60)
  if ((Wrd5.Obj) == (current_block [OBJECT_46_1]))
    goto label_57;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_56;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_54;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_54;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_54;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_53)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_52;
  Wrd20 = Wrd24;

DEFLABEL (label_51)
  Wrd19 = Wrd20;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_50;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd33.Lng) = (Wrd34.Lng);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_50;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_49)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_48;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_48;
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd74.Lng) > (Wrd75.Lng))
    goto label_43;

DEFLABEL (label_42)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_41;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_41;
  (Wrd61.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_21);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_37;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  goto print_cases_18;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_46_4]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_47;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_45;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_44)
  goto print_cases_18;

DEFLABEL (label_45)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

DEFLABEL (label_50)
  (Wrd27.Obj) = (current_block [OBJECT_46_3]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (Wrd31.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_12])), (Wrd21.pObj));

DEFLABEL (label_25)
  (Wrd20.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd27.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_59;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (label_59)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (print_cases_35)
DEFLABEL (print_cases_18)
  INTERRUPT_CHECK (26, LABEL_46_25);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_46_1])))
    goto label_62;
  Rvl = (current_block [OBJECT_46_5]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_46_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_27]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_8 9
#define LABEL_47_9 11
#define ENVIRONMENT_LABEL_47_3 19
#define DEBUGGING_LABEL_47_2 18
#define OBJECT_47_0 17
#define EXECUTE_CACHE_47_6 13
#define FREE_REFERENCE_47_0 16
#define FREE_REFERENCES_LABEL_47_0 12
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_47_4);
      goto fits_withinP_3;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_47_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fits_withinP_9)
DEFLABEL (fits_withinP_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_20;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_20;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_20;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_19)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_18;
  Wrd20 = Wrd24;

DEFLABEL (label_17)
  Wrd19 = Wrd20;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_16;
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_16;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = ((Wrd36.Lng) - (Wrd38.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd35.Lng)))
    goto label_16;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd39.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_11)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_10;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd46.Lng) > (Wrd48.Lng))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_47_0]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_7)
  (Wrd31.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_8])), (Wrd21.pObj));

DEFLABEL (label_6)
  (Wrd20.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_10 11
#define LABEL_48_9 13
#define LABEL_48_12 15
#define LABEL_48_13 17
#define LABEL_48_14 19
#define LABEL_48_15 21
#define LABEL_48_7 23
#define LABEL_48_16 25
#define LABEL_48_17 27
#define LABEL_48_18 29
#define ENVIRONMENT_LABEL_48_3 40
#define DEBUGGING_LABEL_48_2 39
#define OBJECT_48_3 38
#define OBJECT_48_2 37
#define OBJECT_48_1 36
#define OBJECT_48_0 35
#define EXECUTE_CACHE_48_11 31
#define FREE_REFERENCE_48_0 34
#define FREE_REFERENCES_LABEL_48_0 30
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_48_4);
      goto fits_as_columnP_14;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_48_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_48_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_48_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_48_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_48_15);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_48_16);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_48_17);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_48_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fits_as_columnP_27)
DEFLABEL (fits_as_columnP_14)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (loop_28)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_34)
  if ((Wrd5.Obj) == (current_block [OBJECT_48_1]))
    goto label_32;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_30;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_17)
DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_33;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_29;

DEFLABEL (label_33)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_18)
  goto label_31;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_44;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_44;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_44;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_43)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_42;
  Wrd20 = Wrd24;

DEFLABEL (label_41)
  Wrd19 = Wrd20;
  (Wrd26.Obj) = (* (Rsp++));
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_40;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_40;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if ((Wrd46.Lng) > (Wrd47.Lng))
    goto label_37;

DEFLABEL (label_36)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_39;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd37.Obj);
  goto loop_12;

DEFLABEL (label_39)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_22)
  (Wrd37.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_13])), (Wrd21.pObj));

DEFLABEL (label_20)
  (Wrd20.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_55;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_55;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_55;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_54)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_53;
  Wrd20 = Wrd24;

DEFLABEL (label_52)
  Wrd19 = Wrd20;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_51;
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_51;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = ((Wrd36.Lng) - (Wrd38.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd35.Lng)))
    goto label_51;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));

DEFLABEL (label_50)
  (Rsp [3]) = (Wrd31.Obj);
  (Wrd39.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 26)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_46)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_45;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd46.Lng) > (Wrd48.Lng))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_48_3]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (Wrd31.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_17])), (Wrd21.pObj));

DEFLABEL (label_24)
  (Wrd20.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_6 5
#define LABEL_49_5 7
#define LABEL_49_8 9
#define LABEL_49_9 11
#define LABEL_49_10 13
#define LABEL_49_11 15
#define LABEL_49_12 17
#define ENVIRONMENT_LABEL_49_3 28
#define DEBUGGING_LABEL_49_2 27
#define OBJECT_49_1 26
#define OBJECT_49_0 25
#define EXECUTE_CACHE_49_13 19
#define EXECUTE_CACHE_49_7 21
#define FREE_REFERENCE_49_0 24
#define FREE_REFERENCES_LABEL_49_0 18
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_49_4);
      goto two_on_first_lineP_7;

    case 1:
      current_block = (Rpc - LABEL_49_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_49_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_49_11);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_49_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (two_on_first_lineP_16)
DEFLABEL (two_on_first_lineP_7)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_27;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_27;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_25;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_25;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_25;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_24)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_23;
  Wrd28 = Wrd32;

DEFLABEL (label_22)
  Wrd27 = Wrd28;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_21;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_21;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if ((Wrd56.Lng) > (Wrd58.Lng))
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_20;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd54.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (label_20)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 1);

DEFLABEL (label_14)
  (Wrd45.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_10])), (Wrd29.pObj));

DEFLABEL (label_12)
  (Wrd28.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_6 5
#define LABEL_50_5 7
#define LABEL_50_8 9
#define LABEL_50_9 11
#define ENVIRONMENT_LABEL_50_3 24
#define DEBUGGING_LABEL_50_2 23
#define OBJECT_50_1 22
#define OBJECT_50_0 21
#define EXECUTE_CACHE_50_11 13
#define EXECUTE_CACHE_50_10 15
#define EXECUTE_CACHE_50_7 17
#define FREE_REFERENCE_50_0 20
#define FREE_REFERENCES_LABEL_50_0 12
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_50_4);
      goto tab_to_2;

    case 1:
      current_block = (Rpc - LABEL_50_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tab_to_7)
DEFLABEL (tab_to_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;
  Wrd9 = Wrd13;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_8])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_6])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define ENVIRONMENT_LABEL_51_3 17
#define DEBUGGING_LABEL_51_2 16
#define OBJECT_51_0 15
#define EXECUTE_CACHE_51_8 9
#define EXECUTE_CACHE_51_7 11
#define FREE_REFERENCE_51_0 14
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_51_4);
      goto pad_with_spaces_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pad_with_spaces_5)
DEFLABEL (pad_with_spaces_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_5 3
#define LABEL_52_7 5
#define LABEL_52_4 7
#define LABEL_52_8 9
#define LABEL_52_10 11
#define LABEL_52_11 13
#define LABEL_52_13 15
#define LABEL_52_14 17
#define LABEL_52_17 19
#define LABEL_52_19 21
#define LABEL_52_18 23
#define LABEL_52_21 25
#define LABEL_52_22 27
#define LABEL_52_25 29
#define LABEL_52_15 31
#define LABEL_52_33 33
#define LABEL_52_34 35
#define LABEL_52_28 37
#define LABEL_52_26 39
#define LABEL_52_38 41
#define LABEL_52_39 43
#define LABEL_52_40 45
#define LABEL_52_23 47
#define LABEL_52_32 49
#define LABEL_52_30 51
#define LABEL_52_36 53
#define LABEL_52_42 55
#define LABEL_52_43 57
#define LABEL_52_47 59
#define LABEL_52_49 61
#define LABEL_52_50 63
#define LABEL_52_52 65
#define ENVIRONMENT_LABEL_52_3 118
#define DEBUGGING_LABEL_52_2 117
#define OBJECT_52_8 116
#define OBJECT_52_7 115
#define OBJECT_52_6 114
#define OBJECT_52_5 113
#define OBJECT_52_4 112
#define OBJECT_52_3 111
#define OBJECT_52_2 110
#define OBJECT_52_1 109
#define OBJECT_52_0 108
#define EXECUTE_CACHE_52_53 67
#define EXECUTE_CACHE_52_51 69
#define EXECUTE_CACHE_52_48 71
#define EXECUTE_CACHE_52_46 73
#define EXECUTE_CACHE_52_45 75
#define EXECUTE_CACHE_52_44 77
#define EXECUTE_CACHE_52_41 79
#define EXECUTE_CACHE_52_37 81
#define EXECUTE_CACHE_52_35 83
#define EXECUTE_CACHE_52_31 85
#define EXECUTE_CACHE_52_29 87
#define EXECUTE_CACHE_52_27 89
#define EXECUTE_CACHE_52_24 91
#define EXECUTE_CACHE_52_20 93
#define EXECUTE_CACHE_52_16 95
#define EXECUTE_CACHE_52_12 97
#define EXECUTE_CACHE_52_9 99
#define EXECUTE_CACHE_52_6 101
#define FREE_REFERENCE_52_3 104
#define FREE_REFERENCE_52_2 105
#define FREE_REFERENCE_52_1 106
#define FREE_REFERENCE_52_0 107
#define FREE_REFERENCES_LABEL_52_0 66
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd57;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_52_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_4);
      goto numerical_walk_33;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_24;

    case 5:
      current_block = (Rpc - LABEL_52_11);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_52_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_52_14);
      goto numerical_walk_no_auto_highlight_32;

    case 8:
      current_block = (Rpc - LABEL_52_17);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_52_19);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_52_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_52_21);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_52_22);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_52_25);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_52_15);
      goto continuation_25;

    case 15:
      current_block = (Rpc - LABEL_52_33);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_52_34);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_52_28);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_52_26);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_52_38);
      goto label_46;

    case 20:
      current_block = (Rpc - LABEL_52_39);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_52_40);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_52_23);
      goto continuation_13;

    case 23:
      current_block = (Rpc - LABEL_52_32);
      goto continuation_30;

    case 24:
      current_block = (Rpc - LABEL_52_30);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_52_36);
      goto continuation_20;

    case 26:
      current_block = (Rpc - LABEL_52_42);
      goto continuation_15;

    case 27:
      current_block = (Rpc - LABEL_52_43);
      goto continuation_14;

    case 28:
      current_block = (Rpc - LABEL_52_47);
      goto continuation_19;

    case 29:
      current_block = (Rpc - LABEL_52_49);
      goto label_47;

    case 30:
      current_block = (Rpc - LABEL_52_50);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_52_52);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (numerical_walk_50)
DEFLABEL (numerical_walk_33)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_56;
  Wrd8 = Wrd12;

DEFLABEL (label_55)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_53)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Rsp [1]) = (Wrd21.Obj);

DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  goto numerical_walk_no_auto_highlight_32;

DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_8])), (Wrd9.pObj));

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_55;

DEFLABEL (numerical_walk_no_auto_highlight_51)
DEFLABEL (numerical_walk_no_auto_highlight_32)
  INTERRUPT_CHECK (26, LABEL_52_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_63;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_15]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_16]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_52_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_30]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_31]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_52_30);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_46]));

DEFLABEL (label_58)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_62;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_61)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_60;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_35]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_52_32);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_45]));

DEFLABEL (label_60)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_34]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_7]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_6]), 1);

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_52_0]);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd48.Lng))))
    goto label_100;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_99;

DEFLABEL (label_98)
  (Wrd15.Obj) = (current_block [OBJECT_52_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_64;
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_64)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_66;
  (Wrd17.Obj) = (current_block [OBJECT_52_4]);
  goto label_65;

DEFLABEL (label_66)
  (Wrd17.Obj) = (current_block [OBJECT_52_3]);

DEFLABEL (label_65)
DEFLABEL (label_97)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_90;

DEFLABEL (label_89)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_52_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_52_28);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_36]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_37]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_52_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_48]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_52_47);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_70;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_70;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_70;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_69)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_51]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_52_50);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_68;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_68;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_68;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_67)
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_53]));

DEFLABEL (label_68)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_52]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_48)
  (Wrd12.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 10)
    goto label_80;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_52_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_3]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_76;
  Wrd7 = Wrd11;

DEFLABEL (label_75)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_41]));

DEFLABEL (label_72)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_74;
  Wrd16 = Wrd20;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_40])), (Wrd17.pObj));

DEFLABEL (label_45)
  (Wrd16.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_39])), (Wrd8.pObj));

DEFLABEL (label_44)
  (Wrd7.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_79;
  Wrd22 = Wrd26;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_38])), (Wrd23.pObj));

DEFLABEL (label_46)
  (Wrd22.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  if (! ((Wrd15.uLng) == 10))
    goto label_88;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_87)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_86;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if ((Wrd47.Lng) == 0)
    goto label_83;

DEFLABEL (label_82)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_23]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_52_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_81)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_43]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_44]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_52_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_46]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_52_42);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_52_8]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_45]));

DEFLABEL (label_83)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_85;
  Wrd41 = Wrd45;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_25])), (Wrd42.pObj));

DEFLABEL (label_40)
  (Wrd41.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_22]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (label_88)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_21]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_5]), 1);

DEFLABEL (label_38)
  (Wrd20.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_2]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_96;
  Wrd31 = Wrd35;

DEFLABEL (label_95)
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_92;

DEFLABEL (label_91)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_20]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_52_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_91;
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_94;
  Wrd63 = Wrd67;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_11])), (Wrd64.pObj));

DEFLABEL (label_41)
  (Wrd63.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_19])), (Wrd32.pObj));

DEFLABEL (label_36)
  (Wrd31.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_99)
  Rsp = (& (Rsp [2]));
  goto label_90;

DEFLABEL (label_100)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_17]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_99;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_90;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define TAG_53_6 1
#define LABEL_53_8 7
#define LABEL_53_9 9
#define ENVIRONMENT_LABEL_53_3 19
#define DEBUGGING_LABEL_53_2 18
#define OBJECT_53_0 17
#define EXECUTE_CACHE_53_11 11
#define EXECUTE_CACHE_53_10 13
#define EXECUTE_CACHE_53_7 15
#define FREE_REFERENCES_LABEL_53_0 10
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_53_4);
      goto walk_custom_3;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_custom_6)
DEFLABEL (walk_custom_3)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_8);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_5 3
#define LABEL_54_4 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_8 11
#define LABEL_54_9 13
#define LABEL_54_11 15
#define LABEL_54_12 17
#define LABEL_54_13 19
#define LABEL_54_14 21
#define LABEL_54_15 23
#define LABEL_54_16 25
#define LABEL_54_17 27
#define LABEL_54_18 29
#define LABEL_54_19 31
#define LABEL_54_20 33
#define LABEL_54_21 35
#define LABEL_54_22 37
#define LABEL_54_24 39
#define LABEL_54_26 41
#define LABEL_54_27 43
#define LABEL_54_28 45
#define LABEL_54_31 47
#define LABEL_54_32 49
#define LABEL_54_33 51
#define LABEL_54_34 53
#define LABEL_54_36 55
#define LABEL_54_25 57
#define LABEL_54_39 59
#define LABEL_54_30 61
#define LABEL_54_23 63
#define LABEL_54_38 65
#define ENVIRONMENT_LABEL_54_3 88
#define DEBUGGING_LABEL_54_2 87
#define OBJECT_54_5 86
#define OBJECT_54_4 85
#define OBJECT_54_3 84
#define OBJECT_54_2 83
#define OBJECT_54_1 82
#define OBJECT_54_0 81
#define EXECUTE_CACHE_54_40 67
#define EXECUTE_CACHE_54_37 69
#define EXECUTE_CACHE_54_35 71
#define EXECUTE_CACHE_54_29 73
#define EXECUTE_CACHE_54_10 75
#define FREE_REFERENCE_54_2 78
#define FREE_REFERENCE_54_1 79
#define FREE_REFERENCE_54_0 80
#define FREE_REFERENCES_LABEL_54_0 66
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd155;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd139;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd131;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd170;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd161;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd77;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd184;
  machine_word Wrd191;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd63;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd7;
  machine_word Wrd195;
  machine_word Wrd217;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd212;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd203;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_54_4);
      goto walk_pair_28;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_54_9);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_54_11);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_54_12);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_54_13);
      goto label_50;

    case 9:
      current_block = (Rpc - LABEL_54_14);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_54_15);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_54_16);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_54_17);
      goto loop_25;

    case 13:
      current_block = (Rpc - LABEL_54_18);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_54_19);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_54_20);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_54_21);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_54_22);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_54_24);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_54_26);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_54_27);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_54_28);
      goto label_47;

    case 22:
      current_block = (Rpc - LABEL_54_31);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_54_32);
      goto label_43;

    case 24:
      current_block = (Rpc - LABEL_54_33);
      goto label_44;

    case 25:
      current_block = (Rpc - LABEL_54_34);
      goto label_45;

    case 26:
      current_block = (Rpc - LABEL_54_36);
      goto label_46;

    case 27:
      current_block = (Rpc - LABEL_54_25);
      goto continuation_11;

    case 28:
      current_block = (Rpc - LABEL_54_39);
      goto label_49;

    case 29:
      current_block = (Rpc - LABEL_54_30);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_54_23);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_54_38);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_pair_52)
DEFLABEL (walk_pair_28)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_66;
  Wrd5 = Wrd9;

DEFLABEL (label_65)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_64;
  Wrd13 = Wrd17;

DEFLABEL (label_63)
  Wrd12 = Wrd13;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_62;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_62;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd57.Lng) < (Wrd58.Lng))
    goto label_58;

DEFLABEL (label_61)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_60;
  Wrd28 = Wrd32;

DEFLABEL (label_59)
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_54_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;

DEFLABEL (label_58)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_57;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_57;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_56)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_25;

DEFLABEL (label_57)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_9])), (Wrd29.pObj));

DEFLABEL (label_33)
  (Wrd28.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_58;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_7])), (Wrd14.pObj));

DEFLABEL (label_31)
  (Wrd13.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (loop_53)
DEFLABEL (loop_25)
  DLINK_INTERRUPT_CHECK (25, LABEL_54_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_104;
  Wrd5 = Wrd13;

DEFLABEL (label_103)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd25.Obj) = ((Wrd18.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_102;
  Wrd17 = Wrd25;

DEFLABEL (label_101)
  Wrd16 = Wrd17;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_100;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_100;
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd194.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if ((Wrd193.Lng) < (Wrd194.Lng))
    goto label_95;

DEFLABEL (label_99)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd48.Obj) = ((Wrd41.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_98;
  Wrd40 = Wrd48;

DEFLABEL (label_97)
  if (! ((Wrd40.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_96;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_16]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_16);
  (Wrd195.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd195.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;

DEFLABEL (label_95)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_94;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_93)
  if ((Wrd58.Obj) == (current_block [OBJECT_54_3]))
    goto label_91;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_25]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_90;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd87.Lng) = ((Wrd89.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd87.Lng)))
    goto label_90;
  (Wrd90.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_89)
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_88;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_87)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd100.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  (Wrd101.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_30]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_80;
  Wrd108 = Wrd112;

DEFLABEL (label_79)
  if ((Wrd108.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_78;
  Wrd116 = Wrd120;

DEFLABEL (label_77)
  Wrd115 = Wrd116;
  (Wrd122.Obj) = (Rsp [3]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 26))
    goto label_76;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_76;
  (Wrd157.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if ((Wrd157.Lng) < (Wrd158.Lng))
    goto label_70;

DEFLABEL (label_75)
  (Wrd132.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd135.Obj) = ((Wrd132.pObj) [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if ((Wrd136.uLng) == 50)
    goto label_74;
  Wrd131 = Wrd135;

DEFLABEL (label_73)
  if (! ((Wrd131.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_71;
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd143.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_54_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_70)
  (Wrd144.Obj) = (Rsp [8]);
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd150.Obj) = (Rsp [7]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 1))
    goto label_68;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd149.Obj) = ((Wrd148.pObj) [1]);
  (* (--Rsp)) = (Wrd149.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_37]));

DEFLABEL (label_68)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_36]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_46)
DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  (Wrd139.Obj) = (current_block [OBJECT_54_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_35]));

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_34])), (Wrd132.pObj));

DEFLABEL (label_45)
  (Wrd131.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd125.Obj) = (Rsp [3]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_33]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_70;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_32])), (Wrd117.pObj));

DEFLABEL (label_43)
  (Wrd116.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_31])), (Wrd109.pObj));

DEFLABEL (label_42)
  (Wrd108.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd165.Obj) = (Rsp [4]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 1))
    goto label_86;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [1]);
  (* (--Rsp)) = (Wrd164.Obj);

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_54_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  (Wrd203.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd203.Obj);
  (Wrd207.Obj) = (Rsp [4]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd208.uLng) == 1))
    goto label_84;
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd206.Obj) = ((Wrd205.pObj) [1]);
  (* (--Rsp)) = (Wrd206.Obj);

DEFLABEL (label_83)
  (Wrd214.Obj) = (Rsp [7]);
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd215.pObj)));
  (Rsp [2]) = (Wrd217.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_25;

DEFLABEL (label_84)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_28]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_27]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_41)
  (Wrd91.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_26]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_40)
  (Wrd77.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd77.Obj));
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd172.Obj);
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_23]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (Wrd176.Obj) = (Rsp [4]);
  (Wrd177.pObj) = (OBJECT_ADDRESS (Wrd176.Obj));
  (Wrd178.Obj) = ((Wrd177.pObj) [0]);
  (* (--Rsp)) = (Wrd178.Obj);
  (Wrd182.Obj) = (Rsp [3]);
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if (! ((Wrd183.uLng) == 1))
    goto label_92;
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd181.Obj) = ((Wrd180.pObj) [0]);
  (* (--Rsp)) = (Wrd181.Obj);
  goto label_67;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd172.Obj);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_24]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_4]), 1);

DEFLABEL (label_48)
  (Wrd184.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd184.Obj));
  goto label_69;

DEFLABEL (label_94)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_22]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_39)
  (Wrd63.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd58.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd51.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto label_72;

DEFLABEL (label_98)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_21])), (Wrd41.pObj));

DEFLABEL (label_38)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_37)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_95;

DEFLABEL (label_102)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_19])), (Wrd18.pObj));

DEFLABEL (label_36)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_18])), (Wrd6.pObj));

DEFLABEL (label_35)
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_103;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_54_15);
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_54_30);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_40]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_54_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_38]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_106;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_105)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_37]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_54_38);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_40]));

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_39]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_4]), 1);

DEFLABEL (label_49)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_54_23);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_35]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define ENVIRONMENT_LABEL_55_3 15
#define DEBUGGING_LABEL_55_2 14
#define OBJECT_55_0 13
#define EXECUTE_CACHE_55_7 9
#define FREE_REFERENCE_55_0 12
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_55_4);
      goto no_highlightsP_2;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (no_highlightsP_6)
DEFLABEL (no_highlightsP_2)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_55_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_8 7
#define LABEL_56_5 9
#define LABEL_56_12 11
#define LABEL_56_10 13
#define ENVIRONMENT_LABEL_56_3 25
#define DEBUGGING_LABEL_56_2 24
#define OBJECT_56_2 23
#define OBJECT_56_1 22
#define OBJECT_56_0 21
#define EXECUTE_CACHE_56_11 15
#define EXECUTE_CACHE_56_9 17
#define EXECUTE_CACHE_56_7 19
#define FREE_REFERENCES_LABEL_56_0 14
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_56_4);
      goto partially_highlightedP_8;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_56_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_56_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_56_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (partially_highlightedP_13)
DEFLABEL (partially_highlightedP_8)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_56_1]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 10))
    goto label_16;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_8 11
#define LABEL_57_11 13
#define TAG_57_12 5
#define LABEL_57_14 15
#define LABEL_57_9 17
#define TAG_57_10 7
#define LABEL_57_15 19
#define LABEL_57_16 21
#define LABEL_57_17 23
#define LABEL_57_18 25
#define LABEL_57_19 27
#define LABEL_57_20 29
#define ENVIRONMENT_LABEL_57_3 47
#define DEBUGGING_LABEL_57_2 46
#define OBJECT_57_6 45
#define OBJECT_57_5 44
#define OBJECT_57_4 43
#define OBJECT_57_3 42
#define OBJECT_57_2 41
#define OBJECT_57_1 40
#define OBJECT_57_0 39
#define EXECUTE_CACHE_57_13 31
#define FREE_REFERENCE_57_1 34
#define FREE_REFERENCE_57_0 35
#define FREE_ASSIGNMENT_57_1 37
#define FREE_ASSIGNMENT_57_0 38
#define FREE_REFERENCES_LABEL_57_0 30
#define NUMBER_OF_LINKER_SECTIONS_57_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
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
  machine_word Wrd82;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
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
      current_block = (Rpc - LABEL_57_4);
      goto walk_highlighted_object_26;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_57_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_57_11);
      goto lambda_42;

    case 6:
      current_block = (Rpc - LABEL_57_14);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_57_9);
      goto swapB_41;

    case 8:
      current_block = (Rpc - LABEL_57_15);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_57_16);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_57_17);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_57_18);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_57_19);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_57_20);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_highlighted_object_40)
DEFLABEL (walk_highlighted_object_26)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_53)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_57_2]))
    goto label_50;
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_49)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_48;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd32.Lng))))
    goto label_48;
  (Wrd26.Obj) = ((Wrd30.pObj) [7]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_47)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == (current_block [OBJECT_57_2]))
    goto label_44;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_43)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_9])));
  Rhp += 2;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd67.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd65.pObj) = (& (Rhp [-1]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd65.pObj)));
  (Rsp [1]) = (Wrd66.Obj);
  (Wrd71.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd69.pObj) = (& (Rhp [-1]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd69.pObj)));
  (Rsp [2]) = (Wrd70.Obj);
  Wrd62 = Wrd72;
  ((Wrd62.pObj) [2]) = (Wrd70.Obj);
  ((Wrd62.pObj) [3]) = (Wrd66.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_11])));
  Rhp += 4;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd53 = Wrd46;
  (Wrd54.Obj) = (Rsp [6]);
  ((Wrd53.pObj) [2]) = (Wrd54.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  ((Wrd53.pObj) [3]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  ((Wrd53.pObj) [4]) = (Wrd50.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  ((Wrd53.pObj) [5]) = (Wrd48.Obj);
  (Rsp [5]) = (Wrd45.Obj);
  (Rsp [4]) = (Wrd73.Obj);
  (Rsp [6]) = (Wrd73.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (label_44)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_46;
  Wrd76 = Wrd80;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd76.Obj);
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_8])), (Wrd77.pObj));

DEFLABEL (label_30)
  (Wrd76.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_57_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd86.Obj) = ((Wrd83.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_52;
  Wrd82 = Wrd86;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd82.Obj);
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd83.pObj));

DEFLABEL (label_31)
  (Wrd82.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_57_11);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_59;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_59;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_58)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd30.pObj) [5]);
  if ((Wrd34.Obj) == (current_block [OBJECT_57_2]))
    goto label_56;
  (Wrd36.Obj) = (current_block [OBJECT_57_5]);
  goto label_55;

DEFLABEL (label_56)
  (Wrd36.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_55)
DEFLABEL (label_57)
  (Rsp [2]) = (Wrd36.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_59)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_57_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (swapB_41)
  CLOSURE_HEADER (LABEL_57_9);

DEFLABEL (swapB_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  Wrd5 = Wrd9;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_57_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_72)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_57_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_69)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  Wrd57 = Wrd61;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_57_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_63)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_57_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_60)
  Rvl = (current_block [OBJECT_57_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_62)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_57_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_38)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_57_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_37)
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_67;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_57_18])), (Wrd58.pObj));

DEFLABEL (label_36)
  (Wrd57.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_57_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_35)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_57_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_34)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_57_15])), (Wrd6.pObj));

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 12
#define DEBUGGING_LABEL_58_2 11
#define EXECUTE_CACHE_58_7 7
#define EXECUTE_CACHE_58_6 9
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_58_4);
      goto numerical_walk_avoid_circularities_2;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (numerical_walk_avoid_circularities_5)
DEFLABEL (numerical_walk_avoid_circularities_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_5 3
#define LABEL_59_6 5
#define LABEL_59_8 7
#define LABEL_59_4 9
#define LABEL_59_9 11
#define LABEL_59_10 13
#define LABEL_59_13 15
#define LABEL_59_16 17
#define LABEL_59_14 19
#define LABEL_59_18 21
#define LABEL_59_19 23
#define LABEL_59_22 25
#define LABEL_59_11 27
#define LABEL_59_25 29
#define LABEL_59_23 31
#define LABEL_59_35 33
#define LABEL_59_36 35
#define LABEL_59_37 37
#define LABEL_59_20 39
#define LABEL_59_29 41
#define LABEL_59_30 43
#define LABEL_59_43 45
#define LABEL_59_44 47
#define LABEL_59_31 49
#define LABEL_59_27 51
#define LABEL_59_33 53
#define LABEL_59_39 55
#define LABEL_59_40 57
#define LABEL_59_48 59
#define LABEL_59_51 61
#define LABEL_59_52 63
#define LABEL_59_54 65
#define ENVIRONMENT_LABEL_59_3 122
#define DEBUGGING_LABEL_59_2 121
#define OBJECT_59_9 120
#define OBJECT_59_8 119
#define OBJECT_59_7 118
#define OBJECT_59_6 117
#define OBJECT_59_5 116
#define OBJECT_59_4 115
#define OBJECT_59_3 114
#define OBJECT_59_2 113
#define OBJECT_59_1 112
#define OBJECT_59_0 111
#define EXECUTE_CACHE_59_55 67
#define EXECUTE_CACHE_59_53 69
#define EXECUTE_CACHE_59_50 71
#define EXECUTE_CACHE_59_49 73
#define EXECUTE_CACHE_59_47 75
#define EXECUTE_CACHE_59_46 77
#define EXECUTE_CACHE_59_45 79
#define EXECUTE_CACHE_59_42 81
#define EXECUTE_CACHE_59_41 83
#define EXECUTE_CACHE_59_38 85
#define EXECUTE_CACHE_59_34 87
#define EXECUTE_CACHE_59_32 89
#define EXECUTE_CACHE_59_28 91
#define EXECUTE_CACHE_59_26 93
#define EXECUTE_CACHE_59_24 95
#define EXECUTE_CACHE_59_21 97
#define EXECUTE_CACHE_59_17 99
#define EXECUTE_CACHE_59_15 101
#define EXECUTE_CACHE_59_12 103
#define EXECUTE_CACHE_59_7 105
#define FREE_REFERENCE_59_2 108
#define FREE_REFERENCE_59_1 109
#define FREE_REFERENCE_59_0 110
#define FREE_REFERENCES_LABEL_59_0 66
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd87;
  machine_word Wrd46;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd43;
  machine_word Wrd91;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd99;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd97;
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
      current_block = (Rpc - LABEL_59_5);
      goto continuation_22;

    case 1:
      current_block = (Rpc - LABEL_59_6);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_59_4);
      goto numerical_walk_terminating_33;

    case 4:
      current_block = (Rpc - LABEL_59_9);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_59_10);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_59_13);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_59_16);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_59_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_59_18);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_59_19);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_59_22);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_59_11);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_59_25);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_59_23);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_59_35);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_59_36);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_59_37);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_59_20);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_59_29);
      goto continuation_30;

    case 20:
      current_block = (Rpc - LABEL_59_30);
      goto continuation_29;

    case 21:
      current_block = (Rpc - LABEL_59_43);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_59_44);
      goto label_47;

    case 23:
      current_block = (Rpc - LABEL_59_31);
      goto continuation_28;

    case 24:
      current_block = (Rpc - LABEL_59_27);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_59_33);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_59_39);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_59_40);
      goto continuation_12;

    case 28:
      current_block = (Rpc - LABEL_59_48);
      goto continuation_17;

    case 29:
      current_block = (Rpc - LABEL_59_51);
      goto label_48;

    case 30:
      current_block = (Rpc - LABEL_59_52);
      goto continuation_16;

    case 31:
      current_block = (Rpc - LABEL_59_54);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (numerical_walk_terminating_51)
DEFLABEL (numerical_walk_terminating_33)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_100;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_99)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  ((Wrd27.pObj) [0]) = (Wrd17.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_98;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_97)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  ((Wrd38.pObj) [0]) = (Wrd28.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_58;
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_59_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Rsp [4]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_30]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_31]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_59_8]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_32]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_59_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_46]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_59_30);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_53;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_45]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_59_29);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_42]));

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_43]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_46)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_28]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_59_27);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_47]));

DEFLABEL (label_58)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_59_2]);
  (Wrd82.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd82.Lng))))
    goto label_96;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd79.Obj));
  if ((Wrd46.Obj) == (Wrd40.Obj))
    goto label_95;

DEFLABEL (label_94)
  (Wrd49.Obj) = (current_block [OBJECT_59_4]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd59.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd59.Lng)))
    goto label_59;
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_59)
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd53.Obj) == (Wrd55.Obj))
    goto label_61;
  (Wrd51.Obj) = (current_block [OBJECT_59_6]);
  goto label_60;

DEFLABEL (label_61)
  (Wrd51.Obj) = (current_block [OBJECT_59_5]);

DEFLABEL (label_60)
DEFLABEL (label_93)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd51.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_86;

DEFLABEL (label_85)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_14]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_59_25);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_34]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_59_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_49]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_59_48);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_65;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_65;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_65;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_64)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_52]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_53]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_59_52);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_63;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_63;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_63;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_62)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_55]));

DEFLABEL (label_63)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_54]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_49)
  (Wrd12.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_51]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 10)
    goto label_76;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_59_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_72;
  Wrd7 = Wrd11;

DEFLABEL (label_71)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_38]));

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_70;
  Wrd18 = Wrd22;

DEFLABEL (label_69)
  (Rsp [2]) = (Wrd18.Obj);

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_37])), (Wrd19.pObj));

DEFLABEL (label_44)
  (Wrd18.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_36])), (Wrd8.pObj));

DEFLABEL (label_43)
  (Wrd7.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd25.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_75;
  Wrd27 = Wrd31;

DEFLABEL (label_74)
  (Rsp [2]) = (Wrd27.Obj);
  goto label_68;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_35])), (Wrd28.pObj));

DEFLABEL (label_45)
  (Wrd27.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  if (! ((Wrd13.uLng) == 10))
    goto label_84;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd22.uLng)));

DEFLABEL (label_83)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_82;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd48.Lng) == 0)
    goto label_79;

DEFLABEL (label_78)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_59_20);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_77)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_40]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_41]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_59_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_50]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_59_39);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_59_9]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_42]));

DEFLABEL (label_79)
  (Wrd39.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd39.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_81;
  Wrd41 = Wrd45;

DEFLABEL (label_80)
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_22])), (Wrd42.pObj));

DEFLABEL (label_41)
  (Wrd41.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_19]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_79;

DEFLABEL (label_84)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_7]), 1);

DEFLABEL (label_39)
  (Wrd18.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_92;
  Wrd65 = Wrd69;

DEFLABEL (label_91)
  if ((Wrd65.Obj) == ((SCHEME_OBJECT) 0))
    goto label_88;

DEFLABEL (label_87)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_87;
  (Wrd97.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd97.Obj);
  (Wrd100.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd103.Obj) = ((Wrd100.pObj) [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if ((Wrd104.uLng) == 50)
    goto label_90;
  Wrd99 = Wrd103;

DEFLABEL (label_89)
  (Rsp [2]) = (Wrd99.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd100.pObj));

DEFLABEL (label_42)
  (Wrd99.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_16])), (Wrd66.pObj));

DEFLABEL (label_37)
  (Wrd65.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_95)
  Rsp = (& (Rsp [2]));
  goto label_86;

DEFLABEL (label_96)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_95;

DEFLABEL (label_98)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_36)
  (Wrd28.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_35)
  (Wrd17.Obj) = Rvl;
  goto label_99;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_86;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_5 3
#define LABEL_60_4 5
#define LABEL_60_6 7
#define LABEL_60_7 9
#define LABEL_60_8 11
#define LABEL_60_9 13
#define LABEL_60_11 15
#define LABEL_60_12 17
#define LABEL_60_15 19
#define LABEL_60_16 21
#define LABEL_60_17 23
#define LABEL_60_18 25
#define LABEL_60_19 27
#define LABEL_60_20 29
#define LABEL_60_21 31
#define LABEL_60_22 33
#define LABEL_60_23 35
#define LABEL_60_24 37
#define LABEL_60_28 39
#define LABEL_60_30 41
#define LABEL_60_31 43
#define LABEL_60_32 45
#define LABEL_60_35 47
#define LABEL_60_36 49
#define LABEL_60_37 51
#define LABEL_60_38 53
#define LABEL_60_42 55
#define LABEL_60_29 57
#define LABEL_60_47 59
#define LABEL_60_34 61
#define LABEL_60_40 63
#define LABEL_60_49 65
#define LABEL_60_50 67
#define LABEL_60_51 69
#define LABEL_60_53 71
#define LABEL_60_41 73
#define LABEL_60_55 75
#define LABEL_60_25 77
#define LABEL_60_26 79
#define LABEL_60_57 81
#define LABEL_60_58 83
#define LABEL_60_59 85
#define LABEL_60_60 87
#define LABEL_60_27 89
#define LABEL_60_61 91
#define LABEL_60_44 93
#define LABEL_60_45 95
#define LABEL_60_62 97
#define LABEL_60_63 99
#define LABEL_60_64 101
#define LABEL_60_65 103
#define LABEL_60_46 105
#define LABEL_60_66 107
#define LABEL_60_13 109
#define LABEL_60_67 111
#define LABEL_60_68 113
#define LABEL_60_71 115
#define LABEL_60_72 117
#define LABEL_60_14 119
#define LABEL_60_73 121
#define LABEL_60_69 123
#define LABEL_60_70 125
#define ENVIRONMENT_LABEL_60_3 159
#define DEBUGGING_LABEL_60_2 158
#define OBJECT_60_8 157
#define OBJECT_60_7 156
#define OBJECT_60_6 155
#define OBJECT_60_5 154
#define OBJECT_60_4 153
#define OBJECT_60_3 152
#define OBJECT_60_2 151
#define OBJECT_60_1 150
#define OBJECT_60_0 149
#define EXECUTE_CACHE_60_74 127
#define EXECUTE_CACHE_60_56 129
#define EXECUTE_CACHE_60_54 131
#define EXECUTE_CACHE_60_52 133
#define EXECUTE_CACHE_60_48 135
#define EXECUTE_CACHE_60_43 137
#define EXECUTE_CACHE_60_39 139
#define EXECUTE_CACHE_60_33 141
#define EXECUTE_CACHE_60_10 143
#define FREE_REFERENCE_60_2 146
#define FREE_REFERENCE_60_1 147
#define FREE_REFERENCE_60_0 148
#define FREE_REFERENCES_LABEL_60_0 126
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd15;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd139;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd131;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd174;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd165;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd77;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd196;
  machine_word Wrd203;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd184;
  machine_word Wrd179;
  machine_word Wrd176;
  machine_word Wrd63;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd7;
  machine_word Wrd207;
  machine_word Wrd230;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_60_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_60_4);
      goto walk_pair_terminating_66;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_68;

    case 3:
      current_block = (Rpc - LABEL_60_7);
      goto label_69;

    case 4:
      current_block = (Rpc - LABEL_60_8);
      goto label_70;

    case 5:
      current_block = (Rpc - LABEL_60_9);
      goto label_71;

    case 6:
      current_block = (Rpc - LABEL_60_11);
      goto label_72;

    case 7:
      current_block = (Rpc - LABEL_60_12);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_60_15);
      goto label_93;

    case 9:
      current_block = (Rpc - LABEL_60_16);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_60_17);
      goto continuation_27;

    case 11:
      current_block = (Rpc - LABEL_60_18);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_60_19);
      goto loop_63;

    case 13:
      current_block = (Rpc - LABEL_60_20);
      goto label_73;

    case 14:
      current_block = (Rpc - LABEL_60_21);
      goto label_74;

    case 15:
      current_block = (Rpc - LABEL_60_22);
      goto label_75;

    case 16:
      current_block = (Rpc - LABEL_60_23);
      goto label_76;

    case 17:
      current_block = (Rpc - LABEL_60_24);
      goto label_77;

    case 18:
      current_block = (Rpc - LABEL_60_28);
      goto label_86;

    case 19:
      current_block = (Rpc - LABEL_60_30);
      goto label_78;

    case 20:
      current_block = (Rpc - LABEL_60_31);
      goto label_79;

    case 21:
      current_block = (Rpc - LABEL_60_32);
      goto label_85;

    case 22:
      current_block = (Rpc - LABEL_60_35);
      goto label_80;

    case 23:
      current_block = (Rpc - LABEL_60_36);
      goto label_81;

    case 24:
      current_block = (Rpc - LABEL_60_37);
      goto label_82;

    case 25:
      current_block = (Rpc - LABEL_60_38);
      goto label_83;

    case 26:
      current_block = (Rpc - LABEL_60_42);
      goto label_84;

    case 27:
      current_block = (Rpc - LABEL_60_29);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_60_47);
      goto label_87;

    case 29:
      current_block = (Rpc - LABEL_60_34);
      goto continuation_38;

    case 30:
      current_block = (Rpc - LABEL_60_40);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_60_49);
      goto label_88;

    case 32:
      current_block = (Rpc - LABEL_60_50);
      goto label_89;

    case 33:
      current_block = (Rpc - LABEL_60_51);
      goto label_91;

    case 34:
      current_block = (Rpc - LABEL_60_53);
      goto label_90;

    case 35:
      current_block = (Rpc - LABEL_60_41);
      goto continuation_30;

    case 36:
      current_block = (Rpc - LABEL_60_55);
      goto label_92;

    case 37:
      current_block = (Rpc - LABEL_60_25);
      goto continuation_56;

    case 38:
      current_block = (Rpc - LABEL_60_26);
      goto continuation_55;

    case 39:
      current_block = (Rpc - LABEL_60_57);
      goto label_94;

    case 40:
      current_block = (Rpc - LABEL_60_58);
      goto label_95;

    case 41:
      current_block = (Rpc - LABEL_60_59);
      goto label_97;

    case 42:
      current_block = (Rpc - LABEL_60_60);
      goto label_96;

    case 43:
      current_block = (Rpc - LABEL_60_27);
      goto continuation_54;

    case 44:
      current_block = (Rpc - LABEL_60_61);
      goto label_98;

    case 45:
      current_block = (Rpc - LABEL_60_44);
      goto continuation_12;

    case 46:
      current_block = (Rpc - LABEL_60_45);
      goto continuation_11;

    case 47:
      current_block = (Rpc - LABEL_60_62);
      goto label_99;

    case 48:
      current_block = (Rpc - LABEL_60_63);
      goto label_100;

    case 49:
      current_block = (Rpc - LABEL_60_64);
      goto label_102;

    case 50:
      current_block = (Rpc - LABEL_60_65);
      goto label_101;

    case 51:
      current_block = (Rpc - LABEL_60_46);
      goto continuation_10;

    case 52:
      current_block = (Rpc - LABEL_60_66);
      goto label_103;

    case 53:
      current_block = (Rpc - LABEL_60_13);
      goto continuation_42;

    case 54:
      current_block = (Rpc - LABEL_60_67);
      goto label_104;

    case 55:
      current_block = (Rpc - LABEL_60_68);
      goto label_105;

    case 56:
      current_block = (Rpc - LABEL_60_71);
      goto label_107;

    case 57:
      current_block = (Rpc - LABEL_60_72);
      goto label_106;

    case 58:
      current_block = (Rpc - LABEL_60_14);
      goto continuation_41;

    case 59:
      current_block = (Rpc - LABEL_60_73);
      goto label_108;

    case 60:
      current_block = (Rpc - LABEL_60_69);
      goto continuation_49;

    case 61:
      current_block = (Rpc - LABEL_60_70);
      goto continuation_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_pair_terminating_110)
DEFLABEL (walk_pair_terminating_66)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_124;
  Wrd5 = Wrd9;

DEFLABEL (label_123)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_122;
  Wrd13 = Wrd17;

DEFLABEL (label_121)
  Wrd12 = Wrd13;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_120;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_120;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd58.Lng) < (Wrd59.Lng))
    goto label_116;

DEFLABEL (label_119)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_118;
  Wrd28 = Wrd32;

DEFLABEL (label_117)
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_113;

DEFLABEL (label_112)
  Rvl = (current_block [OBJECT_60_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;

DEFLABEL (label_116)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_115;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_115;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_114)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_60_1]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd55.Obj);
  Rdl = (& (Rsp [8]));
  goto loop_63;

DEFLABEL (label_115)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_9])), (Wrd29.pObj));

DEFLABEL (label_71)
  (Wrd28.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_70)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  goto label_116;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_7])), (Wrd14.pObj));

DEFLABEL (label_69)
  (Wrd13.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd6.pObj));

DEFLABEL (label_68)
  (Wrd5.Obj) = Rvl;
  goto label_123;

DEFLABEL (loop_111)
DEFLABEL (loop_63)
  DLINK_INTERRUPT_CHECK (25, LABEL_60_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_161;
  Wrd5 = Wrd13;

DEFLABEL (label_160)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_152;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd25.Obj) = ((Wrd18.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_159;
  Wrd17 = Wrd25;

DEFLABEL (label_158)
  Wrd16 = Wrd17;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_157;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_157;
  (Wrd205.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd206.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if ((Wrd205.Lng) < (Wrd206.Lng))
    goto label_152;

DEFLABEL (label_156)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd48.Obj) = ((Wrd41.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_155;
  Wrd40 = Wrd48;

DEFLABEL (label_154)
  if (! ((Wrd40.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_153;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_18]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_60_18);
  (Wrd207.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd207.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;

DEFLABEL (label_152)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_151;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_150)
  if ((Wrd58.Obj) == (current_block [OBJECT_60_4]))
    goto label_148;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_29]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_147;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd87.Lng) = ((Wrd89.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd87.Lng)))
    goto label_147;
  (Wrd90.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_146)
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_145;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_144)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd100.uLng) == 1)
    goto label_140;

DEFLABEL (label_139)
  (Wrd101.Obj) = (current_block [OBJECT_60_6]);
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_34]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_138;
  Wrd108 = Wrd112;

DEFLABEL (label_137)
  if ((Wrd108.Obj) == ((SCHEME_OBJECT) 0))
    goto label_128;
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_136;
  Wrd116 = Wrd120;

DEFLABEL (label_135)
  Wrd115 = Wrd116;
  (Wrd122.Obj) = (Rsp [3]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 26))
    goto label_134;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_134;
  (Wrd161.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  (Wrd162.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if ((Wrd161.Lng) < (Wrd162.Lng))
    goto label_128;

DEFLABEL (label_133)
  (Wrd132.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd135.Obj) = ((Wrd132.pObj) [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if ((Wrd136.uLng) == 50)
    goto label_132;
  Wrd131 = Wrd135;

DEFLABEL (label_131)
  if (! ((Wrd131.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_129;
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_16]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd143.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_60_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_129;

DEFLABEL (label_128)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_40]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_41]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (Wrd150.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd154.Obj) = (Rsp [11]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_126;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [1]);
  (* (--Rsp)) = (Wrd153.Obj);

DEFLABEL (label_125)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_43]));

DEFLABEL (label_126)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_42]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_84)
DEFLABEL (label_127)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_129)
  (Wrd139.Obj) = (current_block [OBJECT_60_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_130)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_39]));

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_38])), (Wrd132.pObj));

DEFLABEL (label_83)
  (Wrd131.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd125.Obj) = (Rsp [3]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_37]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  goto label_128;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_36])), (Wrd117.pObj));

DEFLABEL (label_81)
  (Wrd116.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_35])), (Wrd109.pObj));

DEFLABEL (label_80)
  (Wrd108.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd169.Obj) = (Rsp [4]);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_143;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [1]);
  (* (--Rsp)) = (Wrd168.Obj);

DEFLABEL (label_142)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_33]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_60_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_139;
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd217.Obj);
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (Wrd221.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd221.Obj);
  (Wrd225.Obj) = (Rsp [8]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if (! ((Wrd226.uLng) == 1))
    goto label_141;
  (Wrd223.pObj) = (OBJECT_ADDRESS (Wrd225.Obj));
  (Wrd224.Obj) = ((Wrd223.pObj) [1]);
  (* (--Rsp)) = (Wrd224.Obj);
  goto label_125;

DEFLABEL (label_141)
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd230.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_93)
  goto label_127;

DEFLABEL (label_143)
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_32]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_31]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_79)
  (Wrd91.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_30]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_78)
  (Wrd77.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd77.Obj));
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (label_148)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_25]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_26]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_27]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (Wrd190.Obj) = (current_block [OBJECT_60_5]);
  (* (--Rsp)) = (Wrd190.Obj);
  (Wrd194.Obj) = (Rsp [9]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 1))
    goto label_149;
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [1]);
  (* (--Rsp)) = (Wrd193.Obj);
  goto label_125;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd203.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_28]))));
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_86)
  (Wrd196.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd196.Obj));
  goto label_127;

DEFLABEL (label_151)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_24]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_77)
  (Wrd63.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd58.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd51.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto label_130;

DEFLABEL (label_155)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_23])), (Wrd41.pObj));

DEFLABEL (label_76)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_22]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_75)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_152;

DEFLABEL (label_159)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_21])), (Wrd18.pObj));

DEFLABEL (label_74)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_20])), (Wrd6.pObj));

DEFLABEL (label_73)
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_160;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_60_41);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [10]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_172;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_171)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_56]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_60_40);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [7]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_170;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_169)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_168;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_167)
  (Wrd23.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd23.Obj))
    goto label_164;
  (Wrd24.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [8]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_163;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_162)
  (Wrd35.Obj) = (Rsp [12]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);
  (Rsp [2]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_54]));

DEFLABEL (label_163)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_53]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_162;

DEFLABEL (label_164)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_166;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_165)
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_52]));

DEFLABEL (label_166)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_51]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_91)
  (Wrd37.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_50]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_89)
  (Wrd14.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_55]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_60_17);
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_60_34);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_48]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_60_14);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [7]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_183;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_182)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_56]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_60_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_181;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_180)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_179;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_178)
  (Wrd23.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd23.Obj))
    goto label_175;
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_174;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_173)
  (Wrd35.Obj) = (Rsp [9]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd36.pObj)));
  (Rsp [3]) = (Wrd38.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_63;

DEFLABEL (label_174)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_72]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_173;

DEFLABEL (label_175)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_69]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_70]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_177;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_176)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_52]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_60_70);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_74]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_60_69);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_39]));

DEFLABEL (label_177)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_71]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_107)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_68]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_105)
  (Wrd14.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_67]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_73]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_182;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_60_29);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_44]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_46]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_60_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [10]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_196;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_195)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_43]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_60_46);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [8]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_194;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_193)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_56]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_60_45);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_192;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_191)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_190;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_189)
  (Wrd25.Obj) = (* (Rsp++));
  if ((Wrd16.Obj) == (Wrd25.Obj))
    goto label_186;
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_185;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_184)
  (Wrd37.Obj) = (Rsp [9]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Rsp [2]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_54]));

DEFLABEL (label_185)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_65]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_101)
  (* (--Rsp)) = Rvl;
  goto label_184;

DEFLABEL (label_186)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_188;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_187)
  (Rsp [0]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_52]));

DEFLABEL (label_188)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_64]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_102)
  (Wrd39.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_63]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_100)
  (Wrd16.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_62]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_66]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_103)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_47]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_87)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_195;

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_60_27);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_207;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_206)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_56]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_60_26);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_205;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_204)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_203;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_202)
  (Wrd25.Obj) = (* (Rsp++));
  if ((Wrd16.Obj) == (Wrd25.Obj))
    goto label_199;
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_198;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_197)
  (Wrd37.Obj) = (Rsp [8]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Rsp [2]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_54]));

DEFLABEL (label_198)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_60]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_197;

DEFLABEL (label_199)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_201;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_200)
  (Rsp [0]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_52]));

DEFLABEL (label_201)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_59]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_97)
  (Wrd39.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_58]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_95)
  (Wrd16.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_57]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_61]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_7]), 1);

DEFLABEL (label_98)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_206;

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_60_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_39]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_60_44);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_48]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_5 3
#define LABEL_61_4 5
#define LABEL_61_6 7
#define LABEL_61_7 9
#define LABEL_61_8 11
#define LABEL_61_9 13
#define LABEL_61_11 15
#define LABEL_61_12 17
#define LABEL_61_13 19
#define LABEL_61_14 21
#define LABEL_61_15 23
#define LABEL_61_16 25
#define LABEL_61_17 27
#define LABEL_61_19 29
#define LABEL_61_23 31
#define LABEL_61_26 33
#define LABEL_61_28 35
#define LABEL_61_25 37
#define LABEL_61_33 39
#define LABEL_61_34 41
#define LABEL_61_35 43
#define LABEL_61_27 45
#define LABEL_61_36 47
#define LABEL_61_38 49
#define LABEL_61_39 51
#define LABEL_61_40 53
#define LABEL_61_41 55
#define LABEL_61_42 57
#define LABEL_61_20 59
#define LABEL_61_21 61
#define LABEL_61_44 63
#define LABEL_61_45 65
#define LABEL_61_46 67
#define LABEL_61_48 69
#define LABEL_61_22 71
#define LABEL_61_49 73
#define LABEL_61_30 75
#define LABEL_61_31 77
#define LABEL_61_52 79
#define LABEL_61_53 81
#define LABEL_61_54 83
#define LABEL_61_55 85
#define LABEL_61_32 87
#define LABEL_61_56 89
#define LABEL_61_37 91
#define ENVIRONMENT_LABEL_61_3 120
#define DEBUGGING_LABEL_61_2 119
#define OBJECT_61_5 118
#define OBJECT_61_4 117
#define OBJECT_61_3 116
#define OBJECT_61_2 115
#define OBJECT_61_1 114
#define OBJECT_61_0 113
#define EXECUTE_CACHE_61_51 93
#define EXECUTE_CACHE_61_50 95
#define EXECUTE_CACHE_61_47 97
#define EXECUTE_CACHE_61_43 99
#define EXECUTE_CACHE_61_29 101
#define EXECUTE_CACHE_61_24 103
#define EXECUTE_CACHE_61_18 105
#define EXECUTE_CACHE_61_10 107
#define FREE_REFERENCE_61_2 110
#define FREE_REFERENCE_61_1 111
#define FREE_REFERENCE_61_0 112
#define FREE_REFERENCES_LABEL_61_0 92
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd37;
  machine_word Wrd67;
  machine_word Wrd15;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd77;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd132;
  machine_word Wrd141;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd112;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd7;
  machine_word Wrd145;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_61_4);
      goto walk_vector_terminating_46;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto label_48;

    case 3:
      current_block = (Rpc - LABEL_61_7);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_61_8);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_61_9);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_61_11);
      goto label_52;

    case 7:
      current_block = (Rpc - LABEL_61_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_61_13);
      goto loop_43;

    case 9:
      current_block = (Rpc - LABEL_61_14);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_61_15);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_61_16);
      goto label_55;

    case 12:
      current_block = (Rpc - LABEL_61_17);
      goto label_56;

    case 13:
      current_block = (Rpc - LABEL_61_19);
      goto label_57;

    case 14:
      current_block = (Rpc - LABEL_61_23);
      goto label_60;

    case 15:
      current_block = (Rpc - LABEL_61_26);
      goto label_58;

    case 16:
      current_block = (Rpc - LABEL_61_28);
      goto label_59;

    case 17:
      current_block = (Rpc - LABEL_61_25);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_61_33);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_61_34);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_61_35);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_61_27);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_61_36);
      goto label_67;

    case 23:
      current_block = (Rpc - LABEL_61_38);
      goto label_62;

    case 24:
      current_block = (Rpc - LABEL_61_39);
      goto label_63;

    case 25:
      current_block = (Rpc - LABEL_61_40);
      goto label_64;

    case 26:
      current_block = (Rpc - LABEL_61_41);
      goto label_65;

    case 27:
      current_block = (Rpc - LABEL_61_42);
      goto label_66;

    case 28:
      current_block = (Rpc - LABEL_61_20);
      goto continuation_36;

    case 29:
      current_block = (Rpc - LABEL_61_21);
      goto continuation_35;

    case 30:
      current_block = (Rpc - LABEL_61_44);
      goto label_68;

    case 31:
      current_block = (Rpc - LABEL_61_45);
      goto label_69;

    case 32:
      current_block = (Rpc - LABEL_61_46);
      goto label_71;

    case 33:
      current_block = (Rpc - LABEL_61_48);
      goto label_70;

    case 34:
      current_block = (Rpc - LABEL_61_22);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_61_49);
      goto label_72;

    case 36:
      current_block = (Rpc - LABEL_61_30);
      goto continuation_13;

    case 37:
      current_block = (Rpc - LABEL_61_31);
      goto continuation_12;

    case 38:
      current_block = (Rpc - LABEL_61_52);
      goto label_73;

    case 39:
      current_block = (Rpc - LABEL_61_53);
      goto label_74;

    case 40:
      current_block = (Rpc - LABEL_61_54);
      goto label_76;

    case 41:
      current_block = (Rpc - LABEL_61_55);
      goto label_75;

    case 42:
      current_block = (Rpc - LABEL_61_32);
      goto continuation_11;

    case 43:
      current_block = (Rpc - LABEL_61_56);
      goto label_77;

    case 44:
      current_block = (Rpc - LABEL_61_37);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_vector_terminating_79)
DEFLABEL (walk_vector_terminating_46)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_93;
  Wrd5 = Wrd9;

DEFLABEL (label_92)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_85;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_91;
  Wrd13 = Wrd17;

DEFLABEL (label_90)
  Wrd12 = Wrd13;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_89;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_89;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd57.Lng) < (Wrd58.Lng))
    goto label_85;

DEFLABEL (label_88)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_87;
  Wrd28 = Wrd32;

DEFLABEL (label_86)
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_81)
  Rvl = (current_block [OBJECT_61_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_85)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_84;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_84;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_83)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_61_1]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  Rdl = (& (Rsp [7]));
  goto loop_43;

DEFLABEL (label_84)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_9])), (Wrd29.pObj));

DEFLABEL (label_51)
  (Wrd28.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  goto label_85;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_7])), (Wrd14.pObj));

DEFLABEL (label_49)
  (Wrd13.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_6])), (Wrd6.pObj));

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_92;

DEFLABEL (loop_80)
DEFLABEL (loop_43)
  DLINK_INTERRUPT_CHECK (25, LABEL_61_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_140;
  Wrd5 = Wrd13;

DEFLABEL (label_139)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_132;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd25.Obj) = ((Wrd18.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_138;
  Wrd17 = Wrd25;

DEFLABEL (label_137)
  Wrd16 = Wrd17;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_136;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_136;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if ((Wrd143.Lng) < (Wrd144.Lng))
    goto label_132;

DEFLABEL (label_135)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd48.Obj) = ((Wrd41.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_134;
  Wrd40 = Wrd48;

DEFLABEL (label_133)
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_95;

DEFLABEL (label_94)
  (Wrd51.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (label_95)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_61_12);
  (Wrd145.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd145.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;

DEFLABEL (label_132)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_131;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_130)
  (Wrd71.Obj) = (current_block [OBJECT_61_3]);
  if ((Wrd58.Obj) == (Wrd71.Obj))
    goto label_116;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_25]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_115;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd87.Lng) = ((Wrd89.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd87.Lng)))
    goto label_115;
  (Wrd90.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_114)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_27]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd97.Obj) = (Rsp [4]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_113;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [1]);
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_112)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_29]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_61_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd7.Obj) = (current_block [OBJECT_61_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_108;
  Wrd14 = Wrd18;

DEFLABEL (label_107)
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_99;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_106;
  Wrd22 = Wrd26;

DEFLABEL (label_105)
  Wrd21 = Wrd22;
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_104;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_104;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if ((Wrd66.Lng) < (Wrd67.Lng))
    goto label_99;

DEFLABEL (label_103)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_102;
  Wrd37 = Wrd41;

DEFLABEL (label_101)
  if (! ((Wrd37.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_34]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_61_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;

DEFLABEL (label_99)
  (Wrd50.Obj) = (Rsp [8]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = ((Wrd51.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd59.Obj) = (Rsp [8]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_98;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [1]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_97)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_43]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_61_35);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_96)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_61_37);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_51]));

DEFLABEL (label_98)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_42]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd45.Obj) = (current_block [OBJECT_61_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd45.Obj);
  goto label_96;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_41])), (Wrd38.pObj));

DEFLABEL (label_65)
  (Wrd37.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_40]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_99;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_39])), (Wrd23.pObj));

DEFLABEL (label_63)
  (Wrd22.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_38])), (Wrd15.pObj));

DEFLABEL (label_62)
  (Wrd14.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd68.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_111;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [1]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_110)
  (Wrd79.Obj) = (Rsp [7]);
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd80.pObj)));
  (Rsp [2]) = (Wrd82.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_43;

DEFLABEL (label_111)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_36]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_28]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_26]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_58)
  (Wrd77.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd77.Obj));
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_20]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_21]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_22]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd121.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd128.Obj) = (Rsp [9]);
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [2]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_129;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [1]);
  (* (--Rsp)) = (Wrd127.Obj);

DEFLABEL (label_128)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_24]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_61_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_127;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_126)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_50]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_61_21);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_125;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_124)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_123;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_122)
  (Wrd25.Obj) = (* (Rsp++));
  if ((Wrd16.Obj) == (Wrd25.Obj))
    goto label_119;
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_118;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_117)
  (Wrd37.Obj) = (Rsp [7]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Rsp [2]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_43]));

DEFLABEL (label_118)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_48]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_119)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_121;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_120)
  (Rsp [0]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_47]));

DEFLABEL (label_121)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_46]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_71)
  (Wrd39.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_45]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_69)
  (Wrd16.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_44]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_49]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_72)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_23]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_60)
  (Wrd132.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd132.Obj));
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_19]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_57)
  (Wrd63.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd58.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_134)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_17])), (Wrd41.pObj));

DEFLABEL (label_56)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_55)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;
  goto label_132;

DEFLABEL (label_138)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_15])), (Wrd18.pObj));

DEFLABEL (label_54)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_14])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_139;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_61_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_30]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (Wrd26.Obj) = (current_block [OBJECT_61_3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd32.Obj) = (Rsp [10]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_153;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_152)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_61_32);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [8]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_151;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_150)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_50]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_61_31);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_149;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_148)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_147;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_146)
  (Wrd25.Obj) = (* (Rsp++));
  if ((Wrd16.Obj) == (Wrd25.Obj))
    goto label_143;
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_142;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_141)
  (Wrd37.Obj) = (Rsp [8]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Rsp [2]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_43]));

DEFLABEL (label_142)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_55]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_143)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_145;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_144)
  (Rsp [0]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_47]));

DEFLABEL (label_145)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_54]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_76)
  (Wrd39.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_53]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_74)
  (Wrd16.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_52]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_56]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_5]), 1);

DEFLABEL (label_77)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_33]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_61)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_61_20);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_61_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_51]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_6 7
#define LABEL_62_7 9
#define LABEL_62_10 11
#define LABEL_62_8 13
#define LABEL_62_12 15
#define LABEL_62_14 17
#define LABEL_62_15 19
#define LABEL_62_16 21
#define LABEL_62_17 23
#define LABEL_62_18 25
#define LABEL_62_11 27
#define ENVIRONMENT_LABEL_62_3 40
#define DEBUGGING_LABEL_62_2 39
#define OBJECT_62_3 38
#define OBJECT_62_2 37
#define OBJECT_62_1 36
#define OBJECT_62_0 35
#define EXECUTE_CACHE_62_13 29
#define EXECUTE_CACHE_62_9 31
#define FREE_REFERENCE_62_0 34
#define FREE_REFERENCES_LABEL_62_0 28
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd82;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd64;
  machine_word Wrd14;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_62_4);
      goto advance_15;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_62_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_62_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_62_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_62_14);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_62_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_62_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_62_17);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_62_18);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (advance_27)
DEFLABEL (advance_15)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_56;
  if ((Wrd6.uLng) == 1)
    goto label_29;
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);

DEFLABEL (label_28)
  (Wrd64.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_55;
  Wrd15 = Wrd19;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_53;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_52)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd30.Obj)))
    goto label_48;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_62_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_12);
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_47;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd82.Lng) < 0)
    goto label_36;

DEFLABEL (label_35)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_34;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 2);

DEFLABEL (label_31)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_30;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_30;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd32.pObj) = (& ((Wrd38.pObj) [(Wrd29.Lng)]));
  (Wrd6.Obj) = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_32)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_46;
  if ((Wrd43.Obj) == (current_block [OBJECT_62_3]))
    goto label_42;

DEFLABEL (label_41)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_40;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd60.uLng) == 1)
    goto label_37;
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 1);

DEFLABEL (label_37)
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd6.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  goto label_32;

DEFLABEL (label_40)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 1);

DEFLABEL (label_23)
  (Wrd47.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_45;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [0]) = (Wrd61.Obj);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd74.uLng) == 1)
    goto label_43;
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_0]), 1);

DEFLABEL (label_43)
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd6.Obj) = ((Wrd72.pObj) [0]);
  goto label_38;

DEFLABEL (label_45)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_18]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 1);

DEFLABEL (label_24)
  (Wrd61.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd76.Obj) = (current_block [OBJECT_62_3]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_16]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_47)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

DEFLABEL (label_48)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_51;
  Wrd32 = Wrd36;

DEFLABEL (label_50)
  (Wrd41.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd41.Obj);

DEFLABEL (label_49)
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd66.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  goto label_28;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_10])), (Wrd33.pObj));

DEFLABEL (label_19)
  (Wrd32.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_0]), 1);

DEFLABEL (label_18)
  (Wrd21.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_6])), (Wrd16.pObj));

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_58;
  Wrd52 = Wrd56;

DEFLABEL (label_57)
  (Wrd61.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  goto label_49;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_5])), (Wrd53.pObj));

DEFLABEL (label_20)
  (Wrd52.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (Wrd6.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_9 9
#define LABEL_63_13 11
#define LABEL_63_12 13
#define LABEL_63_15 15
#define LABEL_63_10 17
#define LABEL_63_16 19
#define LABEL_63_7 21
#define LABEL_63_17 23
#define ENVIRONMENT_LABEL_63_3 37
#define DEBUGGING_LABEL_63_2 36
#define OBJECT_63_4 35
#define OBJECT_63_3 34
#define OBJECT_63_2 33
#define OBJECT_63_1 32
#define OBJECT_63_0 31
#define EXECUTE_CACHE_63_14 25
#define EXECUTE_CACHE_63_11 27
#define EXECUTE_CACHE_63_8 29
#define FREE_REFERENCES_LABEL_63_0 24
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_63_4);
      goto update_queue_13;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto uq_iter_12;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_63_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_63_13);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_63_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_63_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_63_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_63_17);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_queue_22)
DEFLABEL (update_queue_13)
  INTERRUPT_CHECK (26, LABEL_63_4);
  goto uq_iter_12;

DEFLABEL (uq_iter_23)
DEFLABEL (uq_iter_12)
  INTERRUPT_CHECK (26, LABEL_63_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_63_0])))
    goto label_24;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_37)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_63_2])))
    goto label_27;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_63_7);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_26;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd6.Obj);
  goto uq_iter_12;

DEFLABEL (label_26)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_4]), 1);

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_36;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_35)
  if (! ((Wrd17.Obj) == (current_block [OBJECT_63_3])))
    goto label_30;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd6.Obj);
  goto uq_iter_12;

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_4]), 1);

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_34;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_63_12);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_32;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd6.Obj);
  goto uq_iter_12;

DEFLABEL (label_32)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_4]), 1);

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 1);

DEFLABEL (label_16)
  (Wrd17.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 1);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 9
#define DEBUGGING_LABEL_64_2 8
#define OBJECT_64_0 7
#define EXECUTE_CACHE_64_5 5
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto add_car_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_car_3)
DEFLABEL (add_car_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 9
#define DEBUGGING_LABEL_65_2 8
#define OBJECT_65_0 7
#define EXECUTE_CACHE_65_5 5
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto add_cdr_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_cdr_3)
DEFLABEL (add_cdr_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_65_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 8
#define DEBUGGING_LABEL_66_2 7
#define EXECUTE_CACHE_66_5 5
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto add_vector_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_vector_ref_3)
DEFLABEL (add_vector_ref_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define ENVIRONMENT_LABEL_67_3 11
#define DEBUGGING_LABEL_67_2 10
#define OBJECT_67_0 9
#define EXECUTE_CACHE_67_6 7
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_67_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_67_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 6
#define DEBUGGING_LABEL_68_2 5
#define OBJECT_68_0 4
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  Rvl = (current_block [OBJECT_68_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto queue_cons_cell_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue_cons_cell_3)
DEFLABEL (queue_cons_cell_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_69_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

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

#define LABEL_70_4 3
#define ENVIRONMENT_LABEL_70_3 7
#define DEBUGGING_LABEL_70_2 6
#define OBJECT_70_1 5
#define OBJECT_70_0 4
#define FREE_REFERENCES_LABEL_70_0 4
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto queue_past_cdrs_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue_past_cdrs_3)
DEFLABEL (queue_past_cdrs_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_70_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

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

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 8
#define DEBUGGING_LABEL_71_2 7
#define OBJECT_71_2 6
#define OBJECT_71_1 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_71_4);
      goto set_queue_cons_cellB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_queue_cons_cellB_3)
DEFLABEL (set_queue_cons_cellB_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_71_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_71_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 8
#define DEBUGGING_LABEL_72_2 7
#define OBJECT_72_2 6
#define OBJECT_72_1 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_72_4);
      goto set_queue_past_cdrsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_queue_past_cdrsB_3)
DEFLABEL (set_queue_past_cdrsB_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_72_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define LABEL_73_7 9
#define ENVIRONMENT_LABEL_73_3 17
#define DEBUGGING_LABEL_73_2 16
#define OBJECT_73_3 15
#define OBJECT_73_2 14
#define OBJECT_73_1 13
#define OBJECT_73_0 12
#define FREE_REFERENCE_73_0 11
#define FREE_REFERENCES_LABEL_73_0 10
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_73_4);
      goto queueP_4;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_73_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queueP_10)
DEFLABEL (queueP_4)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_73_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_73_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_7 7
#define LABEL_74_8 9
#define ENVIRONMENT_LABEL_74_3 17
#define DEBUGGING_LABEL_74_2 16
#define OBJECT_74_0 15
#define EXECUTE_CACHE_74_6 11
#define FREE_REFERENCE_74_0 14
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_74_4);
      goto fluid_vector_extend_3;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_74_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_74_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fluid_vector_extend_8)
DEFLABEL (fluid_vector_extend_3)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  Wrd8 = Wrd9;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_10;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_10;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_10;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd22.pObj) = (& ((Wrd29.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  ((Wrd22.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  Rvl = ((Wrd17.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 3);

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_7])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_7 9
#define LABEL_75_8 11
#define LABEL_75_9 13
#define LABEL_75_10 15
#define ENVIRONMENT_LABEL_75_3 25
#define DEBUGGING_LABEL_75_2 24
#define OBJECT_75_2 23
#define OBJECT_75_1 22
#define OBJECT_75_0 21
#define EXECUTE_CACHE_75_11 17
#define FREE_REFERENCE_75_0 20
#define FREE_REFERENCES_LABEL_75_0 16
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_75_4);
      goto fluid_vector_setB_4;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_75_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_75_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_75_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fluid_vector_setB_13)
DEFLABEL (fluid_vector_setB_4)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_28;
  Wrd12 = Wrd16;

DEFLABEL (label_27)
  Wrd11 = Wrd12;
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_26;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_26;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_26;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd22.pObj) = (& ((Wrd26.pObj) [(Wrd19.Lng)]));
  (Wrd18.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_25)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  ((Wrd37.pObj) [0]) = (Wrd18.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_24;
  Wrd39 = Wrd43;

DEFLABEL (label_23)
  Wrd38 = Wrd39;
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_22;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_22;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if ((Wrd98.Lng) < (Wrd99.Lng))
    goto label_19;

DEFLABEL (label_18)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [0]);
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_17;
  Wrd58 = Wrd62;

DEFLABEL (label_16)
  Wrd57 = Wrd58;
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_15;
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_15;
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd73.Lng) = ((Wrd75.Lng) - (Wrd76.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd73.Lng)))
    goto label_15;
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd73.Lng));

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd69.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_11]));

DEFLABEL (label_15)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (Wrd69.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_9])), (Wrd59.pObj));

DEFLABEL (label_10)
  (Wrd58.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 3);

DEFLABEL (label_21)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_20;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) (Wrd89.Lng)) < ((unsigned long) (Wrd93.Lng))))
    goto label_20;
  (Wrd80.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  (Wrd83.pObj) = (& ((Wrd91.pObj) [(Wrd80.Lng)]));
  (Wrd84.Obj) = (Rsp [2]);
  ((Wrd83.pObj) [1]) = (Wrd84.Obj);
  Rvl = (current_block [OBJECT_75_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_7])), (Wrd40.pObj));

DEFLABEL (label_8)
  (Wrd39.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 2);

DEFLABEL (label_7)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_5])), (Wrd13.pObj));

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 12
#define DEBUGGING_LABEL_76_2 11
#define EXECUTE_CACHE_76_6 7
#define FREE_REFERENCE_76_0 10
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto make_fluid_vector_0;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_fluid_vector_4)
DEFLABEL (make_fluid_vector_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_7 9
#define LABEL_77_9 11
#define LABEL_77_11 13
#define LABEL_77_12 15
#define LABEL_77_14 17
#define LABEL_77_10 19
#define LABEL_77_15 21
#define LABEL_77_16 23
#define LABEL_77_17 25
#define LABEL_77_18 27
#define LABEL_77_19 29
#define LABEL_77_20 31
#define LABEL_77_21 33
#define LABEL_77_22 35
#define LABEL_77_24 37
#define LABEL_77_8 39
#define LABEL_77_26 41
#define LABEL_77_27 43
#define ENVIRONMENT_LABEL_77_3 60
#define DEBUGGING_LABEL_77_2 59
#define OBJECT_77_5 58
#define OBJECT_77_4 57
#define OBJECT_77_3 56
#define OBJECT_77_2 55
#define OBJECT_77_1 54
#define OBJECT_77_0 53
#define EXECUTE_CACHE_77_25 45
#define EXECUTE_CACHE_77_23 47
#define EXECUTE_CACHE_77_13 49
#define FREE_REFERENCE_77_0 52
#define FREE_REFERENCES_LABEL_77_0 44
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd104;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_77_4);
      goto queue_cons_27;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_77_7);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_77_9);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_77_11);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_77_12);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_77_14);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_77_10);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_77_15);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_77_16);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_77_17);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_77_18);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_77_19);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_77_20);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_77_21);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_77_22);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_77_24);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_77_8);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_77_26);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_77_27);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue_cons_47)
DEFLABEL (queue_cons_27)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_59)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_58;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_57)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_56;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_55)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (Wrd40.Obj))
    goto label_53;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_52;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_51)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_49;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_13]));

DEFLABEL (label_49)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 1);

DEFLABEL (label_33)
DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_77_4]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_54;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_48;

DEFLABEL (label_54)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 1);

DEFLABEL (label_34)
  goto label_50;

DEFLABEL (label_56)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_77_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_77_10);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_80;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_80;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_79)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_78;
  Wrd22 = Wrd26;

DEFLABEL (label_77)
  Wrd21 = Wrd22;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_76;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd33.Lng) = ((Wrd34.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_76;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_75)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_74;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_73)
  (Wrd45.Obj) = (* (Rsp++));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_72;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_72;
  if ((Wrd36.Obj) == (Wrd45.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_67;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_66)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_65;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [0]);

DEFLABEL (label_64)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_63;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd78.Lng) = ((Wrd79.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd78.Lng)))
    goto label_63;
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));

DEFLABEL (label_62)
  (Wrd80.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd80.Obj);

DEFLABEL (label_61)
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd87.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Rsp [3]) = (Wrd84.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_23]));

DEFLABEL (label_63)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_22]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_42)
  (Wrd76.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_21]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_41)
  (Wrd63.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_20]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_14]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd95.Obj) = (Rsp [1]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_71;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [1]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_77_14);
  (Wrd104.Obj) = (current_block [OBJECT_77_4]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = Rvl;
  goto label_61;

DEFLABEL (label_71)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_24]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_19]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_74)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_18]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 1);

DEFLABEL (label_38)
  (Wrd36.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_16])), (Wrd23.pObj));

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_77_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_79;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_77_8);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_84;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_84;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_83)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_82;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_81)
  (Wrd33.Obj) = (current_block [OBJECT_77_0]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_23]));

DEFLABEL (label_82)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_27]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 1);

DEFLABEL (label_45)
  (Wrd21.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_77_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_83;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define LABEL_78_8 11
#define ENVIRONMENT_LABEL_78_3 18
#define DEBUGGING_LABEL_78_2 17
#define OBJECT_78_4 16
#define OBJECT_78_3 15
#define OBJECT_78_2 14
#define OBJECT_78_1 13
#define OBJECT_78_0 12
#define FREE_REFERENCES_LABEL_78_0 12
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd82;
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_78_4);
      goto queue_car_5;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_78_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue_car_12)
DEFLABEL (queue_car_5)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_22;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_21)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_20;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd35.pObj) [0]) = (Wrd27.Obj);
  (Wrd43.Obj) = ((Wrd35.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_18;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_16;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd51.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd51.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd82.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_4]), 2);

DEFLABEL (label_14)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_13;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) (Wrd76.Lng)) < ((unsigned long) (Wrd80.Lng))))
    goto label_13;
  (Wrd68.uLng) = (OBJECT_DATUM (Wrd73.Obj));
  (Wrd71.pObj) = (& ((Wrd78.pObj) [(Wrd68.Lng)]));
  Rvl = ((Wrd71.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_10)
  (Wrd51.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 1);

DEFLABEL (label_9)
  (Wrd36.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 1);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_78_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_6 7
#define LABEL_79_7 9
#define LABEL_79_8 11
#define LABEL_79_9 13
#define LABEL_79_10 15
#define LABEL_79_11 17
#define LABEL_79_12 19
#define LABEL_79_13 21
#define LABEL_79_14 23
#define LABEL_79_15 25
#define LABEL_79_16 27
#define LABEL_79_17 29
#define LABEL_79_18 31
#define LABEL_79_20 33
#define LABEL_79_22 35
#define LABEL_79_23 37
#define LABEL_79_24 39
#define LABEL_79_19 41
#define ENVIRONMENT_LABEL_79_3 58
#define DEBUGGING_LABEL_79_2 57
#define OBJECT_79_7 56
#define OBJECT_79_6 55
#define OBJECT_79_5 54
#define OBJECT_79_4 53
#define OBJECT_79_3 52
#define OBJECT_79_2 51
#define OBJECT_79_1 50
#define OBJECT_79_0 49
#define EXECUTE_CACHE_79_25 43
#define EXECUTE_CACHE_79_21 45
#define FREE_REFERENCE_79_0 48
#define FREE_REFERENCES_LABEL_79_0 42
#define NUMBER_OF_LINKER_SECTIONS_79_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd199;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd183;
  machine_word Wrd186;
  machine_word Wrd184;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd192;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd144;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd121;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd104;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_79_4);
      goto queue_cdr_19;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_79_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_79_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_79_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_79_9);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_79_10);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_79_11);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_79_12);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_79_13);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_79_14);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_79_15);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_79_16);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_79_17);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_79_18);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_79_20);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_79_22);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_79_23);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_79_24);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_79_19);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue_cdr_39)
DEFLABEL (queue_cdr_19)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_77;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_77;
  (Wrd17.Obj) = ((Wrd23.pObj) [2]);

DEFLABEL (label_76)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_74)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  ((Wrd41.pObj) [0]) = (Wrd33.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_73;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_73;
  (Wrd42.Obj) = ((Wrd48.pObj) [2]);

DEFLABEL (label_72)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_71;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_70)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  ((Wrd66.pObj) [0]) = (Wrd58.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd72.Obj) = ((Wrd69.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_69;
  Wrd68 = Wrd72;

DEFLABEL (label_68)
  Wrd67 = Wrd68;
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd78.uLng) == 26))
    goto label_67;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd79.Lng) = ((Wrd80.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd79.Lng)))
    goto label_67;
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd79.Lng));
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_66)
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_65;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd82.Obj) = ((Wrd86.pObj) [0]);

DEFLABEL (label_64)
  (Wrd97.Obj) = (* (Rsp++));
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd98.uLng) == 26))
    goto label_63;
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_63;
  if ((Wrd82.Obj) == (Wrd97.Obj))
    goto label_56;

DEFLABEL (label_55)
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_54;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [1]);
  (* (--Rsp)) = (Wrd110.Obj);

DEFLABEL (label_53)
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_52;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd121.Obj) = ((Wrd125.pObj) [0]);

DEFLABEL (label_51)
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd141.uLng) == 26))
    goto label_50;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  (Wrd142.Lng) = ((Wrd143.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd142.Lng)))
    goto label_50;
  (Wrd140.Obj) = (LONG_TO_FIXNUM (Wrd142.Lng));

DEFLABEL (label_49)
  (Wrd144.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd144.Obj);

DEFLABEL (label_48)
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (Wrd151.Obj) = (Rsp [1]);
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd153.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Rsp [1]) = (Wrd148.Obj);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_19]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_20]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd160.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd160.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_79_20);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_47;
  if (Rvl == (current_block [OBJECT_79_6]))
    goto label_43;

DEFLABEL (label_42)
  (Wrd5.Obj) = (current_block [OBJECT_79_5]);

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_40)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_25]));

DEFLABEL (label_43)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_46;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_45)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_44;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd33.Lng) = ((Wrd34.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_44;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  goto label_41;

DEFLABEL (label_44)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_79_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_23]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd36.Obj) = (current_block [OBJECT_79_6]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_22]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

DEFLABEL (label_50)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_15]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_31)
  (Wrd140.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_14]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_30)
  (Wrd121.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_62;
  Wrd161 = Wrd165;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd172.Obj) = (Rsp [1]);
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd172.Obj));
  (Wrd174.Obj) = ((Wrd173.pObj) [0]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd175.uLng) == 1))
    goto label_60;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd167.Obj) = ((Wrd171.pObj) [1]);

DEFLABEL (label_59)
  (Wrd182.Obj) = (* (Rsp++));
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd192.uLng) == 10))
    goto label_58;
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if (! ((Wrd187.uLng) == 26))
    goto label_58;
  (Wrd188.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  (Wrd189.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd190.Obj) = ((Wrd189.pObj) [0]);
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd190.Obj));
  if (! (((unsigned long) (Wrd188.Lng)) < ((unsigned long) (Wrd191.Lng))))
    goto label_58;
  (Wrd184.uLng) = (OBJECT_DATUM (Wrd182.Obj));
  (Wrd186.pObj) = (& ((Wrd189.pObj) [(Wrd184.Lng)]));
  (Wrd183.Obj) = ((Wrd186.pObj) [1]);

DEFLABEL (label_57)
  (Wrd200.Obj) = (current_block [OBJECT_79_5]);
  (* (Rhp++)) = (Wrd200.Obj);
  (* (Rhp++)) = (Wrd183.Obj);
  goto label_48;

DEFLABEL (label_58)
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_18]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_4]), 2);

DEFLABEL (label_34)
  (Wrd183.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_17]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 1);

DEFLABEL (label_33)
  (Wrd167.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_16])), (Wrd162.pObj));

DEFLABEL (label_32)
  (Wrd161.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_12]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_65)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_27)
  (Wrd82.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_9])), (Wrd69.pObj));

DEFLABEL (label_25)
  (Wrd68.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 1);

DEFLABEL (label_24)
  (Wrd58.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Obj) = (current_block [OBJECT_79_0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_23)
  (Wrd42.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_22)
  (Wrd33.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (current_block [OBJECT_79_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_21)
  (Wrd17.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_79_19);
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define LABEL_80_7 9
#define ENVIRONMENT_LABEL_80_3 16
#define DEBUGGING_LABEL_80_2 15
#define OBJECT_80_4 14
#define OBJECT_80_3 13
#define OBJECT_80_2 12
#define OBJECT_80_1 11
#define OBJECT_80_0 10
#define FREE_REFERENCES_LABEL_80_0 10
#define NUMBER_OF_LINKER_SECTIONS_80_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
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
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_80_4);
      goto null_queueP_4;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (null_queueP_10)
DEFLABEL (null_queueP_4)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd28.pObj) [0]) = (Wrd11.Obj);
  (Wrd36.Obj) = ((Wrd28.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_17;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_15;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd44.Obj) = ((Wrd48.pObj) [0]);

DEFLABEL (label_14)
  (Wrd59.Obj) = (* (Rsp++));
  if ((Wrd44.Obj) == (Wrd59.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_80_4]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_3]), 1);

DEFLABEL (label_8)
  (Wrd44.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_80_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_6 7
#define LABEL_81_7 9
#define LABEL_81_9 11
#define LABEL_81_10 13
#define LABEL_81_11 15
#define LABEL_81_12 17
#define LABEL_81_8 19
#define LABEL_81_13 21
#define LABEL_81_17 23
#define LABEL_81_18 25
#define LABEL_81_19 27
#define LABEL_81_20 29
#define LABEL_81_21 31
#define LABEL_81_23 33
#define LABEL_81_24 35
#define LABEL_81_25 37
#define LABEL_81_26 39
#define LABEL_81_27 41
#define LABEL_81_28 43
#define LABEL_81_30 45
#define LABEL_81_31 47
#define LABEL_81_16 49
#define LABEL_81_34 51
#define LABEL_81_14 53
#define LABEL_81_22 55
#define LABEL_81_29 57
#define LABEL_81_32 59
#define LABEL_81_33 61
#define ENVIRONMENT_LABEL_81_3 82
#define DEBUGGING_LABEL_81_2 81
#define OBJECT_81_9 80
#define OBJECT_81_8 79
#define OBJECT_81_7 78
#define OBJECT_81_6 77
#define OBJECT_81_5 76
#define OBJECT_81_4 75
#define OBJECT_81_3 74
#define OBJECT_81_2 73
#define OBJECT_81_1 72
#define OBJECT_81_0 71
#define EXECUTE_CACHE_81_36 63
#define EXECUTE_CACHE_81_35 65
#define EXECUTE_CACHE_81_15 67
#define FREE_REFERENCE_81_0 70
#define FREE_REFERENCES_LABEL_81_0 62
#define NUMBER_OF_LINKER_SECTIONS_81_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd99;
  machine_word Wrd7;
  machine_word Wrd100;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd6;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_81_4);
      goto queue_depth_36;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_81_6);
      goto label_39;

    case 3:
      current_block = (Rpc - LABEL_81_7);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_81_9);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_81_10);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_81_11);
      goto label_43;

    case 7:
      current_block = (Rpc - LABEL_81_12);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_81_8);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_81_13);
      goto flatten_18;

    case 10:
      current_block = (Rpc - LABEL_81_17);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_81_18);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_81_19);
      goto proc_list_iter_35;

    case 13:
      current_block = (Rpc - LABEL_81_20);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_81_21);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_81_23);
      goto label_49;

    case 16:
      current_block = (Rpc - LABEL_81_24);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_81_25);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_81_26);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_81_27);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_81_28);
      goto label_53;

    case 21:
      current_block = (Rpc - LABEL_81_30);
      goto label_54;

    case 22:
      current_block = (Rpc - LABEL_81_31);
      goto label_55;

    case 23:
      current_block = (Rpc - LABEL_81_16);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_81_34);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_81_14);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_81_22);
      goto continuation_33;

    case 27:
      current_block = (Rpc - LABEL_81_29);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_81_32);
      goto continuation_14;

    case 29:
      current_block = (Rpc - LABEL_81_33);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue_depth_59)
DEFLABEL (queue_depth_36)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_75;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_75;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_74)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_73;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_72)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_71;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_70)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_69;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_68)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_67;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_66)
  (Wrd63.Obj) = (Rsp [4]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_65;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_64)
  (Wrd72.Obj) = (Rsp [5]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_63;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [1]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_62)
  goto flatten_18;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_81_8);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto proc_list_iter_35;

DEFLABEL (label_63)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_11]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_81_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_74;

DEFLABEL (flatten_60)
DEFLABEL (flatten_18)
  INTERRUPT_CHECK (26, LABEL_81_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_76;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_14]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_81_14);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_35]));

DEFLABEL (label_76)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_81_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_82;
  Wrd14 = Wrd18;

DEFLABEL (label_81)
  Wrd13 = Wrd14;
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_80;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_80;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_80;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd23.pObj) = (& ((Wrd28.pObj) [(Wrd20.Lng)]));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_79)
  goto flatten_18;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_81_16);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_32]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_78;
  Wrd12 = Wrd16;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_81_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_35]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_81_32);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_36]));

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_34])), (Wrd13.pObj));

DEFLABEL (label_57)
  (Wrd12.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_5]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_17])), (Wrd15.pObj));

DEFLABEL (label_45)
  (Wrd14.Obj) = Rvl;
  goto label_81;

DEFLABEL (proc_list_iter_61)
DEFLABEL (proc_list_iter_35)
  INTERRUPT_CHECK (26, LABEL_81_19);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_81_6]))
    goto label_105;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_104;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_103)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_102;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd99.Lng) < 0)
    goto label_89;

DEFLABEL (label_88)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_87;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_86)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_84;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_83)
  goto proc_list_iter_35;

DEFLABEL (label_84)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_50)
DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_87)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_101;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);

DEFLABEL (label_100)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_99;
  if ((Wrd43.Obj) == (current_block [OBJECT_81_8]))
    goto label_95;

DEFLABEL (label_94)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_93;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_92)
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_91;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_90)
  (Rsp [0]) = (Wrd63.Obj);
  goto label_83;

DEFLABEL (label_91)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_28]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_53)
  (Wrd63.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_27]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_52)
  (Wrd54.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_29]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_98;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_97)
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_96;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [1]);
  (* (--Rsp)) = (Wrd86.Obj);
  goto label_83;

DEFLABEL (label_96)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_31]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_55)
  goto label_85;

DEFLABEL (label_98)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_30]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd94.Obj) = (current_block [OBJECT_81_8]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_26]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_95;

DEFLABEL (label_101)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_25]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_51)
  (Wrd43.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_102)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  goto label_89;

DEFLABEL (label_104)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_47)
  (Wrd7.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd100.Obj) = (Rsp [1]);
  if ((Wrd100.Obj) == (current_block [OBJECT_81_7]))
    goto label_107;
  Rvl = (current_block [OBJECT_81_4]);
  goto label_106;

DEFLABEL (label_107)
  Rvl = (current_block [OBJECT_81_0]);

DEFLABEL (label_106)
DEFLABEL (label_108)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_81_22);
  (Wrd8.Obj) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_81_7]))
    goto label_110;
  (Wrd7.Obj) = (current_block [OBJECT_81_0]);
  goto label_109;

DEFLABEL (label_110)
  (Wrd7.Obj) = (current_block [OBJECT_81_9]);

DEFLABEL (label_109)
DEFLABEL (label_113)
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd11.uLng) == 26)
    goto label_112;

DEFLABEL (label_111)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_112)
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_111;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_111;
  Rvl = (LONG_TO_FIXNUM (Wrd14.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_81_29);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_115;

DEFLABEL (label_114)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_115)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd11.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd9.Lng)))
    goto label_114;
  Rvl = (LONG_TO_FIXNUM (Wrd9.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_7 5
#define LABEL_82_8 7
#define LABEL_82_5 9
#define LABEL_82_9 11
#define LABEL_82_10 13
#define LABEL_82_11 15
#define LABEL_82_13 17
#define LABEL_82_14 19
#define LABEL_82_15 21
#define LABEL_82_12 23
#define LABEL_82_16 25
#define ENVIRONMENT_LABEL_82_3 47
#define DEBUGGING_LABEL_82_2 46
#define OBJECT_82_10 45
#define OBJECT_82_9 44
#define OBJECT_82_8 43
#define OBJECT_82_7 42
#define OBJECT_82_6 41
#define OBJECT_82_5 40
#define OBJECT_82_4 39
#define OBJECT_82_3 38
#define OBJECT_82_2 37
#define OBJECT_82_1 36
#define OBJECT_82_0 35
#define EXECUTE_CACHE_82_19 27
#define EXECUTE_CACHE_82_18 29
#define EXECUTE_CACHE_82_17 31
#define EXECUTE_CACHE_82_6 33
#define FREE_REFERENCES_LABEL_82_0 26
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd77;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd47;
  machine_word Wrd68;
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
      current_block = (Rpc - LABEL_82_4);
      goto circularity_string_12;

    case 1:
      current_block = (Rpc - LABEL_82_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_82_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_82_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_82_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_82_11);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_82_13);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_82_14);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_82_15);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_82_12);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_82_16);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (circularity_string_21)
DEFLABEL (circularity_string_12)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_39;
  if ((Wrd24.Obj) == (current_block [OBJECT_82_2]))
    goto label_38;

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_36;
  if ((Wrd28.Obj) == (current_block [OBJECT_82_0]))
    goto label_25;

DEFLABEL (label_24)
  (Wrd32.Obj) = (current_block [OBJECT_82_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_23;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_23;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_17]));

DEFLABEL (label_23)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd47.Obj) = (current_block [OBJECT_82_4]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_33;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if ((Wrd77.Lng) == 0)
    goto label_32;

DEFLABEL (label_31)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_30;
  if ((Wrd58.Obj) == (current_block [OBJECT_82_2]))
    goto label_27;

DEFLABEL (label_26)
  (Wrd62.Obj) = (current_block [OBJECT_82_6]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd66.Obj);
  goto label_22;

DEFLABEL (label_27)
  (Wrd68.Obj) = (current_block [OBJECT_82_7]);

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_18]));

DEFLABEL (label_30)
  (Wrd70.Obj) = (current_block [OBJECT_82_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_15]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (label_32)
  (Wrd68.Obj) = (current_block [OBJECT_82_8]);
  goto label_29;

DEFLABEL (label_33)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_14]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_36)
  (Wrd79.Obj) = (current_block [OBJECT_82_0]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_11]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_38)
  (Wrd47.Obj) = (current_block [OBJECT_82_5]);
  goto label_35;

DEFLABEL (label_39)
  (Wrd86.Obj) = (current_block [OBJECT_82_2]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_82_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_82_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_82_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_82_8);
  (Wrd47.Obj) = Rvl;
  goto label_34;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_82_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_82_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_82_7);
  (Wrd68.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_6 7
#define TAG_83_7 2
#define ENVIRONMENT_LABEL_83_3 15
#define DEBUGGING_LABEL_83_2 14
#define OBJECT_83_0 13
#define EXECUTE_CACHE_83_9 9
#define EXECUTE_CACHE_83_8 11
#define FREE_REFERENCES_LABEL_83_0 8
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_83_4);
      goto symbol_length_2;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_83_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (symbol_length_5)
DEFLABEL (symbol_length_2)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [0]) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 30))
    goto label_7;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_83_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_9]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define ENVIRONMENT_LABEL_84_3 12
#define DEBUGGING_LABEL_84_2 11
#define EXECUTE_CACHE_84_6 7
#define FREE_REFERENCE_84_0 10
#define FREE_REFERENCES_LABEL_84_0 6
#define NUMBER_OF_LINKER_SECTIONS_84_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto Z__unparse_symbol_0;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_symbol_4)
DEFLABEL (Z__unparse_symbol_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 7
#define DEBUGGING_LABEL_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto prefix_node_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefix_node_size_3)
DEFLABEL (prefix_node_size_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

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

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 7
#define DEBUGGING_LABEL_86_2 6
#define OBJECT_86_1 5
#define OBJECT_86_0 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto prefix_node_prefix_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefix_node_prefix_3)
DEFLABEL (prefix_node_prefix_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

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

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 7
#define DEBUGGING_LABEL_87_2 6
#define OBJECT_87_1 5
#define OBJECT_87_0 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto prefix_node_subnode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefix_node_subnode_3)
DEFLABEL (prefix_node_subnode_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

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

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define ENVIRONMENT_LABEL_88_3 17
#define DEBUGGING_LABEL_88_2 16
#define OBJECT_88_3 15
#define OBJECT_88_2 14
#define OBJECT_88_1 13
#define OBJECT_88_0 12
#define FREE_REFERENCE_88_0 11
#define FREE_REFERENCES_LABEL_88_0 10
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_88_4);
      goto prefix_nodeP_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefix_nodeP_10)
DEFLABEL (prefix_nodeP_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_88_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_88_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_6 5
#define LABEL_89_11 7
#define LABEL_89_10 9
#define LABEL_89_12 11
#define LABEL_89_8 13
#define LABEL_89_14 15
#define LABEL_89_15 17
#define ENVIRONMENT_LABEL_89_3 34
#define DEBUGGING_LABEL_89_2 33
#define OBJECT_89_3 32
#define OBJECT_89_2 31
#define OBJECT_89_1 30
#define OBJECT_89_0 29
#define EXECUTE_CACHE_89_16 19
#define EXECUTE_CACHE_89_13 21
#define EXECUTE_CACHE_89_9 23
#define EXECUTE_CACHE_89_7 25
#define EXECUTE_CACHE_89_5 27
#define FREE_REFERENCES_LABEL_89_0 18
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_89_4);
      goto make_prefix_node_8;

    case 1:
      current_block = (Rpc - LABEL_89_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_89_11);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_89_10);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_89_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_89_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_89_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_89_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_prefix_node_15)
DEFLABEL (make_prefix_node_8)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_89_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_89_8);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_20;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_19)
  (Wrd16.Obj) = (* (Rsp++));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_18;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_18;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_18;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_16]));

DEFLABEL (label_18)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_3]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_25;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_25;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_24)
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_89_10);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_23;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_23;
  (Wrd6.Obj) = ((Wrd12.pObj) [4]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_13]));

DEFLABEL (label_23)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_89_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_89_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define LABEL_90_7 9
#define LABEL_90_9 11
#define LABEL_90_10 13
#define ENVIRONMENT_LABEL_90_3 20
#define DEBUGGING_LABEL_90_2 19
#define OBJECT_90_1 18
#define OBJECT_90_0 17
#define EXECUTE_CACHE_90_8 15
#define FREE_REFERENCES_LABEL_90_0 14
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_90_4);
      goto make_list_node_6;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_90_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_90_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_list_node_13)
DEFLABEL (make_list_node_6)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_20)
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_18)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_17;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_17;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_17;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_16)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_15;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_15;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_14)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_7 7
#define ENVIRONMENT_LABEL_91_3 14
#define DEBUGGING_LABEL_91_2 13
#define OBJECT_91_1 12
#define OBJECT_91_0 11
#define EXECUTE_CACHE_91_6 9
#define FREE_REFERENCES_LABEL_91_0 8
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_91_4);
      goto make_singleton_list_node_3;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_91_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_singleton_list_node_7)
DEFLABEL (make_singleton_list_node_3)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_9;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd16.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_9;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_91_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd6.Obj) = (current_block [OBJECT_91_0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define ENVIRONMENT_LABEL_92_3 6
#define DEBUGGING_LABEL_92_2 5
#define OBJECT_92_0 4
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_92_4);
      goto list_nodeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_nodeP_3)
DEFLABEL (list_nodeP_0)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 1)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_92_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define ENVIRONMENT_LABEL_93_3 6
#define DEBUGGING_LABEL_93_2 5
#define OBJECT_93_0 4
#define FREE_REFERENCES_LABEL_93_0 4
#define NUMBER_OF_LINKER_SECTIONS_93_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_93_4);
      goto list_node_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_node_size_3)
DEFLABEL (list_node_size_0)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define ENVIRONMENT_LABEL_94_3 6
#define DEBUGGING_LABEL_94_2 5
#define OBJECT_94_0 4
#define FREE_REFERENCES_LABEL_94_0 4
#define NUMBER_OF_LINKER_SECTIONS_94_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_94_4);
      goto node_subnodes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_subnodes_3)
DEFLABEL (node_subnodes_0)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_5 3
#define LABEL_95_4 5
#define LABEL_95_6 7
#define LABEL_95_7 9
#define LABEL_95_10 11
#define ENVIRONMENT_LABEL_95_3 29
#define DEBUGGING_LABEL_95_2 28
#define OBJECT_95_8 27
#define OBJECT_95_7 26
#define OBJECT_95_6 25
#define OBJECT_95_5 24
#define OBJECT_95_4 23
#define OBJECT_95_3 22
#define OBJECT_95_2 21
#define OBJECT_95_1 20
#define OBJECT_95_0 19
#define EXECUTE_CACHE_95_11 13
#define EXECUTE_CACHE_95_9 15
#define EXECUTE_CACHE_95_8 17
#define FREE_REFERENCES_LABEL_95_0 12
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd40;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_95_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_95_4);
      goto node_size_6;

    case 2:
      current_block = (Rpc - LABEL_95_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_95_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_size_10)
DEFLABEL (node_size_6)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_95_1]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd35.Lng))))
    goto label_26;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_25;

DEFLABEL (label_24)
  (Wrd15.Obj) = (current_block [OBJECT_95_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 2);

DEFLABEL (label_11)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_13;
  (Wrd17.Obj) = (current_block [OBJECT_95_5]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd17.Obj) = (current_block [OBJECT_95_4]);

DEFLABEL (label_12)
DEFLABEL (label_23)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (label_15)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_95_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_95_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_6]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_7]), 2);

DEFLABEL (label_17)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_16;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_19;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd25.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_8]), 1);

DEFLABEL (label_20)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_6]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_7]), 2);

DEFLABEL (label_22)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_21;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_26)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_27)
  if (! ((Wrd6.uLng) == 1))
    goto label_28;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd44.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define ENVIRONMENT_LABEL_96_3 7
#define DEBUGGING_LABEL_96_2 6
#define OBJECT_96_1 5
#define OBJECT_96_0 4
#define FREE_REFERENCES_LABEL_96_0 4
#define NUMBER_OF_LINKER_SECTIONS_96_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_96_4);
      goto highlighted_node_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (highlighted_node_size_3)
DEFLABEL (highlighted_node_size_0)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_96_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

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

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 7
#define DEBUGGING_LABEL_97_2 6
#define OBJECT_97_1 5
#define OBJECT_97_0 4
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_97_4);
      goto highlighted_node_highlight_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (highlighted_node_highlight_3)
DEFLABEL (highlighted_node_highlight_0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_97_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

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

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 7
#define DEBUGGING_LABEL_98_2 6
#define OBJECT_98_1 5
#define OBJECT_98_0 4
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_98_4);
      goto highlighted_node_subnode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (highlighted_node_subnode_3)
DEFLABEL (highlighted_node_subnode_0)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_98_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

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

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_6 7
#define LABEL_99_7 9
#define ENVIRONMENT_LABEL_99_3 17
#define DEBUGGING_LABEL_99_2 16
#define OBJECT_99_3 15
#define OBJECT_99_2 14
#define OBJECT_99_1 13
#define OBJECT_99_0 12
#define FREE_REFERENCE_99_0 11
#define FREE_REFERENCES_LABEL_99_0 10
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_99_4);
      goto highlighted_nodeP_4;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_99_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_99_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (highlighted_nodeP_10)
DEFLABEL (highlighted_nodeP_4)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_99_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_99_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define LABEL_100_7 7
#define ENVIRONMENT_LABEL_100_3 16
#define DEBUGGING_LABEL_100_2 15
#define OBJECT_100_1 14
#define OBJECT_100_0 13
#define EXECUTE_CACHE_100_8 9
#define EXECUTE_CACHE_100_6 11
#define FREE_REFERENCES_LABEL_100_0 8
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pp_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_100_4);
      goto unhighlight_2;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_100_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unhighlight_6)
DEFLABEL (unhighlight_2)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_9;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_8]));

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_100_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 2);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_19 19
#define LABEL_20 21
#define LABEL_21 23
#define LABEL_14 25
#define TAG_15 11
#define LABEL_22 27
#define LABEL_24 29
#define LABEL_25 31
#define LABEL_16 33
#define LABEL_17 35
#define LABEL_26 37
#define LABEL_27 39
#define LABEL_31 41
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_32 49
#define LABEL_37 51
#define LABEL_38 53
#define LABEL_33 55
#define TAG_34 26
#define LABEL_39 57
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_40 63
#define LABEL_42 65
#define LABEL_43 67
#define LABEL_41 69
#define LABEL_44 71
#define LABEL_45 73
#define LABEL_49 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_50 83
#define LABEL_55 85
#define LABEL_51 87
#define TAG_52 42
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_56 93
#define LABEL_57 95
#define LABEL_61 97
#define LABEL_58 99
#define LABEL_59 101
#define LABEL_60 103
#define LABEL_62 105
#define LABEL_67 107
#define LABEL_63 109
#define TAG_64 53
#define LABEL_65 111
#define LABEL_66 113
#define LABEL_68 115
#define LABEL_69 117
#define LABEL_70 119
#define ENVIRONMENT_LABEL_3 196
#define DEBUGGING_LABEL_2 195
#define PURIFICATION_ROOT 194
#define OBJECT_58 193
#define OBJECT_57 192
#define OBJECT_56 191
#define OBJECT_55 190
#define OBJECT_54 189
#define OBJECT_53 188
#define OBJECT_52 187
#define OBJECT_51 186
#define OBJECT_50 185
#define OBJECT_49 184
#define OBJECT_48 183
#define OBJECT_47 182
#define OBJECT_46 181
#define OBJECT_45 180
#define OBJECT_44 179
#define OBJECT_43 178
#define OBJECT_42 177
#define OBJECT_41 176
#define OBJECT_40 175
#define OBJECT_39 174
#define OBJECT_38 173
#define OBJECT_37 172
#define OBJECT_36 171
#define OBJECT_35 170
#define OBJECT_34 169
#define OBJECT_33 168
#define OBJECT_32 167
#define OBJECT_31 166
#define OBJECT_30 165
#define OBJECT_29 164
#define OBJECT_28 163
#define OBJECT_27 162
#define OBJECT_26 161
#define OBJECT_25 160
#define OBJECT_24 159
#define OBJECT_23 158
#define OBJECT_22 157
#define OBJECT_21 156
#define OBJECT_20 155
#define OBJECT_19 154
#define OBJECT_18 153
#define OBJECT_17 152
#define OBJECT_16 151
#define OBJECT_15 150
#define OBJECT_14 149
#define OBJECT_13 148
#define OBJECT_12 147
#define OBJECT_11 146
#define OBJECT_10 145
#define OBJECT_9 144
#define OBJECT_8 143
#define OBJECT_7 142
#define OBJECT_6 141
#define OBJECT_5 140
#define OBJECT_4 139
#define OBJECT_3 138
#define OBJECT_2 137
#define OBJECT_1 136
#define OBJECT_0 135
#define FREE_REFERENCE_4 121
#define FREE_REFERENCE_3 122
#define FREE_REFERENCE_2 123
#define FREE_REFERENCE_1 124
#define FREE_REFERENCE_0 125
#define GLOBAL_EXECUTE_CACHE_23 127
#define GLOBAL_EXECUTE_CACHE_12 129
#define GLOBAL_EXECUTE_CACHE_8 131
#define GLOBAL_EXECUTE_CACHE_5 133
#define FREE_REFERENCES_LABEL_0 120
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
pp_so_2cee1d02a0bc2bc4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd22;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_77;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_78;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_21);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_14);
      goto make_pretty_printer_highlight_92;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto label_81;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_80;

    case 14:
      current_block = (Rpc - LABEL_25);
      goto label_79;

    case 15:
      current_block = (Rpc - LABEL_16);
      goto continuation_26;

    case 16:
      current_block = (Rpc - LABEL_17);
      goto continuation_25;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_27;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_31);
      goto label_82;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_30;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_40;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_32;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_41;

    case 24:
      current_block = (Rpc - LABEL_37);
      goto label_83;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto continuation_35;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto make_queue_93;

    case 27:
      current_block = (Rpc - LABEL_39);
      goto label_84;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_43;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_42;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_44;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto label_85;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto label_86;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_46;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto continuation_47;

    case 35:
      current_block = (Rpc - LABEL_45);
      goto continuation_52;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto label_87;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_51;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_57;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_53;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_58;

    case 41:
      current_block = (Rpc - LABEL_55);
      goto label_88;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto Z__make_prefix_node_94;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_60;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_59;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto continuation_61;

    case 46:
      current_block = (Rpc - LABEL_57);
      goto continuation_66;

    case 47:
      current_block = (Rpc - LABEL_61);
      goto label_89;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto continuation_65;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto continuation_71;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto continuation_67;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto continuation_72;

    case 52:
      current_block = (Rpc - LABEL_67);
      goto label_90;

    case 53:
      current_block = (Rpc - LABEL_63);
      goto make_highlighted_node_95;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto continuation_74;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto continuation_73;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto label_97;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto label_98;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto expression_76;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_76)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_69])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_98)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_97)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	2,
	1,
	1,
	2,
	0,
	2,
	0,
	2,
	2,
	2,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	1,
	3,
	1,
	2,
	2,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	3,
	3,
	2,
	2,
	2,
	2,
	2,
	2,
	3,
	0,
	0,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	2,
	1,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 100)
      goto label_96;
    blocks = (current_block [OBJECT_58]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_68])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_96)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_2]);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_118;
  Wrd11 = Wrd15;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x207, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_116;
  Wrd11 = Wrd15;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_24]);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_114;
  Wrd11 = Wrd15;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x103, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_112;
  Wrd11 = Wrd15;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_110;
  Wrd9 = Wrd13;

DEFLABEL (label_109)
  Wrd8 = Wrd9;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_108;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_108;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_107)
  (Wrd23.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_106;
  Wrd11 = Wrd15;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_104;
  Wrd11 = Wrd15;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_102;
  Wrd11 = Wrd15;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_100;
  Wrd11 = Wrd15;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd5.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_56]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd12.pObj));

DEFLABEL (label_90)
  (Wrd11.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd12.pObj));

DEFLABEL (label_89)
  (Wrd11.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd12.pObj));

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49])), (Wrd12.pObj));

DEFLABEL (label_87)
  (Wrd11.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd10.pObj));

DEFLABEL (label_85)
  (Wrd9.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd12.pObj));

DEFLABEL (label_83)
  (Wrd11.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_82)
  (Wrd11.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_78)
  (Wrd11.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_77)
  (Wrd11.Obj) = Rvl;
  goto label_117;

DEFLABEL (make_pretty_printer_highlight_92)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_pretty_printer_highlight_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  if ((Wrd8.Obj) == (current_block [OBJECT_15]))
    goto label_134;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_133)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  if ((Wrd15.Obj) == (current_block [OBJECT_15]))
    goto label_130;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_129)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  if ((Wrd22.Obj) == (current_block [OBJECT_15]))
    goto label_126;
  Wrd25 = Wrd22;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_125)
  (Wrd26.Obj) = (Rsp [4]);
  if ((Wrd26.Obj) == (current_block [OBJECT_15]))
    goto label_120;
  Wrd28 = Wrd26;
  goto label_119;

DEFLABEL (label_120)
  (Wrd28.Obj) = (current_block [OBJECT_19]);

DEFLABEL (label_119)
DEFLABEL (label_124)
  (Wrd29.Obj) = (Rsp [5]);
  if ((Wrd29.Obj) == (current_block [OBJECT_15]))
    goto label_122;
  Wrd31 = Wrd29;
  goto label_121;

DEFLABEL (label_122)
  (Wrd31.Obj) = (current_block [OBJECT_20]);

DEFLABEL (label_121)
DEFLABEL (label_123)
  (Wrd32.Obj) = (* (Rsp++));
  (Wrd33.Obj) = (* (Rsp++));
  (Wrd40.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (Wrd44.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd36.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd36.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd45.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_128;
  Wrd46 = Wrd50;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd25.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd47.pObj));

DEFLABEL (label_79)
  (Wrd46.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd52.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_132;
  Wrd53 = Wrd57;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd54.pObj));

DEFLABEL (label_80)
  (Wrd53.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd59.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_136;
  Wrd60 = Wrd64;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd61.pObj));

DEFLABEL (label_81)
  (Wrd60.Obj) = Rvl;
  goto label_135;

DEFLABEL (make_queue_93)
  CLOSURE_HEADER (LABEL_33);

DEFLABEL (make_queue_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_15]))
    goto label_141;
  Wrd11 = Wrd8;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_140)
  (Wrd12.Obj) = (Rsp [2]);
  if ((Wrd12.Obj) == (current_block [OBJECT_15]))
    goto label_138;
  Wrd14 = Wrd12;
  goto label_137;

DEFLABEL (label_138)
  (Wrd14.Obj) = (current_block [OBJECT_33]);

DEFLABEL (label_137)
DEFLABEL (label_139)
  (Wrd21.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_141)
  (Wrd25.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_143;
  Wrd26 = Wrd30;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd11.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd27.pObj));

DEFLABEL (label_84)
  (Wrd26.Obj) = Rvl;
  goto label_142;

DEFLABEL (Z__make_prefix_node_94)
  CLOSURE_HEADER (LABEL_51);

DEFLABEL (Z__make_prefix_node_55)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (make_highlighted_node_95)
  CLOSURE_HEADER (LABEL_63);

DEFLABEL (make_highlighted_node_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_pp_so_2cee1d02a0bc2bc4 [100] =
  {
    { "pp_so_code_1", 42, pp_so_code_1 },
    { "pp_so_code_2", 11, pp_so_code_2 },
    { "pp_so_code_3", 13, pp_so_code_3 },
    { "pp_so_code_4", 28, pp_so_code_4 },
    { "pp_so_code_5", 20, pp_so_code_5 },
    { "pp_so_code_6", 1, pp_so_code_6 },
    { "pp_so_code_7", 1, pp_so_code_7 },
    { "pp_so_code_8", 1, pp_so_code_8 },
    { "pp_so_code_9", 1, pp_so_code_9 },
    { "pp_so_code_10", 1, pp_so_code_10 },
    { "pp_so_code_11", 1, pp_so_code_11 },
    { "pp_so_code_12", 1, pp_so_code_12 },
    { "pp_so_code_13", 1, pp_so_code_13 },
    { "pp_so_code_14", 1, pp_so_code_14 },
    { "pp_so_code_15", 1, pp_so_code_15 },
    { "pp_so_code_16", 1, pp_so_code_16 },
    { "pp_so_code_17", 4, pp_so_code_17 },
    { "pp_so_code_18", 8, pp_so_code_18 },
    { "pp_so_code_19", 2, pp_so_code_19 },
    { "pp_so_code_20", 2, pp_so_code_20 },
    { "pp_so_code_21", 29, pp_so_code_21 },
    { "pp_so_code_22", 2, pp_so_code_22 },
    { "pp_so_code_23", 2, pp_so_code_23 },
    { "pp_so_code_24", 2, pp_so_code_24 },
    { "pp_so_code_25", 2, pp_so_code_25 },
    { "pp_so_code_26", 2, pp_so_code_26 },
    { "pp_so_code_27", 2, pp_so_code_27 },
    { "pp_so_code_28", 12, pp_so_code_28 },
    { "pp_so_code_29", 11, pp_so_code_29 },
    { "pp_so_code_30", 7, pp_so_code_30 },
    { "pp_so_code_31", 7, pp_so_code_31 },
    { "pp_so_code_32", 26, pp_so_code_32 },
    { "pp_so_code_33", 21, pp_so_code_33 },
    { "pp_so_code_34", 13, pp_so_code_34 },
    { "pp_so_code_35", 12, pp_so_code_35 },
    { "pp_so_code_36", 8, pp_so_code_36 },
    { "pp_so_code_37", 7, pp_so_code_37 },
    { "pp_so_code_38", 14, pp_so_code_38 },
    { "pp_so_code_39", 70, pp_so_code_39 },
    { "pp_so_code_40", 19, pp_so_code_40 },
    { "pp_so_code_41", 18, pp_so_code_41 },
    { "pp_so_code_42", 1, pp_so_code_42 },
    { "pp_so_code_43", 3, pp_so_code_43 },
    { "pp_so_code_44", 6, pp_so_code_44 },
    { "pp_so_code_45", 57, pp_so_code_45 },
    { "pp_so_code_46", 19, pp_so_code_46 },
    { "pp_so_code_47", 5, pp_so_code_47 },
    { "pp_so_code_48", 14, pp_so_code_48 },
    { "pp_so_code_49", 8, pp_so_code_49 },
    { "pp_so_code_50", 5, pp_so_code_50 },
    { "pp_so_code_51", 3, pp_so_code_51 },
    { "pp_so_code_52", 32, pp_so_code_52 },
    { "pp_so_code_53", 4, pp_so_code_53 },
    { "pp_so_code_54", 32, pp_so_code_54 },
    { "pp_so_code_55", 3, pp_so_code_55 },
    { "pp_so_code_56", 6, pp_so_code_56 },
    { "pp_so_code_57", 14, pp_so_code_57 },
    { "pp_so_code_58", 2, pp_so_code_58 },
    { "pp_so_code_59", 32, pp_so_code_59 },
    { "pp_so_code_60", 62, pp_so_code_60 },
    { "pp_so_code_61", 45, pp_so_code_61 },
    { "pp_so_code_62", 13, pp_so_code_62 },
    { "pp_so_code_63", 11, pp_so_code_63 },
    { "pp_so_code_64", 1, pp_so_code_64 },
    { "pp_so_code_65", 1, pp_so_code_65 },
    { "pp_so_code_66", 1, pp_so_code_66 },
    { "pp_so_code_67", 2, pp_so_code_67 },
    { "pp_so_code_68", 1, pp_so_code_68 },
    { "pp_so_code_69", 1, pp_so_code_69 },
    { "pp_so_code_70", 1, pp_so_code_70 },
    { "pp_so_code_71", 1, pp_so_code_71 },
    { "pp_so_code_72", 1, pp_so_code_72 },
    { "pp_so_code_73", 4, pp_so_code_73 },
    { "pp_so_code_74", 4, pp_so_code_74 },
    { "pp_so_code_75", 7, pp_so_code_75 },
    { "pp_so_code_76", 2, pp_so_code_76 },
    { "pp_so_code_77", 21, pp_so_code_77 },
    { "pp_so_code_78", 5, pp_so_code_78 },
    { "pp_so_code_79", 20, pp_so_code_79 },
    { "pp_so_code_80", 4, pp_so_code_80 },
    { "pp_so_code_81", 30, pp_so_code_81 },
    { "pp_so_code_82", 12, pp_so_code_82 },
    { "pp_so_code_83", 3, pp_so_code_83 },
    { "pp_so_code_84", 2, pp_so_code_84 },
    { "pp_so_code_85", 1, pp_so_code_85 },
    { "pp_so_code_86", 1, pp_so_code_86 },
    { "pp_so_code_87", 1, pp_so_code_87 },
    { "pp_so_code_88", 4, pp_so_code_88 },
    { "pp_so_code_89", 8, pp_so_code_89 },
    { "pp_so_code_90", 6, pp_so_code_90 },
    { "pp_so_code_91", 3, pp_so_code_91 },
    { "pp_so_code_92", 1, pp_so_code_92 },
    { "pp_so_code_93", 1, pp_so_code_93 },
    { "pp_so_code_94", 1, pp_so_code_94 },
    { "pp_so_code_95", 5, pp_so_code_95 },
    { "pp_so_code_96", 1, pp_so_code_96 },
    { "pp_so_code_97", 1, pp_so_code_97 },
    { "pp_so_code_98", 1, pp_so_code_98 },
    { "pp_so_code_99", 4, pp_so_code_99 },
    { "pp_so_code_100", 3, pp_so_code_100 }
  };

int
decl_pp_so_2cee1d02a0bc2bc4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pp_so_2cee1d02a0bc2bc4);
  return (0);
}

DECLARE_COMPILED_CODE ("pp.so", 59, decl_pp_so_2cee1d02a0bc2bc4, pp_so_2cee1d02a0bc2bc4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pp_so_data_2cee1d02a0bc2bc4 [16534] =
  "\xde\x01\xc6\x01\xbb\x23\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d"
  "\x0d\xb9\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xba\x0d\x0d\xbb\x08\x0d"
  "\xbc\x81\x0d\xbd\xb5\x0d\xbe\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\xb5\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x1b\xb6\x1b\x1b\x0d\x1c\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x82\x88\xc2\x1d\x0d\x1c\x24\x28\x0d\x1c\x28\xb5\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d\x1c\x0d\xc2"
  "\x1c\x0d\x1c\xc1\xc1\xc2\x1c\x02\xc1\x1c\x08\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\xb4\x0d\x0d\x0d\x1c\x0d\xb1\x0d\xc1\xb9"
  "\x80\x08\xc1\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb2"
  "\x1b\xb3\xb4\xb1\x1d\x80\x1d\x07\x0d\xbc\x0d\xbb\x24\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0c\xba\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\x1b\x82\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\xc1\x1c\x1b\x82\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x1b\x1b\x83\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\x1d\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x25\x1b"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08"
  "\x1b\x1b\x25\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x1b"
  "\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x1b"
  "\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x08"
  "\x1b\x83\x1b\x82\x06\x07\x85\x1b\x02\x1b\x1b\x1b\x1b\x0d\x1c\x24"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x08\x1b\x1b\x0d\x1c\x1b\x1b"
  "\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83"
  "\x1b\x82\x06\x07\x85\x1b\x02\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x08\xb1\x1b"
  "\x0f\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xb1\x08\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\xb1\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0f\xb1\x1d\x08\x80\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x08\x80\xc2\x1c\x81\x1b\xb1\x84\x82\x1b\x0d\x24\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x0f\xb1\x08\x1b\x0f\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x0f\x08\x1b\x0f\xb1\x0f\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\xb1\x80\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x82\x0f\x1d\x80\x06"
  "\x07\x85\x1b\x02\xb1\x08\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x80\xb1\x08\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\xb1\x08\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb1\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x0f\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b"
  "\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\xb1\x1b\xc1\x1c\x06\x07\x85\x1b\x02\x0d\x1c"
  "\x0d\x1c\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb1\x08\x1b\x80\x0c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x07\xb1\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x80\x81"
  "\x86\x1b\x1b\x85\x1b\x1b\x25\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0d\x1c\x0d\x1c\x08\x89\x1b\x06\x07\x85\x1b"
  "\x02\xb1\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb1\x0c\x1b"
  "\x08\x88\x08\x1b\x1b\x08\x88\x80\x0c\x1b\x1b\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x0c\x08\x1b\x80\x0c\x1b\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x87\x1b\x1b\xb1\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\xb1\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87"
  "\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x03\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d"
  "\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x1b\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x80\x1b\xb1\x1b\x81\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb1\x1b\x81\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\x03\x80\x1b\x1b\xb1\x1b\x81\x1b\x24\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x1b\x1b\x81\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x82\x87\x03\x08\x1b\x80\x1b\xb1\x1b\x81\x1b"
  "\x24\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x81\x1b\x82\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x06\x07\x85\x1b\x02\xb1"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\xb9\x1d\xb0\x02"
  "\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80"
  "\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x83\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x1b\x2a\x1b\x2a\x99\x1b"
  "\x1b\x99\x1b\x0d\x0d\x0d\x9a\x1b\x2a\xb1\x2a\x1b\x2a\x9a\x0d\x1c"
  "\x0c\x0d\x1c\x0d\x0d\x1c\x08\x8a\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b"
  "\x1b\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9f\x1b\x0d\x0d\x0d\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d"
  "\x1c\x0c\x1b\x0d\x1b\x08\x8a\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x0d\x99\x02"
  "\x1b\x2a\x99\x80\x81\x1b\x0d\x0d\x0d\x0d\x9b\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9b\x0d\x1c\x0c\x0d\x0d\x08\x89\x1b\x2a\x1b\x2a\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb7\x1b\xb6\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1e\x1b\x2a\x1e"
  "\x1b\x2a\x1e\x1b\x2a\x1e\x1b\x2a\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\xb2"
  "\x84\x86\x85\x1d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\xc3\x0d\x1c\x0c\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x08\x8d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a"
  "\x1b\x1b\x1b\x1b\xb5\x0d\x1b\xb4\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb3"
  "\x0d\x17\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1e\x1b\x2a\x06\x07\x06\x06"
  "\x07\x06\x07\x07\x07\x06\x1b\x2a\x17\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x26\x1b\x1b\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x51\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x70\x70\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x05\x63\x6f\x6e\x64\x05\x63"
  "\x61\x73\x65\x03\x69\x66\x03\x6f\x72\x04\x61\x6e\x64\x04\x6c\x65"
  "\x74\x05\x6c\x65\x74\x2a\x07\x6c\x65\x74\x72\x65\x63\x0a\x66\x6c"
  "\x75\x69\x64\x2d\x6c\x65\x74\x07\x64\x65\x66\x69\x6e\x65\x12\x64"
  "\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x62\x6c\x65"
  "\x07\x6c\x61\x6d\x62\x64\x61\x0d\x6e\x61\x6d\x65\x64\x2d\x6c\x61"
  "\x6d\x62\x64\x61\x0f\x70\x70\x2d\x64\x65\x73\x63\x72\x69\x70\x74"
  "\x69\x6f\x6e\x13\x66\x6f\x72\x63\x65\x64\x2d\x69\x6e\x64\x65\x6e"
  "\x74\x61\x74\x69\x6f\x6e\x16\x70\x72\x65\x73\x73\x75\x72\x65\x64"
  "\x2d\x69\x6e\x64\x65\x6e\x74\x61\x74\x69\x6f\x6e\x10\x70\x72\x69"
  "\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x09\x15\x70\x72"
  "\x69\x6e\x74\x2d\x6c\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x0a\x16\x70\x72\x69\x6e\x74\x2d\x63\x61\x73\x65\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0b\x13\x63\x6f\x64\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x6c\x69\x73\x74\x0c\x0e\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x6c\x69\x73\x74\x0d\x11\x64\x69"
  "\x73\x70\x61\x74\x63\x68\x2d\x64\x65\x66\x61\x75\x6c\x74\x0e\x0e"
  "\x63\x6f\x63\x6b\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x0f\x0b\x1a"
  "\x6b\x65\x72\x6e\x65\x6c\x2f\x66\x6f\x72\x63\x65\x64\x2d\x69\x6e"
  "\x64\x65\x6e\x74\x61\x74\x69\x6f\x6e\x10\x17\x70\x70\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2f\x64\x65\x66\x61\x75\x6c"
  "\x74\x11\x1d\x6b\x65\x72\x6e\x65\x6c\x2f\x70\x72\x65\x73\x73\x75"
  "\x72\x65\x64\x2d\x69\x6e\x64\x65\x6e\x74\x61\x74\x69\x6f\x6e\x12"
  "\x17\x6b\x65\x72\x6e\x65\x6c\x2f\x70\x72\x69\x6e\x74\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x13\x1c\x6b\x65\x72\x6e\x65\x6c\x2f"
  "\x70\x72\x69\x6e\x74\x2d\x6c\x65\x74\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x14\x1d\x6b\x65\x72\x6e\x65\x6c\x2f\x70\x72\x69"
  "\x6e\x74\x2d\x63\x61\x73\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x15\x09\x0a\x0b\x0c\x12\x70\x72\x69\x6e\x74\x2d\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x16\x0e\x04\x17\x6d\x61\x6b"
  "\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x04\x29\x73\x65\x74\x2d\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x64\x65\x66\x61\x75"
  "\x6c\x74\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x21\x03\x10\x73"
  "\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6e\x74\x65\x72\x17\x02"
  "\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x75\x6e\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x05\x65\x56\x81\x81"
  "\x02\x64\x54\x81\x81\x02\x63\x52\x81\x81\x02\x62\x50\x81\x81\x02"
  "\x61\x4e\x81\x81\x02\x60\x4c\x81\x81\x02\x5f\x4a\x81\x81\x02\x5e"
  "\x48\x81\x83\x02\x5d\x46\x81\x83\x02\x5c\x44\x81\x83\x02\x5b\x42"
  "\x81\x83\x02\x5a\x40\x81\x83\x02\x59\x3e\x81\x83\x02\x58\x3c\x81"
  "\x83\x02\x57\x3a\x81\x83\x02\x56\x38\x81\x83\x02\x55\x36\x81\x83"
  "\x02\x54\x34\x81\x83\x02\x53\x32\x81\x83\x02\x52\x30\x81\x81\x02"
  "\x51\x2e\x81\x81\x02\x50\x2c\x81\x81\x02\x4f\x2a\x81\x83\x02\x4e"
  "\x28\x81\x81\x02\x4d\x26\x81\x81\x02\x4c\x24\x81\x83\x02\x4b\x22"
  "\x81\x81\x02\x4a\x20\x81\x81\x02\x49\x1e\x81\x83\x02\x48\x1c\x81"
  "\x81\x02\x47\x1a\x81\x81\x02\x46\x18\x81\x83\x02\x45\x16\x81\x81"
  "\x02\x44\x14\x81\x81\x02\x43\x12\x81\x85\x02\x42\x10\x84\x06\x41"
  "\x0e\x81\x83\x02\x40\x0c\x81\x81\x02\x3f\x0a\x81\x85\x02\x3e\x08"
  "\x81\x81\x02\x3d\x06\x81\x81\x02\x3c\x04\x82\x02\x55\x8b\x01\x18"
  "\x02\x06\x61\x70\x70\x6c\x79\x08\x0d\x70\x72\x65\x74\x74\x79\x2d"
  "\x70\x72\x69\x6e\x74\x19\x02\x02\x14\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x1a\x03\x03\x1c"
  "\x61\x72\x69\x74\x79\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x1b\x03\x08\x6e\x65"
  "\x77\x6c\x69\x6e\x65\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03"
  "\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x1c\x03\x10\x75\x6e"
  "\x73\x79\x6e\x74\x61\x78\x2d\x65\x6e\x74\x69\x74\x79\x1d\x03\x11"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x6d\x62\x64\x61"
  "\x1e\x09\x70\x18\x81\x8b\x02\x6f\x16\x81\x8d\x02\x6e\x14\x81\x8b"
  "\x02\x6d\x12\x81\x8b\x02\x6c\x10\x81\x8b\x02\x6b\x0e\x81\x85\x02"
  "\x6a\x0c\x81\x89\x02\x69\x0a\x81\x89\x02\x68\x08\x81\x85\x02\x67"
  "\x06\xfd\x05\x66\x04\x81\x87\x02\x17\x2f\x1f\x02\x09\x77\x65\x61"
  "\x6b\x2d\x63\x61\x72\x20\x09\x63\x6f\x6e\x74\x65\x6e\x74\x73\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x21\x09\x77\x65\x61"
  "\x6b\x2d\x63\x64\x72\x22\x0e\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x74"
  "\x65\x6e\x74\x73\x06\x63\x65\x6c\x6c\x3f\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x23\x38\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x24\x03\x11\x6e\x61\x6d\x65\x64"
  "\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x3f\x03\x22\x03\x1c\x6e"
  "\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x03\x20\x05\x7d\x1c\x81"
  "\x85\x02\x7c\x1a\x81\x83\x02\x7b\x18\x81\x87\x02\x7a\x16\x81\x87"
  "\x02\x79\x14\x81\x87\x02\x78\x12\x81\x87\x02\x77\x10\x81\x83\x02"
  "\x76\x0e\x81\x83\x02\x75\x0c\x81\x83\x02\x74\x0a\x81\x85\x02\x73"
  "\x08\x81\x85\x02\x72\x06\x81\x83\x02\x71\x04\x83\x04\x1b\x31\x22"
  "\x02\x06\x73\x68\x6f\x72\x74\x06\x6e\x61\x6d\x65\x64\x05\x66\x75"
  "\x6c\x6c\x20\x05\x65\x6c\x73\x65\x14\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x6f\x66\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x04\x63\x61\x72"
  "\x04\x63\x64\x72\x25\x26\x2a\x70\x70\x2d\x61\x72\x69\x74\x79\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x65\x64\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x73\x74\x79\x6c\x65\x2a\x26\x02\x03\x1b\x03"
  "\x1c\x03\x11\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x03\x0d\x65\x6e\x74\x69\x74\x79\x2d\x65\x78\x74\x72"
  "\x61\x03\x1e\x03\x09\x75\x6e\x73\x79\x6e\x74\x61\x78\x1e\x03\x0d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x1c\x03\x08\x72"
  "\x65\x76\x65\x72\x73\x65\x04\x07\x61\x70\x70\x65\x6e\x64\x1b\x03"
  "\x1d\x0b\x99\x01\x3a\x81\x83\x02\x98\x01\x38\x81\x83\x02\x97\x01"
  "\x36\x81\x83\x02\x96\x01\x34\x81\x83\x02\x95\x01\x32\x81\x83\x02"
  "\x94\x01\x30\x81\x83\x02\x93\x01\x2e\x81\x85\x02\x92\x01\x2c\x81"
  "\x87\x02\x91\x01\x2a\x81\x87\x02\x90\x01\x28\x81\x87\x02\x8f\x01"
  "\x26\x81\x83\x02\x8e\x01\x24\x81\x83\x02\x8d\x01\x22\x81\x89\x02"
  "\x8c\x01\x20\x81\x87\x02\x8b\x01\x1e\x81\x89\x02\x8a\x01\x1c\x81"
  "\x87\x02\x89\x01\x1a\x81\x87\x02\x88\x01\x18\x81\x87\x02\x87\x01"
  "\x16\x81\x87\x02\x86\x01\x14\x81\x87\x02\x85\x01\x12\x81\x87\x02"
  "\x84\x01\x10\x81\x85\x02\x83\x01\x0e\x81\x85\x02\x82\x01\x0c\x81"
  "\x83\x02\x81\x01\x0a\x81\x85\x02\x80\x01\x08\x81\x83\x02\x7f\x06"
  "\x81\x83\x02\x7e\x04\x83\x04\x39\x5e\x27\x02\x25\x02\x08\x16\x2a"
  "\x70\x70\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x61\x73\x2d\x63\x6f"
  "\x64\x65\x3f\x2a\x1b\x2a\x70\x70\x2d\x6e\x61\x6d\x65\x64\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x3e\x64\x65\x66\x69\x6e\x65\x3f\x2a\x03"
  "\x03\x10\x73\x63\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x3f\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x02\x1a\x03\x1e\x07"
  "\x0d\x70\x70\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x1e\x06\xad"
  "\x01\x2a\x81\x97\x02\xac\x01\x28\x81\x99\x02\xab\x01\x26\x81\x99"
  "\x02\xaa\x01\x24\x81\x99\x02\xa9\x01\x22\x81\x97\x02\xa8\x01\x20"
  "\x81\x97\x02\xa7\x01\x1e\x81\x97\x02\xa6\x01\x1c\x81\x97\x02\xa5"
  "\x01\x1a\x81\x97\x02\xa4\x01\x18\x81\x97\x02\xa3\x01\x16\x81\x97"
  "\x02\xa2\x01\x14\x81\x97\x02\xa1\x01\x12\x81\x95\x02\xa0\x01\x10"
  "\x81\x97\x02\x9f\x01\x0e\x81\x8b\x02\x9e\x01\x0c\x81\x89\x02\x9d"
  "\x01\x0a\x86\x04\x9c\x01\x08\x81\x93\x02\x9b\x01\x06\x81\x8b\x02"
  "\x9a\x01\x04\x81\x8b\x02\x29\x43\x1a\x02\x04\x2a\x3d\x3e\xae\x01"
  "\x04\x82\x02\x03\x28\x02\x08\x04\x3c\x3d\x2a\x29\xaf\x01\x04\x82"
  "\x02\x03\x2a\x02\x09\x08\x64\x65\x66\x61\x75\x6c\x74\x2b\xb0\x01"
  "\x04\x82\x02\x03\x2c\x02\x0a\x2b\xb1\x01\x04\x82\x02\x03\x2d\x02"
  "\x0b\x2b\xb2\x01\x04\x82\x02\x03\x2e\x02\x0c\x21\xb3\x01\x04\x83"
  "\x04\x03\x2f\x02\x0d\x21\xb4\x01\x04\x83\x04\x03\x30\x02\x0e\x21"
  "\xb5\x01\x04\x83\x04\x03\x31\x02\x0f\x21\xb6\x01\x04\x83\x04\x03"
  "\x32\x02\x10\x21\xb7\x01\x04\x83\x04\x03\x33\x02\x11\x21\xb8\x01"
  "\x04\x83\x04\x03\x34\x02\x12\x21\x24\x07\x2e\x74\x61\x67\x2e\x31"
  "\x35\x02\xbc\x01\x0a\x81\x85\x02\xbb\x01\x08\x81\x83\x02\xba\x01"
  "\x06\x81\x83\x02\xb9\x01\x04\x83\x04\x09\x12\x36\x02\x13\x21\x0c"
  "\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x37\x02\x04\x19\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x38\x02\xc4\x01\x12\x81\x85\x02\xc3"
  "\x01\x10\x81\x85\x02\xc2\x01\x0e\x81\x85\x02\xc1\x01\x0c\x81\x83"
  "\x02\xc0\x01\x0a\x81\x83\x02\xbf\x01\x08\x81\x85\x02\xbe\x01\x06"
  "\x81\x87\x02\xbd\x01\x04\x84\x06\x11\x1c\x39\x02\x14\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x3a\x21\xc6\x01\x06"
  "\x81\x83\x02\xc5\x01\x04\x83\x04\x05\x0c\x3b\x02\x15\x3a\x21\xc8"
  "\x01\x06\x81\x83\x02\xc7\x01\x04\x83\x04\x05\x0c\x3c\x02\x16\x01"
  "\x21\x02\x07\x78\x2d\x73\x69\x7a\x65\x3d\x37\x26\x2a\x75\x6e\x70"
  "\x61\x72\x73\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d"
  "\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x62\x79\x2d\x6e\x61\x6d\x65\x3f"
  "\x2a\x3e\x21\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x61\x62\x62\x72"
  "\x65\x76\x69\x61\x74\x65\x2d\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e"
  "\x73\x3f\x2a\x3f\x05\x3f\x20\x2a\x70\x70\x2d\x75\x6e\x69\x6e\x74"
  "\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x62\x79"
  "\x2d\x6e\x61\x6d\x65\x2a\x3f\x13\x2a\x70\x70\x2d\x66\x6f\x72\x63"
  "\x65\x64\x2d\x78\x2d\x73\x69\x7a\x65\x2a\x40\x18\x2a\x70\x70\x2d"
  "\x61\x76\x6f\x69\x64\x2d\x63\x69\x72\x63\x75\x6c\x61\x72\x69\x74"
  "\x79\x3f\x2a\x41\x0f\x6e\x75\x6d\x65\x72\x69\x63\x61\x6c\x2d\x77"
  "\x61\x6c\x6b\x42\x23\x6e\x75\x6d\x65\x72\x69\x63\x61\x6c\x2d\x77"
  "\x61\x6c\x6b\x2d\x61\x76\x6f\x69\x64\x2d\x63\x69\x72\x63\x75\x6c"
  "\x61\x72\x69\x74\x69\x65\x73\x43\x3d\x37\x3e\x0a\x03\x13\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x78\x2d\x73\x69\x7a\x65"
  "\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d"
  "\x62\x69\x6e\x64\x3e\x05\x14\x70\x72\x69\x6e\x74\x2d\x6e\x6f\x6e"
  "\x2d\x63\x6f\x64\x65\x2d\x6e\x6f\x64\x65\x44\x05\x0b\x70\x72\x69"
  "\x6e\x74\x2d\x6e\x6f\x64\x65\x45\x04\x0c\x6d\x61\x6b\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x46\x03\x20\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72"
  "\x79\x2d\x66\x6c\x75\x73\x68\x04\x38\x08\xe5\x01\x3c\x81\x89\x02"
  "\xe4\x01\x3a\x81\x87\x02\xe3\x01\x38\x81\x85\x02\xe2\x01\x36\x81"
  "\x85\x02\xe1\x01\x34\x81\x85\x02\xe0\x01\x32\x81\x85\x02\xdf\x01"
  "\x30\x81\x83\x02\xde\x01\x2e\x81\x85\x02\xdd\x01\x2c\x81\x83\x02"
  "\xdc\x01\x2a\x81\x83\x02\xdb\x01\x28\x81\x85\x02\xda\x01\x26\x81"
  "\x83\x02\xd9\x01\x24\x81\x83\x02\xd8\x01\x22\x81\x85\x02\xd7\x01"
  "\x20\x81\x83\x02\xd6\x01\x1e\x81\x83\x02\xd5\x01\x1c\x81\x85\x02"
  "\xd4\x01\x1a\x81\x83\x02\xd3\x01\x18\x81\x83\x02\xd2\x01\x16\x81"
  "\x83\x02\xd1\x01\x14\x81\x83\x02\xd0\x01\x12\x81\x83\x02\xcf\x01"
  "\x10\x81\x83\x02\xce\x01\x0e\x81\x91\x02\xcd\x01\x0c\x81\x93\x02"
  "\xcc\x01\x0a\x81\x8d\x02\xcb\x01\x08\x81\x8d\x02\xca\x01\x06\x87"
  "\x0c\xc9\x01\x04\x81\x91\x02\x3b\x5e\x47\x02\x17\x37\x02\x04\x17"
  "\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74"
  "\x65\x2d\x63\x68\x61\x72\x48\x02\xe7\x01\x06\x81\x83\x02\xe6\x01"
  "\x04\x83\x04\x05\x0d\x49\x02\x18\x37\x02\x04\x38\x02\xe9\x01\x06"
  "\x81\x83\x02\xe8\x01\x04\x83\x04\x05\x0d\x4a\x02\x19\x01\x29\x37"
  "\x02\x04\x48\x02\xeb\x01\x06\x81\x83\x02\xea\x01\x04\x82\x02\x05"
  "\x0e\x4b\x02\x1a\x01\x2a\x37\x02\x04\x48\x02\xed\x01\x06\x81\x83"
  "\x02\xec\x01\x04\x82\x02\x05\x0e\x4c\x02\x1b\x01\x21\x37\x02\x04"
  "\x48\x02\xef\x01\x06\x81\x83\x02\xee\x01\x04\x82\x02\x05\x0e\x4d"
  "\x02\x1c\x01\x0b\x37\x02\x04\x48\x02\xf1\x01\x06\x81\x83\x02\xf0"
  "\x01\x04\x82\x02\x05\x0e\x4e\x02\x1d\x02\x0d\x0e\x03\x16\x2a\x70"
  "\x70\x2d\x6c\x69\x73\x74\x73\x2d\x61\x73\x2d\x74\x61\x62\x6c\x65"
  "\x73\x3f\x2a\x4f\x12\x70\x72\x69\x6e\x74\x2d\x64\x61\x74\x61\x2d"
  "\x63\x6f\x6c\x75\x6d\x6e\x50\x11\x70\x72\x69\x6e\x74\x2d\x64\x61"
  "\x74\x61\x2d\x74\x61\x62\x6c\x65\x51\x0d\x0e\x06\x05\x3e\x05\x45"
  "\x03\xfd\x01\x1a\x81\x83\x02\xfc\x01\x18\x81\x85\x02\xfb\x01\x16"
  "\x81\x83\x02\xfa\x01\x14\x81\x83\x02\xf9\x01\x12\x81\x85\x02\xf8"
  "\x01\x10\x81\x83\x02\xf7\x01\x0e\x81\x83\x02\xf6\x01\x0c\x81\x83"
  "\x02\xf5\x01\x0a\x81\x87\x02\xf4\x01\x08\x81\x87\x02\xf3\x01\x06"
  "\x81\x87\x02\xf2\x01\x04\x85\x08\x19\x2c\x52\x02\x1e\x02\x0d\x0e"
  "\x03\x16\x0c\x0d\x0e\x05\x05\x3e\x05\x45\x03\x88\x02\x18\x81\x83"
  "\x02\x87\x02\x16\x81\x85\x02\x86\x02\x14\x81\x83\x02\x85\x02\x12"
  "\x81\x83\x02\x84\x02\x10\x81\x85\x02\x83\x02\x0e\x81\x83\x02\x82"
  "\x02\x0c\x81\x83\x02\x81\x02\x0a\x81\x83\x02\x80\x02\x08\x81\x89"
  "\x02\xff\x01\x06\x81\x87\x02\xfe\x01\x04\x85\x08\x17\x28\x53\x02"
  "\x1f\x01\x2a\x01\x29\x37\x02\x04\x48\x05\x0d\x70\x72\x69\x6e\x74"
  "\x2d\x63\x6f\x6c\x75\x6d\x6e\x54\x03\x8f\x02\x10\x81\x87\x02\x8e"
  "\x02\x0e\x81\x87\x02\x8d\x02\x0c\x81\x8b\x02\x8c\x02\x0a\x81\x89"
  "\x02\x8b\x02\x08\x81\x87\x02\x8a\x02\x06\x81\x8b\x02\x89\x02\x04"
  "\x85\x08\x0f\x1b\x55\x02\x20\x01\x2a\x01\x29\x37\x02\x04\x48\x05"
  "\x12\x6d\x61\x79\x62\x65\x2d\x70\x72\x69\x6e\x74\x2d\x74\x61\x62"
  "\x6c\x65\x56\x03\x96\x02\x10\x81\x87\x02\x95\x02\x0e\x81\x87\x02"
  "\x94\x02\x0c\x81\x8b\x02\x93\x02\x0a\x81\x89\x02\x92\x02\x08\x81"
  "\x87\x02\x91\x02\x06\x81\x8b\x02\x90\x02\x04\x85\x08\x0f\x1b\x57"
  "\x02\x21\x2b\x3a\x21\x23\x1e\x37\x0d\x45\x44\x10\x70\x72\x69\x6e"
  "\x74\x2d\x63\x6f\x64\x65\x2d\x6e\x6f\x64\x65\x58\x06\x05\x10\x70"
  "\x72\x69\x6e\x74\x2d\x6c\x69\x73\x74\x2d\x6e\x6f\x64\x65\x59\x03"
  "\x0d\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f\x64\x65\x3f\x5a\x03\x10"
  "\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x5b"
  "\x03\x12\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x64\x2d\x6e\x6f"
  "\x64\x65\x3f\x5c\x04\x38\x05\x45\x05\x44\x04\x1f\x77\x69\x74\x68"
  "\x2d\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x73\x2d\x70\x72\x69\x6e\x74\x65\x64\x5d\x03\x18\x70\x70\x68"
  "\x2f\x73\x74\x61\x72\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x5e\x03\x16\x70\x70\x68\x2f\x65\x6e\x64\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x5f\x0b\xb0\x02"
  "\x36\x81\x89\x02\xaf\x02\x34\x81\x89\x02\xae\x02\x32\x81\x89\x02"
  "\xad\x02\x30\x81\x89\x02\xac\x02\x2e\x81\x85\x02\xab\x02\x2c\x81"
  "\x87\x02\xaa\x02\x2a\x81\x87\x02\xa9\x02\x28\x81\x87\x02\xa8\x02"
  "\x26\x81\x85\x02\xa7\x02\x24\x81\x83\x02\xa6\x02\x22\x81\x83\x02"
  "\xa5\x02\x20\x81\x87\x02\xa4\x02\x1e\x81\x87\x02\xa3\x02\x1c\x81"
  "\x87\x02\xa2\x02\x1a\x81\x8b\x02\xa1\x02\x18\x81\x89\x02\xa0\x02"
  "\x16\x81\x89\x02\x9f\x02\x14\x81\x89\x02\x9e\x02\x12\x81\x87\x02"
  "\x9d\x02\x10\x81\x87\x02\x9c\x02\x0e\x81\x8b\x02\x9b\x02\x0c\x81"
  "\x89\x02\x9a\x02\x0a\x81\x87\x02\x99\x02\x08\x81\x83\x02\x98\x02"
  "\x06\x85\x08\x97\x02\x04\x81\x87\x02\x35\x5f\x60\x02\x22\x25\x3d"
  "\x1a\x2a\x70\x70\x2d\x73\x61\x76\x65\x2d\x76\x65\x72\x74\x69\x63"
  "\x61\x6c\x2d\x73\x70\x61\x63\x65\x3f\x2a\x61\x0e\x0d\x05\x03\x1b"
  "\x70\x72\x69\x6e\x74\x2d\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x64"
  "\x2d\x6c\x69\x73\x74\x2d\x6e\x6f\x64\x65\x62\x03\x0a\x6e\x6f\x64"
  "\x65\x2d\x73\x69\x7a\x65\x63\x03\x0c\x75\x6e\x68\x69\x67\x68\x6c"
  "\x69\x67\x68\x74\x64\x04\x05\x61\x73\x73\x71\x05\xc5\x02\x2c\x81"
  "\x8d\x02\xc4\x02\x2a\x81\x8f\x02\xc3\x02\x28\x81\x8b\x02\xc2\x02"
  "\x26\x81\x8d\x02\xc1\x02\x24\x81\x8d\x02\xc0\x02\x22\x81\x8b\x02"
  "\xbf\x02\x20\x81\x87\x02\xbe\x02\x1e\x81\x87\x02\xbd\x02\x1c\x85"
  "\x08\xbc\x02\x1a\x81\x87\x02\xbb\x02\x18\x81\x89\x02\xba\x02\x16"
  "\x81\x89\x02\xb9\x02\x14\x81\x87\x02\xb8\x02\x12\x81\x87\x02\xb7"
  "\x02\x10\x81\x89\x02\xb6\x02\x0e\x81\x8b\x02\xb5\x02\x0c\x81\x8b"
  "\x02\xb4\x02\x0a\x81\x8d\x02\xb3\x02\x08\x81\x8d\x02\xb2\x02\x06"
  "\x81\x8b\x02\xb1\x02\x04\x81\x8b\x02\x2b\x3f\x65\x02\x23\x21\x23"
  "\x1e\x37\x02\x03\x62\x03\x5c\x03\x5b\x03\x5a\x04\x5d\x03\x16\x70"
  "\x72\x69\x6e\x74\x2d\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x64\x2d"
  "\x6e\x6f\x64\x65\x66\x04\x38\x08\xd2\x02\x1c\x81\x83\x02\xd1\x02"
  "\x1a\x81\x83\x02\xd0\x02\x18\x81\x87\x02\xcf\x02\x16\x81\x85\x02"
  "\xce\x02\x14\x81\x83\x02\xcd\x02\x12\x81\x83\x02\xcc\x02\x10\x81"
  "\x83\x02\xcb\x02\x0e\x81\x83\x02\xca\x02\x0c\x81\x83\x02\xc9\x02"
  "\x0a\x81\x83\x02\xc8\x02\x08\x81\x83\x02\xc7\x02\x06\x83\x04\xc6"
  "\x02\x04\x81\x83\x02\x1b\x37\x67\x02\x24\x01\x21\x01\x2a\x25\x01"
  "\x29\x37\x02\x04\x48\x03\x66\x03\xde\x02\x1a\x81\x85\x02\xdd\x02"
  "\x18\x81\x85\x02\xdc\x02\x16\x81\x89\x02\xdb\x02\x14\x81\x83\x02"
  "\xda\x02\x12\x81\x85\x02\xd9\x02\x10\x81\x85\x02\xd8\x02\x0e\x81"
  "\x87\x02\xd7\x02\x0c\x81\x85\x02\xd6\x02\x0a\x81\x83\x02\xd5\x02"
  "\x08\x81\x83\x02\xd4\x02\x06\x81\x87\x02\xd3\x02\x04\x83\x04\x19"
  "\x29\x68\x02\x25\x25\x05\x45\x03\x07\x74\x61\x62\x2d\x74\x6f\x69"
  "\x03\xe6\x02\x12\x81\x89\x02\xe5\x02\x10\x81\x89\x02\xe4\x02\x0e"
  "\x81\x89\x02\xe3\x02\x0c\x81\x8f\x02\xe2\x02\x0a\x81\x89\x02\xe1"
  "\x02\x08\x81\x89\x02\xe0\x02\x06\x81\x89\x02\xdf\x02\x04\x85\x08"
  "\x11\x1d\x6a\x02\x26\x02\x25\x03\x66\x03\x69\x03\xed\x02\x10\x81"
  "\x87\x02\xec\x02\x0e\x81\x87\x02\xeb\x02\x0c\x81\x87\x02\xea\x02"
  "\x0a\x81\x87\x02\xe9\x02\x08\x81\x89\x02\xe8\x02\x06\x81\x87\x02"
  "\xe7\x02\x04\x84\x06\x0f\x1b\x6b\x02\x27\x25\x01\x21\x02\x37\x02"
  "\x03\x69\x04\x46\x03\x66\x04\x38\x03\x63\x06\xfb\x02\x1e\x81\x8f"
  "\x02\xfa\x02\x1c\x81\x8f\x02\xf9\x02\x1a\x81\x8f\x02\xf8\x02\x18"
  "\x81\x91\x02\xf7\x02\x16\x81\x8f\x02\xf6\x02\x14\x81\x8f\x02\xf5"
  "\x02\x12\x81\x8f\x02\xf4\x02\x10\x81\x8d\x02\xf3\x02\x0e\x81\x93"
  "\x02\xf2\x02\x0c\x81\x91\x02\xf1\x02\x0a\x81\x8f\x02\xf0\x02\x08"
  "\x81\x8d\x02\xef\x02\x06\x81\x8d\x02\xee\x02\x04\x85\x08\x1d\x33"
  "\x6c\x02\x28\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x6d\x25"
  "\x3d\x02\x2b\x03\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x63\x05\x54"
  "\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x05\x17"
  "\x70\x72\x69\x6e\x74\x2d\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x64"
  "\x2d\x74\x61\x62\x6c\x65\x6e\x05\x07\x72\x65\x64\x75\x63\x65\x04"
  "\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x08\xc1\x03\x8e\x01\xfd"
  "\xff\x03\xc0\x03\x8c\x01\xfd\xff\x03\xbf\x03\x8a\x01\xfd\xff\x03"
  "\xbe\x03\x88\x01\x81\x91\x02\xbd\x03\x86\x01\x81\x8d\x02\xbc\x03"
  "\x84\x01\x81\x89\x02\xbb\x03\x82\x01\x81\x89\x02\xba\x03\x80\x01"
  "\x81\x8b\x02\xb9\x03\x7e\x81\x8b\x02\xb8\x03\x7c\x81\x9d\x02\xb7"
  "\x03\x7a\x81\x97\x02\xb6\x03\x78\xfd\xff\x03\xb5\x03\x76\xfd\xff"
  "\x03\xb4\x03\x74\xff\xff\x03\xb3\x03\x72\x81\x89\x02\xb2\x03\x70"
  "\x81\x87\x02\xb1\x03\x6e\xfd\xff\x03\xb0\x03\x6c\x81\x8b\x02\xaf"
  "\x03\x6a\x81\x87\x02\xae\x03\x68\x81\x87\x02\xad\x03\x66\x81\x89"
  "\x02\xac\x03\x64\x81\x87\x02\xab\x03\x62\x81\x9d\x02\xaa\x03\x60"
  "\x81\x97\x02\xa9\x03\x5e\xfd\xff\x03\xa8\x03\x5c\xfd\xff\x03\xa7"
  "\x03\x5a\xff\xff\x03\xa6\x03\x58\x81\x8d\x02\xa5\x03\x56\x81\x87"
  "\x02\xa4\x03\x54\x81\x9b\x02\xa3\x03\x52\x81\x9b\x02\xa2\x03\x50"
  "\x81\x97\x02\xa1\x03\x4e\x81\x95\x02\xa0\x03\x4c\x81\x95\x02\x9f"
  "\x03\x4a\x81\x95\x02\x9e\x03\x48\x81\x97\x02\x9d\x03\x46\x81\x99"
  "\x02\x9c\x03\x44\x81\x97\x02\x9b\x03\x42\x81\x85\x02\x9a\x03\x40"
  "\x81\x93\x02\x99\x03\x3e\x81\x93\x02\x98\x03\x3c\x81\x93\x02\x97"
  "\x03\x3a\x81\x8f\x02\x96\x03\x38\x81\x91\x02\x95\x03\x36\x81\x91"
  "\x02\x94\x03\x34\x81\x8d\x02\x93\x03\x32\x81\x8d\x02\x92\x03\x30"
  "\x81\x93\x02\x91\x03\x2e\x81\x93\x02\x90\x03\x2c\x81\x93\x02\x8f"
  "\x03\x2a\x81\x93\x02\x8e\x03\x28\x81\x93\x02\x8d\x03\x26\x81\x93"
  "\x02\x8c\x03\x24\x81\x95\x02\x8b\x03\x22\x81\x93\x02\x8a\x03\x20"
  "\x81\x93\x02\x89\x03\x1e\x81\x93\x02\x88\x03\x1c\x81\x93\x02\x87"
  "\x03\x1a\x81\x87\x02\x86\x03\x18\x81\x8f\x02\x85\x03\x16\x81\x8d"
  "\x02\x84\x03\x14\x81\x8d\x02\x83\x03\x12\x81\x8f\x02\x82\x03\x10"
  "\x81\x8d\x02\x81\x03\x0e\x81\x8b\x02\x80\x03\x0c\x81\x8f\x02\xff"
  "\x02\x0a\x81\x89\x02\xfe\x02\x08\x81\x87\x02\xfd\x02\x06\x81\x87"
  "\x02\xfc\x02\x04\x85\x08\x8d\x01\xab\x01\x6f\x02\x29\x01\x21\x01"
  "\x2a\x25\x01\x29\x37\x02\x04\x48\x05\x45\x05\x13\x74\x77\x6f\x2d"
  "\x6f\x6e\x2d\x66\x69\x72\x73\x74\x2d\x6c\x69\x6e\x65\x3f\x70\x05"
  "\x54\x03\x66\x03\x63\x04\x18\x70\x72\x69\x6e\x74\x2d\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x64\x2d\x63\x6f\x6c\x75\x6d\x6e\x71\x08"
  "\xd4\x03\x28\x81\x85\x02\xd3\x03\x26\x81\x85\x02\xd2\x03\x24\x81"
  "\x85\x02\xd1\x03\x22\x81\x85\x02\xd0\x03\x20\x81\x87\x02\xcf\x03"
  "\x1e\x81\x85\x02\xce\x03\x1c\x81\x89\x02\xcd\x03\x1a\x81\x85\x02"
  "\xcc\x03\x18\x81\x87\x02\xcb\x03\x16\x81\x85\x02\xca\x03\x14\x81"
  "\x87\x02\xc9\x03\x12\x81\x87\x02\xc8\x03\x10\x81\x85\x02\xc7\x03"
  "\x0e\x81\x85\x02\xc6\x03\x0c\x81\x8b\x02\xc5\x03\x0a\x81\x89\x02"
  "\xc4\x03\x08\x81\x87\x02\xc3\x03\x06\x81\x8b\x02\xc2\x03\x04\x85"
  "\x08\x27\x41\x72\x02\x2a\x01\x2a\x25\x01\x21\x01\x29\x37\x02\x04"
  "\x48\x03\x66\x03\x63\x04\xe6\x03\x26\x81\x91\x02\xe5\x03\x24\x81"
  "\x8f\x02\xe4\x03\x22\x81\x8f\x02\xe3\x03\x20\x81\x8f\x02\xe2\x03"
  "\x1e\x81\x91\x02\xe1\x03\x1c\x81\x8d\x02\xe0\x03\x1a\x81\x8b\x02"
  "\xdf\x03\x18\x81\x89\x02\xde\x03\x16\x81\x89\x02\xdd\x03\x14\x81"
  "\x89\x02\xdc\x03\x12\x81\x89\x02\xdb\x03\x10\x81\x8d\x02\xda\x03"
  "\x0e\x81\x89\x02\xd9\x03\x0c\x81\x8b\x02\xd8\x03\x0a\x81\x89\x02"
  "\xd7\x03\x08\x81\x8d\x02\xd6\x03\x06\x81\x89\x02\xd5\x03\x04\x83"
  "\x04\x25\x38\x73\x02\x2b\x05\x54\x02\xe7\x03\x04\x86\x0a\x03\x74"
  "\x02\x2c\x05\x10\x66\x69\x74\x73\x2d\x61\x73\x2d\x63\x6f\x6c\x75"
  "\x6d\x6e\x3f\x75\x03\x69\x04\x71\x05\x54\x05\xea\x03\x08\x81\x89"
  "\x02\xe9\x03\x06\x81\x89\x02\xe8\x03\x04\x86\x0a\x07\x13\x76\x02"
  "\x2d\x02\x25\x05\x45\x03\x69\x05\x54\x04\xf0\x03\x0e\x81\x8b\x02"
  "\xef\x03\x0c\x81\x8b\x02\xee\x03\x0a\x81\x89\x02\xed\x03\x08\x81"
  "\x89\x02\xec\x03\x06\x81\x8f\x02\xeb\x03\x04\x86\x0a\x0d\x1c\x77"
  "\x02\x2e\x01\x2a\x01\x29\x01\x21\x02\x23\x1e\x25\x37\x3d\x03\x05"
  "\x45\x03\x5b\x03\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x78\x03\x69\x03\x63\x05\x54\x04\x48\x05\x75\x03\x66\x04"
  "\x71\x0b\xa9\x04\x74\x81\x8b\x02\xa8\x04\x72\x81\x8b\x02\xa7\x04"
  "\x70\x81\x8b\x02\xa6\x04\x6e\x81\x8f\x02\xa5\x04\x6c\x81\x8b\x02"
  "\xa4\x04\x6a\x81\x8f\x02\xa3\x04\x68\x81\x8f\x02\xa2\x04\x66\x81"
  "\x8f\x02\xa1\x04\x64\x81\x8d\x02\xa0\x04\x62\x81\x8b\x02\x9f\x04"
  "\x60\x81\x8b\x02\x9e\x04\x5e\x81\x8b\x02\x9d\x04\x5c\x81\x8b\x02"
  "\x9c\x04\x5a\x81\x8f\x02\x9b\x04\x58\x81\x8b\x02\x9a\x04\x56\x81"
  "\x8b\x02\x99\x04\x54\x81\x8b\x02\x98\x04\x52\x81\x8b\x02\x97\x04"
  "\x50\x81\x8d\x02\x96\x04\x4e\x81\x8d\x02\x95\x04\x4c\x81\x8b\x02"
  "\x94\x04\x4a\x81\x91\x02\x93\x04\x48\x81\x91\x02\x92\x04\x46\x81"
  "\x8b\x02\x91\x04\x44\x81\x8f\x02\x90\x04\x42\x81\x91\x02\x8f\x04"
  "\x40\x81\x91\x02\x8e\x04\x3e\x81\x91\x02\x8d\x04\x3c\x81\x8f\x02"
  "\x8c\x04\x3a\x81\x8b\x02\x8b\x04\x38\x81\x8b\x02\x8a\x04\x36\x81"
  "\x8b\x02\x89\x04\x34\x81\x8d\x02\x88\x04\x32\x81\x8d\x02\x87\x04"
  "\x30\x81\x8b\x02\x86\x04\x2e\x81\x8b\x02\x85\x04\x2c\x81\x8f\x02"
  "\x84\x04\x2a\x81\x8b\x02\x83\x04\x28\x81\x8b\x02\x82\x04\x26\x81"
  "\x8d\x02\x81\x04\x24\x81\x8d\x02\x80\x04\x22\x81\x89\x02\xff\x03"
  "\x20\x81\x89\x02\xfe\x03\x1e\x81\x89\x02\xfd\x03\x1c\x81\x8b\x02"
  "\xfc\x03\x1a\x81\x8b\x02\xfb\x03\x18\x81\x89\x02\xfa\x03\x16\x81"
  "\x89\x02\xf9\x03\x14\x81\x89\x02\xf8\x03\x12\x81\x8b\x02\xf7\x03"
  "\x10\x81\x8f\x02\xf6\x03\x0e\x81\x83\x02\xf5\x03\x0c\x81\x8b\x02"
  "\xf4\x03\x0a\x81\x89\x02\xf3\x03\x08\x81\x89\x02\xf2\x03\x06\x86"
  "\x0a\xf1\x03\x04\x81\x89\x02\x73\x9c\x01\x79\x02\x2f\x02\x25\x3d"
  "\x02\x05\x45\x03\x63\x03\x69\x03\x66\x05\x54\x06\xbc\x04\x28\x81"
  "\x8b\x02\xbb\x04\x26\x81\x8b\x02\xba\x04\x24\x81\x89\x02\xb9\x04"
  "\x22\x81\x89\x02\xb8\x04\x20\x81\x89\x02\xb7\x04\x1e\x81\x89\x02"
  "\xb6\x04\x1c\x81\x8f\x02\xb5\x04\x1a\x81\x89\x02\xb4\x04\x18\x81"
  "\x8b\x02\xb3\x04\x16\x81\x8b\x02\xb2\x04\x14\x81\x89\x02\xb1\x04"
  "\x12\x81\x8b\x02\xb0\x04\x10\x81\x8b\x02\xaf\x04\x0e\x81\x89\x02"
  "\xae\x04\x0c\x81\x89\x02\xad\x04\x0a\x81\x8b\x02\xac\x04\x08\x81"
  "\x89\x02\xab\x04\x06\x81\x89\x02\xaa\x04\x04\x86\x0a\x27\x3d\x7a"
  "\x02\x30\x3d\x02\x03\x63\x02\xc1\x04\x0c\x81\x89\x02\xc0\x04\x0a"
  "\x81\x89\x02\xbf\x04\x08\x81\x87\x02\xbe\x04\x06\x81\x87\x02\xbd"
  "\x04\x04\x85\x08\x0b\x14\x7b\x02\x31\x25\x3d\x02\x03\x63\x02\xcf"
  "\x04\x1e\x81\x8b\x02\xce\x04\x1c\x81\x8b\x02\xcd\x04\x1a\x81\x89"
  "\x02\xcc\x04\x18\x81\x89\x02\xcb\x04\x16\x81\x89\x02\xca\x04\x14"
  "\x81\x89\x02\xc9\x04\x12\x81\x8b\x02\xc8\x04\x10\x81\x89\x02\xc7"
  "\x04\x0e\x81\x89\x02\xc6\x04\x0c\x81\x8b\x02\xc5\x04\x0a\x81\x8b"
  "\x02\xc4\x04\x08\x81\x89\x02\xc3\x04\x06\x81\x89\x02\xc2\x04\x04"
  "\x85\x08\x1d\x29\x7c\x02\x32\x25\x3d\x02\x03\x63\x05\x75\x03\xd7"
  "\x04\x12\x81\x89\x02\xd6\x04\x10\x81\x89\x02\xd5\x04\x0e\x81\x89"
  "\x02\xd4\x04\x0c\x81\x87\x02\xd3\x04\x0a\x81\x87\x02\xd2\x04\x08"
  "\x81\x87\x02\xd1\x04\x06\x81\x89\x02\xd0\x04\x04\x85\x08\x11\x1d"
  "\x7d\x02\x33\x01\x21\x01\x0b\x37\x02\x04\x48\x04\x46\x04\x38\x04"
  "\xdc\x04\x0c\x81\x85\x02\xdb\x04\x0a\x81\x83\x02\xda\x04\x08\x81"
  "\x83\x02\xd9\x04\x06\x81\x87\x02\xd8\x04\x04\x83\x04\x0b\x19\x48"
  "\x02\x34\x01\x21\x37\x02\x04\x46\x04\x38\x03\xdf\x04\x08\x81\x85"
  "\x02\xde\x04\x06\x81\x83\x02\xdd\x04\x04\x83\x04\x07\x12\x46\x02"
  "\x35\x02\x23\x25\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x38\x23\x1e\x16\x2a\x70\x70\x2d\x61\x75\x74\x6f\x2d\x68"
  "\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2a\x7e\x0f\x75\x6e\x70"
  "\x61\x72\x73\x65\x2d\x6f\x62\x6a\x65\x63\x74\x7f\x3f\x18\x2a\x70"
  "\x70\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x2d\x62\x79\x2d"
  "\x6e\x61\x6d\x65\x2a\x80\x01\x05\x03\x7e\x03\x1a\x70\x72\x65\x74"
  "\x74\x79\x2d\x70\x72\x69\x6e\x74\x65\x72\x2d\x68\x69\x67\x68\x6c"
  "\x69\x67\x68\x74\x3f\x81\x01\x05\x0c\x77\x61\x6c\x6b\x2d\x63\x75"
  "\x73\x74\x6f\x6d\x82\x01\x03\x1a\x75\x6e\x70\x61\x72\x73\x65\x2d"
  "\x6c\x69\x73\x74\x2f\x70\x72\x65\x66\x69\x78\x2d\x70\x61\x69\x72"
  "\x3f\x83\x01\x03\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x3f\x84\x01\x03\x18\x75\x6e\x70\x61\x72\x73\x65"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2f\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x85\x01\x03\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x86\x01\x05\x18\x77\x61\x6c\x6b"
  "\x2d\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x64\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x87\x01\x03\x16\x75\x6e\x70\x61\x72\x73\x65\x2d\x6c"
  "\x69\x73\x74\x2f\x75\x6e\x70\x61\x72\x73\x65\x72\x88\x01\x04\x42"
  "\x03\x63\x03\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x89\x01\x03\x1c"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f"
  "\x64\x65\x8a\x01\x04\x0a\x77\x61\x6c\x6b\x2d\x70\x61\x69\x72\x8b"
  "\x01\x03\x5f\x03\x5e\x05\x16\x6d\x61\x6b\x65\x2d\x68\x69\x67\x68"
  "\x6c\x69\x67\x68\x74\x65\x64\x2d\x6e\x6f\x64\x65\x8c\x01\x13\xff"
  "\x04\x42\x81\x87\x02\xfe\x04\x40\x81\x89\x02\xfd\x04\x3e\x81\x87"
  "\x02\xfc\x04\x3c\x81\x89\x02\xfb\x04\x3a\x81\x8b\x02\xfa\x04\x38"
  "\x81\x87\x02\xf9\x04\x36\x81\x87\x02\xf8\x04\x34\x81\x87\x02\xf7"
  "\x04\x32\x81\x87\x02\xf6\x04\x30\x81\x85\x02\xf5\x04\x2e\x81\x85"
  "\x02\xf4\x04\x2c\x81\x85\x02\xf3\x04\x2a\x81\x85\x02\xf2\x04\x28"
  "\x81\x85\x02\xf1\x04\x26\x81\x85\x02\xf0\x04\x24\x81\x8b\x02\xef"
  "\x04\x22\x81\x8b\x02\xee\x04\x20\x81\x85\x02\xed\x04\x1e\x81\x85"
  "\x02\xec\x04\x1c\x81\x85\x02\xeb\x04\x1a\x81\x85\x02\xea\x04\x18"
  "\x81\x85\x02\xe9\x04\x16\x81\x85\x02\xe8\x04\x14\x81\x83\x02\xe7"
  "\x04\x12\x84\x06\xe6\x04\x10\x81\x85\x02\xe5\x04\x0e\x81\x85\x02"
  "\xe4\x04\x0c\x81\x85\x02\xe3\x04\x0a\x81\x87\x02\xe2\x04\x08\x84"
  "\x06\xe1\x04\x06\x81\x85\x02\xe0\x04\x04\x81\x87\x02\x41\x77\x8d"
  "\x01\x02\x36\x03\x18\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x8e\x01\x02\x19"
  "\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x06\x14\x6d\x61\x6b\x65\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x04\x83\x05"
  "\x0a\x81\x8b\x02\x82\x05\x08\x81\x89\x02\x81\x05\x06\x81\x85\x02"
  "\x80\x05\x04\x85\x08\x09\x14\x8f\x01\x02\x37\x02\x2e\x25\x04\x2e"
  "\x2e\x2e\x1c\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6c\x69\x73"
  "\x74\x2d\x64\x65\x70\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x90\x01"
  "\x14\x2a\x70\x70\x2d\x6e\x6f\x2d\x68\x69\x67\x68\x6c\x69\x67\x68"
  "\x74\x73\x3f\x2a\x91\x01\x1e\x2a\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x2d\x6c\x69\x73\x74\x2d\x62\x72\x65\x61\x64\x74\x68\x2d\x6c\x69"
  "\x6d\x69\x74\x2a\x92\x01\x04\x03\x17\x70\x61\x72\x74\x69\x61\x6c"
  "\x6c\x79\x2d\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x64\x3f\x93"
  "\x01\x03\x88\x01\x03\x19\x6d\x61\x6b\x65\x2d\x73\x69\x6e\x67\x6c"
  "\x65\x74\x6f\x6e\x2d\x6c\x69\x73\x74\x2d\x6e\x6f\x64\x65\x94\x01"
  "\x04\x42\x04\x0f\x6d\x61\x6b\x65\x2d\x6c\x69\x73\x74\x2d\x6e\x6f"
  "\x64\x65\x95\x01\x06\xa3\x05\x42\xfd\xff\x03\xa2\x05\x40\xfd\xff"
  "\x03\xa1\x05\x3e\x81\x85\x02\xa0\x05\x3c\xfd\xff\x03\x9f\x05\x3a"
  "\xfd\xff\x03\x9e\x05\x38\x81\x8b\x02\x9d\x05\x36\x81\x89\x02\x9c"
  "\x05\x34\x81\x89\x02\x9b\x05\x32\x81\x89\x02\x9a\x05\x30\x81\x89"
  "\x02\x99\x05\x2e\x81\x85\x02\x98\x05\x2c\x81\x83\x02\x97\x05\x2a"
  "\xfd\xff\x03\x96\x05\x28\xfd\xff\x03\x95\x05\x26\xfd\xff\x03\x94"
  "\x05\x24\xfd\xff\x03\x93\x05\x22\xfd\xff\x03\x92\x05\x20\xfd\xff"
  "\x03\x91\x05\x1e\xfd\xff\x03\x90\x05\x1c\xff\xff\x03\x8f\x05\x1a"
  "\xfd\xff\x03\x8e\x05\x18\x81\x87\x02\x8d\x05\x16\x81\x89\x02\x8c"
  "\x05\x14\x81\x85\x02\x8b\x05\x12\x81\x83\x02\x8a\x05\x10\x81\x85"
  "\x02\x89\x05\x0e\x81\x85\x02\x88\x05\x0c\x81\x85\x02\x87\x05\x0a"
  "\x81\x85\x02\x86\x05\x08\x81\x85\x02\x85\x05\x06\x84\x06\x84\x05"
  "\x04\x81\x85\x02\x41\x59\x96\x01\x02\x38\x91\x01\x02\x03\x93\x01"
  "\x02\xa6\x05\x08\x81\x85\x02\xa5\x05\x06\x81\x83\x02\xa4\x05\x04"
  "\x83\x04\x07\x10\x97\x01\x02\x39\x25\x03\x93\x01\x03\x81\x01\x03"
  "\x1c\x04\xac\x05\x0e\x81\x83\x02\xab\x05\x0c\x81\x85\x02\xaa\x05"
  "\x0a\x81\x83\x02\xa9\x05\x08\x81\x83\x02\xa8\x05\x06\x81\x85\x02"
  "\xa7\x05\x04\x83\x04\x0d\x1a\x98\x01\x02\x3a\x02\x2b\x21\x92\x01"
  "\x90\x01\x03\x90\x01\x92\x01\x03\x05\x3e\x02\xba\x05\x1e\x81\x83"
  "\x02\xb9\x05\x1c\x81\x85\x02\xb8\x05\x1a\x81\x83\x02\xb7\x05\x18"
  "\x81\x83\x02\xb6\x05\x16\x81\x85\x02\xb5\x05\x14\x81\x83\x02\xb4"
  "\x05\x12\x81\x83\x02\xb3\x05\x10\x81\x83\x02\xb2\x05\x0e\x81\x83"
  "\x02\xb1\x05\x0c\x81\x8d\x02\xb0\x05\x0a\x81\x8b\x02\xaf\x05\x08"
  "\x81\x89\x02\xae\x05\x06\x81\x87\x02\xad\x05\x04\x85\x08\x1d\x30"
  "\x3e\x02\x3b\x02\x0b\x6d\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x2b"
  "\x05\x1b\x6e\x75\x6d\x65\x72\x69\x63\x61\x6c\x2d\x77\x61\x6c\x6b"
  "\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6e\x67\x99\x01\x03\xbc"
  "\x05\x06\x81\x87\x02\xbb\x05\x04\x84\x06\x05\x0d\x9a\x01\x02\x3c"
  "\x02\x23\x04\x63\x64\x72\x9b\x01\x04\x63\x61\x72\x9c\x01\x38\x23"
  "\x1e\x25\x7f\x3f\x80\x01\x04\x05\x82\x01\x03\x83\x01\x03\x81\x01"
  "\x03\x84\x01\x03\x85\x01\x03\x86\x01\x04\x87\x01\x03\x88\x01\x04"
  "\x0d\x75\x70\x64\x61\x74\x65\x2d\x71\x75\x65\x75\x65\x86\x01\x03"
  "\x63\x03\x89\x01\x03\x1c\x04\x8a\x01\x05\x99\x01\x04\x08\x61\x64"
  "\x76\x61\x6e\x63\x65\x89\x01\x05\x16\x77\x61\x6c\x6b\x2d\x70\x61"
  "\x69\x72\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6e\x67\x85\x01"
  "\x03\x5f\x05\x18\x77\x61\x6c\x6b\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6e\x67\x84\x01\x03\x5e\x05"
  "\x8c\x01\x15\xdc\x05\x42\x81\x89\x02\xdb\x05\x40\x81\x8b\x02\xda"
  "\x05\x3e\x81\x89\x02\xd9\x05\x3c\x81\x8b\x02\xd8\x05\x3a\x81\x8f"
  "\x02\xd7\x05\x38\x81\x89\x02\xd6\x05\x36\x81\x89\x02\xd5\x05\x34"
  "\x81\x8d\x02\xd4\x05\x32\x81\x93\x02\xd3\x05\x30\x81\x93\x02\xd2"
  "\x05\x2e\x81\x93\x02\xd1\x05\x2c\x81\x91\x02\xd0\x05\x2a\x81\x8d"
  "\x02\xcf\x05\x28\x81\x8b\x02\xce\x05\x26\x81\x8b\x02\xcd\x05\x24"
  "\x81\x8b\x02\xcc\x05\x22\x81\x8b\x02\xcb\x05\x20\x81\x8b\x02\xca"
  "\x05\x1e\x81\x8b\x02\xc9\x05\x1c\x81\x8b\x02\xc8\x05\x1a\x81\x8b"
  "\x02\xc7\x05\x18\x81\x8b\x02\xc6\x05\x16\x81\x8b\x02\xc5\x05\x14"
  "\x81\x8b\x02\xc4\x05\x12\x81\x8b\x02\xc3\x05\x10\x81\x83\x02\xc2"
  "\x05\x0e\x81\x8b\x02\xc1\x05\x0c\x81\x8b\x02\xc0\x05\x0a\x85\x08"
  "\xbf\x05\x08\x81\x8b\x02\xbe\x05\x06\x81\x8b\x02\xbd\x05\x04\x81"
  "\x8b\x02\x41\x7b\x83\x01\x02\x3d\x03\x2e\x20\x02\x2e\x9c\x01\x25"
  "\x9b\x01\x04\x2e\x2e\x2e\x90\x01\x91\x01\x92\x01\x04\x03\x93\x01"
  "\x03\x88\x01\x03\x94\x01\x04\x86\x01\x04\x95\x01\x03\x13\x63\x69"
  "\x72\x63\x75\x6c\x61\x72\x69\x74\x79\x2d\x73\x74\x72\x69\x6e\x67"
  "\x7f\x05\x99\x01\x04\x89\x01\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x70\x70\x65\x6e\x64\x38\x0a\x9a\x06\x7e\x81\x87\x02\x99\x06"
  "\x7c\x81\x85\x02\x98\x06\x7a\x81\x87\x02\x97\x06\x78\x81\x85\x02"
  "\x96\x06\x76\x81\x87\x02\x95\x06\x74\x81\x89\x02\x94\x06\x72\x81"
  "\x87\x02\x93\x06\x70\x81\x85\x02\x92\x06\x6e\x81\x83\x02\x91\x06"
  "\x6c\xfd\xff\x03\x90\x06\x6a\xfd\xff\x03\x8f\x06\x68\x81\x85\x02"
  "\x8e\x06\x66\x81\x83\x02\x8d\x06\x64\x81\x85\x02\x8c\x06\x62\x81"
  "\x83\x02\x8b\x06\x60\xfd\xff\x03\x8a\x06\x5e\xfd\xff\x03\x89\x06"
  "\x5c\xfd\xff\x03\x88\x06\x5a\xfd\xff\x03\x87\x06\x58\x81\x85\x02"
  "\x86\x06\x56\x81\x83\x02\x85\x06\x54\x81\x85\x02\x84\x06\x52\x81"
  "\x83\x02\x83\x06\x50\xfd\xff\x03\x82\x06\x4e\xfd\xff\x03\x81\x06"
  "\x4c\x81\x8d\x02\x80\x06\x4a\x81\x8b\x02\xff\x05\x48\x81\x85\x02"
  "\xfe\x05\x46\x81\x83\x02\xfd\x05\x44\x81\x85\x02\xfc\x05\x42\x81"
  "\x83\x02\xfb\x05\x40\x81\x89\x02\xfa\x05\x3e\x81\x85\x02\xf9\x05"
  "\x3c\xfd\xff\x03\xf8\x05\x3a\xfd\xff\x03\xf7\x05\x38\x81\x8f\x02"
  "\xf6\x05\x36\x81\x89\x02\xf5\x05\x34\x81\x89\x02\xf4\x05\x32\x81"
  "\x89\x02\xf3\x05\x30\x81\x89\x02\xf2\x05\x2e\x81\x85\x02\xf1\x05"
  "\x2c\x81\x83\x02\xf0\x05\x2a\xfd\xff\x03\xef\x05\x28\xfd\xff\x03"
  "\xee\x05\x26\xfd\xff\x03\xed\x05\x24\xfd\xff\x03\xec\x05\x22\xfd"
  "\xff\x03\xeb\x05\x20\xfd\xff\x03\xea\x05\x1e\xfd\xff\x03\xe9\x05"
  "\x1c\xff\xff\x03\xe8\x05\x1a\xfd\xff\x03\xe7\x05\x18\x81\x87\x02"
  "\xe6\x05\x16\x81\x89\x02\xe5\x05\x14\x81\x89\x02\xe4\x05\x12\x81"
  "\x83\x02\xe3\x05\x10\x81\x87\x02\xe2\x05\x0e\x81\x87\x02\xe1\x05"
  "\x0c\x81\x87\x02\xe0\x05\x0a\x81\x87\x02\xdf\x05\x08\x81\x87\x02"
  "\xde\x05\x06\x85\x08\xdd\x05\x04\x81\x87\x02\x7d\xa0\x01\x9d\x01"
  "\x02\x3e\x02\x2e\x25\x04\x2e\x2e\x2e\x90\x01\x91\x01\x92\x01\x04"
  "\x03\x93\x01\x03\x94\x01\x04\x86\x01\x03\x88\x01\x05\x99\x01\x03"
  "\x7f\x04\x89\x01\x04\x95\x01\x09\xc7\x06\x5c\x81\x85\x02\xc6\x06"
  "\x5a\xfd\xff\x03\xc5\x06\x58\xfd\xff\x03\xc4\x06\x56\x81\x85\x02"
  "\xc3\x06\x54\x81\x83\x02\xc2\x06\x52\x81\x85\x02\xc1\x06\x50\x81"
  "\x83\x02\xc0\x06\x4e\xfd\xff\x03\xbf\x06\x4c\xfd\xff\x03\xbe\x06"
  "\x4a\xfd\xff\x03\xbd\x06\x48\xfd\xff\x03\xbc\x06\x46\x81\x85\x02"
  "\xbb\x06\x44\x81\x83\x02\xba\x06\x42\x81\x85\x02\xb9\x06\x40\x81"
  "\x83\x02\xb8\x06\x3e\xfd\xff\x03\xb7\x06\x3c\xfd\xff\x03\xb6\x06"
  "\x3a\x81\x8d\x02\xb5\x06\x38\x81\x89\x02\xb4\x06\x36\x81\x89\x02"
  "\xb3\x06\x34\x81\x89\x02\xb2\x06\x32\x81\x89\x02\xb1\x06\x30\x81"
  "\x85\x02\xb0\x06\x2e\x81\x83\x02\xaf\x06\x2c\x81\x87\x02\xae\x06"
  "\x2a\x81\x89\x02\xad\x06\x28\xfd\xff\x03\xac\x06\x26\xfd\xff\x03"
  "\xab\x06\x24\x81\x85\x02\xaa\x06\x22\xfd\xff\x03\xa9\x06\x20\xfd"
  "\xff\x03\xa8\x06\x1e\xfd\xff\x03\xa7\x06\x1c\xfd\xff\x03\xa6\x06"
  "\x1a\xfd\xff\x03\xa5\x06\x18\xfd\xff\x03\xa4\x06\x16\xfd\xff\x03"
  "\xa3\x06\x14\xff\xff\x03\xa2\x06\x12\xfd\xff\x03\xa1\x06\x10\x81"
  "\x87\x02\xa0\x06\x0e\x81\x87\x02\x9f\x06\x0c\x81\x87\x02\x9e\x06"
  "\x0a\x81\x87\x02\x9d\x06\x08\x81\x87\x02\x9c\x06\x06\x85\x08\x9b"
  "\x06\x04\x81\x87\x02\x5b\x79\x92\x01\x02\x3f\x6d\x25\x0f\x02\x03"
  "\x0a\x71\x75\x65\x75\x65\x2d\x63\x64\x72\x90\x01\x03\x0a\x71\x75"
  "\x65\x75\x65\x2d\x63\x61\x72\x88\x01\x03\xd4\x06\x1c\x81\x87\x02"
  "\xd3\x06\x1a\x81\x83\x02\xd2\x06\x18\x81\x83\x02\xd1\x06\x16\x81"
  "\x83\x02\xd0\x06\x14\x81\x83\x02\xcf\x06\x12\x81\x83\x02\xce\x06"
  "\x10\x81\x89\x02\xcd\x06\x0e\x81\x85\x02\xcc\x06\x0c\x81\x85\x02"
  "\xcb\x06\x0a\x81\x87\x02\xca\x06\x08\x81\x85\x02\xc9\x06\x06\x81"
  "\x85\x02\xc8\x06\x04\x84\x06\x1b\x29\x9e\x01\x02\x40\x25\x9b\x01"
  "\x9c\x01\x03\x08\x61\x64\x64\x2d\x63\x61\x72\x9c\x01\x03\x08\x61"
  "\x64\x64\x2d\x63\x64\x72\x9b\x01\x04\x0f\x61\x64\x64\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x9f\x01\x04\xdf\x06\x18\x81\x85"
  "\x02\xde\x06\x16\x81\x85\x02\xdd\x06\x14\x81\x85\x02\xdc\x06\x12"
  "\x81\x85\x02\xdb\x06\x10\x81\x85\x02\xda\x06\x0e\x81\x85\x02\xd9"
  "\x06\x0c\x81\x89\x02\xd8\x06\x0a\x81\x85\x02\xd7\x06\x08\x81\x85"
  "\x02\xd6\x06\x06\x81\x85\x02\xd5\x06\x04\x84\x06\x17\x26\xa0\x01"
  "\x02\x41\x04\x0b\x71\x75\x65\x75\x65\x2d\x63\x6f\x6e\x73\xa1\x01"
  "\x02\xe0\x06\x04\x83\x04\x03\x0a\xa2\x01\x02\x42\x03\x04\xa1\x01"
  "\x02\xe1\x06\x04\x83\x04\x03\x0a\xa3\x01\x02\x43\x04\xa1\x01\x02"
  "\xe2\x06\x04\x84\x06\x03\xa4\x01\x02\x44\x02\x12\x6d\x61\x6b\x65"
  "\x2d\x66\x6c\x75\x69\x64\x2d\x76\x65\x63\x74\x6f\x72\xa5\x01\x02"
  "\xe4\x06\x06\x81\x81\x02\xe3\x06\x04\x82\x02\x05\x0c\xa6\x01\x02"
  "\x45\xe5\x06\x04\x82\x02\x03\xa7\x01\x02\x46\x21\xe6\x06\x04\x83"
  "\x04\x03\xa8\x01\x02\x47\x21\xe7\x06\x04\x83\x04\x03\xa9\x01\x02"
  "\x48\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\xaa\x01"
  "\x02\xe8\x06\x04\x84\x06\x03\xab\x01\x02\x49\xaa\x01\x02\xe9\x06"
  "\x04\x84\x06\x03\xaa\x01\x02\x4a\x21\x24\x07\x2e\x74\x61\x67\x2e"
  "\x32\xac\x01\x02\xed\x06\x0a\x81\x85\x02\xec\x06\x08\x81\x83\x02"
  "\xeb\x06\x06\x81\x83\x02\xea\x06\x04\x83\x04\x09\x12\xad\x01\x02"
  "\x4b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\xae\x01\x1c"
  "\x76\x69\x72\x74\x75\x61\x6c\x2d\x66\x6c\x75\x69\x64\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\xaf\x01\x02\x02\xa5"
  "\x01\x02\xf1\x06\x0a\x81\x85\x02\xf0\x06\x08\x81\x85\x02\xef\x06"
  "\x06\x81\x85\x02\xee\x06\x04\x83\x04\x09\x12\xb0\x01\x02\x4c\xae"
  "\x01\x02\x6d\xaf\x01\x02\x05\x12\x66\x6c\x75\x69\x64\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\xae\x01\x02\xf8\x06\x10\x81"
  "\x89\x02\xf7\x06\x0e\x81\x89\x02\xf6\x06\x0c\x81\x89\x02\xf5\x06"
  "\x0a\x81\x89\x02\xf4\x06\x08\x81\x89\x02\xf3\x06\x06\x81\x89\x02"
  "\xf2\x06\x04\x85\x08\x0f\x1a\xb1\x01\x02\x4d\x1c\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x66\x6c\x75\x69\x64\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x6c\x65\x6e\x67\x74\x68\xb2\x01\x02\x04\x0c\x6d\x61\x6b\x65"
  "\x2d\x76\x65\x63\x74\x6f\x72\x02\xfa\x06\x06\x81\x83\x02\xf9\x06"
  "\x04\x82\x02\x05\x0d\xb3\x01\x02\x4e\x25\x21\xaf\x01\x02\x05\xae"
  "\x01\x04\x2b\x03\x14\x66\x6c\x75\x69\x64\x2d\x76\x65\x63\x74\x6f"
  "\x72\x2d\x65\x78\x74\x65\x6e\x64\xb4\x01\x04\x8f\x07\x2c\x81\x8b"
  "\x02\x8e\x07\x2a\x81\x8b\x02\x8d\x07\x28\x81\x8b\x02\x8c\x07\x26"
  "\x81\x8d\x02\x8b\x07\x24\x81\x8d\x02\x8a\x07\x22\x81\x8d\x02\x89"
  "\x07\x20\x81\x8b\x02\x88\x07\x1e\x81\x8b\x02\x87\x07\x1c\x81\x8d"
  "\x02\x86\x07\x1a\x81\x8b\x02\x85\x07\x18\x81\x8b\x02\x84\x07\x16"
  "\x81\x8b\x02\x83\x07\x14\x81\x8b\x02\x82\x07\x12\x81\x8b\x02\x81"
  "\x07\x10\x81\x91\x02\x80\x07\x0e\x81\x8f\x02\xff\x06\x0c\x81\x91"
  "\x02\xfe\x06\x0a\x81\x89\x02\xfd\x06\x08\x81\x87\x02\xfc\x06\x06"
  "\x81\x85\x02\xfb\x06\x04\x84\x06\x2b\x3d\xb5\x01\x02\x4f\x6d\x25"
  "\x21\x94\x07\x0c\x81\x85\x02\x93\x07\x0a\x81\x85\x02\x92\x07\x08"
  "\x81\x85\x02\x91\x07\x06\x81\x85\x02\x90\x07\x04\x83\x04\x0b\x13"
  "\xb6\x01\x02\x50\x03\x6d\x25\x21\xaf\x01\x02\x03\x88\x01\x04\x2b"
  "\x03\xa8\x07\x2a\x81\x87\x02\xa7\x07\x28\x81\x89\x02\xa6\x07\x26"
  "\x81\x89\x02\xa5\x07\x24\x81\x89\x02\xa4\x07\x22\x81\x89\x02\xa3"
  "\x07\x20\x81\x87\x02\xa2\x07\x1e\x81\x89\x02\xa1\x07\x1c\x81\x87"
  "\x02\xa0\x07\x1a\x81\x89\x02\x9f\x07\x18\x81\x89\x02\x9e\x07\x16"
  "\x81\x87\x02\x9d\x07\x14\x81\x87\x02\x9c\x07\x12\x81\x89\x02\x9b"
  "\x07\x10\x81\x87\x02\x9a\x07\x0e\x81\x87\x02\x99\x07\x0c\x81\x87"
  "\x02\x98\x07\x0a\x81\x87\x02\x97\x07\x08\x81\x87\x02\x96\x07\x06"
  "\x81\x87\x02\x95\x07\x04\x83\x04\x29\x3b\xb7\x01\x02\x51\x25\x21"
  "\xac\x07\x0a\x81\x87\x02\xab\x07\x08\x81\x85\x02\xaa\x07\x06\x81"
  "\x85\x02\xa9\x07\x04\x83\x04\x09\x11\xb8\x01\x02\x52\x03\x6d\x25"
  "\x21\xaf\x01\x02\x05\x0a\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x03"
  "\x1c\x04\x1b\x04\xca\x07\x3e\x81\x8b\x02\xc9\x07\x3c\x81\x89\x02"
  "\xc8\x07\x3a\x81\x85\x02\xc7\x07\x38\x81\x85\x02\xc6\x07\x36\x81"
  "\x89\x02\xc5\x07\x34\x81\x8d\x02\xc4\x07\x32\x81\x89\x02\xc3\x07"
  "\x30\x81\x89\x02\xc2\x07\x2e\x81\x87\x02\xc1\x07\x2c\x81\x85\x02"
  "\xc0\x07\x2a\x81\x85\x02\xbf\x07\x28\x81\x85\x02\xbe\x07\x26\x81"
  "\x85\x02\xbd\x07\x24\x81\x89\x02\xbc\x07\x22\x81\x87\x02\xbb\x07"
  "\x20\x81\x85\x02\xba\x07\x1e\x81\x85\x02\xb9\x07\x1c\x81\x85\x02"
  "\xb8\x07\x1a\x81\x91\x02\xb7\x07\x18\x81\x91\x02\xb6\x07\x16\x81"
  "\x89\x02\xb5\x07\x14\x81\x87\x02\xb4\x07\x12\x81\x8f\x02\xb3\x07"
  "\x10\x81\x8d\x02\xb2\x07\x0e\x81\x8b\x02\xb1\x07\x0c\x81\x89\x02"
  "\xb0\x07\x0a\x81\x85\x02\xaf\x07\x08\x81\x83\x02\xae\x07\x06\x81"
  "\x83\x02\xad\x07\x04\x83\x04\x3d\x53\x6d\x02\x53\x0e\x2c\x20\x64"
  "\x6f\x77\x6e\x73\x74\x72\x65\x61\x6d\x20\x13\x23\x5b\x63\x69\x72"
  "\x63\x75\x6c\x61\x72\x69\x74\x79\x20\x28\x75\x70\x20\x03\x29\x5d"
  "\x16\x2c\x20\x64\x6f\x77\x6e\x73\x74\x72\x65\x61\x6d\x20\x31\x20"
  "\x63\x64\x72\x2e\x29\x5d\x09\x20\x63\x64\x72\x73\x2e\x29\x5d\x2b"
  "\x23\x5b\x63\x69\x72\x63\x75\x6c\x61\x72\x69\x74\x79\x20\x28\x63"
  "\x75\x72\x72\x65\x6e\x74\x20\x70\x61\x72\x65\x6e\x74\x68\x65\x74"
  "\x69\x63\x61\x6c\x20\x6c\x65\x76\x65\x6c\x28\x23\x5b\x63\x69\x72"
  "\x63\x75\x6c\x61\x72\x69\x74\x79\x20\x28\x75\x70\x20\x31\x20\x70"
  "\x61\x72\x65\x6e\x74\x68\x65\x74\x69\x63\x61\x6c\x20\x6c\x65\x76"
  "\x65\x6c\x16\x20\x70\x61\x72\x65\x6e\x74\x68\x65\x74\x69\x63\x61"
  "\x6c\x20\x6c\x65\x76\x65\x6c\x73\x21\x03\x0c\x71\x75\x65\x75\x65"
  "\x2d\x64\x65\x70\x74\x68\x1c\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x3e\x73\x74\x72\x69\x6e\x67\x04\x38\x05\x38\x05\xd6\x07\x1a\x81"
  "\x89\x02\xd5\x07\x18\x81\x89\x02\xd4\x07\x16\x81\x87\x02\xd3\x07"
  "\x14\x81\x87\x02\xd2\x07\x12\x81\x8b\x02\xd1\x07\x10\x81\x87\x02"
  "\xd0\x07\x0e\x81\x87\x02\xcf\x07\x0c\x81\x85\x02\xce\x07\x0a\x81"
  "\x83\x02\xcd\x07\x08\x81\x85\x02\xcc\x07\x06\x81\x85\x02\xcb\x07"
  "\x04\x83\x04\x19\x30\x1b\x02\x54\x3a\x03\x8e\x01\x04\x06\x77\x72"
  "\x69\x74\x65\x8e\x01\x03\xd9\x07\x08\x81\x85\x02\xd8\x07\x06\x81"
  "\x83\x02\xd7\x07\x04\x83\x04\x07\x10\xb9\x01\x02\x55\x37\x02\x04"
  "\x8e\x01\x02\xdb\x07\x06\x81\x85\x02\xda\x07\x04\x83\x04\x05\x0d"
  "\x8e\x01\x02\x56\x21\xdc\x07\x04\x83\x04\x03\xba\x01\x02\x57\x21"
  "\xdd\x07\x04\x83\x04\x03\xbb\x01\x02\x58\x21\xde\x07\x04\x83\x04"
  "\x03\xbc\x01\x02\x59\x21\x24\x07\x2e\x74\x61\x67\x2e\x33\xbd\x01"
  "\x02\xe2\x07\x0a\x81\x85\x02\xe1\x07\x08\x81\x83\x02\xe0\x07\x06"
  "\x81\x83\x02\xdf\x07\x04\x83\x04\x09\x12\xbe\x01\x02\x5a\x3a\x21"
  "\x04\x38\x03\x5a\x03\x63\x04\x8a\x01\x05\x12\x25\x6d\x61\x6b\x65"
  "\x2d\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f\x64\x65\x38\x06\xea\x07"
  "\x12\x81\x85\x02\xe9\x07\x10\x81\x87\x02\xe8\x07\x0e\x81\x85\x02"
  "\xe7\x07\x0c\x81\x85\x02\xe6\x07\x0a\x81\x85\x02\xe5\x07\x08\x81"
  "\x87\x02\xe4\x07\x06\x81\x85\x02\xe3\x07\x04\x84\x06\x11\x23\xbf"
  "\x01\x02\x5b\x25\x03\x63\x02\xf0\x07\x0e\x81\x87\x02\xef\x07\x0c"
  "\x81\x87\x02\xee\x07\x0a\x81\x89\x02\xed\x07\x08\x81\x87\x02\xec"
  "\x07\x06\x81\x85\x02\xeb\x07\x04\x84\x06\x0d\x15\xc0\x01\x02\x5c"
  "\x03\x63\x02\xf3\x07\x08\x81\x83\x02\xf2\x07\x06\x81\x83\x02\xf1"
  "\x07\x04\x83\x04\x07\x0f\xc1\x01\x02\x5d\xf4\x07\x04\x83\x04\x03"
  "\xc2\x01\x02\x5e\xf5\x07\x04\x83\x04\x03\xc3\x01\x02\x5f\x25\xf6"
  "\x07\x04\x83\x04\x03\x25\x02\x60\x3a\x21\x23\x1e\x03\x5a\x03\x78"
  "\x03\x5c\x04\xfb\x07\x0c\x81\x83\x02\xfa\x07\x0a\x81\x83\x02\xf9"
  "\x07\x08\x81\x83\x02\xf8\x07\x06\x83\x04\xf7\x07\x04\x81\x83\x02"
  "\x0b\x1e\x3a\x02\x61\x21\xfc\x07\x04\x83\x04\x03\x23\x02\x62\x21"
  "\xfd\x07\x04\x83\x04\x03\x02\x63\x21\xfe\x07\x04\x83\x04\x03\xc4"
  "\x01\x02\x64\x21\x24\x07\x2e\x74\x61\x67\x2e\x34\x24\x02\x82\x08"
  "\x0a\x81\x85\x02\x81\x08\x08\x81\x83\x02\x80\x08\x06\x81\x83\x02"
  "\xff\x07\x04\x83\x04\x09\x12\xc5\x01\x02\x65\x21\x03\x5c\x03\x64"
  "\x03\x85\x08\x08\x81\x83\x02\x84\x08\x06\x81\x83\x02\x83\x08\x04"
  "\x83\x04\x07\x11\x21\x65\x24\x21\x04\xc5\x01\x04\x64\x5c\x8c\x01"
  "\x19\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x64\x2d\x6e\x6f\x64"
  "\x65\x2f\x73\x75\x62\x6e\x6f\x64\x65\x1b\x68\x69\x67\x68\x6c\x69"
  "\x67\x68\x74\x65\x64\x2d\x6e\x6f\x64\x65\x2f\x68\x69\x67\x68\x6c"
  "\x69\x67\x68\x74\x16\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x64"
  "\x2d\x6e\x6f\x64\x65\x2f\x73\x69\x7a\x65\xc4\x01\x04\x04\x23\x04"
  "\x15\x72\x74\x64\x3a\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x64"
  "\x2d\x6e\x6f\x64\x65\xc5\x01\x11\x68\x69\x67\x68\x6c\x69\x67\x68"
  "\x74\x65\x64\x2d\x6e\x6f\x64\x65\x05\x73\x69\x7a\x65\xc4\x01\x0a"
  "\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x08\x73\x75\x62\x6e\x6f\x64"
  "\x65\x8c\x01\xbd\x01\x63\x0e\x6e\x6f\x64\x65\x2d\x73\x75\x62\x6e"
  "\x6f\x64\x65\x73\x0f\x6c\x69\x73\x74\x2d\x6e\x6f\x64\x65\x2d\x73"
  "\x69\x7a\x65\x0b\x6c\x69\x73\x74\x2d\x6e\x6f\x64\x65\x3f\x94\x01"
  "\x95\x01\x8a\x01\x5a\x3a\x06\x25\x04\xc3\x01\x04\xc2\x01\x04\xc1"
  "\x01\x04\xc0\x01\x04\xbf\x01\x04\xbe\x01\x04\x38\x14\x70\x72\x65"
  "\x66\x69\x78\x2d\x6e\x6f\x64\x65\x2d\x73\x75\x62\x6e\x6f\x64\x65"
  "\x13\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f\x64\x65\x2d\x70\x72\x65"
  "\x66\x69\x78\x11\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f\x64\x65\x2d"
  "\x73\x69\x7a\x65\xbc\x01\x04\xbb\x01\x04\xba\x01\x04\x10\x72\x74"
  "\x64\x3a\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f\x64\x65\xc3\x01\x0c"
  "\x70\x72\x65\x66\x69\x78\x2d\x6e\x6f\x64\x65\xc4\x01\x07\x70\x72"
  "\x65\x66\x69\x78\x8c\x01\x5b\x78\x7f\x1c\x0c\x6e\x75\x6c\x6c\x2d"
  "\x71\x75\x65\x75\x65\x3f\x90\x01\x88\x01\xa1\x01\xa5\x01\xae\x01"
  "\xb4\x01\x0c\x8e\x01\x04\xb9\x01\x04\x1b\x04\x6d\x04\xb8\x01\x04"
  "\xb7\x01\x04\xb6\x01\x04\xb5\x01\x04\xb3\x01\x04\xb1\x01\x04\xb0"
  "\x01\x04\x0c\xaf\x01\xac\x01\xb2\x01\x07\x71\x75\x65\x75\x65\x3f"
  "\x0b\xad\x01\x04\x2b\x15\x73\x65\x74\x2d\x71\x75\x65\x75\x65\x2f"
  "\x70\x61\x73\x74\x2d\x63\x64\x72\x73\x21\x15\x73\x65\x74\x2d\x71"
  "\x75\x65\x75\x65\x2f\x63\x6f\x6e\x73\x2d\x63\x65\x6c\x6c\x21\x10"
  "\x71\x75\x65\x75\x65\x2f\x70\x61\x73\x74\x2d\x63\x64\x72\x73\x10"
  "\x71\x75\x65\x75\x65\x2f\x63\x6f\x6e\x73\x2d\x63\x65\x6c\x6c\xaa"
  "\x01\x04\xab\x01\x04\xa9\x01\x04\xa8\x01\x04\x0a\x72\x74\x64\x3a"
  "\x71\x75\x65\x75\x65\xc4\x01\x06\x71\x75\x65\x75\x65\x0a\x63\x6f"
  "\x6e\x73\x2d\x63\x65\x6c\x6c\x0a\x70\x61\x73\x74\x2d\x63\x64\x72"
  "\x73\xa6\x01\x04\xa7\x01\x04\x35\x9f\x01\x9b\x01\x9c\x01\x86\x01"
  "\x89\x01\x0f\x84\x01\x85\x01\x99\x01\x43\x87\x01\x93\x01\x0f\x6e"
  "\x6f\x2d\x68\x69\x67\x68\x6c\x69\x67\x68\x74\x73\x3f\x8b\x01\x82"
  "\x01\x42\x10\x70\x61\x64\x2d\x77\x69\x74\x68\x2d\x73\x70\x61\x63"
  "\x65\x73\x69\x70\x75\x0d\x66\x69\x74\x73\x2d\x77\x69\x74\x68\x69"
  "\x6e\x3f\x15\x0b\x14\x0a\x13\x09\x12\x10\x17\x0c\x0e\x0d\x16\x56"
  "\x6e\x71\x54\x62\x66\x59\x45\x51\x50\x58\x44\x11\x2a\x75\x6e\x70"
  "\x61\x72\x73\x65\x2d\x6e\x65\x77\x6c\x69\x6e\x65\x0f\x2a\x75\x6e"
  "\x70\x61\x72\x73\x65\x2d\x73\x70\x61\x63\x65\x0f\x2a\x75\x6e\x70"
  "\x61\x72\x73\x65\x2d\x63\x6c\x6f\x73\x65\x0e\x2a\x75\x6e\x70\x61"
  "\x72\x73\x65\x2d\x6f\x70\x65\x6e\x10\x2a\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x0e\x2a\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x63\x68\x61\x72\x37\x3d\x1e\x5f\x5e\x5d\x81\x01\x3e\xa4"
  "\x01\x04\xa3\x01\x04\xa2\x01\x04\xa0\x01\x04\x9e\x01\x04\x92\x01"
  "\x06\x9d\x01\x06\x83\x01\x0a\x9a\x01\x04\x3e\x04\x98\x01\x04\x97"
  "\x01\x04\x96\x01\x06\x8f\x01\x04\x8d\x01\x08\x46\x04\x48\x04\x7d"
  "\x04\x7c\x04\x7b\x04\x7a\x04\x79\x06\x77\x04\x76\x04\x74\x04\x73"
  "\x04\x72\x04\x6f\x04\x6c\x04\x6b\x04\x6a\x04\x68\x04\x67\x06\x65"
  "\x1c\x60\x06\x57\x04\x55\x04\x53\x04\x52\x04\x4e\x04\x4d\x04\x4c"
  "\x04\x4b\x04\x4a\x04\x49\x04\x47\x06\x3c\x04\x3b\x04\x39\x04\x36"
  "\x04\x3e\x29\x08\x1e\x6d\x61\x6b\x65\x2d\x70\x72\x65\x74\x74\x79"
  "\x2d\x70\x72\x69\x6e\x74\x65\x72\x2d\x68\x69\x67\x68\x6c\x69\x67"
  "\x68\x74\x12\x70\x70\x68\x2f\x62\x72\x65\x61\x64\x74\x68\x2d\x6c"
  "\x69\x6d\x69\x74\x10\x70\x70\x68\x2f\x64\x65\x70\x74\x68\x2d\x6c"
  "\x69\x6d\x69\x74\x0d\x70\x70\x68\x2f\x61\x73\x2d\x63\x6f\x64\x65"
  "\x3f\x0f\x70\x70\x68\x2f\x65\x6e\x64\x2d\x73\x74\x72\x69\x6e\x67"
  "\x11\x70\x70\x68\x2f\x73\x74\x61\x72\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x0b\x70\x70\x68\x2f\x6f\x62\x6a\x65\x63\x74\x34\x04\x33\x04"
  "\x32\x04\x31\x04\x30\x04\x2f\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1d\x72\x74\x64\x3a\x70\x72"
  "\x65\x74\x74\x79\x2d\x70\x72\x69\x6e\x74\x65\x72\x2d\x68\x69\x67"
  "\x68\x6c\x69\x67\x68\x74\xc2\x01\x19\x70\x72\x65\x74\x74\x79\x2d"
  "\x70\x72\x69\x6e\x74\x65\x72\x2d\x68\x69\x67\x68\x6c\x69\x67\x68"
  "\x74\x07\x6f\x62\x6a\x65\x63\x74\x0d\x73\x74\x61\x72\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x0b\x65\x6e\x64\x2d\x73\x74\x72\x69\x6e\x67"
  "\x09\x61\x73\x2d\x63\x6f\x64\x65\x3f\x0c\x64\x65\x70\x74\x68\x2d"
  "\x6c\x69\x6d\x69\x74\x0e\x62\x72\x65\x61\x64\x74\x68\x2d\x6c\x69"
  "\x6d\x69\x74\x28\x04\x2a\x04\x2c\x04\x2d\x04\x2e\x04\x19\x1d\x26"
  "\x11\x03\x70\x70\x7e\x41\x40\x4f\x61\x91\x01\x3f\x80\x01\x14\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x21\x12\x1a\x0a\x27\x04\x20\x22\x04\x1f\x06\x18\x04\x12\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x23\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c"
  "\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78"
  "\x05\xc2\x01\xc4\x01\xb2\x01\xc3\x01\xc5\x01\x06\x3b\x78\x80\x80"
  "\x04\x3a\x76\x81\x81\x02\x39\x74\x81\x81\x02\x38\x72\x81\x85\x02"
  "\x37\x70\x81\x83\x02\x36\x6e\x81\x89\x02\x35\x6c\x81\x87\x02\x34"
  "\x6a\x81\x83\x02\x33\x68\x81\x85\x02\x32\x66\x81\x83\x02\x31\x64"
  "\x81\x85\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81"
  "\x83\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x89"
  "\x02\x2a\x56\x81\x87\x02\x29\x54\x81\x83\x02\x28\x52\x81\x85\x02"
  "\x27\x50\x81\x83\x02\x26\x4e\x81\x85\x02\x25\x4c\x81\x87\x02\x24"
  "\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44"
  "\x81\x85\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81"
  "\x85\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x8b\x02\x1b\x38\x81\x87"
  "\x02\x1a\x36\x81\x87\x02\x19\x34\x81\x87\x02\x18\x32\x81\x83\x02"
  "\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14"
  "\x2a\x81\x87\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24"
  "\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x97\x02\x0e\x1e\x81"
  "\x95\x02\x0d\x1c\x81\x93\x02\x0c\x1a\x81\x8f\x02\x0b\x18\x81\x8f"
  "\x02\x0a\x16\x81\x91\x02\x09\x14\x81\x93\x02\x08\x12\x81\x87\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04"
  "\x81\x83\x02\x77\xc5\x01";

SCHEME_OBJECT *
pp_so_data_2cee1d02a0bc2bc4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pp_so_data_2cee1d02a0bc2bc4 [0]))), (sizeof (prog_pp_so_data_2cee1d02a0bc2bc4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_70]));
}

DECLARE_COMPILED_DATA_NS ("pp.so", pp_so_data_2cee1d02a0bc2bc4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pp.so", "c141943643a4e4cd")
