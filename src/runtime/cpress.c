/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:28-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_10 9
#define TAG_1_11 3
#define LABEL_1_12 11
#define LABEL_1_13 13
#define ENVIRONMENT_LABEL_1_3 27
#define DEBUGGING_LABEL_1_2 26
#define OBJECT_1_0 25
#define EXECUTE_CACHE_1_16 15
#define EXECUTE_CACHE_1_15 17
#define EXECUTE_CACHE_1_14 19
#define EXECUTE_CACHE_1_9 21
#define EXECUTE_CACHE_1_6 23
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto compress_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compress_8)
DEFLABEL (compress_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_13 11
#define LABEL_2_11 13
#define TAG_2_12 5
#define LABEL_2_18 15
#define LABEL_2_19 17
#define LABEL_2_20 19
#define LABEL_2_21 21
#define LABEL_2_22 23
#define LABEL_2_23 25
#define LABEL_2_24 27
#define LABEL_2_25 29
#define LABEL_2_26 31
#define LABEL_2_27 33
#define LABEL_2_28 35
#define LABEL_2_29 37
#define LABEL_2_30 39
#define LABEL_2_31 41
#define LABEL_2_32 43
#define LABEL_2_33 45
#define LABEL_2_34 47
#define LABEL_2_35 49
#define LABEL_2_36 51
#define LABEL_2_37 53
#define LABEL_2_38 55
#define LABEL_2_39 57
#define LABEL_2_40 59
#define LABEL_2_41 61
#define LABEL_2_42 63
#define LABEL_2_43 65
#define LABEL_2_44 67
#define LABEL_2_45 69
#define LABEL_2_15 71
#define LABEL_2_16 73
#define LABEL_2_47 75
#define ENVIRONMENT_LABEL_2_3 121
#define DEBUGGING_LABEL_2_2 120
#define OBJECT_2_2 119
#define OBJECT_2_1 118
#define OBJECT_2_0 117
#define EXECUTE_CACHE_2_48 77
#define EXECUTE_CACHE_2_46 79
#define EXECUTE_CACHE_2_17 81
#define EXECUTE_CACHE_2_14 83
#define EXECUTE_CACHE_2_10 85
#define EXECUTE_CACHE_2_8 87
#define EXECUTE_CACHE_2_6 89
#define FREE_REFERENCE_2_11 92
#define FREE_REFERENCE_2_10 93
#define FREE_REFERENCE_2_9 94
#define FREE_REFERENCE_2_8 95
#define FREE_REFERENCE_2_7 96
#define FREE_REFERENCE_2_6 97
#define FREE_REFERENCE_2_5 98
#define FREE_REFERENCE_2_4 99
#define FREE_REFERENCE_2_3 100
#define FREE_REFERENCE_2_2 101
#define FREE_REFERENCE_2_1 102
#define FREE_REFERENCE_2_0 103
#define FREE_ASSIGNMENT_2_11 105
#define FREE_ASSIGNMENT_2_10 106
#define FREE_ASSIGNMENT_2_9 107
#define FREE_ASSIGNMENT_2_8 108
#define FREE_ASSIGNMENT_2_7 109
#define FREE_ASSIGNMENT_2_6 110
#define FREE_ASSIGNMENT_2_5 111
#define FREE_ASSIGNMENT_2_4 112
#define FREE_ASSIGNMENT_2_3 113
#define FREE_ASSIGNMENT_2_2 114
#define FREE_ASSIGNMENT_2_1 115
#define FREE_ASSIGNMENT_2_0 116
#define FREE_REFERENCES_LABEL_2_0 76
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd545;
  machine_word Wrd537;
  machine_word Wrd536;
  machine_word Wrd535;
  machine_word Wrd534;
  machine_word Wrd533;
  machine_word Wrd532;
  machine_word Wrd528;
  machine_word Wrd527;
  machine_word Wrd518;
  machine_word Wrd517;
  machine_word Wrd505;
  machine_word Wrd510;
  machine_word Wrd509;
  machine_word Wrd506;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd493;
  machine_word Wrd485;
  machine_word Wrd484;
  machine_word Wrd483;
  machine_word Wrd482;
  machine_word Wrd481;
  machine_word Wrd480;
  machine_word Wrd476;
  machine_word Wrd475;
  machine_word Wrd466;
  machine_word Wrd465;
  machine_word Wrd453;
  machine_word Wrd458;
  machine_word Wrd457;
  machine_word Wrd454;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd441;
  machine_word Wrd433;
  machine_word Wrd432;
  machine_word Wrd431;
  machine_word Wrd430;
  machine_word Wrd429;
  machine_word Wrd428;
  machine_word Wrd424;
  machine_word Wrd423;
  machine_word Wrd414;
  machine_word Wrd413;
  machine_word Wrd401;
  machine_word Wrd406;
  machine_word Wrd405;
  machine_word Wrd402;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd389;
  machine_word Wrd381;
  machine_word Wrd380;
  machine_word Wrd379;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd376;
  machine_word Wrd372;
  machine_word Wrd371;
  machine_word Wrd362;
  machine_word Wrd361;
  machine_word Wrd360;
  machine_word Wrd358;
  machine_word Wrd355;
  machine_word Wrd354;
  machine_word Wrd346;
  machine_word Wrd338;
  machine_word Wrd337;
  machine_word Wrd336;
  machine_word Wrd335;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd329;
  machine_word Wrd328;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd315;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd303;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd290;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd260;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd229;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd217;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd177;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd165;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto compress_ports_80;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_5;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto swapB_113;

    case 6:
      current_block = (Rpc - LABEL_2_18);
      goto label_82;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto label_83;

    case 8:
      current_block = (Rpc - LABEL_2_20);
      goto label_84;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto label_85;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto label_86;

    case 11:
      current_block = (Rpc - LABEL_2_23);
      goto label_87;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto label_88;

    case 13:
      current_block = (Rpc - LABEL_2_25);
      goto label_89;

    case 14:
      current_block = (Rpc - LABEL_2_26);
      goto label_90;

    case 15:
      current_block = (Rpc - LABEL_2_27);
      goto label_91;

    case 16:
      current_block = (Rpc - LABEL_2_28);
      goto label_92;

    case 17:
      current_block = (Rpc - LABEL_2_29);
      goto label_93;

    case 18:
      current_block = (Rpc - LABEL_2_30);
      goto label_94;

    case 19:
      current_block = (Rpc - LABEL_2_31);
      goto label_95;

    case 20:
      current_block = (Rpc - LABEL_2_32);
      goto label_96;

    case 21:
      current_block = (Rpc - LABEL_2_33);
      goto label_97;

    case 22:
      current_block = (Rpc - LABEL_2_34);
      goto label_98;

    case 23:
      current_block = (Rpc - LABEL_2_35);
      goto label_99;

    case 24:
      current_block = (Rpc - LABEL_2_36);
      goto label_100;

    case 25:
      current_block = (Rpc - LABEL_2_37);
      goto label_101;

    case 26:
      current_block = (Rpc - LABEL_2_38);
      goto label_102;

    case 27:
      current_block = (Rpc - LABEL_2_39);
      goto label_103;

    case 28:
      current_block = (Rpc - LABEL_2_40);
      goto label_104;

    case 29:
      current_block = (Rpc - LABEL_2_41);
      goto label_105;

    case 30:
      current_block = (Rpc - LABEL_2_42);
      goto label_106;

    case 31:
      current_block = (Rpc - LABEL_2_43);
      goto label_107;

    case 32:
      current_block = (Rpc - LABEL_2_44);
      goto label_108;

    case 33:
      current_block = (Rpc - LABEL_2_45);
      goto label_109;

    case 34:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_4;

    case 35:
      current_block = (Rpc - LABEL_2_16);
      goto lambda_3;

    case 36:
      current_block = (Rpc - LABEL_2_47);
      goto label_110;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compress_ports_112)
DEFLABEL (compress_ports_80)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
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
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd27.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 15));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 12;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd47.pObj) = (& (Rhp [-1]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd47.pObj)));
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd53.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd51.pObj) = (& (Rhp [-1]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd51.pObj)));
  (Rsp [6]) = (Wrd52.Obj);
  (Wrd57.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-1]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd55.pObj)));
  (Rsp [10]) = (Wrd56.Obj);
  (Wrd61.Obj) = (Rsp [11]);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd59.pObj) = (& (Rhp [-1]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd59.pObj)));
  (Rsp [11]) = (Wrd60.Obj);
  (Wrd65.Obj) = (Rsp [12]);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd63.pObj) = (& (Rhp [-1]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd63.pObj)));
  (Rsp [12]) = (Wrd64.Obj);
  Wrd44 = Wrd66;
  ((Wrd44.pObj) [2]) = (Wrd64.Obj);
  ((Wrd44.pObj) [3]) = (Wrd60.Obj);
  ((Wrd44.pObj) [4]) = (Wrd56.Obj);
  (Wrd36.Obj) = (Rsp [9]);
  ((Wrd44.pObj) [5]) = (Wrd36.Obj);
  (Wrd33.Obj) = (Rsp [8]);
  ((Wrd44.pObj) [6]) = (Wrd33.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  ((Wrd44.pObj) [7]) = (Wrd30.Obj);
  ((Wrd44.pObj) [8]) = (Wrd52.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  ((Wrd44.pObj) [9]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd44.pObj) [10]) = (Wrd21.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd44.pObj) [11]) = (Wrd18.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd44.pObj) [12]) = (Wrd15.Obj);
  ((Wrd44.pObj) [13]) = (Wrd48.Obj);
  (Rsp [12]) = (Wrd67.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (Rsp [11]) = (Wrd7.Obj);
  (Rsp [10]) = (Wrd67.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (lambda_114)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_2_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_15);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_46]));

DEFLABEL (swapB_113)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (swapB_78)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd9.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd18.Obj) = ((Wrd8.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_199;

DEFLABEL (label_198)
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);

DEFLABEL (label_197)
  (Wrd23.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [13]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  ((Wrd27.pObj) [0]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_196;

DEFLABEL (label_195)
  ((Wrd36.pObj) [0]) = (Wrd28.Obj);

DEFLABEL (label_194)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd50.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd52.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd61.Obj) = ((Wrd51.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_193;

DEFLABEL (label_192)
  ((Wrd51.pObj) [0]) = (Wrd52.Obj);

DEFLABEL (label_191)
  (Wrd66.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [12]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (* (--Rsp)) = (Wrd71.Obj);
  ((Wrd70.pObj) [0]) = (Wrd66.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd87.Obj) = ((Wrd79.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_190;

DEFLABEL (label_189)
  ((Wrd79.pObj) [0]) = (Wrd71.Obj);

DEFLABEL (label_188)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd93.Obj) = ((Wrd91.pObj) [0]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd95.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd104.Obj) = ((Wrd94.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_187;

DEFLABEL (label_186)
  ((Wrd94.pObj) [0]) = (Wrd95.Obj);

DEFLABEL (label_185)
  (Wrd109.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [11]);
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (* (--Rsp)) = (Wrd114.Obj);
  ((Wrd113.pObj) [0]) = (Wrd109.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd122.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd130.Obj) = ((Wrd122.pObj) [0]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd131.uLng) == 50)
    goto label_184;

DEFLABEL (label_183)
  ((Wrd122.pObj) [0]) = (Wrd114.Obj);

DEFLABEL (label_182)
  (Wrd134.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd136.Obj) = ((Wrd134.pObj) [0]);
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd138.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd147.Obj) = ((Wrd137.pObj) [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd148.uLng) == 50)
    goto label_181;

DEFLABEL (label_180)
  ((Wrd137.pObj) [0]) = (Wrd138.Obj);

DEFLABEL (label_179)
  (Wrd152.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd153.Obj) = (Rsp [1]);
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [10]);
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [0]);
  (* (--Rsp)) = (Wrd157.Obj);
  ((Wrd156.pObj) [0]) = (Wrd152.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd165.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd173.Obj) = ((Wrd165.pObj) [0]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if ((Wrd174.uLng) == 50)
    goto label_178;

DEFLABEL (label_177)
  ((Wrd165.pObj) [0]) = (Wrd157.Obj);

DEFLABEL (label_176)
  (Wrd178.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd181.Obj) = ((Wrd178.pObj) [0]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if ((Wrd182.uLng) == 50)
    goto label_175;

DEFLABEL (label_174)
  Wrd177 = Wrd181;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd177.Obj);
  (Wrd189.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd190.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd199.Obj) = ((Wrd189.pObj) [0]);
  (Wrd200.uLng) = (OBJECT_TYPE (Wrd199.Obj));
  if ((Wrd200.uLng) == 50)
    goto label_172;

DEFLABEL (label_171)
  ((Wrd189.pObj) [0]) = (Wrd190.Obj);

DEFLABEL (label_170)
  (Wrd204.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd204.Obj);
  (Wrd205.Obj) = (Rsp [1]);
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd207.Obj) = ((Wrd206.pObj) [9]);
  (Wrd208.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd209.Obj) = ((Wrd208.pObj) [0]);
  (* (--Rsp)) = (Wrd209.Obj);
  ((Wrd208.pObj) [0]) = (Wrd204.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd217.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd225.Obj) = ((Wrd217.pObj) [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd226.uLng) == 50)
    goto label_169;

DEFLABEL (label_168)
  ((Wrd217.pObj) [0]) = (Wrd209.Obj);

DEFLABEL (label_167)
  (Wrd229.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_5]));
  (Wrd231.Obj) = ((Wrd229.pObj) [0]);
  (* (--Rsp)) = (Wrd231.Obj);
  (Wrd232.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_5]));
  (Wrd233.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd242.Obj) = ((Wrd232.pObj) [0]);
  (Wrd243.uLng) = (OBJECT_TYPE (Wrd242.Obj));
  if ((Wrd243.uLng) == 50)
    goto label_166;

DEFLABEL (label_165)
  ((Wrd232.pObj) [0]) = (Wrd233.Obj);

DEFLABEL (label_164)
  (Wrd247.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd247.Obj);
  (Wrd248.Obj) = (Rsp [1]);
  (Wrd249.pObj) = (OBJECT_ADDRESS (Wrd248.Obj));
  (Wrd250.Obj) = ((Wrd249.pObj) [8]);
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd252.Obj) = ((Wrd251.pObj) [0]);
  (* (--Rsp)) = (Wrd252.Obj);
  ((Wrd251.pObj) [0]) = (Wrd247.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd260.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_5]));
  (Wrd268.Obj) = ((Wrd260.pObj) [0]);
  (Wrd269.uLng) = (OBJECT_TYPE (Wrd268.Obj));
  if ((Wrd269.uLng) == 50)
    goto label_163;

DEFLABEL (label_162)
  ((Wrd260.pObj) [0]) = (Wrd252.Obj);

DEFLABEL (label_161)
  (Wrd272.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_6]));
  (Wrd274.Obj) = ((Wrd272.pObj) [0]);
  (* (--Rsp)) = (Wrd274.Obj);
  (Wrd275.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_6]));
  (Wrd276.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd285.Obj) = ((Wrd275.pObj) [0]);
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd285.Obj));
  if ((Wrd286.uLng) == 50)
    goto label_160;

DEFLABEL (label_159)
  ((Wrd275.pObj) [0]) = (Wrd276.Obj);

DEFLABEL (label_158)
  (Wrd290.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd290.Obj);
  (Wrd291.Obj) = (Rsp [1]);
  (Wrd292.pObj) = (OBJECT_ADDRESS (Wrd291.Obj));
  (Wrd293.Obj) = ((Wrd292.pObj) [7]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [0]);
  (* (--Rsp)) = (Wrd295.Obj);
  ((Wrd294.pObj) [0]) = (Wrd290.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd303.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_6]));
  (Wrd311.Obj) = ((Wrd303.pObj) [0]);
  (Wrd312.uLng) = (OBJECT_TYPE (Wrd311.Obj));
  if ((Wrd312.uLng) == 50)
    goto label_157;

DEFLABEL (label_156)
  ((Wrd303.pObj) [0]) = (Wrd295.Obj);

DEFLABEL (label_155)
  (Wrd315.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_7]));
  (Wrd317.Obj) = ((Wrd315.pObj) [0]);
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_7]));
  (Wrd319.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd328.Obj) = ((Wrd318.pObj) [0]);
  (Wrd329.uLng) = (OBJECT_TYPE (Wrd328.Obj));
  if ((Wrd329.uLng) == 50)
    goto label_154;

DEFLABEL (label_153)
  ((Wrd318.pObj) [0]) = (Wrd319.Obj);

DEFLABEL (label_152)
  (Wrd333.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd333.Obj);
  (Wrd334.Obj) = (Rsp [1]);
  (Wrd335.pObj) = (OBJECT_ADDRESS (Wrd334.Obj));
  (Wrd336.Obj) = ((Wrd335.pObj) [6]);
  (Wrd337.pObj) = (OBJECT_ADDRESS (Wrd336.Obj));
  (Wrd338.Obj) = ((Wrd337.pObj) [0]);
  (* (--Rsp)) = (Wrd338.Obj);
  ((Wrd337.pObj) [0]) = (Wrd333.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd346.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_7]));
  (Wrd354.Obj) = ((Wrd346.pObj) [0]);
  (Wrd355.uLng) = (OBJECT_TYPE (Wrd354.Obj));
  if ((Wrd355.uLng) == 50)
    goto label_151;

DEFLABEL (label_150)
  ((Wrd346.pObj) [0]) = (Wrd338.Obj);

DEFLABEL (label_149)
  (Wrd358.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd360.Obj) = ((Wrd358.pObj) [0]);
  (* (--Rsp)) = (Wrd360.Obj);
  (Wrd361.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_8]));
  (Wrd362.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd371.Obj) = ((Wrd361.pObj) [0]);
  (Wrd372.uLng) = (OBJECT_TYPE (Wrd371.Obj));
  if ((Wrd372.uLng) == 50)
    goto label_148;

DEFLABEL (label_147)
  ((Wrd361.pObj) [0]) = (Wrd362.Obj);

DEFLABEL (label_146)
  (Wrd376.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd376.Obj);
  (Wrd377.Obj) = (Rsp [1]);
  (Wrd378.pObj) = (OBJECT_ADDRESS (Wrd377.Obj));
  (Wrd379.Obj) = ((Wrd378.pObj) [5]);
  (Wrd380.pObj) = (OBJECT_ADDRESS (Wrd379.Obj));
  (Wrd381.Obj) = ((Wrd380.pObj) [0]);
  (* (--Rsp)) = (Wrd381.Obj);
  ((Wrd380.pObj) [0]) = (Wrd376.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd389.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_8]));
  (Wrd397.Obj) = ((Wrd389.pObj) [0]);
  (Wrd398.uLng) = (OBJECT_TYPE (Wrd397.Obj));
  if ((Wrd398.uLng) == 50)
    goto label_145;

DEFLABEL (label_144)
  ((Wrd389.pObj) [0]) = (Wrd381.Obj);

DEFLABEL (label_143)
  (Wrd402.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_9]));
  (Wrd405.Obj) = ((Wrd402.pObj) [0]);
  (Wrd406.uLng) = (OBJECT_TYPE (Wrd405.Obj));
  if ((Wrd406.uLng) == 50)
    goto label_142;

DEFLABEL (label_141)
  Wrd401 = Wrd405;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd401.Obj);
  (Wrd413.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_9]));
  (Wrd414.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd423.Obj) = ((Wrd413.pObj) [0]);
  (Wrd424.uLng) = (OBJECT_TYPE (Wrd423.Obj));
  if ((Wrd424.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  ((Wrd413.pObj) [0]) = (Wrd414.Obj);

DEFLABEL (label_137)
  (Wrd428.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd428.Obj);
  (Wrd429.Obj) = (Rsp [1]);
  (Wrd430.pObj) = (OBJECT_ADDRESS (Wrd429.Obj));
  (Wrd431.Obj) = ((Wrd430.pObj) [4]);
  (Wrd432.pObj) = (OBJECT_ADDRESS (Wrd431.Obj));
  (Wrd433.Obj) = ((Wrd432.pObj) [0]);
  (* (--Rsp)) = (Wrd433.Obj);
  ((Wrd432.pObj) [0]) = (Wrd428.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd441.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_9]));
  (Wrd449.Obj) = ((Wrd441.pObj) [0]);
  (Wrd450.uLng) = (OBJECT_TYPE (Wrd449.Obj));
  if ((Wrd450.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd441.pObj) [0]) = (Wrd433.Obj);

DEFLABEL (label_134)
  (Wrd454.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_10]));
  (Wrd457.Obj) = ((Wrd454.pObj) [0]);
  (Wrd458.uLng) = (OBJECT_TYPE (Wrd457.Obj));
  if ((Wrd458.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  Wrd453 = Wrd457;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd453.Obj);
  (Wrd465.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_10]));
  (Wrd466.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd475.Obj) = ((Wrd465.pObj) [0]);
  (Wrd476.uLng) = (OBJECT_TYPE (Wrd475.Obj));
  if ((Wrd476.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  ((Wrd465.pObj) [0]) = (Wrd466.Obj);

DEFLABEL (label_128)
  (Wrd480.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd480.Obj);
  (Wrd481.Obj) = (Rsp [1]);
  (Wrd482.pObj) = (OBJECT_ADDRESS (Wrd481.Obj));
  (Wrd483.Obj) = ((Wrd482.pObj) [3]);
  (Wrd484.pObj) = (OBJECT_ADDRESS (Wrd483.Obj));
  (Wrd485.Obj) = ((Wrd484.pObj) [0]);
  (* (--Rsp)) = (Wrd485.Obj);
  ((Wrd484.pObj) [0]) = (Wrd480.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd493.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_10]));
  (Wrd501.Obj) = ((Wrd493.pObj) [0]);
  (Wrd502.uLng) = (OBJECT_TYPE (Wrd501.Obj));
  if ((Wrd502.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd493.pObj) [0]) = (Wrd485.Obj);

DEFLABEL (label_125)
  (Wrd506.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_11]));
  (Wrd509.Obj) = ((Wrd506.pObj) [0]);
  (Wrd510.uLng) = (OBJECT_TYPE (Wrd509.Obj));
  if ((Wrd510.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  Wrd505 = Wrd509;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd505.Obj);
  (Wrd517.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_11]));
  (Wrd518.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd527.Obj) = ((Wrd517.pObj) [0]);
  (Wrd528.uLng) = (OBJECT_TYPE (Wrd527.Obj));
  if ((Wrd528.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  ((Wrd517.pObj) [0]) = (Wrd518.Obj);

DEFLABEL (label_119)
  (Wrd532.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd532.Obj);
  (Wrd533.Obj) = (Rsp [1]);
  (Wrd534.pObj) = (OBJECT_ADDRESS (Wrd533.Obj));
  (Wrd535.Obj) = ((Wrd534.pObj) [2]);
  (Wrd536.pObj) = (OBJECT_ADDRESS (Wrd535.Obj));
  (Wrd537.Obj) = ((Wrd536.pObj) [0]);
  (* (--Rsp)) = (Wrd537.Obj);
  ((Wrd536.pObj) [0]) = (Wrd532.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd545.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_11]));
  (Wrd553.Obj) = ((Wrd545.pObj) [0]);
  (Wrd554.uLng) = (OBJECT_TYPE (Wrd553.Obj));
  if ((Wrd554.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd545.pObj) [0]) = (Wrd537.Obj);

DEFLABEL (label_116)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_118)
  if ((Wrd553.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_45])), (Wrd545.pObj), (Wrd537.Obj));

DEFLABEL (label_109)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd527.Obj) == (Wrd518.Obj))
    goto label_120;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_44])), (Wrd517.pObj), (Wrd518.Obj));

DEFLABEL (label_108)
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd509.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_43])), (Wrd506.pObj));

DEFLABEL (label_107)
  (Wrd505.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_127)
  if ((Wrd501.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_42])), (Wrd493.pObj), (Wrd485.Obj));

DEFLABEL (label_106)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd475.Obj) == (Wrd466.Obj))
    goto label_129;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_41])), (Wrd465.pObj), (Wrd466.Obj));

DEFLABEL (label_105)
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd457.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_40])), (Wrd454.pObj));

DEFLABEL (label_104)
  (Wrd453.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_136)
  if ((Wrd449.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_39])), (Wrd441.pObj), (Wrd433.Obj));

DEFLABEL (label_103)
  goto label_134;

DEFLABEL (label_139)
  if ((Wrd423.Obj) == (Wrd414.Obj))
    goto label_138;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_38])), (Wrd413.pObj), (Wrd414.Obj));

DEFLABEL (label_102)
  goto label_137;

DEFLABEL (label_142)
  if ((Wrd405.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_141;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_37])), (Wrd402.pObj));

DEFLABEL (label_101)
  (Wrd401.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_145)
  if ((Wrd397.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_144;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_36])), (Wrd389.pObj), (Wrd381.Obj));

DEFLABEL (label_100)
  goto label_143;

DEFLABEL (label_148)
  if ((Wrd371.Obj) == (Wrd362.Obj))
    goto label_147;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_35])), (Wrd361.pObj), (Wrd362.Obj));

DEFLABEL (label_99)
  goto label_146;

DEFLABEL (label_151)
  if ((Wrd354.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_150;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_34])), (Wrd346.pObj), (Wrd338.Obj));

DEFLABEL (label_98)
  goto label_149;

DEFLABEL (label_154)
  if ((Wrd328.Obj) == (Wrd319.Obj))
    goto label_153;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_33])), (Wrd318.pObj), (Wrd319.Obj));

DEFLABEL (label_97)
  goto label_152;

DEFLABEL (label_157)
  if ((Wrd311.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_156;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_32])), (Wrd303.pObj), (Wrd295.Obj));

DEFLABEL (label_96)
  goto label_155;

DEFLABEL (label_160)
  if ((Wrd285.Obj) == (Wrd276.Obj))
    goto label_159;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_31])), (Wrd275.pObj), (Wrd276.Obj));

DEFLABEL (label_95)
  goto label_158;

DEFLABEL (label_163)
  if ((Wrd268.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_162;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_30])), (Wrd260.pObj), (Wrd252.Obj));

DEFLABEL (label_94)
  goto label_161;

DEFLABEL (label_166)
  if ((Wrd242.Obj) == (Wrd233.Obj))
    goto label_165;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_29])), (Wrd232.pObj), (Wrd233.Obj));

DEFLABEL (label_93)
  goto label_164;

DEFLABEL (label_169)
  if ((Wrd225.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_168;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_28])), (Wrd217.pObj), (Wrd209.Obj));

DEFLABEL (label_92)
  goto label_167;

DEFLABEL (label_172)
  if ((Wrd199.Obj) == (Wrd190.Obj))
    goto label_171;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_27])), (Wrd189.pObj), (Wrd190.Obj));

DEFLABEL (label_91)
  goto label_170;

DEFLABEL (label_175)
  if ((Wrd181.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_174;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_26])), (Wrd178.pObj));

DEFLABEL (label_90)
  (Wrd177.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_178)
  if ((Wrd173.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_177;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_25])), (Wrd165.pObj), (Wrd157.Obj));

DEFLABEL (label_89)
  goto label_176;

DEFLABEL (label_181)
  if ((Wrd147.Obj) == (Wrd138.Obj))
    goto label_180;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_24])), (Wrd137.pObj), (Wrd138.Obj));

DEFLABEL (label_88)
  goto label_179;

DEFLABEL (label_184)
  if ((Wrd130.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_183;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_23])), (Wrd122.pObj), (Wrd114.Obj));

DEFLABEL (label_87)
  goto label_182;

DEFLABEL (label_187)
  if ((Wrd104.Obj) == (Wrd95.Obj))
    goto label_186;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_22])), (Wrd94.pObj), (Wrd95.Obj));

DEFLABEL (label_86)
  goto label_185;

DEFLABEL (label_190)
  if ((Wrd87.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_189;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_21])), (Wrd79.pObj), (Wrd71.Obj));

DEFLABEL (label_85)
  goto label_188;

DEFLABEL (label_193)
  if ((Wrd61.Obj) == (Wrd52.Obj))
    goto label_192;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd51.pObj), (Wrd52.Obj));

DEFLABEL (label_84)
  goto label_191;

DEFLABEL (label_196)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_195;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_19])), (Wrd36.pObj), (Wrd28.Obj));

DEFLABEL (label_83)
  goto label_194;

DEFLABEL (label_199)
  if ((Wrd18.Obj) == (Wrd9.Obj))
    goto label_198;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_18])), (Wrd8.pObj), (Wrd9.Obj));

DEFLABEL (label_82)
  goto label_197;

DEFLABEL (lambda_115)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_2_16);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_202;

DEFLABEL (label_201)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_200)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_48]));

DEFLABEL (label_202)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_201;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_47])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_110)
  goto label_200;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_10 9
#define ENVIRONMENT_LABEL_3_3 24
#define DEBUGGING_LABEL_3_2 23
#define OBJECT_3_1 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_12 11
#define EXECUTE_CACHE_3_11 13
#define EXECUTE_CACHE_3_9 15
#define EXECUTE_CACHE_3_8 17
#define EXECUTE_CACHE_3_6 19
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto idle_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (idle_8)
DEFLABEL (idle_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define TAG_4_8 2
#define LABEL_4_9 9
#define TAG_4_10 3
#define LABEL_4_11 11
#define LABEL_4_13 13
#define LABEL_4_14 15
#define LABEL_4_16 17
#define LABEL_4_18 19
#define LABEL_4_19 21
#define LABEL_4_21 23
#define LABEL_4_23 25
#define LABEL_4_27 27
#define LABEL_4_30 29
#define LABEL_4_28 31
#define LABEL_4_25 33
#define ENVIRONMENT_LABEL_4_3 64
#define DEBUGGING_LABEL_4_2 63
#define OBJECT_4_5 62
#define OBJECT_4_4 61
#define OBJECT_4_3 60
#define OBJECT_4_2 59
#define OBJECT_4_1 58
#define OBJECT_4_0 57
#define EXECUTE_CACHE_4_31 35
#define EXECUTE_CACHE_4_29 37
#define EXECUTE_CACHE_4_26 39
#define EXECUTE_CACHE_4_24 41
#define EXECUTE_CACHE_4_22 43
#define EXECUTE_CACHE_4_20 45
#define EXECUTE_CACHE_4_17 47
#define EXECUTE_CACHE_4_15 49
#define EXECUTE_CACHE_4_12 51
#define EXECUTE_CACHE_4_6 53
#define FREE_REFERENCE_4_0 56
#define FREE_REFERENCES_LABEL_4_0 34
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd54;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd57;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_literal_30;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_35;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_36;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_27;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_28;

    case 8:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_19;

    case 9:
      current_block = (Rpc - LABEL_4_19);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_4_27);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_literal_34)
DEFLABEL (generate_literal_30)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  ((Wrd18.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_9])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  ((Wrd12.pObj) [0]) = (Wrd21.Obj);
  ((Wrd6.pObj) [0]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd7.Lng));
  (* (--Rsp)) = (Wrd8.Obj);
  Wrd10 = Wrd7;
  if (! ((Wrd10.Lng) < 16L))
    goto label_37;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd21.pObj) [0]);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_21);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_4_9);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd16.pObj) [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_19);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd17.pObj) [0]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_40)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_46;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_46;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_45)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd26.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if ((Wrd28.Lng) < (Wrd30.Lng))
    goto label_42;
  Wrd31 = Wrd26;
  goto label_41;

DEFLABEL (label_42)
  (Wrd54.Lng) = ((Wrd28.Lng) + 69632L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));

DEFLABEL (label_41)
DEFLABEL (label_44)
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd34.Lng) - (Wrd36.Lng));
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd33.Obj);
  Wrd39 = Wrd37;
  if ((Wrd39.Lng) < 3L)
    goto label_43;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (label_43)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_46)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_4_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define TAG_5_8 2
#define LABEL_5_9 9
#define TAG_5_10 3
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_17 15
#define LABEL_5_11 17
#define LABEL_5_15 19
#define LABEL_5_18 21
#define LABEL_5_21 23
#define LABEL_5_25 25
#define LABEL_5_26 27
#define LABEL_5_23 29
#define LABEL_5_27 31
#define ENVIRONMENT_LABEL_5_3 60
#define DEBUGGING_LABEL_5_2 59
#define OBJECT_5_4 58
#define OBJECT_5_3 57
#define OBJECT_5_2 56
#define OBJECT_5_1 55
#define OBJECT_5_0 54
#define EXECUTE_CACHE_5_29 33
#define EXECUTE_CACHE_5_28 35
#define EXECUTE_CACHE_5_24 37
#define EXECUTE_CACHE_5_22 39
#define EXECUTE_CACHE_5_20 41
#define EXECUTE_CACHE_5_19 43
#define EXECUTE_CACHE_5_16 45
#define EXECUTE_CACHE_5_12 47
#define EXECUTE_CACHE_5_6 49
#define FREE_REFERENCE_5_1 52
#define FREE_REFERENCE_5_0 53
#define FREE_REFERENCES_LABEL_5_0 32
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd60;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd38;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto generate_copy_33;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto loop_29;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_5_17);
      goto lambda_7;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_5_25);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_5_26);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_5_23);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_copy_40)
DEFLABEL (generate_copy_33)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  ((Wrd18.pObj) [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd19.Obj);
  goto loop_29;

DEFLABEL (lambda_41)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd9.Lng) < (Wrd11.Lng))
    goto label_45;
  Wrd13 = Wrd7;
  goto label_44;

DEFLABEL (label_45)
  (Wrd38.Lng) = ((Wrd9.Lng) + 69632L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));

DEFLABEL (label_44)
DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd14.Lng) - (Wrd16.Lng));
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  Wrd22 = Wrd17;
  if ((Wrd20.Lng) > (Wrd22.Lng))
    goto label_46;
  (Rsp [0]) = (Wrd19.Obj);
  goto lambda_7;

DEFLABEL (label_46)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_5_4]))
    goto label_47;
  goto lambda_7;

DEFLABEL (label_47)
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (loop_42)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_5_9);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_59)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_58;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd29.Lng))))
    goto label_58;
  (Wrd23.Obj) = ((Wrd27.pObj) [10]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_57)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_5_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Wrd16.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_13;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd64.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd64.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [2]);
  (Wrd68.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd69.Obj);
  (Rsp [2]) = (Wrd65.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_13;

DEFLABEL (label_50)
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  Wrd12 = Wrd9;
  if (! ((Wrd12.Lng) < 16L))
    goto label_51;
  (Wrd60.Obj) = (Rsp [4]);
  (Rsp [4]) = (Wrd60.Obj);
  (Rsp [5]) = Rvl;
  (Rsp [6]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto loop_29;

DEFLABEL (label_51)
  (Wrd15.Obj) = (Rsp [5]);
  if (! ((Wrd15.Obj) == Rvl))
    goto label_52;
  (Wrd53.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd54.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [2]);
  (Rsp [3]) = (Wrd55.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_13;

DEFLABEL (label_52)
  (Wrd27.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd27.uLng) == 62))
    goto label_56;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd25.Lng))))
    goto label_56;
  (Wrd19.Obj) = ((Wrd23.pObj) [11]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_55)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_54;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd41.Lng))))
    goto label_54;
  (Wrd35.Obj) = ((Wrd39.pObj) [10]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_53)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_5_27);
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd10.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_13;

DEFLABEL (label_54)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_5_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_5_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_5_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_5_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (lambda_43)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_5_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_23);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define ENVIRONMENT_LABEL_6_3 24
#define DEBUGGING_LABEL_6_2 23
#define OBJECT_6_1 22
#define OBJECT_6_0 21
#define EXECUTE_CACHE_6_11 13
#define EXECUTE_CACHE_6_10 15
#define EXECUTE_CACHE_6_6 17
#define FREE_REFERENCE_6_0 20
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto match_first_6;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_first_10)
DEFLABEL (match_first_6)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd5.Obj) = ((Wrd6.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_14;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_14;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd11.pObj) = (& ((Wrd17.pObj) [(Wrd9.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_13)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_7);
  goto label_11;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_10 9
#define LABEL_7_8 11
#define LABEL_7_17 13
#define LABEL_7_14 15
#define LABEL_7_15 17
#define LABEL_7_12 19
#define LABEL_7_20 21
#define LABEL_7_23 23
#define LABEL_7_25 25
#define LABEL_7_18 27
#define LABEL_7_24 29
#define LABEL_7_21 31
#define LABEL_7_22 33
#define LABEL_7_26 35
#define LABEL_7_28 37
#define ENVIRONMENT_LABEL_7_3 60
#define DEBUGGING_LABEL_7_2 59
#define OBJECT_7_5 58
#define OBJECT_7_4 57
#define OBJECT_7_3 56
#define OBJECT_7_2 55
#define OBJECT_7_1 54
#define OBJECT_7_0 53
#define EXECUTE_CACHE_7_27 39
#define EXECUTE_CACHE_7_19 41
#define EXECUTE_CACHE_7_16 43
#define EXECUTE_CACHE_7_13 45
#define EXECUTE_CACHE_7_11 47
#define EXECUTE_CACHE_7_9 49
#define EXECUTE_CACHE_7_6 51
#define FREE_REFERENCES_LABEL_7_0 38
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto match_next_25;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_7_17);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_7_20);
      goto loop_22;

    case 10:
      current_block = (Rpc - LABEL_7_23);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_7_25);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_7_26);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_7_28);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_next_32)
DEFLABEL (match_next_25)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_38)
  (Wrd21.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (Wrd21.Obj))
    goto label_35;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == Rvl)
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_26);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_28);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_12);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  goto loop_22;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_7_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_14);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_33)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_7_20);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_21);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_45;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_45;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [1]);
  if (! ((Wrd23.Obj) == (Wrd7.Obj)))
    goto label_41;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_43;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_43;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd24.Obj);
  goto loop_22;

DEFLABEL (label_43)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_7_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_30)
  (Wrd24.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_7_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
cpress_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define FREE_REFERENCE_9_0 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  Rvl = ((Wrd5.pObj) [0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define FREE_REFERENCE_10_0 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  Rvl = ((Wrd5.pObj) [0]);
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
cpress_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_parent_3)
DEFLABEL (node_parent_0)
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
cpress_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_children_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_children_3)
DEFLABEL (node_children_0)
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
cpress_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_previous_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_previous_3)
DEFLABEL (node_previous_0)
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
cpress_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_next_3)
DEFLABEL (node_next_0)
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
cpress_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_byte_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_byte_3)
DEFLABEL (node_byte_0)
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
cpress_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_nb_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_nb_3)
DEFLABEL (node_nb_0)
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
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto node_older_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_older_3)
DEFLABEL (node_older_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto node_newer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_newer_3)
DEFLABEL (node_newer_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto node_pointer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_pointer_3)
DEFLABEL (node_pointer_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto node_bp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_bp_3)
DEFLABEL (node_bp_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define OBJECT_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto set_node_parentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_parentB_3)
DEFLABEL (set_node_parentB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto set_node_childrenB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_childrenB_3)
DEFLABEL (set_node_childrenB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto set_node_previousB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_previousB_3)
DEFLABEL (set_node_previousB_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto set_node_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_nextB_3)
DEFLABEL (set_node_nextB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto set_node_byteB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_byteB_3)
DEFLABEL (set_node_byteB_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define OBJECT_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto set_node_nbB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_nbB_3)
DEFLABEL (set_node_nbB_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_26_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define OBJECT_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto set_node_olderB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_olderB_3)
DEFLABEL (set_node_olderB_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_27_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define OBJECT_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto set_node_newerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_newerB_3)
DEFLABEL (set_node_newerB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 8
#define DEBUGGING_LABEL_29_2 7
#define OBJECT_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto set_node_pointerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_pointerB_3)
DEFLABEL (set_node_pointerB_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 8
#define DEBUGGING_LABEL_30_2 7
#define OBJECT_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto set_node_bpB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_bpB_3)
DEFLABEL (set_node_bpB_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define ENVIRONMENT_LABEL_31_3 17
#define DEBUGGING_LABEL_31_2 16
#define OBJECT_31_3 15
#define OBJECT_31_2 14
#define OBJECT_31_1 13
#define OBJECT_31_0 12
#define FREE_REFERENCE_31_0 11
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto nodeP_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nodeP_10)
DEFLABEL (nodeP_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
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
  Rvl = (current_block [OBJECT_31_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_31_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define ENVIRONMENT_LABEL_32_3 23
#define DEBUGGING_LABEL_32_2 22
#define OBJECT_32_1 21
#define OBJECT_32_0 20
#define EXECUTE_CACHE_32_6 13
#define FREE_REFERENCE_32_0 16
#define FREE_ASSIGNMENT_32_1 18
#define FREE_ASSIGNMENT_32_0 19
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto make_node_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_node_9)
DEFLABEL (make_node_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd10.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd8.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Wrd10 = Wrd8;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd33.Lng))))
    goto label_14;
  ((Wrd31.pObj) [9]) = Rvl;

DEFLABEL (label_13)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_1]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd21.Obj) = ((Wrd13.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd13.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd21.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_9])), (Wrd13.pObj), (Wrd14.Obj));

DEFLABEL (label_5)
  goto label_10;

DEFLABEL (label_14)
  (Wrd36.Obj) = (current_block [OBJECT_32_0]);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 3);

DEFLABEL (label_6)
  goto label_13;

DEFLABEL (label_15)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd41.pObj) [0]) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_7])), (Wrd41.pObj), Rvl);

DEFLABEL (label_7)
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_8 11
#define LABEL_33_9 13
#define LABEL_33_10 15
#define LABEL_33_11 17
#define LABEL_33_12 19
#define LABEL_33_13 21
#define LABEL_33_14 23
#define LABEL_33_15 25
#define ENVIRONMENT_LABEL_33_3 41
#define DEBUGGING_LABEL_33_2 40
#define OBJECT_33_6 39
#define OBJECT_33_5 38
#define OBJECT_33_4 37
#define OBJECT_33_3 36
#define OBJECT_33_2 35
#define OBJECT_33_1 34
#define OBJECT_33_0 33
#define FREE_REFERENCE_33_2 27
#define FREE_REFERENCE_33_1 28
#define FREE_REFERENCE_33_0 29
#define FREE_ASSIGNMENT_33_1 31
#define FREE_ASSIGNMENT_33_0 32
#define FREE_REFERENCES_LABEL_33_0 26
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd116;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd124;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd45;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd145;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd153;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd175;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd191;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_33_4);
      goto update_node_pointer_10;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_33_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_33_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_33_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_33_11);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_33_12);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_33_13);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_33_14);
      goto label_15;

    case 11:
      current_block = (Rpc - LABEL_33_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_node_pointer_24)
DEFLABEL (update_node_pointer_10)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd5.Obj) = ((Wrd6.pObj) [0]);
  (Wrd184.Obj) = (Rsp [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if (! ((Wrd185.uLng) == 62))
    goto label_49;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd182.Obj) = ((Wrd181.pObj) [0]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd183.Lng))))
    goto label_49;
  ((Wrd181.pObj) [10]) = (Wrd5.Obj);

DEFLABEL (label_48)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd8.Obj) = ((Wrd9.pObj) [0]);
  (Wrd168.Obj) = (Rsp [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if (! ((Wrd169.uLng) == 62))
    goto label_47;
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd168.Obj));
  (Wrd166.Obj) = ((Wrd165.pObj) [0]);
  (Wrd167.Lng) = (FIXNUM_TO_LONG (Wrd166.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd167.Lng))))
    goto label_47;
  ((Wrd165.pObj) [11]) = (Wrd8.Obj);

DEFLABEL (label_46)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_45;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_45;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_43;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd35.Lng))))
    goto label_43;
  (Wrd29.Obj) = ((Wrd33.pObj) [8]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_42)
  (Wrd43.Obj) = (Rsp [1]);
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_33_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd153.uLng) == 62))
    goto label_41;
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd150.Obj) = ((Wrd149.pObj) [0]);
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd150.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd151.Lng))))
    goto label_41;
  (Wrd145.Obj) = (Rsp [0]);
  ((Wrd149.pObj) [8]) = (Wrd145.Obj);

DEFLABEL (label_40)
  (Wrd45.Obj) = (Rsp [0]);
  if ((Wrd45.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd124.uLng) == 62))
    goto label_36;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd122.Lng))))
    goto label_36;
  (Wrd116.Obj) = (Rsp [1]);
  ((Wrd120.pObj) [9]) = (Wrd116.Obj);

DEFLABEL (label_35)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 62))
    goto label_34;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd105.Lng))))
    goto label_34;
  ((Wrd103.pObj) [9]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_33)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd47.Obj) = ((Wrd48.pObj) [0]);
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 62))
    goto label_32;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd88.Lng))))
    goto label_32;
  ((Wrd86.pObj) [8]) = (Wrd47.Obj);

DEFLABEL (label_31)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd50.Obj) = ((Wrd51.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_30;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd73.Lng))))
    goto label_30;
  (Wrd68.Obj) = (Rsp [2]);
  ((Wrd71.pObj) [9]) = (Wrd68.Obj);

DEFLABEL (label_29)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_1]));
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd53.pObj) [0]) = (Wrd54.Obj);
  goto label_25;

DEFLABEL (label_28)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_15])), (Wrd53.pObj), (Wrd54.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  (Wrd76.Obj) = (current_block [OBJECT_33_3]);
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_15)
  goto label_29;

DEFLABEL (label_32)
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.Obj) = (current_block [OBJECT_33_5]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_16)
  goto label_31;

DEFLABEL (label_34)
  (Wrd108.Obj) = (Rsp [2]);
  (Wrd109.Obj) = (current_block [OBJECT_33_3]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_17)
  goto label_33;

DEFLABEL (label_36)
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd126.Obj) = (current_block [OBJECT_33_3]);
  (Wrd127.Obj) = (Rsp [1]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_18)
  goto label_35;

DEFLABEL (label_37)
  (Wrd131.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_0]));
  (Wrd132.Obj) = (Rsp [1]);
  (Wrd139.Obj) = ((Wrd131.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd131.pObj) [0]) = (Wrd132.Obj);
  goto label_35;

DEFLABEL (label_39)
  if ((Wrd139.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_10])), (Wrd131.pObj), (Wrd132.Obj));

DEFLABEL (label_19)
  goto label_35;

DEFLABEL (label_41)
  (Wrd154.Obj) = (Rsp [1]);
  (Wrd155.Obj) = (current_block [OBJECT_33_5]);
  (Wrd156.Obj) = (Rsp [0]);
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_20)
  goto label_40;

DEFLABEL (label_43)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_33_5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_33_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.Obj) = (current_block [OBJECT_33_2]);
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_21)
  goto label_46;

DEFLABEL (label_49)
  (Wrd186.Obj) = (Rsp [0]);
  (Wrd187.Obj) = (current_block [OBJECT_33_0]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 3);

DEFLABEL (label_22)
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define ENVIRONMENT_LABEL_34_3 26
#define DEBUGGING_LABEL_34_2 25
#define OBJECT_34_8 24
#define OBJECT_34_7 23
#define OBJECT_34_6 22
#define OBJECT_34_5 21
#define OBJECT_34_4 20
#define OBJECT_34_3 19
#define OBJECT_34_2 18
#define OBJECT_34_1 17
#define OBJECT_34_0 16
#define FREE_REFERENCE_34_0 15
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd23;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd94;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd5;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd114;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd122;
  machine_word Wrd121;
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
      current_block = (Rpc - LABEL_34_4);
      goto add_child_6;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_child_14)
DEFLABEL (add_child_6)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd121.Obj) = (Rsp [2]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 62))
    goto label_30;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd120.Lng))))
    goto label_30;
  (Wrd114.Obj) = (Rsp [0]);
  ((Wrd118.pObj) [2]) = (Wrd114.Obj);

DEFLABEL (label_29)
  (Wrd104.Obj) = (Rsp [2]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 62))
    goto label_28;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd103.Lng))))
    goto label_28;
  (Wrd97.Obj) = (Rsp [1]);
  ((Wrd101.pObj) [6]) = (Wrd97.Obj);

DEFLABEL (label_27)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_23;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_23;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_22)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_21;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd65.Lng))))
    goto label_21;
  (Wrd59.Obj) = (Rsp [0]);
  ((Wrd63.pObj) [5]) = (Wrd59.Obj);

DEFLABEL (label_20)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_19;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_19;
  (Wrd42.Obj) = (Rsp [3]);
  ((Wrd46.pObj) [4]) = (Wrd42.Obj);

DEFLABEL (label_18)
  (Wrd25.Obj) = (current_block [OBJECT_34_4]);
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 62)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_16)
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_15;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [3]) = (Wrd29.Obj);

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_34_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_34_7]);
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_9)
  goto label_18;

DEFLABEL (label_21)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (current_block [OBJECT_34_6]);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_10)
  goto label_20;

DEFLABEL (label_23)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_34_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd74.Obj) = ((Wrd75.pObj) [0]);
  (Rsp [0]) = (Wrd74.Obj);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd94.uLng) == 10)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_26)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_25;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) (Wrd88.Lng)) < ((unsigned long) (Wrd92.Lng))))
    goto label_25;
  (Wrd79.uLng) = (OBJECT_DATUM (Wrd85.Obj));
  (Wrd82.pObj) = (& ((Wrd90.pObj) [(Wrd79.Lng)]));
  (Wrd83.Obj) = (Rsp [2]);
  ((Wrd82.pObj) [1]) = (Wrd83.Obj);
  goto label_17;

DEFLABEL (label_28)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.Obj) = (current_block [OBJECT_34_2]);
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_11)
  goto label_27;

DEFLABEL (label_30)
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd124.Obj) = (current_block [OBJECT_34_0]);
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 3);

DEFLABEL (label_12)
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_5 3
#define LABEL_35_4 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define LABEL_35_8 11
#define LABEL_35_9 13
#define LABEL_35_10 15
#define LABEL_35_11 17
#define LABEL_35_12 19
#define LABEL_35_13 21
#define ENVIRONMENT_LABEL_35_3 34
#define DEBUGGING_LABEL_35_2 33
#define OBJECT_35_8 32
#define OBJECT_35_7 31
#define OBJECT_35_6 30
#define OBJECT_35_5 29
#define OBJECT_35_4 28
#define OBJECT_35_3 27
#define OBJECT_35_2 26
#define OBJECT_35_1 25
#define OBJECT_35_0 24
#define FREE_REFERENCE_35_0 23
#define FREE_REFERENCES_LABEL_35_0 22
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd141;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd58;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd144;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd174;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd160;
  machine_word Wrd161;
  machine_word Wrd159;
  machine_word Wrd37;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd184;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd201;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd209;
  machine_word Wrd208;
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
      current_block = (Rpc - LABEL_35_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_35_4);
      goto replace_child_12;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_35_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_35_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_35_10);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_35_11);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_35_12);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_35_13);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replace_child_23)
DEFLABEL (replace_child_12)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_49;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_48)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_47;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_47;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_46)
  (Wrd208.Obj) = (Rsp [3]);
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if (! ((Wrd209.uLng) == 62))
    goto label_45;
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd208.Obj));
  (Wrd206.Obj) = ((Wrd205.pObj) [0]);
  (Wrd207.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd207.Lng))))
    goto label_45;
  (Wrd201.Obj) = (Rsp [0]);
  ((Wrd205.pObj) [2]) = (Wrd201.Obj);

DEFLABEL (label_44)
  (Wrd191.Obj) = (Rsp [3]);
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if (! ((Wrd192.uLng) == 62))
    goto label_43;
  (Wrd188.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd189.Obj) = ((Wrd188.pObj) [0]);
  (Wrd190.Lng) = (FIXNUM_TO_LONG (Wrd189.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd190.Lng))))
    goto label_43;
  (Wrd184.Obj) = (Rsp [1]);
  ((Wrd188.pObj) [6]) = (Wrd184.Obj);

DEFLABEL (label_42)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_38;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd50.Lng))))
    goto label_38;
  (Wrd44.Obj) = ((Wrd48.pObj) [4]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_37)
  (Wrd151.Obj) = (Rsp [5]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd152.uLng) == 62))
    goto label_36;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd149.Obj) = ((Wrd148.pObj) [0]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd150.Lng))))
    goto label_36;
  (Wrd144.Obj) = (Rsp [0]);
  ((Wrd148.pObj) [4]) = (Wrd144.Obj);

DEFLABEL (label_35)
  (Wrd58.Obj) = (Rsp [0]);
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd60.Obj) = (current_block [OBJECT_35_7]);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [7]);
  (Rsp [2]) = (Wrd62.Obj);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd126.uLng) == 62)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 3);

DEFLABEL (label_25)
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd124.Lng))))
    goto label_24;
  ((Wrd122.pObj) [5]) = (Wrd62.Obj);

DEFLABEL (label_33)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_32)
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_31;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd72.Lng))))
    goto label_31;
  (Wrd64.Obj) = ((Wrd70.pObj) [5]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd64.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd107.Obj) = (Rsp [2]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 62))
    goto label_29;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd106.Lng))))
    goto label_29;
  (Wrd100.Obj) = (Rsp [0]);
  ((Wrd104.pObj) [5]) = (Wrd100.Obj);

DEFLABEL (label_28)
  (Wrd80.Obj) = (Rsp [0]);
  if (! ((Wrd80.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_35_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd82.Obj) = (current_block [OBJECT_35_5]);
  (Rsp [1]) = (Wrd82.Obj);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd95.uLng) == 62))
    goto label_24;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd93.Lng))))
    goto label_24;
  (Wrd86.Obj) = (Rsp [2]);
  ((Wrd91.pObj) [4]) = (Wrd86.Obj);
  goto label_26;

DEFLABEL (label_29)
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.Obj) = (current_block [OBJECT_35_7]);
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 3);

DEFLABEL (label_18)
  goto label_28;

DEFLABEL (label_31)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.Obj) = (current_block [OBJECT_35_7]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_17)
  (Wrd64.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  (Wrd127.Obj) = (current_block [OBJECT_35_6]);
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd128.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd129.Obj) = (Rsp [7]);
  (Rsp [2]) = (Wrd129.Obj);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd141.uLng) == 62))
    goto label_24;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd139.Lng))))
    goto label_24;
  ((Wrd137.pObj) [3]) = (Wrd129.Obj);
  goto label_33;

DEFLABEL (label_36)
  (Wrd153.Obj) = (Rsp [5]);
  (Wrd154.Obj) = (current_block [OBJECT_35_5]);
  (Wrd155.Obj) = (Rsp [0]);
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 3);

DEFLABEL (label_19)
  goto label_35;

DEFLABEL (label_38)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_35_5]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd159.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd159.Obj);
  (Wrd161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd160.Obj) = ((Wrd161.pObj) [0]);
  (Rsp [1]) = (Wrd160.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd179.Obj) = (Rsp [0]);
  (Wrd180.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if ((Wrd180.uLng) == 10)
    goto label_41;

DEFLABEL (label_40)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 3);

DEFLABEL (label_41)
  (Wrd171.Obj) = (Rsp [1]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if (! ((Wrd172.uLng) == 26))
    goto label_40;
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd171.Obj));
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd177.Obj) = ((Wrd176.pObj) [0]);
  (Wrd178.Lng) = (FIXNUM_TO_LONG (Wrd177.Obj));
  if (! (((unsigned long) (Wrd174.Lng)) < ((unsigned long) (Wrd178.Lng))))
    goto label_40;
  (Wrd165.uLng) = (OBJECT_DATUM (Wrd171.Obj));
  (Wrd168.pObj) = (& ((Wrd176.pObj) [(Wrd165.Lng)]));
  (Wrd169.Obj) = (Rsp [2]);
  ((Wrd168.pObj) [1]) = (Wrd169.Obj);
  goto label_26;

DEFLABEL (label_43)
  (Wrd193.Obj) = (Rsp [3]);
  (Wrd194.Obj) = (current_block [OBJECT_35_0]);
  (Wrd195.Obj) = (Rsp [1]);
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 3);

DEFLABEL (label_20)
  goto label_42;

DEFLABEL (label_45)
  (Wrd210.Obj) = (Rsp [3]);
  (Wrd211.Obj) = (current_block [OBJECT_35_2]);
  (Wrd212.Obj) = (Rsp [0]);
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 3);

DEFLABEL (label_21)
  goto label_44;

DEFLABEL (label_47)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_35_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_35_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_5);
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_8 11
#define LABEL_36_9 13
#define LABEL_36_10 15
#define LABEL_36_11 17
#define LABEL_36_12 19
#define LABEL_36_13 21
#define LABEL_36_14 23
#define LABEL_36_15 25
#define LABEL_36_16 27
#define LABEL_36_17 29
#define LABEL_36_18 31
#define LABEL_36_19 33
#define LABEL_36_20 35
#define ENVIRONMENT_LABEL_36_3 56
#define DEBUGGING_LABEL_36_2 55
#define OBJECT_36_10 54
#define OBJECT_36_9 53
#define OBJECT_36_8 52
#define OBJECT_36_7 51
#define OBJECT_36_6 50
#define OBJECT_36_5 49
#define OBJECT_36_4 48
#define OBJECT_36_3 47
#define OBJECT_36_2 46
#define OBJECT_36_1 45
#define OBJECT_36_0 44
#define EXECUTE_CACHE_36_21 37
#define FREE_REFERENCE_36_1 40
#define FREE_REFERENCE_36_0 41
#define FREE_ASSIGNMENT_36_0 43
#define FREE_REFERENCES_LABEL_36_0 36
#define NUMBER_OF_LINKER_SECTIONS_36_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd74;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd72;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd125;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd91;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd126;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto set_oldest_node_33;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto do_loop_5;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto label_39;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_36_9);
      goto label_38;

    case 6:
      current_block = (Rpc - LABEL_36_10);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_36_11);
      goto do_loop_16;

    case 8:
      current_block = (Rpc - LABEL_36_12);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_36_13);
      goto label_40;

    case 10:
      current_block = (Rpc - LABEL_36_14);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_36_15);
      goto do_loop_29;

    case 12:
      current_block = (Rpc - LABEL_36_16);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_36_17);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_36_18);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_36_19);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_36_20);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_oldest_node_48)
DEFLABEL (set_oldest_node_33)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_5;

DEFLABEL (do_loop_49)
DEFLABEL (do_loop_5)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd5.Obj) = ((Wrd11.pObj) [10]);

DEFLABEL (label_63)
  (Wrd21.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (Wrd21.Obj))
    goto label_60;
  (Wrd23.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Obj) = (Rsp [0]);
  if (! ((Wrd27.Obj) == (Wrd24.Obj)))
    goto label_52;
  Rvl = (current_block [OBJECT_36_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_59;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd36.Lng))))
    goto label_59;
  (Wrd30.Obj) = ((Wrd34.pObj) [8]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_58)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_57;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd65.Lng))))
    goto label_57;
  ((Wrd63.pObj) [8]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_56)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_36_0]));
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd44.pObj) [0]) = (Wrd45.Obj);

DEFLABEL (label_53)
  (Wrd56.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd56.Obj);
  goto do_loop_16;

DEFLABEL (label_55)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_36_10])), (Wrd44.pObj), (Wrd45.Obj));

DEFLABEL (label_37)
  goto label_53;

DEFLABEL (label_57)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_36_4]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 3);

DEFLABEL (label_38)
  goto label_56;

DEFLABEL (label_59)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_36_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 62))
    goto label_62;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd85.Lng))))
    goto label_62;
  (Wrd77.Obj) = ((Wrd83.pObj) [9]);

DEFLABEL (label_61)
  (Rsp [0]) = (Wrd77.Obj);
  goto do_loop_5;

DEFLABEL (label_62)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (current_block [OBJECT_36_2]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_39)
  (Wrd77.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (do_loop_50)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_36_11);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_65;

DEFLABEL (label_66)
  (Wrd46.Obj) = (current_block [OBJECT_36_6]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_65)
DEFLABEL (label_72)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  Rsp = (& (Rsp [2]));
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto do_loop_29;

DEFLABEL (label_67)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_71;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd37.Lng))))
    goto label_71;
  ((Wrd35.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_70)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_69;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_69;
  (Wrd12.Obj) = ((Wrd18.pObj) [8]);

DEFLABEL (label_68)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_16;

DEFLABEL (label_69)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_36_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_40)
  (Wrd12.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_36_7]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 3);

DEFLABEL (label_41)
  goto label_70;

DEFLABEL (do_loop_51)
DEFLABEL (do_loop_29)
  INTERRUPT_CHECK (26, LABEL_36_15);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_73;

DEFLABEL (label_74)
  (Wrd126.Obj) = (current_block [OBJECT_36_6]);
  (* (--Rsp)) = (Wrd126.Obj);

DEFLABEL (label_73)
DEFLABEL (label_91)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;
  Rsp = (& (Rsp [2]));
  Rvl = (current_block [OBJECT_36_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_90;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_90;
  (Wrd18.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_89)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_83;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd80.Lng))))
    goto label_83;
  (Wrd36.Obj) = ((Wrd78.pObj) [7]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_76)
  (Wrd73.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_21]));

DEFLABEL (label_77)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_82)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_81;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd64.Lng))))
    goto label_81;
  (Wrd58.Obj) = (current_block [OBJECT_36_6]);
  ((Wrd62.pObj) [7]) = (Wrd58.Obj);

DEFLABEL (label_80)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_79;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd47.Lng))))
    goto label_79;
  (Wrd39.Obj) = ((Wrd45.pObj) [8]);

DEFLABEL (label_78)
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_29;

DEFLABEL (label_79)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_36_4]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_20]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_43)
  (Wrd39.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_36_7]);
  (Wrd69.Obj) = (current_block [OBJECT_36_6]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 3);

DEFLABEL (label_44)
  goto label_80;

DEFLABEL (label_83)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (current_block [OBJECT_36_7]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_76;

DEFLABEL (label_84)
  (Wrd98.Obj) = (Rsp [3]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 62))
    goto label_88;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd97.Lng))))
    goto label_88;
  (Wrd91.Obj) = ((Wrd95.pObj) [6]);
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_87)
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd107.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd107.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd125.uLng) == 10)
    goto label_86;

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_10]), 3);

DEFLABEL (label_86)
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 26))
    goto label_85;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) (Wrd119.Lng)) < ((unsigned long) (Wrd123.Lng))))
    goto label_85;
  (Wrd111.uLng) = (OBJECT_DATUM (Wrd116.Obj));
  (Wrd114.pObj) = (& ((Wrd121.pObj) [(Wrd111.Lng)]));
  ((Wrd114.pObj) [1]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto label_82;

DEFLABEL (label_88)
  (Wrd100.Obj) = (Rsp [3]);
  (Wrd101.Obj) = (current_block [OBJECT_36_9]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_36_8]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_36_14);
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_5 3
#define LABEL_37_4 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_8 11
#define LABEL_37_9 13
#define LABEL_37_10 15
#define LABEL_37_11 17
#define LABEL_37_13 19
#define LABEL_37_14 21
#define LABEL_37_15 23
#define LABEL_37_16 25
#define LABEL_37_17 27
#define LABEL_37_18 29
#define ENVIRONMENT_LABEL_37_3 48
#define DEBUGGING_LABEL_37_2 47
#define OBJECT_37_7 46
#define OBJECT_37_6 45
#define OBJECT_37_5 44
#define OBJECT_37_4 43
#define OBJECT_37_3 42
#define OBJECT_37_2 41
#define OBJECT_37_1 40
#define OBJECT_37_0 39
#define EXECUTE_CACHE_37_12 31
#define FREE_REFERENCE_37_1 34
#define FREE_REFERENCE_37_0 35
#define FREE_ASSIGNMENT_37_1 37
#define FREE_ASSIGNMENT_37_0 38
#define FREE_REFERENCES_LABEL_37_0 30
#define NUMBER_OF_LINKER_SECTIONS_37_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd65;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd45;
  machine_word Wrd104;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd42;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd123;
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
      current_block = (Rpc - LABEL_37_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_37_4);
      goto delete_child_16;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_37_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_37_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_37_14);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_37_15);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_37_16);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_37_17);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_37_18);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_child_30)
DEFLABEL (delete_child_16)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_62;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_61)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_60;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_60;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_59)
  (Wrd40.Obj) = (Rsp [1]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd123.uLng) == 62))
    goto label_58;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd121.Lng))))
    goto label_58;
  (Wrd115.Obj) = (Rsp [0]);
  ((Wrd119.pObj) [4]) = (Wrd115.Obj);

DEFLABEL (label_57)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd98.uLng) == 62)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 3);

DEFLABEL (label_32)
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd96.Lng))))
    goto label_31;
  (Wrd90.Obj) = (Rsp [2]);
  ((Wrd94.pObj) [5]) = (Wrd90.Obj);

DEFLABEL (label_55)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_54)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 62))
    goto label_53;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd55.Lng))))
    goto label_53;
  (Wrd49.Obj) = ((Wrd53.pObj) [3]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_52)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_51;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd79.Lng))))
    goto label_51;
  (Wrd65.Obj) = ((Wrd77.pObj) [5]);
  if ((Wrd65.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_37_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_49)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_48;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_48;
  (Wrd21.Obj) = ((Wrd27.pObj) [9]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd102.uLng) == 62))
    goto label_46;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd100.Lng))))
    goto label_46;
  ((Wrd98.pObj) [9]) = (Wrd21.Obj);

DEFLABEL (label_45)
  (Wrd39.Obj) = (Rsp [1]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd85.uLng) == 62))
    goto label_44;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd83.Lng))))
    goto label_44;
  (Wrd77.Obj) = (Rsp [0]);
  ((Wrd81.pObj) [8]) = (Wrd77.Obj);

DEFLABEL (label_43)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Obj) = (Rsp [2]);
  if ((Wrd44.Obj) == (Wrd41.Obj))
    goto label_40;

DEFLABEL (label_39)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_1]));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Obj) = (Rsp [2]);
  if ((Wrd48.Obj) == (Wrd45.Obj))
    goto label_36;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_37_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_37_1]));
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd59.Obj) = ((Wrd51.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd51.pObj) [0]) = (Wrd52.Obj);
  goto label_35;

DEFLABEL (label_38)
  if ((Wrd59.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_37_18])), (Wrd51.pObj), (Wrd52.Obj));

DEFLABEL (label_25)
  goto label_35;

DEFLABEL (label_40)
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_37_0]));
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd71.Obj) = ((Wrd63.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd63.pObj) [0]) = (Wrd64.Obj);
  goto label_39;

DEFLABEL (label_42)
  if ((Wrd71.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_37_17])), (Wrd63.pObj), (Wrd64.Obj));

DEFLABEL (label_26)
  goto label_39;

DEFLABEL (label_44)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.Obj) = (current_block [OBJECT_37_6]);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 3);

DEFLABEL (label_27)
  goto label_43;

DEFLABEL (label_46)
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.Obj) = (current_block [OBJECT_37_7]);
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 3);

DEFLABEL (label_28)
  goto label_45;

DEFLABEL (label_48)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_37_7]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_37_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.Obj) = (current_block [OBJECT_37_0]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_53)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (current_block [OBJECT_37_4]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_56)
  (Wrd99.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_37_4]);
  (Rsp [1]) = (Wrd100.Obj);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd112.uLng) == 62))
    goto label_31;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd110.Lng))))
    goto label_31;
  (Wrd104.Obj) = (Rsp [2]);
  ((Wrd108.pObj) [3]) = (Wrd104.Obj);
  goto label_55;

DEFLABEL (label_58)
  (Wrd124.Obj) = (Rsp [1]);
  (Wrd125.Obj) = (current_block [OBJECT_37_2]);
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 3);

DEFLABEL (label_22)
  goto label_57;

DEFLABEL (label_60)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_37_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_37_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_5);
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 7
#define DEBUGGING_LABEL_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 6
#define DEBUGGING_LABEL_39_2 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  Rvl = (current_block [OBJECT_39_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 6
#define DEBUGGING_LABEL_40_2 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  Rvl = (current_block [OBJECT_40_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 7
#define DEBUGGING_LABEL_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto bb_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bb_vector_3)
DEFLABEL (bb_vector_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

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

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 7
#define DEBUGGING_LABEL_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto bb_ptr_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bb_ptr_3)
DEFLABEL (bb_ptr_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

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

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 7
#define DEBUGGING_LABEL_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto bb_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bb_end_3)
DEFLABEL (bb_end_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

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

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 7
#define DEBUGGING_LABEL_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto bb_eofP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bb_eofP_3)
DEFLABEL (bb_eofP_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

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

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 8
#define DEBUGGING_LABEL_45_2 7
#define OBJECT_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto set_bb_ptrB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bb_ptrB_3)
DEFLABEL (set_bb_ptrB_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_45_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 8
#define DEBUGGING_LABEL_46_2 7
#define OBJECT_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto set_bb_endB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bb_endB_3)
DEFLABEL (set_bb_endB_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_46_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 8
#define DEBUGGING_LABEL_47_2 7
#define OBJECT_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto set_bb_eofPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bb_eofPB_3)
DEFLABEL (set_bb_eofPB_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_47_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define ENVIRONMENT_LABEL_48_3 17
#define DEBUGGING_LABEL_48_2 16
#define OBJECT_48_3 15
#define OBJECT_48_2 14
#define OBJECT_48_1 13
#define OBJECT_48_0 12
#define FREE_REFERENCE_48_0 11
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto bbP_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bbP_10)
DEFLABEL (bbP_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
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
  Rvl = (current_block [OBJECT_48_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_48_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define ENVIRONMENT_LABEL_49_3 18
#define DEBUGGING_LABEL_49_2 17
#define OBJECT_49_3 16
#define OBJECT_49_2 15
#define OBJECT_49_1 14
#define OBJECT_49_0 13
#define EXECUTE_CACHE_49_7 9
#define FREE_REFERENCE_49_0 12
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_49_4);
      goto byte_readyP_4;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (byte_readyP_9)
DEFLABEL (byte_readyP_4)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_14;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_11)
  (Wrd40.Obj) = (* (Rsp++));
  if ((Wrd24.Obj) == (Wrd40.Obj))
    goto label_10;
  Rvl = (current_block [OBJECT_49_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd43.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_49_3]);
  (Rsp [1]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_49_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_7)
  (Wrd24.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_49_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_6 5
#define LABEL_50_7 7
#define LABEL_50_4 9
#define LABEL_50_8 11
#define LABEL_50_9 13
#define LABEL_50_11 15
#define LABEL_50_12 17
#define LABEL_50_13 19
#define LABEL_50_14 21
#define ENVIRONMENT_LABEL_50_3 36
#define DEBUGGING_LABEL_50_2 35
#define OBJECT_50_7 34
#define OBJECT_50_6 33
#define OBJECT_50_5 32
#define OBJECT_50_4 31
#define OBJECT_50_3 30
#define OBJECT_50_2 29
#define OBJECT_50_1 28
#define OBJECT_50_0 27
#define EXECUTE_CACHE_50_10 23
#define FREE_REFERENCE_50_0 26
#define FREE_REFERENCES_LABEL_50_0 22
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd119;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd135;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd102;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd78;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd95;
  machine_word Wrd94;
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
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd156;
  machine_word Wrd154;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_50_4);
      goto read_byte_16;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_50_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_50_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_50_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_50_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_50_14);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_byte_25)
DEFLABEL (read_byte_16)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_46;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_45)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_44;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_44;
  (Wrd28.Obj) = ((Wrd34.pObj) [3]);

DEFLABEL (label_43)
  (Wrd44.Obj) = (* (Rsp++));
  if (! ((Wrd28.Obj) == (Wrd44.Obj)))
    goto label_42;
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd156.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd156.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_5);

DEFLABEL (label_42)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 62))
    goto label_41;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd53.Lng))))
    goto label_41;
  (Wrd47.Obj) = ((Wrd51.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_40)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_39;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_39;
  (Wrd61.Obj) = ((Wrd67.pObj) [3]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd61.Obj);
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 30)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_7]), 2);

DEFLABEL (label_27)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_26;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [1]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) (Wrd89.Lng)) < ((unsigned long) (Wrd93.Lng))))
    goto label_26;
  (Wrd81.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd84.pChr) = (& ((Wrd91.pChr) [(Wrd81.Lng)]));
  (Wrd85.uLng) = ((unsigned long) (((unsigned char *) (Wrd84.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd78.Obj) = (MAKE_OBJECT (26, (Wrd85.uLng)));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd78.Obj);

DEFLABEL (label_37)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd112.uLng) == 62))
    goto label_36;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd110.Lng))))
    goto label_36;
  (Wrd102.Obj) = ((Wrd108.pObj) [3]);

DEFLABEL (label_35)
  if ((Wrd102.Obj) == (current_block [OBJECT_50_4]))
    goto label_34;
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 62))
    goto label_33;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [0]);
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd127.Lng))))
    goto label_33;
  (Wrd119.Obj) = ((Wrd125.pObj) [3]);

DEFLABEL (label_32)
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  (Wrd137.Lng) = ((Wrd136.Lng) + 1L);
  (Wrd135.Obj) = (LONG_TO_FIXNUM (Wrd137.Lng));

DEFLABEL (label_31)
  (Rsp [2]) = (Wrd135.Obj);
  (Wrd150.Obj) = (Rsp [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if ((Wrd151.uLng) == 62)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 3);

DEFLABEL (label_29)
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd148.Obj) = ((Wrd147.pObj) [0]);
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd149.Lng))))
    goto label_28;
  ((Wrd147.pObj) [3]) = (Wrd135.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_30)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd130.Obj) = (Rsp [2]);
  (Wrd131.Obj) = (current_block [OBJECT_50_2]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_23)
  (Wrd119.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd135.Obj) = (current_block [OBJECT_50_5]);
  goto label_31;

DEFLABEL (label_36)
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.Obj) = (current_block [OBJECT_50_2]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_22)
  (Wrd102.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (current_block [OBJECT_50_2]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_21)
  (Wrd61.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_50_3]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_50_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_19)
  (Wrd28.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_50_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_6);
  goto label_30;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_4 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_9 11
#define LABEL_51_10 13
#define ENVIRONMENT_LABEL_51_3 25
#define DEBUGGING_LABEL_51_2 24
#define OBJECT_51_4 23
#define OBJECT_51_3 22
#define OBJECT_51_2 21
#define OBJECT_51_1 20
#define OBJECT_51_0 19
#define EXECUTE_CACHE_51_8 15
#define FREE_REFERENCE_51_0 18
#define FREE_REFERENCES_LABEL_51_0 14
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_51_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_51_4);
      goto peek_byte_7;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_51_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_51_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (peek_byte_14)
DEFLABEL (peek_byte_7)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_25;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_23;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_23;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_22)
  (Wrd40.Obj) = (* (Rsp++));
  if (! ((Wrd24.Obj) == (Wrd40.Obj)))
    goto label_21;
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd96.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd96.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_5);

DEFLABEL (label_21)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_20;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_20;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_19)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_18;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd65.Lng))))
    goto label_18;
  (Wrd57.Obj) = ((Wrd63.pObj) [3]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 30)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 2);

DEFLABEL (label_16)
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_15;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [1]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) (Wrd85.Lng)) < ((unsigned long) (Wrd89.Lng))))
    goto label_15;
  (Wrd76.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd79.pChr) = (& ((Wrd87.pChr) [(Wrd76.Lng)]));
  (Wrd80.uLng) = ((unsigned long) (((unsigned char *) (Wrd79.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (26, (Wrd80.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_51_2]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_12)
  (Wrd57.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (current_block [OBJECT_51_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_51_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_10)
  (Wrd24.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_51_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 17
#define DEBUGGING_LABEL_52_2 16
#define OBJECT_52_5 15
#define OBJECT_52_4 14
#define OBJECT_52_3 13
#define OBJECT_52_2 12
#define OBJECT_52_1 11
#define OBJECT_52_0 10
#define FREE_REFERENCE_52_0 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_52_4);
      goto discard_byte_5;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discard_byte_10)
DEFLABEL (discard_byte_5)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_18;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_17)
  if ((Wrd10.Obj) == (current_block [OBJECT_52_2]))
    goto label_16;
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd27.Obj) = ((Wrd33.pObj) [3]);

DEFLABEL (label_14)
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd45.Lng) = ((Wrd44.Lng) + 1L);
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_5]), 3);

DEFLABEL (label_12)
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_11;
  ((Wrd54.pObj) [3]) = (Wrd43.Obj);
  Rvl = (current_block [OBJECT_52_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_52_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd43.Obj) = (current_block [OBJECT_52_3]);
  goto label_13;

DEFLABEL (label_18)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_52_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_5 3
#define LABEL_53_4 5
#define LABEL_53_6 7
#define LABEL_53_7 9
#define LABEL_53_9 11
#define LABEL_53_10 13
#define ENVIRONMENT_LABEL_53_3 23
#define DEBUGGING_LABEL_53_2 22
#define OBJECT_53_4 21
#define OBJECT_53_3 20
#define OBJECT_53_2 19
#define OBJECT_53_1 18
#define OBJECT_53_0 17
#define EXECUTE_CACHE_53_8 15
#define FREE_REFERENCES_LABEL_53_0 14
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_53_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_53_4);
      goto Z__peek_byte_6;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_53_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_53_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_53_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__peek_byte_13)
DEFLABEL (Z__peek_byte_6)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_21)
  (Wrd37.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd37.Obj)))
    goto label_20;
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd93.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd93.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_5);

DEFLABEL (label_20)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_19;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_19;
  (Wrd40.Obj) = ((Wrd44.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_18)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_17;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd62.Lng))))
    goto label_17;
  (Wrd54.Obj) = ((Wrd60.pObj) [3]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 30)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_15)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_14;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) (Wrd82.Lng)) < ((unsigned long) (Wrd86.Lng))))
    goto label_14;
  (Wrd73.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd76.pChr) = (& ((Wrd84.pChr) [(Wrd73.Lng)]));
  (Wrd77.uLng) = ((unsigned long) (((unsigned char *) (Wrd76.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (26, (Wrd77.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_53_2]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_11)
  (Wrd54.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_53_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_53_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define ENVIRONMENT_LABEL_54_3 15
#define DEBUGGING_LABEL_54_2 14
#define OBJECT_54_5 13
#define OBJECT_54_4 12
#define OBJECT_54_3 11
#define OBJECT_54_2 10
#define OBJECT_54_1 9
#define OBJECT_54_0 8
#define FREE_REFERENCES_LABEL_54_0 8
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_54_4);
      goto Z__discard_byte_4;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__discard_byte_9)
DEFLABEL (Z__discard_byte_4)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_16)
  if ((Wrd7.Obj) == (current_block [OBJECT_54_2]))
    goto label_15;
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_13)
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd42.Lng) = ((Wrd41.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd40.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 62)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 3);

DEFLABEL (label_11)
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd53.Lng))))
    goto label_10;
  ((Wrd51.pObj) [3]) = (Wrd40.Obj);
  Rvl = (current_block [OBJECT_54_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_54_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_7)
  (Wrd24.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd40.Obj) = (current_block [OBJECT_54_3]);
  goto label_12;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_54_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define ENVIRONMENT_LABEL_55_3 17
#define DEBUGGING_LABEL_55_2 16
#define OBJECT_55_5 15
#define OBJECT_55_4 14
#define OBJECT_55_3 13
#define OBJECT_55_2 12
#define OBJECT_55_1 11
#define OBJECT_55_0 10
#define FREE_REFERENCE_55_0 9
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_55_4);
      goto unread_byte_5;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unread_byte_10)
DEFLABEL (unread_byte_5)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_18;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_17)
  if ((Wrd10.Obj) == (current_block [OBJECT_55_2]))
    goto label_16;
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_15;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_15;
  (Wrd27.Obj) = ((Wrd33.pObj) [3]);

DEFLABEL (label_14)
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd45.Lng) = ((Wrd44.Lng) - 1L);
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_5]), 3);

DEFLABEL (label_12)
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_11;
  ((Wrd54.pObj) [3]) = (Wrd43.Obj);
  Rvl = (current_block [OBJECT_55_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_55_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd43.Obj) = (current_block [OBJECT_55_3]);
  goto label_13;

DEFLABEL (label_18)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_55_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 13
#define DEBUGGING_LABEL_56_2 12
#define OBJECT_56_3 11
#define OBJECT_56_2 10
#define OBJECT_56_1 9
#define OBJECT_56_0 8
#define FREE_REFERENCE_56_0 7
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_56_4);
      goto unread_bytes_6;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unread_bytes_10)
DEFLABEL (unread_bytes_6)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_16)
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd25.Lng) - (Wrd27.Lng));
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd29.Obj);
  Wrd31 = Wrd28;
  if ((Wrd31.Lng) < 0)
    goto label_12;
  Wrd33 = Wrd29;
  goto label_11;

DEFLABEL (label_12)
  (Wrd53.Lng) = ((Wrd31.Lng) + 69632L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));

DEFLABEL (label_11)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 62)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 3);

DEFLABEL (label_14)
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_13;
  ((Wrd43.pObj) [3]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_56_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_56_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define ENVIRONMENT_LABEL_57_3 15
#define DEBUGGING_LABEL_57_2 14
#define OBJECT_57_3 13
#define OBJECT_57_2 12
#define OBJECT_57_1 11
#define OBJECT_57_0 10
#define FREE_REFERENCE_57_0 9
#define FREE_REFERENCES_LABEL_57_0 8
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd71;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_57_4);
      goto node_ref_6;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_ref_11)
DEFLABEL (node_ref_6)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_19)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd21.Lng) + (Wrd23.Lng));
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd25.Obj);
  Wrd27 = Wrd24;
  (Wrd29.Lng) = 69632L;
  if ((Wrd27.Lng) < (Wrd29.Lng))
    goto label_13;
  (Wrd36.Lng) = ((Wrd27.Lng) - (Wrd29.Lng));
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  goto label_12;

DEFLABEL (label_13)
  Wrd31 = Wrd25;

DEFLABEL (label_12)
DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_17;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_17;
  (Wrd40.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd40.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd71.uLng) == 30)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_3]), 2);

DEFLABEL (label_15)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_14;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_14;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd62.Obj));
  (Wrd59.pChr) = (& ((Wrd67.pChr) [(Wrd56.Lng)]));
  (Wrd60.uLng) = ((unsigned long) (((unsigned char *) (Wrd59.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (26, (Wrd60.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd49.Obj) = (current_block [OBJECT_57_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_9)
  (Wrd40.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_8 9
#define LABEL_58_9 11
#define LABEL_58_7 13
#define LABEL_58_13 15
#define LABEL_58_15 17
#define LABEL_58_16 19
#define LABEL_58_17 21
#define LABEL_58_18 23
#define LABEL_58_19 25
#define LABEL_58_12 27
#define ENVIRONMENT_LABEL_58_3 51
#define DEBUGGING_LABEL_58_2 50
#define OBJECT_58_10 49
#define OBJECT_58_9 48
#define OBJECT_58_8 47
#define OBJECT_58_7 46
#define OBJECT_58_6 45
#define OBJECT_58_5 44
#define OBJECT_58_4 43
#define OBJECT_58_3 42
#define OBJECT_58_2 41
#define OBJECT_58_1 40
#define OBJECT_58_0 39
#define EXECUTE_CACHE_58_20 29
#define EXECUTE_CACHE_58_14 31
#define EXECUTE_CACHE_58_11 33
#define EXECUTE_CACHE_58_10 35
#define FREE_REFERENCE_58_0 38
#define FREE_REFERENCES_LABEL_58_0 28
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd12;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd64;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd7;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
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
      current_block = (Rpc - LABEL_58_4);
      goto guarantee_buffer_data_21;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_58_7);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_58_13);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_58_15);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_58_16);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_58_17);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_58_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_58_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_58_12);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_buffer_data_33)
DEFLABEL (guarantee_buffer_data_21)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_62;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd68.Lng))))
    goto label_62;
  (Wrd7.Obj) = ((Wrd66.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;

DEFLABEL (label_35)
  (Wrd58.Obj) = (Rsp [1]);
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_11]));

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_61;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_61;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_60)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd29.Lng) = ((Wrd26.Lng) + 4096L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_59;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_59;
  (Wrd38.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_58)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_57;
  Wrd52 = Wrd56;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_58_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  if (Rvl == (current_block [OBJECT_58_5]))
    goto label_48;
  if (Rvl == (current_block [OBJECT_58_7]))
    goto label_44;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd12.Lng) > 0)
    goto label_38;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_58_10]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_58_19);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_38)
  if (! ((Wrd12.Lng) < 4096L))
    goto label_37;
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 62))
    goto label_43;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd55.Lng))))
    goto label_43;
  (Wrd49.Obj) = (current_block [OBJECT_58_9]);
  ((Wrd53.pObj) [5]) = (Wrd49.Obj);

DEFLABEL (label_42)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd25.Lng) + (Wrd27.Lng));
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_41;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_41;
  ((Wrd36.pObj) [4]) = (Wrd23.Obj);

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_58_9]);

DEFLABEL (label_39)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.Obj) = (current_block [OBJECT_58_2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_18]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_8]), 3);

DEFLABEL (label_27)
  goto label_40;

DEFLABEL (label_43)
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.Obj) = (current_block [OBJECT_58_0]);
  (Wrd60.Obj) = (current_block [OBJECT_58_9]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_17]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_8]), 3);

DEFLABEL (label_28)
  goto label_42;

DEFLABEL (label_44)
  (Wrd64.Obj) = (Rsp [4]);
  if (! ((Wrd64.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_11]));

DEFLABEL (label_45)
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_47;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd76.Lng))))
    goto label_47;
  (Wrd70.Obj) = (current_block [OBJECT_58_9]);
  ((Wrd74.pObj) [5]) = (Wrd70.Obj);

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_39;

DEFLABEL (label_47)
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (current_block [OBJECT_58_0]);
  (Wrd81.Obj) = (current_block [OBJECT_58_9]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_16]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_8]), 3);

DEFLABEL (label_29)
  goto label_46;

DEFLABEL (label_48)
  (Wrd86.Obj) = (Rsp [1]);
  if ((Wrd86.Obj) == (current_block [OBJECT_58_6]))
    goto label_50;
  Wrd88 = Wrd86;
  goto label_49;

DEFLABEL (label_50)
  (Wrd88.Obj) = (current_block [OBJECT_58_7]);

DEFLABEL (label_49)
DEFLABEL (label_52)
  (Wrd97.Obj) = (Rsp [3]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_51;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd96.Lng))))
    goto label_51;
  ((Wrd94.pObj) [4]) = (Wrd88.Obj);
  goto label_40;

DEFLABEL (label_51)
  (Wrd99.Obj) = (Rsp [3]);
  (Wrd100.Obj) = (current_block [OBJECT_58_2]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_8]), 3);

DEFLABEL (label_30)
  goto label_40;

DEFLABEL (label_53)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_12]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_55;
  Wrd108 = Wrd112;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_58_4]);
  (* (--Rsp)) = (Wrd114.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_58_12);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_13])), (Wrd109.pObj));

DEFLABEL (label_31)
  (Wrd108.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_9])), (Wrd53.pObj));

DEFLABEL (label_25)
  (Wrd52.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd47.Obj) = (Rsp [5]);
  (Wrd48.Obj) = (current_block [OBJECT_58_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_58_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (current_block [OBJECT_58_0]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_5 3
#define LABEL_59_4 5
#define LABEL_59_6 7
#define LABEL_59_8 9
#define LABEL_59_9 11
#define ENVIRONMENT_LABEL_59_3 25
#define DEBUGGING_LABEL_59_2 24
#define OBJECT_59_3 23
#define OBJECT_59_2 22
#define OBJECT_59_1 21
#define OBJECT_59_0 20
#define EXECUTE_CACHE_59_10 13
#define EXECUTE_CACHE_59_7 15
#define FREE_REFERENCE_59_1 18
#define FREE_REFERENCE_59_0 19
#define FREE_REFERENCES_LABEL_59_0 12
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd46;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_59_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_59_4);
      goto compress_finished_13;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_59_9);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compress_finished_17)
DEFLABEL (compress_finished_13)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd8.Obj) = ((Wrd9.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_24)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd26.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  if ((Wrd27.Obj) == (Wrd26.Obj))
    goto label_22;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if ((Wrd30.Lng) < (Wrd32.Lng))
    goto label_20;
  (Wrd38.Lng) = ((Wrd32.Lng) + 69632L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  goto label_19;

DEFLABEL (label_20)
  Wrd33 = Wrd27;

DEFLABEL (label_19)
DEFLABEL (label_21)
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd40.Lng) - (Wrd42.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_22)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_23)
  (Wrd46.Obj) = (current_block [OBJECT_59_2]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_25)
  (Wrd20.Obj) = (current_block [OBJECT_59_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_5);
  goto label_23;

DEFLABEL (loop_18)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_59_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (current_block [OBJECT_59_3]);
  if (! ((Wrd6.Lng) > 16L))
    goto label_26;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_59_9);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - 16L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 6
#define DEBUGGING_LABEL_60_2 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto guarantee_buffer_space_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_buffer_space_3)
DEFLABEL (guarantee_buffer_space_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  Rvl = (current_block [OBJECT_60_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define LABEL_61_11 9
#define LABEL_61_12 11
#define LABEL_61_9 13
#define LABEL_61_13 15
#define LABEL_61_8 17
#define ENVIRONMENT_LABEL_61_3 34
#define DEBUGGING_LABEL_61_2 33
#define OBJECT_61_4 32
#define OBJECT_61_3 31
#define OBJECT_61_2 30
#define OBJECT_61_1 29
#define OBJECT_61_0 28
#define EXECUTE_CACHE_61_10 19
#define EXECUTE_CACHE_61_6 21
#define FREE_REFERENCE_61_1 24
#define FREE_REFERENCE_61_0 25
#define FREE_ASSIGNMENT_61_0 27
#define FREE_REFERENCES_LABEL_61_0 18
#define NUMBER_OF_LINKER_SECTIONS_61_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd36;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_61_4);
      goto write_literal_15;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_61_11);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_61_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_61_9);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_61_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_61_8);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_literal_21)
DEFLABEL (write_literal_15)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) - 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd8.Obj) = ((Wrd9.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_26;
  (Wrd12.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_25)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd25.Lng) + (Wrd27.Lng));
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd29.Obj);
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (current_block [OBJECT_61_2]);
  (Wrd33.Lng) = 69632L;
  if ((Wrd31.Lng) > (Wrd33.Lng))
    goto label_23;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_22;

DEFLABEL (label_23)
  (Wrd45.Lng) = ((Wrd31.Lng) - (Wrd33.Lng));
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_22)
DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (label_26)
  (Wrd20.Obj) = (current_block [OBJECT_61_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_61_9);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_61_2]))
    goto label_28;
  Wrd7 = Wrd5;
  goto label_27;

DEFLABEL (label_28)
  (Wrd7.Obj) = (current_block [OBJECT_61_3]);

DEFLABEL (label_27)
DEFLABEL (label_32)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd16.Obj) = ((Wrd8.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd8.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));
  Rvl = (current_block [OBJECT_61_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd16.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_13])), (Wrd8.pObj), (Wrd7.Obj));

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_61_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_61_11);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd23.pObj) [0]) = (Wrd24.Obj);
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_12])), (Wrd23.pObj), (Wrd24.Obj));

DEFLABEL (label_19)
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_9 7
#define LABEL_62_10 9
#define LABEL_62_8 11
#define LABEL_62_6 13
#define ENVIRONMENT_LABEL_62_3 24
#define DEBUGGING_LABEL_62_2 23
#define OBJECT_62_0 22
#define EXECUTE_CACHE_62_7 15
#define FREE_REFERENCE_62_0 18
#define FREE_ASSIGNMENT_62_1 20
#define FREE_ASSIGNMENT_62_0 21
#define FREE_REFERENCES_LABEL_62_0 14
#define NUMBER_OF_LINKER_SECTIONS_62_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd47;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_62_4);
      goto write_copy_19;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_62_9);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_62_10);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_copy_24)
DEFLABEL (write_copy_19)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd9.Lng) > (Wrd11.Lng))
    goto label_26;
  Wrd12 = Wrd10;
  goto label_25;

DEFLABEL (label_26)
  (Wrd53.Lng) = ((Wrd11.Lng) + 4096L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));

DEFLABEL (label_25)
DEFLABEL (label_28)
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd13.Lng) - (Wrd15.Lng));
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd22.Lng) = ((Wrd20.Lng) - 1L);
  (Wrd25.Lng) = (LEFT_SHIFT ((Wrd22.Lng), 4));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  Wrd28 = Wrd16;
  (Wrd30.Lng) = 256L;
  if ((Wrd28.Lng) < (Wrd30.Lng))
    goto label_27;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd39.Lng) = (FIXNUM_QUOTIENT ((Wrd28.Lng), (Wrd30.Lng)));
  Wrd41 = Wrd25;
  (Wrd43.Lng) = ((Wrd41.Lng) + (Wrd39.Lng));
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_62_8);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  {
    long temp = ((Wrd7.Lng) & 255L);
    (Wrd10.Lng) = (((Wrd7.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 8))));
  }
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (label_27)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_62_6);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd5.Obj) = ((Wrd6.pObj) [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd8.Lng) + (Wrd10.Lng));
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd12.Obj);
  Wrd14 = Wrd11;
  (Wrd16.Lng) = 69632L;
  if ((Wrd14.Lng) < (Wrd16.Lng))
    goto label_30;
  (Wrd23.Lng) = ((Wrd14.Lng) - (Wrd16.Lng));
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_29;

DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_29)
DEFLABEL (label_37)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_0]));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd24.pObj) [0]) = (Wrd25.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_1]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd36.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_62_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_10])), (Wrd36.pObj), (Wrd37.Obj));

DEFLABEL (label_22)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_9])), (Wrd24.pObj), (Wrd25.Obj));

DEFLABEL (label_21)
  goto label_34;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 14
#define DEBUGGING_LABEL_63_2 13
#define OBJECT_63_2 12
#define OBJECT_63_1 11
#define OBJECT_63_0 10
#define FREE_REFERENCE_63_0 7
#define FREE_ASSIGNMENT_63_0 9
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_63_4);
      goto increment_bp_4;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (increment_bp_8)
DEFLABEL (increment_bp_4)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd5.Obj) = ((Wrd6.pObj) [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  if ((Wrd10.Obj) == (current_block [OBJECT_63_0]))
    goto label_10;
  Wrd14 = Wrd10;
  goto label_9;

DEFLABEL (label_10)
  (Wrd14.Obj) = (current_block [OBJECT_63_1]);

DEFLABEL (label_9)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_0]));
  (Wrd23.Obj) = ((Wrd15.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd15.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_63_2]);
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd23.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_5])), (Wrd15.pObj), (Wrd14.Obj));

DEFLABEL (label_6)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define ENVIRONMENT_LABEL_64_3 23
#define DEBUGGING_LABEL_64_2 22
#define OBJECT_64_3 21
#define OBJECT_64_2 20
#define OBJECT_64_1 19
#define OBJECT_64_0 18
#define EXECUTE_CACHE_64_7 9
#define FREE_REFERENCE_64_2 12
#define FREE_REFERENCE_64_1 13
#define FREE_REFERENCE_64_0 14
#define FREE_ASSIGNMENT_64_1 16
#define FREE_ASSIGNMENT_64_0 17
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_64_4);
      goto increment_current_pointer_5;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (increment_current_pointer_10)
DEFLABEL (increment_current_pointer_5)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd5.Obj) = ((Wrd6.pObj) [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  if ((Wrd10.Obj) == (current_block [OBJECT_64_0]))
    goto label_16;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_1]));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd23.Obj) = ((Wrd15.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd15.pObj) [0]) = (Wrd16.Obj);

DEFLABEL (label_12)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd33.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_64_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if ((Wrd23.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_6])), (Wrd15.pObj), (Wrd16.Obj));

DEFLABEL (label_7)
  goto label_12;

DEFLABEL (label_16)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_0]));
  (Wrd37.Obj) = (current_block [OBJECT_64_1]);
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd36.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_17)
  (Wrd49.Obj) = (current_block [OBJECT_64_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_15;

DEFLABEL (label_19)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_5])), (Wrd36.pObj), (Wrd37.Obj));

DEFLABEL (label_8)
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define ENVIRONMENT_LABEL_65_3 10
#define DEBUGGING_LABEL_65_2 9
#define OBJECT_65_2 8
#define OBJECT_65_1 7
#define OBJECT_65_0 6
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_65_4);
      goto make_output_buffer_1;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_output_buffer_4)
DEFLABEL (make_output_buffer_1)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Wrd9.Obj) = (current_block [OBJECT_65_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_7 9
#define LABEL_66_8 11
#define LABEL_66_10 13
#define LABEL_66_11 15
#define LABEL_66_9 17
#define ENVIRONMENT_LABEL_66_3 32
#define DEBUGGING_LABEL_66_2 31
#define OBJECT_66_6 30
#define OBJECT_66_5 29
#define OBJECT_66_4 28
#define OBJECT_66_3 27
#define OBJECT_66_2 26
#define OBJECT_66_1 25
#define OBJECT_66_0 24
#define EXECUTE_CACHE_66_12 19
#define FREE_REFERENCE_66_1 22
#define FREE_REFERENCE_66_0 23
#define FREE_REFERENCES_LABEL_66_0 18
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd75;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_66_4);
      goto write_byte_9;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_66_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_66_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_66_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_66_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_byte_18)
DEFLABEL (write_byte_9)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_31;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_28)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd75.uLng) == 30))
    goto label_27;
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_27;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [1]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) (Wrd71.Lng)) < ((unsigned long) (Wrd74.Lng))))
    goto label_27;
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_27;
  (Wrd62.uLng) = (OBJECT_DATUM (Wrd68.Obj));
  (Wrd64.pChr) = (& ((Wrd72.pChr) [(Wrd62.Lng)]));
  ((Wrd64.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd66.uLng));

DEFLABEL (label_26)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == (current_block [OBJECT_66_3]))
    goto label_20;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd34.Lng) = ((Wrd33.Lng) + 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_19;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [0]) = (Wrd38.Obj);
  Rvl = (current_block [OBJECT_66_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_5]), 2);

DEFLABEL (label_20)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_25;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_24)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_1]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_23;
  Wrd55 = Wrd59;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (Wrd5.Obj) = (current_block [OBJECT_66_6]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_21;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd8.pObj) [0]) = (Wrd5.Obj);
  Rvl = (current_block [OBJECT_66_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_5]), 2);

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_11])), (Wrd56.pObj));

DEFLABEL (label_15)
  (Wrd55.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 3);

DEFLABEL (label_16)
  goto label_26;

DEFLABEL (label_29)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 1);

DEFLABEL (label_13)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define LABEL_67_8 11
#define LABEL_67_10 13
#define LABEL_67_12 15
#define LABEL_67_13 17
#define LABEL_67_14 19
#define LABEL_67_9 21
#define ENVIRONMENT_LABEL_67_3 35
#define DEBUGGING_LABEL_67_2 34
#define OBJECT_67_6 33
#define OBJECT_67_5 32
#define OBJECT_67_4 31
#define OBJECT_67_3 30
#define OBJECT_67_2 29
#define OBJECT_67_1 28
#define OBJECT_67_0 27
#define EXECUTE_CACHE_67_11 23
#define FREE_REFERENCE_67_0 26
#define FREE_REFERENCES_LABEL_67_0 22
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_67_4);
      goto write_bytes_25;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_67_8);
      goto do_loop_9;

    case 5:
      current_block = (Rpc - LABEL_67_10);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_67_12);
      goto do_loop_19;

    case 7:
      current_block = (Rpc - LABEL_67_13);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_67_14);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_67_9);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_bytes_34)
DEFLABEL (write_bytes_25)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_41;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd22.Lng) - (Wrd24.Lng));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd29.Lng) = ((Wrd27.Lng) + (Wrd25.Lng));
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd30.Obj);
  Wrd32 = Wrd29;
  if ((Wrd32.Lng) < 4096L)
    goto label_37;
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  goto do_loop_9;

DEFLABEL (label_37)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_39;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_38)
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  goto do_loop_19;

DEFLABEL (label_39)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_5])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (do_loop_35)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_67_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_44;
  Rvl = (current_block [OBJECT_67_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_46;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_46;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_46;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pChr) = (& ((Wrd23.pChr) [(Wrd12.Lng)]));
  (Wrd16.uLng) = ((unsigned long) (((unsigned char *) (Wrd15.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_67_9);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_9;

DEFLABEL (label_46)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (do_loop_36)
DEFLABEL (do_loop_19)
  INTERRUPT_CHECK (26, LABEL_67_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [8]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_51;
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_50;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_50;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_50;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd20.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_49)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 30))
    goto label_48;
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_48;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [1]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd51.Lng))))
    goto label_48;
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_48;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd42.pChr) = (& ((Wrd49.pChr) [(Wrd39.Lng)]));
  ((Wrd42.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd7.uLng));

DEFLABEL (label_47)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd36.Lng) + 1L);
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [1]) = (Wrd34.Obj);
  goto do_loop_19;

DEFLABEL (label_48)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_14]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_6]), 3);

DEFLABEL (label_32)
  goto label_47;

DEFLABEL (label_50)
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 2);

DEFLABEL (label_31)
  (Wrd7.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  (Wrd61.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd62.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_52;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = (Rsp [1]);
  ((Wrd65.pObj) [0]) = (Wrd66.Obj);
  Rvl = (current_block [OBJECT_67_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_5]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_5 3
#define LABEL_68_4 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define LABEL_68_8 11
#define LABEL_68_9 13
#define LABEL_68_10 15
#define LABEL_68_12 17
#define ENVIRONMENT_LABEL_68_3 30
#define DEBUGGING_LABEL_68_2 29
#define OBJECT_68_2 28
#define OBJECT_68_1 27
#define OBJECT_68_0 26
#define EXECUTE_CACHE_68_13 19
#define EXECUTE_CACHE_68_11 21
#define FREE_REFERENCE_68_1 24
#define FREE_REFERENCE_68_0 25
#define FREE_REFERENCES_LABEL_68_0 18
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_68_4);
      goto flush_output_buffer_6;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_68_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_68_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_68_10);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_68_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flush_output_buffer_15)
DEFLABEL (flush_output_buffer_6)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_27;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_26)
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd23.Lng) > 0)
    goto label_19;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_17;
  Wrd25 = Wrd29;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_13]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_12])), (Wrd26.pObj));

DEFLABEL (label_10)
  (Wrd25.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd31.Obj) = (current_block [OBJECT_68_1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_25;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_24)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_1]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_23;
  Wrd41 = Wrd45;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_21;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_20)
  (Rsp [3]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_11]));

DEFLABEL (label_21)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_13)
  (Wrd47.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd42.pObj));

DEFLABEL (label_12)
  (Wrd41.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 12
#define DEBUGGING_LABEL_69_2 11
#define EXECUTE_CACHE_69_7 7
#define EXECUTE_CACHE_69_6 9
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpress_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto uncompress_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uncompress_4)
DEFLABEL (uncompress_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_69_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_24 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_25 37
#define LABEL_30 39
#define LABEL_26 41
#define TAG_27 19
#define LABEL_32 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_31 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_36 55
#define ENVIRONMENT_LABEL_3 103
#define DEBUGGING_LABEL_2 102
#define PURIFICATION_ROOT 101
#define OBJECT_30 100
#define OBJECT_29 99
#define OBJECT_28 98
#define OBJECT_27 97
#define OBJECT_26 96
#define OBJECT_25 95
#define OBJECT_24 94
#define OBJECT_23 93
#define OBJECT_22 92
#define OBJECT_21 91
#define OBJECT_20 90
#define OBJECT_19 89
#define OBJECT_18 88
#define OBJECT_17 87
#define OBJECT_16 86
#define OBJECT_15 85
#define OBJECT_14 84
#define OBJECT_13 83
#define OBJECT_12 82
#define OBJECT_11 81
#define OBJECT_10 80
#define OBJECT_9 79
#define OBJECT_8 78
#define OBJECT_7 77
#define OBJECT_6 76
#define OBJECT_5 75
#define OBJECT_4 74
#define OBJECT_3 73
#define OBJECT_2 72
#define OBJECT_1 71
#define OBJECT_0 70
#define FREE_REFERENCE_3 57
#define FREE_REFERENCE_2 58
#define FREE_REFERENCE_1 59
#define FREE_REFERENCE_0 60
#define GLOBAL_EXECUTE_CACHE_33 62
#define GLOBAL_EXECUTE_CACHE_12 64
#define GLOBAL_EXECUTE_CACHE_8 66
#define GLOBAL_EXECUTE_CACHE_5 68
#define FREE_REFERENCES_LABEL_0 56
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cpress_so_db6cb5884f231141 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
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
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_39;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_18;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__make_node_45;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_21;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_27;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_26;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_33;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_28;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_34;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto make_byte_buffer_46;

    case 20:
      current_block = (Rpc - LABEL_32);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_35;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_30;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto label_48;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto label_49;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto expression_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_38)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_49)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_48)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	2,
	2,
	0,
	3,
	2,
	3,
	3,
	0,
	2,
	2,
	1,
	1,
	1,
	0,
	1,
	1,
	2,
	2,
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
	3,
	3,
	1,
	1,
	2,
	3,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	0,
	1,
	2,
	2,
	2,
	1,
	3,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 69)
      goto label_47;
    blocks = (current_block [OBJECT_30]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_47)
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
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_53;
  Wrd11 = Wrd15;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_51;
  Wrd11 = Wrd15;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_40)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_39)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (Z__make_node_45)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_node_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd7.Obj) = ((Wrd5.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd8.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Obj) = (* (Rsp++));
  (Wrd24.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd14.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd14.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (make_byte_buffer_46)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (make_byte_buffer_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_59;
  Wrd9 = Wrd13;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_33]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (current_block [OBJECT_29]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd10.pObj));

DEFLABEL (label_43)
  (Wrd9.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cpress_so_db6cb5884f231141 [69] =
  {
    { "cpress_so_code_1", 6, cpress_so_code_1 },
    { "cpress_so_code_2", 37, cpress_so_code_2 },
    { "cpress_so_code_3", 4, cpress_so_code_3 },
    { "cpress_so_code_4", 16, cpress_so_code_4 },
    { "cpress_so_code_5", 15, cpress_so_code_5 },
    { "cpress_so_code_6", 5, cpress_so_code_6 },
    { "cpress_so_code_7", 18, cpress_so_code_7 },
    { "cpress_so_code_8", 1, cpress_so_code_8 },
    { "cpress_so_code_9", 1, cpress_so_code_9 },
    { "cpress_so_code_10", 1, cpress_so_code_10 },
    { "cpress_so_code_11", 1, cpress_so_code_11 },
    { "cpress_so_code_12", 1, cpress_so_code_12 },
    { "cpress_so_code_13", 1, cpress_so_code_13 },
    { "cpress_so_code_14", 1, cpress_so_code_14 },
    { "cpress_so_code_15", 1, cpress_so_code_15 },
    { "cpress_so_code_16", 1, cpress_so_code_16 },
    { "cpress_so_code_17", 1, cpress_so_code_17 },
    { "cpress_so_code_18", 1, cpress_so_code_18 },
    { "cpress_so_code_19", 1, cpress_so_code_19 },
    { "cpress_so_code_20", 1, cpress_so_code_20 },
    { "cpress_so_code_21", 1, cpress_so_code_21 },
    { "cpress_so_code_22", 1, cpress_so_code_22 },
    { "cpress_so_code_23", 1, cpress_so_code_23 },
    { "cpress_so_code_24", 1, cpress_so_code_24 },
    { "cpress_so_code_25", 1, cpress_so_code_25 },
    { "cpress_so_code_26", 1, cpress_so_code_26 },
    { "cpress_so_code_27", 1, cpress_so_code_27 },
    { "cpress_so_code_28", 1, cpress_so_code_28 },
    { "cpress_so_code_29", 1, cpress_so_code_29 },
    { "cpress_so_code_30", 1, cpress_so_code_30 },
    { "cpress_so_code_31", 4, cpress_so_code_31 },
    { "cpress_so_code_32", 5, cpress_so_code_32 },
    { "cpress_so_code_33", 12, cpress_so_code_33 },
    { "cpress_so_code_34", 6, cpress_so_code_34 },
    { "cpress_so_code_35", 10, cpress_so_code_35 },
    { "cpress_so_code_36", 17, cpress_so_code_36 },
    { "cpress_so_code_37", 14, cpress_so_code_37 },
    { "cpress_so_code_38", 1, cpress_so_code_38 },
    { "cpress_so_code_39", 1, cpress_so_code_39 },
    { "cpress_so_code_40", 1, cpress_so_code_40 },
    { "cpress_so_code_41", 1, cpress_so_code_41 },
    { "cpress_so_code_42", 1, cpress_so_code_42 },
    { "cpress_so_code_43", 1, cpress_so_code_43 },
    { "cpress_so_code_44", 1, cpress_so_code_44 },
    { "cpress_so_code_45", 1, cpress_so_code_45 },
    { "cpress_so_code_46", 1, cpress_so_code_46 },
    { "cpress_so_code_47", 1, cpress_so_code_47 },
    { "cpress_so_code_48", 4, cpress_so_code_48 },
    { "cpress_so_code_49", 3, cpress_so_code_49 },
    { "cpress_so_code_50", 10, cpress_so_code_50 },
    { "cpress_so_code_51", 6, cpress_so_code_51 },
    { "cpress_so_code_52", 3, cpress_so_code_52 },
    { "cpress_so_code_53", 6, cpress_so_code_53 },
    { "cpress_so_code_54", 3, cpress_so_code_54 },
    { "cpress_so_code_55", 3, cpress_so_code_55 },
    { "cpress_so_code_56", 2, cpress_so_code_56 },
    { "cpress_so_code_57", 3, cpress_so_code_57 },
    { "cpress_so_code_58", 13, cpress_so_code_58 },
    { "cpress_so_code_59", 5, cpress_so_code_59 },
    { "cpress_so_code_60", 1, cpress_so_code_60 },
    { "cpress_so_code_61", 8, cpress_so_code_61 },
    { "cpress_so_code_62", 6, cpress_so_code_62 },
    { "cpress_so_code_63", 2, cpress_so_code_63 },
    { "cpress_so_code_64", 3, cpress_so_code_64 },
    { "cpress_so_code_65", 2, cpress_so_code_65 },
    { "cpress_so_code_66", 8, cpress_so_code_66 },
    { "cpress_so_code_67", 10, cpress_so_code_67 },
    { "cpress_so_code_68", 8, cpress_so_code_68 },
    { "cpress_so_code_69", 2, cpress_so_code_69 }
  };

int
decl_cpress_so_db6cb5884f231141 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cpress_so_db6cb5884f231141);
  return (0);
}

DECLARE_COMPILED_CODE ("cpress.so", 27, decl_cpress_so_db6cb5884f231141, cpress_so_db6cb5884f231141)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cpress_so_data_db6cb5884f231141 [6793] =
  "\x7e\x78\xc6\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\xb9\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x1d\x02\x80"
  "\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\xb3\xb4\xb5\xb6\xb7\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x81\x82\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x83\xc2\x1c"
  "\x02\x82\x81\x02\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x81\x02\x1b\x02\x02\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x80\xc2\xb3\x24"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x85\x80\x82"
  "\x1b\x86\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\xb4\xb5\x25\xb5\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x02\x1b\x02\x02\x1b\x02\xb4\xb5\x25\x1b\x1b"
  "\xb5\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x83\x84\x1b\x82\xc3\x1c\x85\x1b\x81\xb3\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x84\x82\x83\x1b\x1b\x81\x1b\x85\xb3\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x81\x86\x07\x1b\x02"
  "\x1d\x02\x1b\x02\xb4\x25\xb4\xb3\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x1d\x82\x1b\x83\x1b\x84\xb4"
  "\xb5\x25\xb4\xb5\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x02\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x82\x1b"
  "\x83\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x80\x02\x81\x82\x1b\x83\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x81\x82\x1b\x83\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x80"
  "\x02\x1b\x82\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x81\x82\x1b\x83\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x80\x02\x1b\x82\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x02\x80\x1b\x82\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x82\x1b\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x02\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x07\x1b\x80\x02\x02\x0c\x81\x83\x1b\x84\x1b\x24\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1d\x1b\x82\x1b\x1b\x24"
  "\x28\xb7\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x80\x02\x1b\x81\x1b\x25\x1b\x1b\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x25\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x80\x02\x1b\x25\x1b\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x80\x07\x02\xb6"
  "\x1b\x25\x1b\xb6\xb4\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x02\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xc2\x1c\x1d\x02\xc3\x1c\xc1\x1c"
  "\xc1\x1c\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1d\x1b\x07\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x1b\x1b\x24\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x80\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1e\x1e\x02\x02\x02\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x0d\x17"
  "\x81\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x9e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\x0d\x1c\x0c\x0d\x0d\x0d\x0d"
  "\x08\x8b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\xb7\x0d\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x17\x1e\x1e\x02\x07\x02\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d\x1c\x0c\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x1b\x2a\x1b\x2a\x08\x1b\x2a"
  "\xb6\xb5\xb4\xb3\x1b\x1b\x1b\x1b\x1b\xb1\x0d\x1b\x1b\x17\x1e\x1e"
  "\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a"
  "\x1e\x1e\x17\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x63\x70\x72\x65\x73\x73\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x13\x43\x6f\x6d\x70\x72\x65\x73\x73\x65\x64"
  "\x2d\x42\x31\x2d\x31\x2e\x30\x30\x03\x10\x6d\x65\x72\x67\x65\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x04\x1c\x63\x61\x6c\x6c\x2d"
  "\x77\x69\x74\x68\x2d\x62\x69\x6e\x61\x72\x79\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x66\x69\x6c\x65\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x04\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x62\x69\x6e\x61\x72\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69"
  "\x6c\x65\x04\x0f\x63\x6f\x6d\x70\x72\x65\x73\x73\x2d\x70\x6f\x72"
  "\x74\x73\x06\x21\x0e\x81\x85\x02\x20\x0c\x81\x85\x02\x1f\x0a\x81"
  "\x85\x02\x1e\x08\x81\x85\x02\x1d\x06\x81\x85\x02\x1c\x04\x84\x06"
  "\x0d\x1c\x02\x02\x81\x02\x0b\x72\x6f\x6f\x74\x2d\x6e\x6f\x64\x65"
  "\x73\x0c\x6f\x6c\x64\x65\x73\x74\x2d\x6e\x6f\x64\x65\x0c\x6e\x65"
  "\x77\x65\x73\x74\x2d\x6e\x6f\x64\x65\x0f\x77\x69\x6e\x64\x6f\x77"
  "\x2d\x66\x69\x6c\x6c\x65\x64\x3f\x16\x63\x6f\x6d\x70\x72\x65\x73"
  "\x73\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0c\x62"
  "\x79\x74\x65\x2d\x62\x75\x66\x66\x65\x72\x09\x10\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x70\x6f\x69\x6e\x74\x65\x72\x0a\x0b\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x62\x70\x0b\x0b\x63\x6f\x6d\x6d\x61\x6e\x64"
  "\x2d\x62\x70\x0c\x0e\x6f\x75\x74\x70\x75\x74\x2d\x62\x75\x66\x66"
  "\x65\x72\x0d\x0b\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x0e\x0c"
  "\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x0f\x0d\x09\x0a\x0b"
  "\x0c\x0d\x0e\x0f\x0d\x02\x13\x6d\x61\x6b\x65\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x10\x02\x11\x6d\x61\x6b\x65"
  "\x2d\x62\x79\x74\x65\x2d\x62\x75\x66\x66\x65\x72\x11\x04\x0c\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x1f"
  "\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x02\x14"
  "\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62\x75\x66"
  "\x66\x65\x72\x12\x02\x05\x69\x64\x6c\x65\x13\x08\x46\x4c\x81\x83"
  "\x02\x45\x4a\x83\x04\x44\x48\x81\x81\x02\x43\x46\x81\x83\x02\x42"
  "\x44\x81\x85\x02\x41\x42\x81\x83\x02\x40\x40\x81\x83\x02\x3f\x3e"
  "\x81\x85\x02\x3e\x3c\x81\x83\x02\x3d\x3a\x81\x83\x02\x3c\x38\x81"
  "\x85\x02\x3b\x36\x81\x83\x02\x3a\x34\x81\x83\x02\x39\x32\x81\x85"
  "\x02\x38\x30\x81\x83\x02\x37\x2e\x81\x85\x02\x36\x2c\x81\x83\x02"
  "\x35\x2a\x81\x85\x02\x34\x28\x81\x83\x02\x33\x26\x81\x85\x02\x32"
  "\x24\x81\x83\x02\x31\x22\x81\x85\x02\x30\x20\x81\x83\x02\x2f\x1e"
  "\x81\x83\x02\x2e\x1c\x81\x85\x02\x2d\x1a\x81\x83\x02\x2c\x18\x81"
  "\x85\x02\x2b\x16\x81\x83\x02\x2a\x14\x81\x85\x02\x29\x12\x81\x83"
  "\x02\x28\x10\x81\x85\x02\x27\x0e\x81\x83\x02\x26\x0c\x82\x02\x25"
  "\x0a\x81\x97\x02\x24\x08\x81\x8d\x02\x23\x06\x81\x85\x02\x22\x04"
  "\x84\x06\x4b\x7a\x14\x02\x03\x17\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x70\x61\x63\x65\x15\x02"
  "\x0c\x6d\x61\x74\x63\x68\x2d\x66\x69\x72\x73\x74\x16\x02\x11\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x69\x74\x65\x72\x61\x6c\x17"
  "\x04\x0b\x6d\x61\x74\x63\x68\x2d\x6e\x65\x78\x74\x18\x04\x0e\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x63\x6f\x70\x79\x19\x06\x4a\x0a"
  "\x81\x83\x02\x49\x08\x81\x81\x02\x48\x06\x81\x81\x02\x47\x04\x82"
  "\x02\x09\x19\x1a\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x1b\x0b\x13\x0b\x02\x03\x15\x02\x1a\x69\x6e\x63\x72\x65\x6d"
  "\x65\x6e\x74\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x1c\x02\x16\x02\x0d\x69\x6e\x63\x72\x65\x6d\x65\x6e"
  "\x74\x2d\x62\x70\x1d\x04\x18\x03\x0e\x77\x72\x69\x74\x65\x2d\x6c"
  "\x69\x74\x65\x72\x61\x6c\x1e\x02\x13\x02\x0c\x75\x6e\x72\x65\x61"
  "\x64\x2d\x62\x79\x74\x65\x1f\x03\x0d\x75\x6e\x72\x65\x61\x64\x2d"
  "\x62\x79\x74\x65\x73\x20\x04\x19\x0b\x5a\x22\x81\x87\x02\x59\x20"
  "\x81\x89\x02\x58\x1e\x81\x89\x02\x57\x1c\x81\x87\x02\x56\x1a\x81"
  "\x87\x02\x55\x18\x81\x87\x02\x54\x16\x81\x87\x02\x53\x14\x81\x85"
  "\x02\x52\x12\x81\x85\x02\x51\x10\x81\x85\x02\x50\x0e\x81\x85\x02"
  "\x4f\x0c\x81\x85\x02\x4e\x0a\x81\x85\x02\x4d\x08\x81\x85\x02\x4c"
  "\x06\x81\x81\x02\x4b\x04\x82\x02\x21\x41\x21\x02\x0a\x1b\x0b\x11"
  "\x0a\x0c\x03\x03\x15\x03\x20\x02\x0c\x62\x79\x74\x65\x2d\x72\x65"
  "\x61\x64\x79\x3f\x22\x05\x0b\x77\x72\x69\x74\x65\x2d\x63\x6f\x70"
  "\x79\x23\x02\x17\x04\x18\x02\x1c\x03\x14\x75\x70\x64\x61\x74\x65"
  "\x2d\x6e\x6f\x64\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x24\x02\x13"
  "\x0a\x69\x20\x81\x93\x02\x68\x1e\x81\x8b\x02\x67\x1c\x81\x91\x02"
  "\x66\x1a\x81\x8f\x02\x65\x18\x81\x8b\x02\x64\x16\x81\x8b\x02\x63"
  "\x14\x81\x8b\x02\x62\x12\x81\x8b\x02\x61\x10\x81\x8b\x02\x60\x0e"
  "\x81\x89\x02\x5f\x0c\x81\x87\x02\x5e\x0a\x81\x87\x02\x5d\x08\x81"
  "\x89\x02\x5c\x06\x81\x85\x02\x5b\x04\x84\x06\x1f\x3d\x25\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x02\x02\x0a\x72\x65\x61"
  "\x64\x2d\x62\x79\x74\x65\x26\x03\x0a\x6d\x61\x6b\x65\x2d\x6e\x6f"
  "\x64\x65\x27\x05\x0a\x61\x64\x64\x2d\x63\x68\x69\x6c\x64\x28\x04"
  "\x6e\x0c\x81\x87\x02\x6d\x0a\x81\x83\x02\x6c\x08\x81\x81\x02\x6b"
  "\x06\x81\x85\x02\x6a\x04\x82\x02\x0b\x19\x29\x02\x08\x1b\x02\x0a"
  "\x70\x65\x65\x6b\x2d\x62\x79\x74\x65\x2a\x03\x24\x04\x09\x6e\x6f"
  "\x64\x65\x2d\x72\x65\x66\x2b\x02\x0d\x64\x69\x73\x63\x61\x72\x64"
  "\x2d\x62\x79\x74\x65\x2c\x03\x27\x04\x0e\x72\x65\x70\x6c\x61\x63"
  "\x65\x2d\x63\x68\x69\x6c\x64\x2d\x05\x28\x08\x80\x01\x26\x81\x87"
  "\x02\x7f\x24\x81\x83\x02\x7e\x22\x81\x8b\x02\x7d\x20\x81\x89\x02"
  "\x7c\x1e\x81\x89\x02\x7b\x1c\x81\x83\x02\x7a\x1a\x81\x89\x02\x79"
  "\x18\x81\x89\x02\x78\x16\x81\x89\x02\x77\x14\x81\x89\x02\x76\x12"
  "\x81\x8b\x02\x75\x10\x81\x89\x02\x74\x0e\x81\x87\x02\x73\x0c\x81"
  "\x87\x02\x72\x0a\x81\x87\x02\x71\x08\x81\x87\x02\x70\x06\x81\x85"
  "\x02\x6f\x04\x84\x06\x25\x3d\x2e\x02\x09\x81\x01\x04\x82\x02\x03"
  "\x2f\x02\x0a\x0a\x02\x82\x01\x04\x82\x02\x03\x30\x02\x0b\x0b\x02"
  "\x83\x01\x04\x82\x02\x03\x31\x02\x0c\x1b\x84\x01\x04\x83\x04\x03"
  "\x32\x02\x0d\x1b\x85\x01\x04\x83\x04\x03\x33\x02\x0e\x1b\x86\x01"
  "\x04\x83\x04\x03\x34\x02\x0f\x1b\x87\x01\x04\x83\x04\x03\x35\x02"
  "\x10\x1b\x88\x01\x04\x83\x04\x03\x36\x02\x11\x1b\x89\x01\x04\x83"
  "\x04\x03\x37\x02\x12\x1b\x08\x8a\x01\x04\x83\x04\x03\x38\x02\x13"
  "\x1b\x09\x8b\x01\x04\x83\x04\x03\x39\x02\x14\x1b\x0a\x8c\x01\x04"
  "\x83\x04\x03\x3a\x02\x15\x1b\x0b\x8d\x01\x04\x83\x04\x03\x3b\x02"
  "\x16\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x3c\x02"
  "\x8e\x01\x04\x84\x06\x03\x3d\x02\x17\x3c\x02\x8f\x01\x04\x84\x06"
  "\x03\x3e\x02\x18\x3c\x02\x90\x01\x04\x84\x06\x03\x3f\x02\x19\x3c"
  "\x02\x91\x01\x04\x84\x06\x03\x40\x02\x1a\x3c\x02\x92\x01\x04\x84"
  "\x06\x03\x41\x02\x1b\x3c\x02\x93\x01\x04\x84\x06\x03\x42\x02\x1c"
  "\x3c\x02\x08\x94\x01\x04\x84\x06\x03\x43\x02\x1d\x3c\x02\x09\x95"
  "\x01\x04\x84\x06\x03\x44\x02\x1e\x3c\x02\x0a\x96\x01\x04\x84\x06"
  "\x03\x45\x02\x1f\x3c\x02\x0b\x97\x01\x04\x84\x06\x03\x46\x02\x20"
  "\x1b\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x47\x07\x2e\x74\x61\x67\x2e\x31\x48\x02\x9b\x01\x0a\x81\x85\x02"
  "\x9a\x01\x08\x81\x83\x02\x99\x01\x06\x81\x83\x02\x98\x01\x04\x83"
  "\x04\x09\x12\x49\x02\x21\x3c\x09\x03\x02\x04\x0b\x25\x6d\x61\x6b"
  "\x65\x2d\x6e\x6f\x64\x65\x4a\x02\xa0\x01\x0c\x81\x83\x02\x9f\x01"
  "\x0a\x81\x83\x02\x9e\x01\x08\x81\x83\x02\x9d\x01\x06\x81\x83\x02"
  "\x9c\x01\x04\x83\x04\x0b\x18\x4b\x02\x22\x02\x08\x1b\x09\x0b\x3c"
  "\x0a\x03\x0a\x0b\x04\xac\x01\x1a\x81\x87\x02\xab\x01\x18\x81\x87"
  "\x02\xaa\x01\x16\x81\x87\x02\xa9\x01\x14\x81\x87\x02\xa8\x01\x12"
  "\x81\x87\x02\xa7\x01\x10\x81\x87\x02\xa6\x01\x0e\x81\x87\x02\xa5"
  "\x01\x0c\x81\x85\x02\xa4\x01\x0a\x81\x83\x02\xa3\x01\x08\x81\x83"
  "\x02\xa2\x01\x06\x81\x83\x02\xa1\x01\x04\x83\x04\x19\x2a\x4c\x02"
  "\x23\x02\x1b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x4d"
  "\x3c\x02\xb2\x01\x0e\x81\x89\x02\xb1\x01\x0c\x81\x89\x02\xb0\x01"
  "\x0a\x81\x87\x02\xaf\x01\x08\x81\x87\x02\xae\x01\x06\x81\x87\x02"
  "\xad\x01\x04\x85\x08\x0d\x1b\x4e\x02\x24\x02\x4d\x3c\x1b\x02\xbc"
  "\x01\x16\x81\x87\x02\xbb\x01\x14\x81\x89\x02\xba\x01\x12\x81\x83"
  "\x02\xb9\x01\x10\x81\x8b\x02\xb8\x01\x0e\x81\x89\x02\xb7\x01\x0c"
  "\x81\x89\x02\xb6\x01\x0a\x81\x87\x02\xb5\x01\x08\x81\x85\x02\xb4"
  "\x01\x06\x84\x06\xb3\x01\x04\x81\x89\x02\x15\x23\x4f\x02\x25\x4d"
  "\x3c\x08\x02\x09\x1b\x0a\x02\x03\x04\x0d\x64\x65\x6c\x65\x74\x65"
  "\x2d\x63\x68\x69\x6c\x64\x4d\x02\xcd\x01\x24\x81\x89\x02\xcc\x01"
  "\x22\x81\x89\x02\xcb\x01\x20\x81\x83\x02\xca\x01\x1e\x81\x83\x02"
  "\xc9\x01\x1c\x81\x8b\x02\xc8\x01\x1a\x81\x87\x02\xc7\x01\x18\x81"
  "\x89\x02\xc6\x01\x16\x81\x89\x02\xc5\x01\x14\x81\x89\x02\xc4\x01"
  "\x12\x81\x87\x02\xc3\x01\x10\x81\x85\x02\xc2\x01\x0e\x81\x85\x02"
  "\xc1\x01\x0c\x81\x83\x02\xc0\x01\x0a\x81\x87\x02\xbf\x01\x08\x81"
  "\x87\x02\xbe\x01\x06\x81\x87\x02\xbd\x01\x04\x84\x06\x23\x39\x50"
  "\x02\x26\x09\x08\x02\x3c\x1b\x03\x03\x04\x2d\x02\xdb\x01\x1e\x81"
  "\x89\x02\xda\x01\x1c\x81\x89\x02\xd9\x01\x1a\x81\x89\x02\xd8\x01"
  "\x18\x81\x89\x02\xd7\x01\x16\x81\x89\x02\xd6\x01\x14\x81\x87\x02"
  "\xd5\x01\x12\x81\x87\x02\xd4\x01\x10\x81\x87\x02\xd3\x01\x0e\x81"
  "\x85\x02\xd2\x01\x0c\x81\x85\x02\xd1\x01\x0a\x81\x89\x02\xd0\x01"
  "\x08\x81\x87\x02\xcf\x01\x06\x84\x06\xce\x01\x04\x81\x85\x02\x1d"
  "\x31\x51\x02\x27\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x52\x81\xa0\x04\xdc\x01\x04\x82\x02\x03\x53\x02"
  "\x28\xdd\x01\x04\x82\x02\x03\x54\x02\x29\xde\x01\x04\x82\x02\x03"
  "\x55\x02\x2a\x1b\xdf\x01\x04\x83\x04\x03\x56\x02\x2b\x1b\xe0\x01"
  "\x04\x83\x04\x03\x57\x02\x2c\x1b\xe1\x01\x04\x83\x04\x03\x58\x02"
  "\x2d\x1b\xe2\x01\x04\x83\x04\x03\x59\x02\x2e\x3c\x02\xe3\x01\x04"
  "\x84\x06\x03\x5a\x02\x2f\x3c\x02\xe4\x01\x04\x84\x06\x03\x5b\x02"
  "\x30\x3c\x02\xe5\x01\x04\x84\x06\x03\x5c\x02\x31\x1b\x47\x07\x2e"
  "\x74\x61\x67\x2e\x32\x47\x02\xe9\x01\x0a\x81\x85\x02\xe8\x01\x08"
  "\x81\x83\x02\xe7\x01\x06\x81\x83\x02\xe6\x01\x04\x83\x04\x09\x12"
  "\x5d\x02\x32\x1b\x09\x02\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x62\x75\x66\x66\x65\x72\x2d\x64\x61\x74\x61\x5e\x02\xec"
  "\x01\x08\x81\x85\x02\xeb\x01\x06\x81\x83\x02\xea\x01\x04\x82\x02"
  "\x07\x13\x5f\x02\x33\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d"
  "\x72\x65\x66\x60\x3c\x80\xa0\x04\x1b\x09\x02\x04\x5e\x02\xf6\x01"
  "\x16\x81\x87\x02\xf5\x01\x14\x81\x87\x02\xf4\x01\x12\x81\x85\x02"
  "\xf3\x01\x10\x81\x83\x02\xf2\x01\x0e\x81\x85\x02\xf1\x01\x0c\x81"
  "\x83\x02\xf0\x01\x0a\x82\x02\xef\x01\x08\x81\x83\x02\xee\x01\x06"
  "\x81\x85\x02\xed\x01\x04\x81\x83\x02\x15\x25\x61\x02\x34\x60\x1b"
  "\x09\x02\x04\x5e\x02\xfc\x01\x0e\x81\x85\x02\xfb\x01\x0c\x81\x83"
  "\x02\xfa\x01\x0a\x81\x85\x02\xf9\x01\x08\x81\x83\x02\xf8\x01\x06"
  "\x82\x02\xf7\x01\x04\x81\x83\x02\x0d\x1a\x62\x02\x35\x3c\x02\x80"
  "\xa0\x04\x1b\x09\x02\xff\x01\x08\x81\x87\x02\xfe\x01\x06\x81\x87"
  "\x02\xfd\x01\x04\x82\x02\x07\x12\x63\x02\x36\x60\x1b\x04\x5e\x02"
  "\x85\x02\x0e\x81\x85\x02\x84\x02\x0c\x81\x83\x02\x83\x02\x0a\x81"
  "\x85\x02\x82\x02\x08\x81\x83\x02\x81\x02\x06\x83\x04\x80\x02\x04"
  "\x81\x83\x02\x0d\x18\x64\x02\x37\x3c\x02\x80\xa0\x04\x1b\x88\x02"
  "\x08\x81\x87\x02\x87\x02\x06\x81\x87\x02\x86\x02\x04\x83\x04\x07"
  "\x10\x65\x02\x38\x3c\x02\x80\xa0\x04\x1b\x09\x02\x8b\x02\x08\x81"
  "\x87\x02\x8a\x02\x06\x81\x87\x02\x89\x02\x04\x82\x02\x07\x12\x66"
  "\x02\x39\x3c\x02\x1b\x09\x02\x8d\x02\x06\x81\x87\x02\x8c\x02\x04"
  "\x83\x04\x05\x0e\x67\x02\x3a\x60\x1b\x0b\x09\x02\x90\x02\x08\x81"
  "\x85\x02\x8f\x02\x06\x81\x85\x02\x8e\x02\x04\x84\x06\x07\x10\x68"
  "\x02\x3b\x1a\x49\x6c\x6c\x65\x67\x61\x6c\x20\x72\x65\x73\x75\x6c"
  "\x74\x20\x66\x72\x6f\x6d\x20\x72\x65\x61\x64\x3a\x3c\x81\xa0\x04"
  "\x81\x20\x25\x49\x6e\x70\x75\x74\x20\x70\x6f\x72\x74\x20\x6d\x75"
  "\x73\x74\x20\x62\x65\x20\x69\x6e\x20\x62\x6c\x6f\x63\x6b\x69\x6e"
  "\x67\x20\x6d\x6f\x64\x65\x3a\x1b\x0e\x02\x06\x1b\x69\x6e\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x72\x65\x61\x64\x2d\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x21\x02\x12\x63\x6f\x6d\x70\x72\x65\x73\x73"
  "\x2d\x66\x69\x6e\x69\x73\x68\x65\x64\x3c\x04\x06\x65\x72\x72\x6f"
  "\x72\x69\x05\x69\x05\x9d\x02\x1c\x81\x8b\x02\x9c\x02\x1a\x81\x8b"
  "\x02\x9b\x02\x18\x81\x8b\x02\x9a\x02\x16\x81\x8b\x02\x99\x02\x14"
  "\x81\x8b\x02\x98\x02\x12\x81\x8b\x02\x97\x02\x10\x81\x8d\x02\x96"
  "\x02\x0e\x81\x89\x02\x95\x02\x0c\x81\x91\x02\x94\x02\x0a\x81\x8f"
  "\x02\x93\x02\x08\x81\x85\x02\x92\x02\x06\x81\x85\x02\x91\x02\x04"
  "\x84\x06\x1b\x34\x6a\x02\x3c\x11\x02\x1b\x09\x0c\x03\x03\x03\x1e"
  "\x03\xa2\x02\x0c\x81\x83\x02\xa1\x02\x0a\x81\x83\x02\xa0\x02\x08"
  "\x81\x83\x02\x9f\x02\x06\x82\x02\x9e\x02\x04\x81\x81\x02\x0b\x1a"
  "\x6b\x02\x3d\x02\xa3\x02\x04\x83\x04\x03\x6c\x02\x3e\x02\x81\xa0"
  "\x04\x1b\x0c\x02\x0c\x09\x03\x03\x0b\x77\x72\x69\x74\x65\x2d\x62"
  "\x79\x74\x65\x1b\x05\x0c\x77\x72\x69\x74\x65\x2d\x62\x79\x74\x65"
  "\x73\x6d\x03\xab\x02\x12\x81\x89\x02\xaa\x02\x10\x81\x89\x02\xa9"
  "\x02\x0e\x81\x89\x02\xa8\x02\x0c\x81\x89\x02\xa7\x02\x0a\x81\x89"
  "\x02\xa6\x02\x08\x81\x85\x02\xa5\x02\x06\x81\x83\x02\xa4\x02\x04"
  "\x83\x04\x11\x23\x6e\x02\x3f\x02\x0b\x0c\x03\x0b\x02\x03\x1b\x02"
  "\xb1\x02\x0e\x81\x85\x02\xb0\x02\x0c\x81\x85\x02\xaf\x02\x0a\x81"
  "\x89\x02\xae\x02\x08\x81\x89\x02\xad\x02\x06\x81\x87\x02\xac\x02"
  "\x04\x85\x08\x0d\x19\x6f\x02\x40\x02\x81\xa0\x04\x0b\x02\x0b\x02"
  "\xb3\x02\x06\x81\x81\x02\xb2\x02\x04\x82\x02\x05\x0f\x70\x02\x41"
  "\x02\x81\x20\x0a\x03\x0a\x04\x04\x10\x73\x65\x74\x2d\x6f\x6c\x64"
  "\x65\x73\x74\x2d\x6e\x6f\x64\x65\x71\x02\xb6\x02\x08\x81\x83\x02"
  "\xb5\x02\x06\x81\x83\x02\xb4\x02\x04\x82\x02\x07\x18\x72\x02\x42"
  "\x52\x81\x20\xb8\x02\x06\x81\x81\x02\xb7\x02\x04\x82\x02\x05\x0b"
  "\x52\x02\x43\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x73\x02\x80\x20"
  "\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x73\x65\x74\x21\x74"
  "\x04\x63\x64\x72\x75\x04\x63\x61\x72\x76\x0d\x0f\x03\x04\x19\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x02\xc0\x02\x12\x81\x87\x02\xbf\x02"
  "\x10\x81\x8b\x02\xbe\x02\x0e\x81\x89\x02\xbd\x02\x0c\x81\x87\x02"
  "\xbc\x02\x0a\x81\x87\x02\xbb\x02\x08\x81\x85\x02\xba\x02\x06\x81"
  "\x83\x02\xb9\x02\x04\x83\x04\x11\x21\x77\x02\x44\x74\x73\x02\x60"
  "\x75\x76\x0d\x02\x03\x1b\x02\xca\x02\x16\x81\x89\x02\xc9\x02\x14"
  "\x81\x93\x02\xc8\x02\x12\x81\x93\x02\xc7\x02\x10\x81\x93\x02\xc6"
  "\x02\x0e\x81\x8b\x02\xc5\x02\x0c\x81\x89\x02\xc4\x02\x0a\x81\x8d"
  "\x02\xc3\x02\x08\x81\x89\x02\xc2\x02\x06\x81\x87\x02\xc1\x02\x04"
  "\x85\x08\x15\x24\x74\x02\x45\x75\x76\x0d\x0f\x03\x06\x1c\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x03\x19\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x03\xd2\x02\x12\x81\x81\x02\xd1\x02\x10\x81\x89\x02"
  "\xd0\x02\x0e\x81\x87\x02\xcf\x02\x0c\x81\x85\x02\xce\x02\x0a\x81"
  "\x83\x02\xcd\x02\x08\x81\x83\x02\xcc\x02\x06\x82\x02\xcb\x02\x04"
  "\x81\x81\x02\x11\x1f\x76\x02\x46\x05\x14\x75\x6e\x63\x6f\x6d\x70"
  "\x72\x65\x73\x73\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x04\x69\x03"
  "\xd4\x02\x06\xfe\x05\xd3\x02\x04\x84\x06\x05\x0d\x75\x46\x73\x73"
  "\x47\x75\x04\x76\x06\x74\x04\x77\x04\x52\x04\x72\x04\x70\x04\x6f"
  "\x04\x6e\x04\x81\x20\x11\x11\x6c\x04\x6b\x06\x6a\x04\x68\x04\x67"
  "\x04\x66\x04\x65\x04\x64\x06\x63\x04\x62\x06\x61\x0a\x5f\x04\x5d"
  "\x04\x1e\x0b\x75\x6e\x63\x6f\x6d\x70\x72\x65\x73\x73\x12\x6d\x1b"
  "\x10\x0d\x1c\x1d\x23\x1e\x0c\x0b\x0a\x0c\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x6d\x61\x78\x09\x63\x6f\x70\x79\x2d\x6d\x61\x78\x0c\x6c"
  "\x69\x74\x65\x72\x61\x6c\x2d\x6d\x61\x78\x15\x3c\x5e\x2b\x20\x1f"
  "\x0e\x25\x64\x69\x73\x63\x61\x72\x64\x2d\x62\x79\x74\x65\x0b\x25"
  "\x70\x65\x65\x6b\x2d\x62\x79\x74\x65\x2c\x2a\x26\x22\x04\x62\x62"
  "\x3f\x1e\x11\x0d\x73\x65\x74\x2d\x62\x62\x2d\x65\x6f\x66\x3f\x21"
  "\x0c\x73\x65\x74\x2d\x62\x62\x2d\x65\x6e\x64\x21\x0c\x73\x65\x74"
  "\x2d\x62\x62\x2d\x70\x74\x72\x21\x08\x62\x62\x2d\x65\x6f\x66\x3f"
  "\x07\x62\x62\x2d\x65\x6e\x64\x07\x62\x62\x2d\x70\x74\x72\x0a\x62"
  "\x62\x2d\x76\x65\x63\x74\x6f\x72\x5c\x04\x5b\x04\x5a\x04\x59\x04"
  "\x58\x04\x57\x04\x56\x04\x07\x72\x74\x64\x3a\x62\x62\x77\x03\x62"
  "\x62\x07\x76\x65\x63\x74\x6f\x72\x04\x70\x74\x72\x04\x65\x6e\x64"
  "\x05\x65\x6f\x66\x3f\x53\x04\x54\x04\x55\x04\x48\x09\x0c\x62\x75"
  "\x66\x66\x65\x72\x2d\x72\x65\x61\x64\x15\x62\x75\x66\x66\x65\x72"
  "\x2d\x73\x69\x7a\x65\x2d\x6f\x70\x74\x69\x6d\x61\x6c\x3f\x0c\x62"
  "\x75\x66\x66\x65\x72\x2d\x73\x69\x7a\x65\x4d\x71\x2d\x28\x24\x27"
  "\x06\x6e\x6f\x64\x65\x3f\x0d\x81\x20\x81\xa0\x04\x51\x06\x50\x04"
  "\x4f\x06\x4e\x04\x4c\x04\x4b\x04\x49\x04\x0d\x4a\x0d\x73\x65\x74"
  "\x2d\x6e\x6f\x64\x65\x2d\x62\x70\x21\x12\x73\x65\x74\x2d\x6e\x6f"
  "\x64\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21\x10\x73\x65\x74\x2d"
  "\x6e\x6f\x64\x65\x2d\x6e\x65\x77\x65\x72\x21\x10\x73\x65\x74\x2d"
  "\x6e\x6f\x64\x65\x2d\x6f\x6c\x64\x65\x72\x21\x0d\x73\x65\x74\x2d"
  "\x6e\x6f\x64\x65\x2d\x6e\x62\x21\x0f\x73\x65\x74\x2d\x6e\x6f\x64"
  "\x65\x2d\x62\x79\x74\x65\x21\x0f\x73\x65\x74\x2d\x6e\x6f\x64\x65"
  "\x2d\x6e\x65\x78\x74\x21\x13\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d"
  "\x70\x72\x65\x76\x69\x6f\x75\x73\x21\x13\x73\x65\x74\x2d\x6e\x6f"
  "\x64\x65\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21\x11\x73\x65\x74"
  "\x2d\x6e\x6f\x64\x65\x2d\x70\x61\x72\x65\x6e\x74\x21\x08\x6e\x6f"
  "\x64\x65\x2d\x62\x70\x0d\x6e\x6f\x64\x65\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\x0b\x6e\x6f\x64\x65\x2d\x6e\x65\x77\x65\x72\x0b\x6e\x6f"
  "\x64\x65\x2d\x6f\x6c\x64\x65\x72\x08\x6e\x6f\x64\x65\x2d\x6e\x62"
  "\x0a\x6e\x6f\x64\x65\x2d\x62\x79\x74\x65\x0a\x6e\x6f\x64\x65\x2d"
  "\x6e\x65\x78\x74\x0e\x6e\x6f\x64\x65\x2d\x70\x72\x65\x76\x69\x6f"
  "\x75\x73\x0e\x6e\x6f\x64\x65\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e"
  "\x0c\x6e\x6f\x64\x65\x2d\x70\x61\x72\x65\x6e\x74\x15\x46\x04\x45"
  "\x04\x44\x04\x43\x04\x42\x04\x41\x04\x40\x04\x3f\x04\x3e\x04\x3d"
  "\x04\x3b\x04\x3a\x04\x39\x04\x38\x04\x37\x04\x36\x04\x35\x04\x34"
  "\x04\x33\x04\x32\x04\x15\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x09\x72\x74\x64\x3a\x6e\x6f\x64\x65"
  "\x76\x05\x6e\x6f\x64\x65\x07\x70\x61\x72\x65\x6e\x74\x09\x63\x68"
  "\x69\x6c\x64\x72\x65\x6e\x09\x70\x72\x65\x76\x69\x6f\x75\x73\x05"
  "\x6e\x65\x78\x74\x05\x62\x79\x74\x65\x03\x6e\x62\x06\x6f\x6c\x64"
  "\x65\x72\x06\x6e\x65\x77\x65\x72\x08\x70\x6f\x69\x6e\x74\x65\x72"
  "\x03\x62\x70\x0a\x2f\x04\x30\x04\x31\x04\x18\x16\x19\x17\x13\x09"
  "\x63\x6f\x6d\x70\x72\x65\x73\x73\x0f\x0e\x0e\x2e\x04\x29\x04\x25"
  "\x04\x21\x04\x1a\x04\x14\x04\x04\x0e\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x76\x0b\x0a\x77\x05"
  "\x1b\x38\x80\x80\x04\x1a\x36\x81\x81\x02\x19\x34\x81\x81\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x87\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x87\x02\x12\x26\x81"
  "\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85"
  "\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02"
  "\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x87\x02\x08"
  "\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\x37\x68";

SCHEME_OBJECT *
cpress_so_data_db6cb5884f231141 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cpress_so_data_db6cb5884f231141 [0]))), (sizeof (prog_cpress_so_data_db6cb5884f231141)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_36]));
}

DECLARE_COMPILED_DATA_NS ("cpress.so", cpress_so_data_db6cb5884f231141)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cpress.so", "bfc5d80e0c2ba8aa")
