/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:57-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_8 9
#define LABEL_1_12 11
#define LABEL_1_14 13
#define LABEL_1_15 15
#define LABEL_1_10 17
#define LABEL_1_13 19
#define LABEL_1_19 21
#define LABEL_1_20 23
#define LABEL_1_17 25
#define LABEL_1_22 27
#define LABEL_1_23 29
#define LABEL_1_24 31
#define LABEL_1_25 33
#define LABEL_1_26 35
#define LABEL_1_27 37
#define LABEL_1_28 39
#define LABEL_1_29 41
#define LABEL_1_30 43
#define LABEL_1_31 45
#define LABEL_1_32 47
#define LABEL_1_33 49
#define LABEL_1_21 51
#define LABEL_1_35 53
#define LABEL_1_36 55
#define LABEL_1_38 57
#define LABEL_1_41 59
#define LABEL_1_42 61
#define LABEL_1_43 63
#define LABEL_1_45 65
#define ENVIRONMENT_LABEL_1_3 127
#define DEBUGGING_LABEL_1_2 126
#define OBJECT_1_14 125
#define OBJECT_1_13 124
#define OBJECT_1_12 123
#define OBJECT_1_11 122
#define OBJECT_1_10 121
#define OBJECT_1_9 120
#define OBJECT_1_8 119
#define OBJECT_1_7 118
#define OBJECT_1_6 117
#define OBJECT_1_5 116
#define OBJECT_1_4 115
#define OBJECT_1_3 114
#define OBJECT_1_2 113
#define OBJECT_1_1 112
#define OBJECT_1_0 111
#define EXECUTE_CACHE_1_47 67
#define EXECUTE_CACHE_1_46 69
#define EXECUTE_CACHE_1_44 71
#define EXECUTE_CACHE_1_40 73
#define EXECUTE_CACHE_1_39 75
#define EXECUTE_CACHE_1_37 77
#define EXECUTE_CACHE_1_34 79
#define EXECUTE_CACHE_1_18 81
#define EXECUTE_CACHE_1_16 83
#define EXECUTE_CACHE_1_11 85
#define EXECUTE_CACHE_1_9 87
#define EXECUTE_CACHE_1_7 89
#define FREE_REFERENCE_1_15 92
#define FREE_REFERENCE_1_14 93
#define FREE_REFERENCE_1_13 94
#define FREE_REFERENCE_1_12 95
#define FREE_REFERENCE_1_11 96
#define FREE_REFERENCE_1_10 97
#define FREE_REFERENCE_1_9 98
#define FREE_REFERENCE_1_8 99
#define FREE_REFERENCE_1_7 100
#define FREE_REFERENCE_1_6 101
#define FREE_REFERENCE_1_5 102
#define FREE_REFERENCE_1_4 103
#define FREE_REFERENCE_1_3 104
#define FREE_REFERENCE_1_2 105
#define FREE_REFERENCE_1_1 106
#define FREE_REFERENCE_1_0 107
#define FREE_ASSIGNMENT_1_1 109
#define FREE_ASSIGNMENT_1_0 110
#define FREE_REFERENCES_LABEL_1_0 66
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd233;
  machine_word Wrd229;
  machine_word Wrd231;
  machine_word Wrd232;
  machine_word Wrd225;
  machine_word Wrd227;
  machine_word Wrd228;
  machine_word Wrd219;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd214;
  machine_word Wrd210;
  machine_word Wrd212;
  machine_word Wrd213;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd209;
  machine_word Wrd200;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd195;
  machine_word Wrd191;
  machine_word Wrd193;
  machine_word Wrd194;
  machine_word Wrd187;
  machine_word Wrd189;
  machine_word Wrd190;
  machine_word Wrd181;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd175;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd171;
  machine_word Wrd162;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd157;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd156;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd152;
  machine_word Wrd143;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd138;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd137;
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
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd105;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_52;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_50;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_51;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto label_57;

    case 10:
      current_block = (Rpc - LABEL_1_20);
      goto label_58;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_1_22);
      goto label_59;

    case 13:
      current_block = (Rpc - LABEL_1_23);
      goto label_60;

    case 14:
      current_block = (Rpc - LABEL_1_24);
      goto label_61;

    case 15:
      current_block = (Rpc - LABEL_1_25);
      goto label_62;

    case 16:
      current_block = (Rpc - LABEL_1_26);
      goto label_63;

    case 17:
      current_block = (Rpc - LABEL_1_27);
      goto label_64;

    case 18:
      current_block = (Rpc - LABEL_1_28);
      goto label_65;

    case 19:
      current_block = (Rpc - LABEL_1_29);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_1_30);
      goto label_67;

    case 21:
      current_block = (Rpc - LABEL_1_31);
      goto label_68;

    case 22:
      current_block = (Rpc - LABEL_1_32);
      goto label_69;

    case 23:
      current_block = (Rpc - LABEL_1_33);
      goto label_70;

    case 24:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_40;

    case 25:
      current_block = (Rpc - LABEL_1_35);
      goto continuation_42;

    case 26:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_41;

    case 27:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_43;

    case 28:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_44;

    case 29:
      current_block = (Rpc - LABEL_1_42);
      goto label_71;

    case 30:
      current_block = (Rpc - LABEL_1_43);
      goto continuation_45;

    case 31:
      current_block = (Rpc - LABEL_1_45);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_73)
DEFLABEL (initialize_packageB_52)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_100;
  Wrd10 = Wrd14;

DEFLABEL (label_99)
  (Wrd19.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_98;
  Wrd29 = Wrd33;

DEFLABEL (label_97)
  (Wrd38.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd43.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_96;
  Wrd48 = Wrd52;

DEFLABEL (label_95)
  (Wrd57.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd62.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_94;
  Wrd67 = Wrd71;

DEFLABEL (label_93)
  (Wrd76.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd80.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd81.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_92;
  Wrd86 = Wrd90;

DEFLABEL (label_91)
  (Wrd95.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd100.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_90;
  Wrd105 = Wrd109;

DEFLABEL (label_89)
  (Wrd114.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Wrd119.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_10]));
  (Wrd128.Obj) = ((Wrd125.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_88;
  Wrd124 = Wrd128;

DEFLABEL (label_87)
  (Wrd133.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd132.pObj) = (& (Rhp [-2]));
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd132.pObj)));
  (Wrd137.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd137.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (Wrd136.pObj) = (& (Rhp [-2]));
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd136.pObj)));
  (Wrd138.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd134.Obj);
  (* (Rhp++)) = (Wrd138.Obj);
  (Wrd140.pObj) = (& (Rhp [-2]));
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd140.pObj)));
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd144.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_11]));
  (Wrd147.Obj) = ((Wrd144.pObj) [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd148.uLng) == 50)
    goto label_86;
  Wrd143 = Wrd147;

DEFLABEL (label_85)
  (Wrd152.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd143.Obj);
  (* (Rhp++)) = (Wrd152.Obj);
  (Wrd151.pObj) = (& (Rhp [-2]));
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd151.pObj)));
  (Wrd156.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd156.Obj);
  (* (Rhp++)) = (Wrd149.Obj);
  (Wrd155.pObj) = (& (Rhp [-2]));
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd155.pObj)));
  (Wrd157.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd153.Obj);
  (* (Rhp++)) = (Wrd157.Obj);
  (Wrd159.pObj) = (& (Rhp [-2]));
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd159.pObj)));
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd163.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_12]));
  (Wrd166.Obj) = ((Wrd163.pObj) [0]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if ((Wrd167.uLng) == 50)
    goto label_84;
  Wrd162 = Wrd166;

DEFLABEL (label_83)
  (Wrd171.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd162.Obj);
  (* (Rhp++)) = (Wrd171.Obj);
  (Wrd170.pObj) = (& (Rhp [-2]));
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd170.pObj)));
  (Wrd175.Obj) = (current_block [OBJECT_1_11]);
  (* (Rhp++)) = (Wrd175.Obj);
  (* (Rhp++)) = (Wrd168.Obj);
  (Wrd174.pObj) = (& (Rhp [-2]));
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd174.pObj)));
  (Wrd176.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd172.Obj);
  (* (Rhp++)) = (Wrd176.Obj);
  (Wrd178.pObj) = (& (Rhp [-2]));
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd178.pObj)));
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd182.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_13]));
  (Wrd185.Obj) = ((Wrd182.pObj) [0]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if ((Wrd186.uLng) == 50)
    goto label_82;
  Wrd181 = Wrd185;

DEFLABEL (label_81)
  (Wrd190.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd181.Obj);
  (* (Rhp++)) = (Wrd190.Obj);
  (Wrd189.pObj) = (& (Rhp [-2]));
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd189.pObj)));
  (Wrd194.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd194.Obj);
  (* (Rhp++)) = (Wrd187.Obj);
  (Wrd193.pObj) = (& (Rhp [-2]));
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd193.pObj)));
  (Wrd195.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd191.Obj);
  (* (Rhp++)) = (Wrd195.Obj);
  (Wrd197.pObj) = (& (Rhp [-2]));
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd197.pObj)));
  (* (--Rsp)) = (Wrd198.Obj);
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_14]));
  (Wrd204.Obj) = ((Wrd201.pObj) [0]);
  (Wrd205.uLng) = (OBJECT_TYPE (Wrd204.Obj));
  if ((Wrd205.uLng) == 50)
    goto label_80;
  Wrd200 = Wrd204;

DEFLABEL (label_79)
  (Wrd209.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd200.Obj);
  (* (Rhp++)) = (Wrd209.Obj);
  (Wrd208.pObj) = (& (Rhp [-2]));
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd208.pObj)));
  (Wrd213.Obj) = (current_block [OBJECT_1_13]);
  (* (Rhp++)) = (Wrd213.Obj);
  (* (Rhp++)) = (Wrd206.Obj);
  (Wrd212.pObj) = (& (Rhp [-2]));
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd212.pObj)));
  (Wrd214.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd210.Obj);
  (* (Rhp++)) = (Wrd214.Obj);
  (Wrd216.pObj) = (& (Rhp [-2]));
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd216.pObj)));
  (* (--Rsp)) = (Wrd217.Obj);
  (Wrd220.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_15]));
  (Wrd223.Obj) = ((Wrd220.pObj) [0]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if ((Wrd224.uLng) == 50)
    goto label_78;
  Wrd219 = Wrd223;

DEFLABEL (label_77)
  (Wrd228.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd219.Obj);
  (* (Rhp++)) = (Wrd228.Obj);
  (Wrd227.pObj) = (& (Rhp [-2]));
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd227.pObj)));
  (Wrd232.Obj) = (current_block [OBJECT_1_14]);
  (* (Rhp++)) = (Wrd232.Obj);
  (* (Rhp++)) = (Wrd225.Obj);
  (Wrd231.pObj) = (& (Rhp [-2]));
  (Wrd229.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd231.pObj)));
  (Wrd233.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd229.Obj);
  (* (Rhp++)) = (Wrd233.Obj);
  (Wrd235.pObj) = (& (Rhp [-2]));
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd235.pObj)));
  (* (--Rsp)) = (Wrd236.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_37]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_40]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_1_35);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_74)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_44]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_1_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_46]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_1_45);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (label_76)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_42])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_71)
  goto label_74;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd220.pObj));

DEFLABEL (label_70)
  (Wrd219.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_32])), (Wrd201.pObj));

DEFLABEL (label_69)
  (Wrd200.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_31])), (Wrd182.pObj));

DEFLABEL (label_68)
  (Wrd181.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd163.pObj));

DEFLABEL (label_67)
  (Wrd162.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_29])), (Wrd144.pObj));

DEFLABEL (label_66)
  (Wrd143.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_28])), (Wrd125.pObj));

DEFLABEL (label_65)
  (Wrd124.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd106.pObj));

DEFLABEL (label_64)
  (Wrd105.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_26])), (Wrd87.pObj));

DEFLABEL (label_63)
  (Wrd86.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd68.pObj));

DEFLABEL (label_62)
  (Wrd67.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_24])), (Wrd49.pObj));

DEFLABEL (label_61)
  (Wrd48.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_23])), (Wrd30.pObj));

DEFLABEL (label_60)
  (Wrd29.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd11.pObj));

DEFLABEL (label_59)
  (Wrd10.Obj) = Rvl;
  goto label_99;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_109)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_108;
  Wrd21 = Wrd25;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_106;
  Wrd27 = Wrd31;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_104;
  Wrd5 = Wrd9;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_102;
  Wrd11 = Wrd15;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_20])), (Wrd12.pObj));

DEFLABEL (label_58)
  (Wrd11.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_19])), (Wrd6.pObj));

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd28.pObj));

DEFLABEL (label_56)
  (Wrd27.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd22.pObj));

DEFLABEL (label_55)
  (Wrd21.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_111)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_12])), (Wrd6.pObj), Rvl);

DEFLABEL (label_54)
  goto label_109;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define LABEL_2_6 9
#define ENVIRONMENT_LABEL_2_3 19
#define DEBUGGING_LABEL_2_2 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_9 11
#define EXECUTE_CACHE_2_8 13
#define FREE_REFERENCE_2_0 16
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto save_console_input_2;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (save_console_input_6)
DEFLABEL (save_console_input_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_14 13
#define LABEL_3_13 15
#define LABEL_3_17 17
#define LABEL_3_12 19
#define LABEL_3_20 21
#define LABEL_3_19 23
#define LABEL_3_22 25
#define LABEL_3_16 27
#define ENVIRONMENT_LABEL_3_3 47
#define DEBUGGING_LABEL_3_2 46
#define OBJECT_3_0 45
#define EXECUTE_CACHE_3_23 29
#define EXECUTE_CACHE_3_21 31
#define EXECUTE_CACHE_3_18 33
#define EXECUTE_CACHE_3_15 35
#define EXECUTE_CACHE_3_11 37
#define EXECUTE_CACHE_3_8 39
#define EXECUTE_CACHE_3_6 41
#define FREE_REFERENCE_3_0 44
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd9;
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
      goto reset_console_10;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_3_20);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_3_22);
      goto label_15;

    case 12:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_console_17)
DEFLABEL (reset_console_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 0);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_19;
  Wrd20 = Wrd24;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd21.pObj));

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_25)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_22;
  Wrd7 = Wrd11;

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_22])), (Wrd8.pObj));

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_20])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_12);
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto make_cstate_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cstate_4)
DEFLABEL (make_cstate_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_5 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define ENVIRONMENT_LABEL_5_3 27
#define DEBUGGING_LABEL_5_2 26
#define OBJECT_5_2 25
#define OBJECT_5_1 24
#define OBJECT_5_0 23
#define EXECUTE_CACHE_5_8 15
#define EXECUTE_CACHE_5_6 17
#define FREE_ASSIGNMENT_5_2 20
#define FREE_ASSIGNMENT_5_1 21
#define FREE_ASSIGNMENT_5_0 22
#define FREE_REFERENCES_LABEL_5_0 14
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
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
      goto set_console_i_o_portB_2;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_console_i_o_portB_8)
DEFLABEL (set_console_i_o_portB_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);

DEFLABEL (label_18)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_15)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_12)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_2]));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_5_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_11])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (label_14)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_10])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_5)
  goto label_12;

DEFLABEL (label_17)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_9])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_4)
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCE_6_0 10
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto console_i_o_portP_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (console_i_o_portP_4)
DEFLABEL (console_i_o_portP_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_7 9
#define LABEL_7_12 11
#define LABEL_7_10 13
#define LABEL_7_16 15
#define LABEL_7_15 17
#define LABEL_7_13 19
#define ENVIRONMENT_LABEL_7_3 42
#define DEBUGGING_LABEL_7_2 41
#define OBJECT_7_1 40
#define OBJECT_7_0 39
#define EXECUTE_CACHE_7_21 21
#define EXECUTE_CACHE_7_20 23
#define EXECUTE_CACHE_7_19 25
#define EXECUTE_CACHE_7_18 27
#define EXECUTE_CACHE_7_17 29
#define EXECUTE_CACHE_7_14 31
#define EXECUTE_CACHE_7_11 33
#define EXECUTE_CACHE_7_8 35
#define EXECUTE_CACHE_7_6 37
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto operation_read_char_10;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_read_char_13)
DEFLABEL (operation_read_char_10)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_9);
  goto label_14;

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_12);
  goto label_18;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_9 7
#define LABEL_8_5 9
#define LABEL_8_13 11
#define LABEL_8_10 13
#define LABEL_8_7 15
#define ENVIRONMENT_LABEL_8_3 30
#define DEBUGGING_LABEL_8_2 29
#define EXECUTE_CACHE_8_16 17
#define EXECUTE_CACHE_8_15 19
#define EXECUTE_CACHE_8_14 21
#define EXECUTE_CACHE_8_12 23
#define EXECUTE_CACHE_8_11 25
#define EXECUTE_CACHE_8_8 27
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto operation_read_finish_9;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_8_13);
      goto loop_7;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_read_finish_12)
DEFLABEL (operation_read_finish_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_7;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (loop_13)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_8_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_15)
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto label_14;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_5 7
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_0 15
#define EXECUTE_CACHE_9_9 9
#define EXECUTE_CACHE_9_8 11
#define EXECUTE_CACHE_9_6 13
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_9_4);
      goto operation_discretionary_write_char_2;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_discretionary_write_char_5)
DEFLABEL (operation_discretionary_write_char_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_9_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 11
#define DEBUGGING_LABEL_10_2 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto operation_clear_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_clear_4)
DEFLABEL (operation_clear_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 11
#define DEBUGGING_LABEL_11_2 10
#define OBJECT_11_0 9
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto operation_beep_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_beep_4)
DEFLABEL (operation_beep_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto operation_x_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_x_size_3)
DEFLABEL (operation_x_size_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 6
#define DEBUGGING_LABEL_13_2 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto operation_y_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_y_size_3)
DEFLABEL (operation_y_size_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 9
#define DEBUGGING_LABEL_14_2 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ttyio_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto operation_write_self_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_write_self_3)
DEFLABEL (operation_write_self_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

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
ttyio_so_cb517b8e04214dff (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 14)
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

static const struct liarc_code_S arr_decl_ttyio_so_cb517b8e04214dff [14] =
  {
    { "ttyio_so_code_1", 32, ttyio_so_code_1 },
    { "ttyio_so_code_2", 4, ttyio_so_code_2 },
    { "ttyio_so_code_3", 13, ttyio_so_code_3 },
    { "ttyio_so_code_4", 2, ttyio_so_code_4 },
    { "ttyio_so_code_5", 6, ttyio_so_code_5 },
    { "ttyio_so_code_6", 2, ttyio_so_code_6 },
    { "ttyio_so_code_7", 9, ttyio_so_code_7 },
    { "ttyio_so_code_8", 7, ttyio_so_code_8 },
    { "ttyio_so_code_9", 3, ttyio_so_code_9 },
    { "ttyio_so_code_10", 2, ttyio_so_code_10 },
    { "ttyio_so_code_11", 2, ttyio_so_code_11 },
    { "ttyio_so_code_12", 1, ttyio_so_code_12 },
    { "ttyio_so_code_13", 1, ttyio_so_code_13 },
    { "ttyio_so_code_14", 1, ttyio_so_code_14 }
  };

int
decl_ttyio_so_cb517b8e04214dff (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ttyio_so_cb517b8e04214dff);
  return (0);
}

DECLARE_COMPILED_CODE ("ttyio.so", 3, decl_ttyio_so_cb517b8e04214dff, ttyio_so_cb517b8e04214dff)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ttyio_so_data_cb517b8e04214dff [2680] =
  "\x83\x01\x21\xa6\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\xb9"
  "\x0d\x0d\x0d\x0d\x0d\xba\x0d\x0d\xbb\x0d\x0d\x0d\x08\x80\x0d\x0d"
  "\xbc\x0d\xbd\x25\x0d\xbe\x0d\x0d\xbf\x0d\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x0d\x1c\x0d\x1c\x0d\x0d\x0d\x1c\x0d\x1c\x0d\x0d\x1c\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x82\x88\xc1\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc0"
  "\xb5\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x84\x88\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x1d\x0c\x1b\x0d\x1c\x1b\x0d\x1c\x25\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\xb2\x28"
  "\x0d\x28\xb1\x28\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\xb4\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc0\x28\x0d\xbb\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xba\x1d\xb0\x02\x88\xc0\x28\xb3\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbb\x1d\xb0\x02\x88\xc0\x22\x29\x21\x9d\x2b\xb9\x1d\xb0\x02\x88"
  "\xc0\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a\x1b\x2a\xb1\x2a\xb3"
  "\x2a\xb2\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\xb5\x0d\x1b\x1b\xb7\xb6\xb4\x0d\x17\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x74\x74\x79\x69\x6f\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x05\x62\x65\x65\x70\x0c\x63\x68\x61\x72\x2d"
  "\x72\x65\x61\x64\x79\x3f\x06\x63\x6c\x65\x61\x72\x19\x64\x69\x73"
  "\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x77\x72\x69\x74\x65"
  "\x2d\x63\x68\x61\x72\x1b\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e"
  "\x61\x72\x79\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74"
  "\x0a\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x0a\x72\x65\x61\x64\x2d"
  "\x63\x68\x61\x72\x0c\x72\x65\x61\x64\x2d\x66\x69\x6e\x69\x73\x68"
  "\x0c\x75\x6e\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x0b\x77\x72\x69"
  "\x74\x65\x2d\x73\x65\x6c\x66\x07\x78\x2d\x73\x69\x7a\x65\x07\x79"
  "\x2d\x73\x69\x7a\x65\x08\x63\x68\x61\x6e\x6e\x65\x6c\x11\x70\x6f"
  "\x72\x74\x2f\x65\x63\x68\x6f\x2d\x69\x6e\x70\x75\x74\x3f\x11\x74"
  "\x68\x65\x2d\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x70\x6f\x72\x74\x03"
  "\x13\x73\x61\x76\x65\x2d\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x69\x6e"
  "\x70\x75\x74\x12\x65\x76\x65\x6e\x74\x3a\x62\x65\x66\x6f\x72\x65"
  "\x2d\x65\x78\x69\x74\x0e\x72\x65\x73\x65\x74\x2d\x63\x6f\x6e\x73"
  "\x6f\x6c\x65\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d"
  "\x72\x65\x73\x74\x6f\x72\x65\x11\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x79\x2d\x73\x69\x7a\x65\x09\x11\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x78\x2d\x73\x69\x7a\x65\x0a\x15\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x77\x72\x69\x74\x65\x2d\x73\x65\x6c\x66"
  "\x0b\x17\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x6f\x2f\x75\x6e\x72"
  "\x65\x61\x64\x2d\x63\x68\x61\x72\x16\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x72\x65\x61\x64\x2d\x66\x69\x6e\x69\x73\x68\x0c\x14"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x72\x65\x61\x64\x2d\x63"
  "\x68\x61\x72\x0d\x15\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x6f\x2f"
  "\x70\x65\x65\x6b\x2d\x63\x68\x61\x72\x18\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x69\x6f\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75"
  "\x74\x23\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x73\x63"
  "\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\x0e\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x63\x6c\x65\x61\x72\x0f\x17\x67\x65\x6e\x65\x72\x69\x63\x2d\x69"
  "\x6f\x2f\x63\x68\x61\x72\x2d\x72\x65\x61\x64\x79\x3f\x0f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x62\x65\x65\x70\x10\x11\x04\x16"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74"
  "\x2d\x74\x79\x70\x65\x03\x1a\x67\x65\x6e\x65\x72\x69\x63\x2d\x69"
  "\x2f\x6f\x2d\x70\x6f\x72\x74\x2d\x61\x63\x63\x65\x73\x73\x6f\x72"
  "\x02\x13\x74\x74\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x11\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74"
  "\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x02\x12\x74\x74\x79\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x12\x04\x0f"
  "\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x04\x0c"
  "\x6d\x61\x6b\x65\x2d\x63\x73\x74\x61\x74\x65\x13\x04\x12\x73\x65"
  "\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x70\x6f\x72\x74\x21\x14"
  "\x04\x0a\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x03\x16\x73\x65\x74"
  "\x2d\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72"
  "\x74\x21\x15\x03\x18\x73\x65\x74\x2d\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x21\x03\x19\x73\x65"
  "\x74\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x70\x6f\x72\x74\x21\x0d\x23\x42\x81\x89\x02\x22\x40\x81\x89"
  "\x02\x21\x3e\x81\x89\x02\x20\x3c\x81\x89\x02\x1f\x3a\x81\x89\x02"
  "\x1e\x38\x81\x8b\x02\x1d\x36\x81\x89\x02\x1c\x34\x81\x87\x02\x1b"
  "\x32\x81\x8d\x02\x1a\x30\x81\x8d\x02\x19\x2e\x81\x8d\x02\x18\x2c"
  "\x81\x8d\x02\x17\x2a\x81\x8d\x02\x16\x28\x81\x8d\x02\x15\x26\x81"
  "\x8d\x02\x14\x24\x81\x8d\x02\x13\x22\x81\x8d\x02\x12\x20\x81\x8d"
  "\x02\x11\x1e\x81\x8d\x02\x10\x1c\x81\x8b\x02\x0f\x1a\x81\x87\x02"
  "\x0e\x18\x81\x83\x02\x0d\x16\x81\x81\x02\x0c\x14\x81\x81\x02\x0b"
  "\x12\x81\x85\x02\x0a\x10\x81\x85\x02\x09\x0e\x81\x83\x02\x08\x0c"
  "\x81\x81\x02\x07\x0a\x81\x81\x02\x06\x08\x81\x83\x02\x05\x06\x81"
  "\x81\x02\x04\x04\x82\x02\x41\x80\x01\x16\x02\x13\x72\x65\x6c\x6f"
  "\x61\x64\x2d\x73\x61\x76\x65\x2d\x73\x74\x72\x69\x6e\x67\x13\x63"
  "\x6f\x6e\x73\x6f\x6c\x65\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x17\x02\x03\x12\x70\x6f\x72\x74\x2d\x69\x6e\x70\x75\x74\x2d"
  "\x62\x75\x66\x66\x65\x72\x18\x03\x16\x69\x6e\x70\x75\x74\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x03\x27"
  "\x0a\x81\x83\x02\x26\x08\x81\x81\x02\x25\x06\x81\x85\x02\x24\x04"
  "\x82\x02\x09\x14\x19\x02\x17\x72\x65\x6c\x6f\x61\x64\x2d\x72\x65"
  "\x74\x72\x69\x65\x76\x65\x2d\x73\x74\x72\x69\x6e\x67\x02\x02\x11"
  "\x02\x12\x04\x13\x04\x10\x73\x65\x74\x2d\x70\x6f\x72\x74\x2f\x73"
  "\x74\x61\x74\x65\x21\x03\x18\x04\x14\x04\x1b\x73\x65\x74\x2d\x69"
  "\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x6f\x6e\x74"
  "\x65\x6e\x74\x73\x21\x08\x34\x1c\x81\x83\x02\x33\x1a\x81\x85\x02"
  "\x32\x18\x81\x85\x02\x31\x16\x81\x87\x02\x30\x14\x81\x85\x02\x2f"
  "\x12\x81\x85\x02\x2e\x10\x81\x87\x02\x2d\x0e\x81\x89\x02\x2c\x0c"
  "\x81\x87\x02\x2b\x0a\x81\x85\x02\x2a\x08\x81\x83\x02\x29\x06\x81"
  "\x81\x02\x28\x04\x82\x02\x1b\x30\x18\x02\x05\x74\x65\x78\x74\x03"
  "\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x79\x70\x65\x3d\x66\x69"
  "\x6c\x65\x3f\x07\x0c\x6d\x61\x6b\x65\x2d\x67\x73\x74\x61\x74\x65"
  "\x03\x36\x06\x81\x8b\x02\x35\x04\x84\x06\x05\x0e\x14\x02\x02\x09"
  "\x49\x2f\x4f\x20\x70\x6f\x72\x74\x15\x11\x63\x6f\x6e\x73\x6f\x6c"
  "\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x12\x17\x14\x63\x6f\x6e"
  "\x73\x6f\x6c\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x11\x04\x03\x0a\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x3f\x05\x1a\x65"
  "\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x3c\x0e\x81\x83\x02\x3b\x0c"
  "\x81\x83\x02\x3a\x0a\x81\x83\x02\x39\x08\x81\x83\x02\x38\x06\x81"
  "\x83\x02\x37\x04\x83\x04\x0d\x1c\x1a\x02\x12\x02\x04\x07\x70\x6f"
  "\x72\x74\x3d\x3f\x02\x3e\x06\x81\x85\x02\x3d\x04\x83\x04\x05\x0d"
  "\x1b\x02\x08\x1d\x45\x6e\x64\x20\x6f\x66\x20\x69\x6e\x70\x75\x74"
  "\x20\x73\x74\x72\x65\x61\x6d\x20\x72\x65\x61\x63\x68\x65\x64\x2e"
  "\x03\x15\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x6f\x2f\x72\x65\x61"
  "\x64\x2d\x63\x68\x61\x72\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x3f\x1c\x02\x19\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d"
  "\x64\x6c\x2f\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65\x3f\x1d\x03"
  "\x0b\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x02\x17\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x03\x11\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x65"
  "\x72\x72\x6f\x72\x3f\x02\x06\x25\x65\x78\x69\x74\x1e\x03\x1e\x04"
  "\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x1e\x0a\x47"
  "\x14\x81\x85\x02\x46\x12\x81\x85\x02\x45\x10\x81\x87\x02\x44\x0e"
  "\x81\x85\x02\x43\x0c\x81\x85\x02\x42\x0a\x81\x85\x02\x41\x08\x81"
  "\x85\x02\x40\x06\x81\x83\x02\x3f\x04\x83\x04\x13\x2b\x1f\x02\x09"
  "\x03\x11\x63\x68\x61\x72\x2d\x77\x68\x69\x74\x65\x73\x70\x61\x63"
  "\x65\x3f\x03\x03\x20\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66"
  "\x6c\x75\x73\x68\x03\x03\x1c\x04\x07\x4e\x10\x81\x83\x02\x4d\x0e"
  "\x81\x81\x02\x4c\x0c\x81\x81\x02\x4b\x0a\x81\x83\x02\x4a\x08\x81"
  "\x81\x02\x49\x06\x81\x83\x02\x48\x04\x83\x04\x0f\x1f\x1c\x02\x0a"
  "\x02\x03\x04\x17\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x02\x1d\x04\x51\x08\x81"
  "\x85\x02\x50\x06\x81\x85\x02\x4f\x04\x84\x06\x07\x12\x1d\x02\x0b"
  "\x12\x74\x74\x79\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x63\x6c\x65"
  "\x61\x72\x04\x19\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f"
  "\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x02\x53\x06\x81"
  "\x85\x02\x52\x04\x83\x04\x05\x0c\x02\x0c\x11\x74\x74\x79\x2d\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x2d\x62\x65\x65\x70\x04\x02\x55\x06\x81"
  "\x85\x02\x54\x04\x83\x04\x05\x0c\x02\x0d\x0b\x74\x74\x79\x2d\x78"
  "\x2d\x73\x69\x7a\x65\x56\x04\x83\x04\x03\x02\x0e\x0b\x74\x74\x79"
  "\x2d\x79\x2d\x73\x69\x7a\x65\x57\x04\x83\x04\x03\x20\x02\x0f\x0d"
  "\x20\x66\x6f\x72\x20\x63\x6f\x6e\x73\x6f\x6c\x65\x04\x1e\x02\x58"
  "\x04\x84\x06\x03\x0a\x1e\x0f\x1e\x04\x20\x04\x04\x04\x04\x1d\x04"
  "\x1c\x04\x1f\x04\x1b\x04\x1a\x04\x14\x04\x18\x04\x19\x04\x16\x04"
  "\x14\x0b\x09\x0a\x10\x0f\x0e\x0c\x0d\x11\x17\x12\x12\x63\x6f\x6e"
  "\x73\x6f\x6c\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x3f\x15\x13"
  "\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x21\x14\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81"
  "\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
ttyio_so_data_cb517b8e04214dff (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ttyio_so_data_cb517b8e04214dff [0]))), (sizeof (prog_ttyio_so_data_cb517b8e04214dff)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("ttyio.so", ttyio_so_data_cb517b8e04214dff)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ttyio.so", "bb11ee3eec640471")
