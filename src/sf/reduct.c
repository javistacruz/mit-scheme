/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:06-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define ENVIRONMENT_LABEL_1_3 19
#define DEBUGGING_LABEL_1_2 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_10 11
#define EXECUTE_CACHE_1_9 13
#define EXECUTE_CACHE_1_7 15
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd8;
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
      goto lookup_4;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_7)
DEFLABEL (lookup_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_9)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define LABEL_2_10 9
#define TAG_2_11 3
#define LABEL_2_7 11
#define TAG_2_8 4
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_12 13
#define EXECUTE_CACHE_2_6 15
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_2_4);
      goto handle_variable_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_variable_9)
DEFLABEL (handle_variable_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd33 = Wrd32;
  (Wrd34.Obj) = (Rsp [0]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd35.Obj);
  (Rsp [1]) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_2_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define LABEL_3_13 15
#define LABEL_3_14 17
#define LABEL_3_16 19
#define LABEL_3_17 21
#define LABEL_3_18 23
#define LABEL_3_19 25
#define LABEL_3_20 27
#define LABEL_3_22 29
#define LABEL_3_23 31
#define LABEL_3_24 33
#define LABEL_3_25 35
#define LABEL_3_4 37
#define LABEL_3_26 39
#define LABEL_3_27 41
#define LABEL_3_28 43
#define LABEL_3_30 45
#define LABEL_3_31 47
#define LABEL_3_32 49
#define LABEL_3_33 51
#define LABEL_3_34 53
#define LABEL_3_35 55
#define LABEL_3_36 57
#define LABEL_3_37 59
#define LABEL_3_38 61
#define LABEL_3_39 63
#define LABEL_3_40 65
#define LABEL_3_41 67
#define LABEL_3_42 69
#define LABEL_3_43 71
#define LABEL_3_44 73
#define LABEL_3_48 75
#define LABEL_3_45 77
#define LABEL_3_15 79
#define LABEL_3_8 81
#define ENVIRONMENT_LABEL_3_3 110
#define DEBUGGING_LABEL_3_2 109
#define OBJECT_3_11 108
#define OBJECT_3_10 107
#define OBJECT_3_9 106
#define OBJECT_3_8 105
#define OBJECT_3_7 104
#define OBJECT_3_6 103
#define OBJECT_3_5 102
#define OBJECT_3_4 101
#define OBJECT_3_3 100
#define OBJECT_3_2 99
#define OBJECT_3_1 98
#define OBJECT_3_0 97
#define EXECUTE_CACHE_3_50 83
#define EXECUTE_CACHE_3_49 85
#define EXECUTE_CACHE_3_47 87
#define EXECUTE_CACHE_3_46 89
#define EXECUTE_CACHE_3_29 91
#define EXECUTE_CACHE_3_21 93
#define EXECUTE_CACHE_3_11 95
#define FREE_REFERENCES_LABEL_3_0 82
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd233;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd143;
  machine_word Wrd144;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd130;
  machine_word Wrd120;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd115;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd178;
  machine_word Wrd215;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd198;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd166;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd226;
  machine_word Wrd218;
  machine_word Wrd220;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd246;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd339;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd335;
  machine_word Wrd332;
  machine_word Wrd324;
  machine_word Wrd326;
  machine_word Wrd328;
  machine_word Wrd327;
  machine_word Wrd323;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd319;
  machine_word Wrd316;
  machine_word Wrd310;
  machine_word Wrd311;
  machine_word Wrd312;
  machine_word Wrd309;
  machine_word Wrd301;
  machine_word Wrd303;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd300;
  machine_word Wrd293;
  machine_word Wrd287;
  machine_word Wrd288;
  machine_word Wrd289;
  machine_word Wrd286;
  machine_word Wrd280;
  machine_word Wrd281;
  machine_word Wrd282;
  machine_word Wrd279;
  machine_word Wrd271;
  machine_word Wrd273;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd358;
  machine_word Wrd353;
  machine_word Wrd352;
  machine_word Wrd354;
  machine_word Wrd351;
  machine_word Wrd343;
  machine_word Wrd345;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd342;
  machine_word Wrd269;
  machine_word Wrd263;
  machine_word Wrd264;
  machine_word Wrd265;
  machine_word Wrd262;
  machine_word Wrd254;
  machine_word Wrd256;
  machine_word Wrd258;
  machine_word Wrd257;
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
      goto continuation_34;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_73;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_74;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_83;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_84;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_75;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_76;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_77;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_78;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto label_79;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_80;

    case 11:
      current_block = (Rpc - LABEL_3_19);
      goto label_81;

    case 12:
      current_block = (Rpc - LABEL_3_20);
      goto label_82;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_29;

    case 14:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_0;

    case 17:
      current_block = (Rpc - LABEL_3_4);
      goto Z___expression_53;

    case 18:
      current_block = (Rpc - LABEL_3_26);
      goto label_72;

    case 19:
      current_block = (Rpc - LABEL_3_27);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_3_28);
      goto label_71;

    case 21:
      current_block = (Rpc - LABEL_3_30);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_3_31);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_3_32);
      goto label_67;

    case 24:
      current_block = (Rpc - LABEL_3_33);
      goto label_68;

    case 25:
      current_block = (Rpc - LABEL_3_34);
      goto label_69;

    case 26:
      current_block = (Rpc - LABEL_3_35);
      goto label_70;

    case 27:
      current_block = (Rpc - LABEL_3_36);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_3_37);
      goto label_58;

    case 29:
      current_block = (Rpc - LABEL_3_38);
      goto label_59;

    case 30:
      current_block = (Rpc - LABEL_3_39);
      goto label_60;

    case 31:
      current_block = (Rpc - LABEL_3_40);
      goto label_61;

    case 32:
      current_block = (Rpc - LABEL_3_41);
      goto label_62;

    case 33:
      current_block = (Rpc - LABEL_3_42);
      goto label_65;

    case 34:
      current_block = (Rpc - LABEL_3_43);
      goto label_63;

    case 35:
      current_block = (Rpc - LABEL_3_44);
      goto label_64;

    case 36:
      current_block = (Rpc - LABEL_3_48);
      goto fail_51;

    case 37:
      current_block = (Rpc - LABEL_3_45);
      goto continuation_21;

    case 38:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_47;

    case 39:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___expression_86)
DEFLABEL (Z___expression_53)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd238.Obj) = (current_block [OBJECT_3_3]);
  (Wrd241.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd241.Lng))))
    goto label_173;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd238.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_172;

DEFLABEL (label_171)
  (Wrd13.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_89;

DEFLABEL (label_88)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_89)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_91;
  (Wrd15.Obj) = (current_block [OBJECT_3_7]);
  goto label_90;

DEFLABEL (label_91)
  (Wrd15.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_90)
DEFLABEL (label_170)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;

DEFLABEL (label_92)
  (Wrd235.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd235.Obj);
  (Wrd236.Obj) = (current_block [OBJECT_3_1]);
  (Rsp [2]) = (Wrd236.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_47]));

DEFLABEL (label_93)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_95;
  (Rsp [2]) = (Wrd25.Obj);

DEFLABEL (label_94)
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (label_95)
  if (! ((Wrd26.uLng) == 1))
    goto label_169;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_168)
  if ((Wrd30.Obj) == (current_block [OBJECT_3_8]))
    goto label_140;
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_139;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_138)
  if ((Wrd40.Obj) == (current_block [OBJECT_3_9]))
    goto label_124;
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_123;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [0]);

DEFLABEL (label_122)
  if ((Wrd50.Obj) == (current_block [OBJECT_3_10]))
    goto label_97;

DEFLABEL (label_96)
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd233.Obj);
  Rdl = (& (Rsp [4]));
  goto fail_51;

DEFLABEL (label_97)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_121;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_120)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_98)
  (Wrd76.pObj) = (& (Rsp [1]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd76.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  Rdl = (& (Rsp [1]));
  goto fail_51;

DEFLABEL (label_100)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_119;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_118)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_117;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_116)
  if (! ((Wrd89.Obj) == (current_block [OBJECT_3_1])))
    goto label_99;
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.Obj) = (Rsp [2]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_115;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [1]);

DEFLABEL (label_114)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_113;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [0]);
  (* (--Rsp)) = (Wrd110.Obj);

DEFLABEL (label_112)
  (Wrd156.Obj) = (current_block [OBJECT_3_3]);
  (Wrd159.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd159.Lng))))
    goto label_111;
  (Wrd117.uLng) = (OBJECT_DATUM (Wrd156.Obj));
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd117.Obj) == (Wrd119.Obj))
    goto label_110;

DEFLABEL (label_109)
  (Wrd120.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd130.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd130.Lng))))
    goto label_88;
  (Wrd124.uLng) = (OBJECT_DATUM (Wrd120.Obj));
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd124.Obj) == (Wrd126.Obj))
    goto label_102;
  (Wrd122.Obj) = (current_block [OBJECT_3_7]);
  goto label_101;

DEFLABEL (label_102)
  (Wrd122.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_101)
DEFLABEL (label_108)
  Rsp = (& (Rsp [3]));
  if ((Wrd122.Obj) == ((SCHEME_OBJECT) 0))
    goto label_99;

DEFLABEL (label_107)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd137.Obj) = (Rsp [2]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 1))
    goto label_106;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd134.Obj) = ((Wrd136.pObj) [1]);

DEFLABEL (label_105)
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_104;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd143.Obj) = ((Wrd144.pObj) [0]);

DEFLABEL (label_103)
  (Rsp [3]) = (Wrd143.Obj);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_45]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_45);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_50]));

DEFLABEL (label_104)
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_64)
  (Wrd143.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_63)
  (Wrd134.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_110)
  Rsp = (& (Rsp [2]));
  goto label_107;

DEFLABEL (label_111)
  (Wrd161.Obj) = (Rsp [0]);
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_65)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_110;

DEFLABEL (label_113)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_61)
  (Wrd100.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_60)
  (Wrd89.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_59)
  (Wrd80.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_58)
  (Wrd63.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_57)
  (Wrd50.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_124)
  (Wrd169.Obj) = (Rsp [1]);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_137;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd166.Obj) = ((Wrd168.pObj) [1]);

DEFLABEL (label_136)
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if ((Wrd175.uLng) == 1)
    goto label_126;

DEFLABEL (label_125)
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd178.Obj);
  goto label_98;

DEFLABEL (label_126)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 1))
    goto label_135;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd183.Obj) = ((Wrd185.pObj) [1]);

DEFLABEL (label_134)
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd194.uLng) == 1))
    goto label_133;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd192.Obj) = ((Wrd193.pObj) [1]);

DEFLABEL (label_132)
  if (! ((Wrd192.Obj) == (current_block [OBJECT_3_1])))
    goto label_125;

DEFLABEL (label_131)
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 1))
    goto label_130;
  (Wrd202.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd200.Obj) = ((Wrd202.pObj) [1]);

DEFLABEL (label_129)
  (Wrd211.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd211.uLng) == 1))
    goto label_128;
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd209.Obj) = ((Wrd210.pObj) [0]);

DEFLABEL (label_127)
  (Rsp [2]) = (Wrd209.Obj);
  goto label_94;

DEFLABEL (label_128)
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_70)
  (Wrd209.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_69)
  (Wrd200.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_133)
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_68)
  (Wrd192.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_67)
  (Wrd183.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_66)
  (Wrd166.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_56)
  (Wrd40.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_140)
  (Wrd221.Obj) = (Rsp [1]);
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if (! ((Wrd222.uLng) == 1))
    goto label_167;
  (Wrd220.pObj) = (OBJECT_ADDRESS (Wrd221.Obj));
  (Wrd218.Obj) = ((Wrd220.pObj) [1]);

DEFLABEL (label_166)
  if ((Wrd218.Obj) == (current_block [OBJECT_3_1]))
    goto label_96;
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd230.Obj);
  (Wrd231.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd231.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd257.Obj) = (Rsp [1]);
  (Wrd258.uLng) = (OBJECT_TYPE (Wrd257.Obj));
  if (! ((Wrd258.uLng) == 1))
    goto label_165;
  (Wrd256.pObj) = (OBJECT_ADDRESS (Wrd257.Obj));
  (Wrd254.Obj) = ((Wrd256.pObj) [1]);

DEFLABEL (label_164)
  (Wrd265.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if (! ((Wrd265.uLng) == 1))
    goto label_163;
  (Wrd264.pObj) = (OBJECT_ADDRESS (Wrd254.Obj));
  (Wrd263.Obj) = ((Wrd264.pObj) [1]);

DEFLABEL (label_162)
  if ((Wrd263.Obj) == (current_block [OBJECT_3_1]))
    goto label_157;
  (Wrd274.Obj) = (Rsp [1]);
  (Wrd275.uLng) = (OBJECT_TYPE (Wrd274.Obj));
  if (! ((Wrd275.uLng) == 1))
    goto label_156;
  (Wrd273.pObj) = (OBJECT_ADDRESS (Wrd274.Obj));
  (Wrd271.Obj) = ((Wrd273.pObj) [1]);

DEFLABEL (label_155)
  (Wrd282.uLng) = (OBJECT_TYPE (Wrd271.Obj));
  if (! ((Wrd282.uLng) == 1))
    goto label_154;
  (Wrd281.pObj) = (OBJECT_ADDRESS (Wrd271.Obj));
  (Wrd280.Obj) = ((Wrd281.pObj) [1]);

DEFLABEL (label_153)
  (Wrd289.uLng) = (OBJECT_TYPE (Wrd280.Obj));
  if (! ((Wrd289.uLng) == 1))
    goto label_152;
  (Wrd288.pObj) = (OBJECT_ADDRESS (Wrd280.Obj));
  (Wrd287.Obj) = ((Wrd288.pObj) [1]);

DEFLABEL (label_151)
  if (! ((Wrd287.Obj) == (current_block [OBJECT_3_1])))
    goto label_96;
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd300.Obj);
  (Wrd304.Obj) = (Rsp [2]);
  (Wrd305.uLng) = (OBJECT_TYPE (Wrd304.Obj));
  if (! ((Wrd305.uLng) == 1))
    goto label_150;
  (Wrd303.pObj) = (OBJECT_ADDRESS (Wrd304.Obj));
  (Wrd301.Obj) = ((Wrd303.pObj) [1]);

DEFLABEL (label_149)
  (Wrd312.uLng) = (OBJECT_TYPE (Wrd301.Obj));
  if (! ((Wrd312.uLng) == 1))
    goto label_148;
  (Wrd311.pObj) = (OBJECT_ADDRESS (Wrd301.Obj));
  (Wrd310.Obj) = ((Wrd311.pObj) [1]);

DEFLABEL (label_147)
  (Wrd319.uLng) = (OBJECT_TYPE (Wrd310.Obj));
  if (! ((Wrd319.uLng) == 1))
    goto label_146;
  (Wrd317.pObj) = (OBJECT_ADDRESS (Wrd310.Obj));
  (Wrd318.Obj) = ((Wrd317.pObj) [0]);
  (* (--Rsp)) = (Wrd318.Obj);

DEFLABEL (label_145)
  (Wrd327.Obj) = (Rsp [3]);
  (Wrd328.uLng) = (OBJECT_TYPE (Wrd327.Obj));
  if (! ((Wrd328.uLng) == 1))
    goto label_144;
  (Wrd326.pObj) = (OBJECT_ADDRESS (Wrd327.Obj));
  (Wrd324.Obj) = ((Wrd326.pObj) [1]);

DEFLABEL (label_143)
  (Wrd335.uLng) = (OBJECT_TYPE (Wrd324.Obj));
  if (! ((Wrd335.uLng) == 1))
    goto label_142;
  (Wrd333.pObj) = (OBJECT_ADDRESS (Wrd324.Obj));
  (Wrd334.Obj) = ((Wrd333.pObj) [0]);
  (* (--Rsp)) = (Wrd334.Obj);

DEFLABEL (label_141)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [2]) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (label_142)
  (Wrd339.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd339.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd332.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd332.Obj);
  (* (--Rsp)) = (Wrd327.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_81)
  (Wrd324.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd323.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd316.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd316.Obj);
  (* (--Rsp)) = (Wrd301.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_79)
  (Wrd310.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd309.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd309.Obj);
  (* (--Rsp)) = (Wrd304.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_78)
  (Wrd301.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd280.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_77)
  (Wrd287.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd286.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd286.Obj);
  (* (--Rsp)) = (Wrd271.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_76)
  (Wrd280.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd279.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd279.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_75)
  (Wrd271.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_157)
  (Wrd342.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd342.Obj);
  (Wrd346.Obj) = (Rsp [2]);
  (Wrd347.uLng) = (OBJECT_TYPE (Wrd346.Obj));
  if (! ((Wrd347.uLng) == 1))
    goto label_161;
  (Wrd345.pObj) = (OBJECT_ADDRESS (Wrd346.Obj));
  (Wrd343.Obj) = ((Wrd345.pObj) [1]);

DEFLABEL (label_160)
  (Wrd354.uLng) = (OBJECT_TYPE (Wrd343.Obj));
  if (! ((Wrd354.uLng) == 1))
    goto label_159;
  (Wrd352.pObj) = (OBJECT_ADDRESS (Wrd343.Obj));
  (Wrd353.Obj) = ((Wrd352.pObj) [0]);
  (* (--Rsp)) = (Wrd353.Obj);

DEFLABEL (label_158)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [2]) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (label_159)
  (Wrd358.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd358.Obj);
  (* (--Rsp)) = (Wrd343.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd351.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd351.Obj);
  (* (--Rsp)) = (Wrd346.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_83)
  (Wrd343.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd269.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_74)
  (Wrd263.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd262.Obj);
  (* (--Rsp)) = (Wrd257.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_73)
  (Wrd254.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_71)
  (Wrd218.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_55)
  (Wrd30.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_172)
  Rsp = (& (Rsp [2]));
  goto label_92;

DEFLABEL (label_173)
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd238.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_171;
  goto label_172;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_24);
  goto label_107;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_107;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_3_22);
  goto label_131;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_92;

DEFLABEL (fail_87)
DEFLABEL (fail_51)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_48);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_49]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_6 11
#define LABEL_4_10 13
#define ENVIRONMENT_LABEL_4_3 23
#define DEBUGGING_LABEL_4_2 22
#define OBJECT_4_4 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_9 15
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto any_shadowedP_9;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (any_shadowedP_15)
DEFLABEL (any_shadowedP_9)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_0])))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_23)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd26.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
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
  goto loop_7;

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd29.Obj) = (current_block [OBJECT_4_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_6 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define ENVIRONMENT_LABEL_5_3 23
#define DEBUGGING_LABEL_5_2 22
#define OBJECT_5_2 21
#define OBJECT_5_1 20
#define OBJECT_5_0 19
#define EXECUTE_CACHE_5_8 17
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto filter_vars_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_vars_17)
DEFLABEL (filter_vars_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_0])))
    goto label_19;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_21;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_26;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd29.Obj);
  goto loop_8;

DEFLABEL (label_26)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_15)
  (Wrd29.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_6_4);
      goto combine_1_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combine_1_4)
DEFLABEL (combine_1_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (current_block [OBJECT_6_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 9
#define DEBUGGING_LABEL_7_2 8
#define OBJECT_7_0 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto combine_2_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combine_2_5)
DEFLABEL (combine_2_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 5
#define DEBUGGING_LABEL_8_2 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto identity_combiner_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identity_combiner_3)
DEFLABEL (identity_combiner_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_9 7
#define LABEL_9_10 9
#define TAG_9_11 3
#define LABEL_9_7 11
#define TAG_9_8 4
#define LABEL_9_12 13
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_13 15
#define EXECUTE_CACHE_9_6 17
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
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
      goto Z___singleton_combiner_6;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___singleton_combiner_10)
DEFLABEL (Z___singleton_combiner_6)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_10])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  Rvl = (Wrd24.Obj);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_9_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  Rvl = (Wrd29.Obj);
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_9_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_9 7
#define LABEL_10_10 9
#define TAG_10_11 3
#define LABEL_10_7 11
#define TAG_10_8 4
#define LABEL_10_12 13
#define ENVIRONMENT_LABEL_10_3 24
#define DEBUGGING_LABEL_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_14 15
#define EXECUTE_CACHE_10_13 17
#define EXECUTE_CACHE_10_6 19
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
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
      goto Z___mapper_combiner_6;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___mapper_combiner_10)
DEFLABEL (Z___mapper_combiner_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  Rvl = (Wrd24.Obj);

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_10_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  Rvl = (Wrd29.Obj);
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_9 7
#define LABEL_11_10 9
#define TAG_11_11 3
#define LABEL_11_7 11
#define TAG_11_8 4
#define LABEL_11_12 13
#define LABEL_11_14 15
#define LABEL_11_15 17
#define ENVIRONMENT_LABEL_11_3 31
#define DEBUGGING_LABEL_11_2 30
#define OBJECT_11_2 29
#define OBJECT_11_1 28
#define OBJECT_11_0 27
#define EXECUTE_CACHE_11_17 19
#define EXECUTE_CACHE_11_16 21
#define EXECUTE_CACHE_11_13 23
#define EXECUTE_CACHE_11_6 25
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
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
      goto Z___wrapper_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___wrapper_14)
DEFLABEL (Z___wrapper_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_10])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  Rvl = (Wrd24.Obj);

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  Rvl = (Wrd29.Obj);
  goto label_17;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_11_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (Rsp [2]) = Rvl;
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 5
#define DEBUGGING_LABEL_12_2 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto identity_wrapper_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identity_wrapper_3)
DEFLABEL (identity_wrapper_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_0 9
#define EXECUTE_CACHE_13_7 7
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_13_4);
      goto Z___error_thunk_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___error_thunk_4)
DEFLABEL (Z___error_thunk_1)
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

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_9 7
#define LABEL_14_10 9
#define TAG_14_11 3
#define LABEL_14_7 11
#define TAG_14_8 4
#define ENVIRONMENT_LABEL_14_3 20
#define DEBUGGING_LABEL_14_2 19
#define OBJECT_14_1 18
#define OBJECT_14_0 17
#define EXECUTE_CACHE_14_12 13
#define EXECUTE_CACHE_14_6 15
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
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
      goto Z___value_thunk_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_14_10);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___value_thunk_9)
DEFLABEL (Z___value_thunk_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_10])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  Rvl = (Wrd24.Obj);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_14_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  Rvl = (Wrd29.Obj);
  goto label_12;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_14_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_15_4);
      goto invert_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invert_4)
DEFLABEL (invert_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_16 13
#define LABEL_16_12 15
#define TAG_16_13 6
#define LABEL_16_17 17
#define TAG_16_18 7
#define LABEL_16_14 19
#define TAG_16_15 8
#define LABEL_16_24 21
#define LABEL_16_25 23
#define LABEL_16_26 25
#define LABEL_16_19 27
#define LABEL_16_21 29
#define LABEL_16_27 31
#define LABEL_16_28 33
#define LABEL_16_29 35
#define LABEL_16_33 37
#define LABEL_16_36 39
#define LABEL_16_38 41
#define LABEL_16_41 43
#define LABEL_16_39 45
#define LABEL_16_40 47
#define LABEL_16_42 49
#define LABEL_16_43 51
#define LABEL_16_44 53
#define LABEL_16_45 55
#define LABEL_16_47 57
#define LABEL_16_37 59
#define LABEL_16_35 61
#define LABEL_16_46 63
#define LABEL_16_48 65
#define ENVIRONMENT_LABEL_16_3 95
#define DEBUGGING_LABEL_16_2 94
#define OBJECT_16_6 93
#define OBJECT_16_5 92
#define OBJECT_16_4 91
#define OBJECT_16_3 90
#define OBJECT_16_2 89
#define OBJECT_16_1 88
#define OBJECT_16_0 87
#define EXECUTE_CACHE_16_34 67
#define EXECUTE_CACHE_16_32 69
#define EXECUTE_CACHE_16_31 71
#define EXECUTE_CACHE_16_30 73
#define EXECUTE_CACHE_16_23 75
#define EXECUTE_CACHE_16_22 77
#define EXECUTE_CACHE_16_20 79
#define EXECUTE_CACHE_16_11 81
#define EXECUTE_CACHE_16_8 83
#define EXECUTE_CACHE_16_6 85
#define FREE_REFERENCES_LABEL_16_0 66
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd23;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto make_grouper_41;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_16_16);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_16_12);
      goto lambda_55;

    case 7:
      current_block = (Rpc - LABEL_16_17);
      goto lambda_57;

    case 8:
      current_block = (Rpc - LABEL_16_14);
      goto lambda_56;

    case 9:
      current_block = (Rpc - LABEL_16_24);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_16_25);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_16_26);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_16_28);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_16_29);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_16_33);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_16_36);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_16_38);
      goto label_47;

    case 20:
      current_block = (Rpc - LABEL_16_41);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_16_39);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_16_40);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_16_42);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_16_43);
      goto group_37;

    case 25:
      current_block = (Rpc - LABEL_16_44);
      goto label_49;

    case 26:
      current_block = (Rpc - LABEL_16_45);
      goto label_51;

    case 27:
      current_block = (Rpc - LABEL_16_47);
      goto label_50;

    case 28:
      current_block = (Rpc - LABEL_16_37);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_16_35);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_16_46);
      goto continuation_35;

    case 31:
      current_block = (Rpc - LABEL_16_48);
      goto label_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_grouper_54)
DEFLABEL (make_grouper_41)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_61;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_61;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_60)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_17])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_59)
  (Wrd29.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 14));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_12])));
  Rhp += 11;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd29 = Wrd8;
  (Wrd30.Obj) = (Rsp [13]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [12]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [11]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [10]);
  ((Wrd29.pObj) [5]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [8]);
  ((Wrd29.pObj) [6]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  ((Wrd29.pObj) [7]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd29.pObj) [8]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [9]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd29.pObj) [10]) = (Wrd14.Obj);
  ((Wrd29.pObj) [11]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [12]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_16_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_14])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_59;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_16_12);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [12]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_24);
  (* (--Rsp)) = Rvl;
  (Wrd32.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd32.uLng) == 26))
    goto label_84;
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [9]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_84;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if ((Wrd67.Lng) < (Wrd71.Lng))
    goto label_83;

DEFLABEL (label_82)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [8]);
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd49.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd56.uLng) == 26)
    goto label_66;

DEFLABEL (label_65)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_66)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_65;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if ((Wrd60.Lng) > (Wrd62.Lng))
    goto label_68;
  (Wrd54.Obj) = ((SCHEME_OBJECT) 0);
  goto label_67;

DEFLABEL (label_68)
  (Wrd54.Obj) = (current_block [OBJECT_16_3]);

DEFLABEL (label_67)
DEFLABEL (label_80)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd54.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_63;

DEFLABEL (label_79)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [10]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_30]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_16_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_16_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_34]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_4])))
    goto label_69;
  (Wrd62.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [4]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [5]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_35]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Obj) = ((Wrd64.pObj) [2]);
  (* (--Rsp)) = (Wrd72.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_16_35);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_69)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_78;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_77)
  if ((Wrd7.Obj) == (current_block [OBJECT_16_4]))
    goto label_74;
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_39]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_40]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.pObj) = (& (Rsp [7]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_73;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_72)
  goto group_37;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_16_40);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_71;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_70)
  (Wrd14.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [11]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_16_39);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_71)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_41]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd39.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_37]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = ((Wrd41.pObj) [11]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_76;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_75)
  (Wrd58.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [9]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_16_37);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_76)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_38]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_45)
  (Wrd7.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));
  goto label_79;

DEFLABEL (label_83)
  Rsp = (& (Rsp [2]));
  goto label_63;

DEFLABEL (label_84)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [9]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_63;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_16_17);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_16_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

DEFLABEL (group_58)
DEFLABEL (group_37)
  INTERRUPT_CHECK (26, LABEL_16_43);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_93;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_92)
  if ((Wrd5.Obj) == (current_block [OBJECT_16_4]))
    goto label_89;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd16.pObj) [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [11]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_46]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_88;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_87)
  goto group_37;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_16_46);
  (Rsp [3]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_86;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_85)
  (Rsp [2]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_86)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_48]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (label_52)
  (Wrd6.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_47]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd40.pObj) [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_91;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_90)
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd60.pObj) [11]);
  (Rsp [3]) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_91)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_45]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (label_51)
  (Wrd47.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_49)
  (Wrd5.Obj) = Rvl;
  goto label_92;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 14
#define DEBUGGING_LABEL_17_2 13
#define EXECUTE_CACHE_17_7 9
#define FREE_REFERENCE_17_0 12
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto group_right_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (group_right_5)
DEFLABEL (group_right_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define EXECUTE_CACHE_18_7 9
#define FREE_REFERENCE_18_1 12
#define FREE_REFERENCE_18_0 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto group_left_0;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (group_left_5)
DEFLABEL (group_left_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 6
#define DEBUGGING_LABEL_19_2 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto with_arguments_from_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_arguments_from_3)
DEFLABEL (with_arguments_from_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_8 7
#define LABEL_20_9 9
#define LABEL_20_11 11
#define LABEL_20_12 13
#define LABEL_20_13 15
#define LABEL_20_15 17
#define LABEL_20_5 19
#define LABEL_20_17 21
#define LABEL_20_18 23
#define LABEL_20_20 25
#define LABEL_20_19 27
#define LABEL_20_23 29
#define LABEL_20_7 31
#define LABEL_20_25 33
#define LABEL_20_26 35
#define LABEL_20_22 37
#define LABEL_20_21 39
#define ENVIRONMENT_LABEL_20_3 56
#define DEBUGGING_LABEL_20_2 55
#define OBJECT_20_5 54
#define OBJECT_20_4 53
#define OBJECT_20_3 52
#define OBJECT_20_2 51
#define OBJECT_20_1 50
#define OBJECT_20_0 49
#define EXECUTE_CACHE_20_24 41
#define EXECUTE_CACHE_20_16 43
#define EXECUTE_CACHE_20_14 45
#define EXECUTE_CACHE_20_10 47
#define FREE_REFERENCES_LABEL_20_0 40
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_20_4);
      goto decode_options_22;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto check_21;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_20_18);
      goto collect_9;

    case 11:
      current_block = (Rpc - LABEL_20_20);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_20_23);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_20_25);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_20_26);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_20_22);
      goto continuation_4;

    case 18:
      current_block = (Rpc - LABEL_20_21);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_options_34)
DEFLABEL (decode_options_22)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto check_21;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);

DEFLABEL (label_37)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto collect_9;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_17);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (check_35)
DEFLABEL (check_21)
  INTERRUPT_CHECK (26, LABEL_20_11);
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (current_block [OBJECT_20_1]))
    goto label_55;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_54;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_53)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd23.uLng) == 1)
    goto label_41;

DEFLABEL (label_40)
  (Wrd24.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_39;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_39)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_25)
  (Wrd25.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_52;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_50;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_49)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_48;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_43;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd7.Obj);
  goto check_21;

DEFLABEL (label_43)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_31)
  (Wrd7.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd16.Obj) = (current_block [OBJECT_20_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_46;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_32)
  (Wrd17.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_28)
  (Wrd53.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (collect_36)
DEFLABEL (collect_9)
  INTERRUPT_CHECK (26, LABEL_20_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_20_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_56;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_64;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_63)
  goto collect_9;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_62;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_22);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 1)
    goto label_57;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_57)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_58)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd6.Obj) = ((SCHEME_OBJECT) 0);
  goto label_59;

DEFLABEL (label_62)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_21);
  (Wrd6.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 9
#define DEBUGGING_LABEL_21_2 8
#define OBJECT_21_0 7
#define EXECUTE_CACHE_21_5 5
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_21_4);
      goto fail_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fail_4)
DEFLABEL (fail_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 10
#define DEBUGGING_LABEL_22_2 9
#define OBJECT_22_1 8
#define OBJECT_22_0 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto incompatible_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (incompatible_7)
DEFLABEL (incompatible_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_22_1]);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_7 5
#define LABEL_23_4 7
#define LABEL_23_8 9
#define LABEL_23_9 11
#define LABEL_23_11 13
#define LABEL_23_13 15
#define LABEL_23_14 17
#define LABEL_23_15 19
#define LABEL_23_16 21
#define LABEL_23_10 23
#define LABEL_23_6 25
#define LABEL_23_21 27
#define LABEL_23_22 29
#define LABEL_23_19 31
#define LABEL_23_23 33
#define ENVIRONMENT_LABEL_23_3 52
#define DEBUGGING_LABEL_23_2 51
#define OBJECT_23_5 50
#define OBJECT_23_4 49
#define OBJECT_23_3 48
#define OBJECT_23_2 47
#define OBJECT_23_1 46
#define OBJECT_23_0 45
#define EXECUTE_CACHE_23_20 35
#define EXECUTE_CACHE_23_18 37
#define EXECUTE_CACHE_23_17 39
#define EXECUTE_CACHE_23_12 41
#define FREE_REFERENCE_23_0 44
#define FREE_REFERENCES_LABEL_23_0 34
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd95;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd5;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd84;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_23_7);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_23_4);
      goto with_wrapper_20;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_23_11);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_23_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_23_21);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_23_22);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_23_19);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_23_23);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_wrapper_33)
DEFLABEL (with_wrapper_20)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_50;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_49)
  if ((Wrd7.Obj) == (current_block [OBJECT_23_2]))
    goto label_47;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_46;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_45)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_44;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_43)
  if ((Wrd26.Obj) == (current_block [OBJECT_23_2]))
    goto label_35;

DEFLABEL (label_34)
  (Wrd34.Obj) = (current_block [OBJECT_23_5]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_18]));

DEFLABEL (label_35)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_42;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_41)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_40;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_37;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_36)
  (Wrd95.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (label_37)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_29)
DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_40)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_25)
  (Wrd40.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_24)
  (Wrd26.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_23)
  (Wrd17.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_48;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (--Rsp)) = (Wrd62.Obj);
  goto label_36;

DEFLABEL (label_48)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_27)
  goto label_38;

DEFLABEL (label_50)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_23_1]);
  (Rsp [1]) = (Wrd71.Obj);
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_53;
  Wrd73 = Wrd77;

DEFLABEL (label_52)
  (Rsp [2]) = (Wrd73.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_23_2]);
  (Rsp [3]) = (Wrd79.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_8])), (Wrd74.pObj));

DEFLABEL (label_28)
  (Wrd73.Obj) = Rvl;
  goto label_52;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_56)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_55;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_23);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_23_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_31)
  (Wrd14.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_56;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23_1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23_19);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_23_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define LABEL_24_7 11
#define LABEL_24_11 13
#define ENVIRONMENT_LABEL_24_3 29
#define DEBUGGING_LABEL_24_2 28
#define OBJECT_24_4 27
#define OBJECT_24_3 26
#define OBJECT_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_12 15
#define EXECUTE_CACHE_24_10 17
#define EXECUTE_CACHE_24_9 19
#define FREE_REFERENCE_24_0 22
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
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
      goto with_singleton_7;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_singleton_13)
DEFLABEL (with_singleton_7)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_18;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_17)
  if ((Wrd7.Obj) == (current_block [OBJECT_24_0]))
    goto label_14;
  (Wrd17.Obj) = (current_block [OBJECT_24_4]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (label_14)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_15)
  (Wrd33.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_16)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_21;
  Wrd36 = Wrd40;

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [2]) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd37.pObj));

DEFLABEL (label_11)
  (Wrd36.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define TAG_25_8 2
#define LABEL_25_10 9
#define LABEL_25_11 11
#define LABEL_25_12 13
#define LABEL_25_13 15
#define LABEL_25_14 17
#define LABEL_25_16 19
#define LABEL_25_17 21
#define TAG_25_18 9
#define LABEL_25_20 23
#define TAG_25_21 10
#define LABEL_25_25 25
#define LABEL_25_27 27
#define LABEL_25_29 29
#define LABEL_25_23 31
#define LABEL_25_31 33
#define LABEL_25_28 35
#define LABEL_25_34 37
#define LABEL_25_35 39
#define LABEL_25_36 41
#define LABEL_25_37 43
#define LABEL_25_40 45
#define LABEL_25_41 47
#define LABEL_25_32 49
#define LABEL_25_38 51
#define LABEL_25_45 53
#define LABEL_25_46 55
#define LABEL_25_43 57
#define LABEL_25_47 59
#define LABEL_25_48 61
#define LABEL_25_49 63
#define LABEL_25_50 65
#define ENVIRONMENT_LABEL_25_3 117
#define DEBUGGING_LABEL_25_2 116
#define OBJECT_25_20 115
#define OBJECT_25_19 114
#define OBJECT_25_18 113
#define OBJECT_25_17 112
#define OBJECT_25_16 111
#define OBJECT_25_15 110
#define OBJECT_25_14 109
#define OBJECT_25_13 108
#define OBJECT_25_12 107
#define OBJECT_25_11 106
#define OBJECT_25_10 105
#define OBJECT_25_9 104
#define OBJECT_25_8 103
#define OBJECT_25_7 102
#define OBJECT_25_6 101
#define OBJECT_25_5 100
#define OBJECT_25_4 99
#define OBJECT_25_3 98
#define OBJECT_25_2 97
#define OBJECT_25_1 96
#define OBJECT_25_0 95
#define EXECUTE_CACHE_25_51 67
#define EXECUTE_CACHE_25_44 69
#define EXECUTE_CACHE_25_42 71
#define EXECUTE_CACHE_25_39 73
#define EXECUTE_CACHE_25_33 75
#define EXECUTE_CACHE_25_30 77
#define EXECUTE_CACHE_25_26 79
#define EXECUTE_CACHE_25_24 81
#define EXECUTE_CACHE_25_22 83
#define EXECUTE_CACHE_25_19 85
#define EXECUTE_CACHE_25_15 87
#define EXECUTE_CACHE_25_9 89
#define FREE_REFERENCE_25_2 92
#define FREE_REFERENCE_25_1 93
#define FREE_REFERENCE_25_0 94
#define FREE_REFERENCES_LABEL_25_0 66
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd113;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd83;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_25_4);
      goto reducer_make_47;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_66;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_67;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto label_53;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_49;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto label_50;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto label_52;

    case 7:
      current_block = (Rpc - LABEL_25_14);
      goto label_51;

    case 8:
      current_block = (Rpc - LABEL_25_16);
      goto make_reducer_internal_44;

    case 9:
      current_block = (Rpc - LABEL_25_17);
      goto lambda_69;

    case 10:
      current_block = (Rpc - LABEL_25_20);
      goto lambda_70;

    case 11:
      current_block = (Rpc - LABEL_25_25);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_25_27);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_25_29);
      goto label_54;

    case 14:
      current_block = (Rpc - LABEL_25_23);
      goto continuation_33;

    case 15:
      current_block = (Rpc - LABEL_25_31);
      goto label_56;

    case 16:
      current_block = (Rpc - LABEL_25_28);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_25_34);
      goto continuation_38;

    case 18:
      current_block = (Rpc - LABEL_25_35);
      goto label_59;

    case 19:
      current_block = (Rpc - LABEL_25_36);
      goto continuation_34;

    case 20:
      current_block = (Rpc - LABEL_25_37);
      goto invoke_41;

    case 21:
      current_block = (Rpc - LABEL_25_40);
      goto label_57;

    case 22:
      current_block = (Rpc - LABEL_25_41);
      goto label_58;

    case 23:
      current_block = (Rpc - LABEL_25_32);
      goto continuation_11;

    case 24:
      current_block = (Rpc - LABEL_25_38);
      goto continuation_39;

    case 25:
      current_block = (Rpc - LABEL_25_45);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_25_46);
      goto continuation_22;

    case 27:
      current_block = (Rpc - LABEL_25_43);
      goto continuation_12;

    case 28:
      current_block = (Rpc - LABEL_25_47);
      goto label_60;

    case 29:
      current_block = (Rpc - LABEL_25_48);
      goto label_61;

    case 30:
      current_block = (Rpc - LABEL_25_49);
      goto label_62;

    case 31:
      current_block = (Rpc - LABEL_25_50);
      goto label_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reducer_make_65)
DEFLABEL (reducer_make_47)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x3fc, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 2);

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_25_1]);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_25_7);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_82;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_81)
  if ((Wrd7.Obj) == (current_block [OBJECT_25_3]))
    goto label_72;
  (Wrd17.Obj) = (current_block [OBJECT_25_8]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (label_72)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_80;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_79)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == (current_block [OBJECT_25_5]))
    goto label_76;
  if ((Wrd29.Obj) == (current_block [OBJECT_25_6]))
    goto label_76;
  if ((Wrd29.Obj) == (current_block [OBJECT_25_7]))
    goto label_73;
  (Wrd35.Obj) = (current_block [OBJECT_25_8]);
  (Rsp [5]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd36.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (label_73)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_75;
  Wrd39 = Wrd43;

DEFLABEL (label_74)
  (Rsp [0]) = (Wrd39.Obj);
  goto make_reducer_internal_44;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_14])), (Wrd40.pObj));

DEFLABEL (label_51)
  (Wrd39.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_78;
  Wrd46 = Wrd50;

DEFLABEL (label_77)
  (Rsp [0]) = (Wrd46.Obj);
  goto make_reducer_internal_44;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_13])), (Wrd47.pObj));

DEFLABEL (label_52)
  (Wrd46.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_85;
  Wrd52 = Wrd56;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd52.Obj);
  goto make_reducer_internal_44;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_10])), (Wrd53.pObj));

DEFLABEL (label_53)
  (Wrd52.Obj) = Rvl;
  goto label_84;

DEFLABEL (make_reducer_internal_68)
DEFLABEL (make_reducer_internal_44)
  INTERRUPT_CHECK (26, LABEL_25_16);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_17])));
  Rhp += 7;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd24 = Wrd7;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd26.pObj) [4]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  ((Wrd24.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd24.pObj) [6]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [7]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [8]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [5]) = (Wrd27.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_25_17);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 13));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_20])));
  Rhp += 10;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd38 = Wrd7;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  ((Wrd38.pObj) [2]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd40.pObj) [3]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd40.pObj) [4]);
  ((Wrd38.pObj) [4]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd40.pObj) [5]);
  ((Wrd38.pObj) [5]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd40.pObj) [6]);
  ((Wrd38.pObj) [6]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd40.pObj) [7]);
  ((Wrd38.pObj) [7]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd40.pObj) [8]);
  ((Wrd38.pObj) [8]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [9]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [10]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd38.pObj) [11]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_22]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_25_20);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [7]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_25);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_106;
  if (Rvl == (current_block [OBJECT_25_9]))
    goto label_87;

DEFLABEL (label_86)
  (Wrd8.Obj) = (current_block [OBJECT_25_10]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [7]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (label_87)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd26.Obj) = ((Wrd17.pObj) [7]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_105;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_104)
  (Wrd34.Obj) = (current_block [OBJECT_25_11]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_30]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_25_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_33]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_44]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25_43);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [7]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_103;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_102)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_101;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_100)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == (current_block [OBJECT_25_14]))
    goto label_97;
  if ((Wrd27.Obj) == (current_block [OBJECT_25_15]))
    goto label_97;
  if ((Wrd27.Obj) == (current_block [OBJECT_25_16]))
    goto label_90;
  if ((Wrd27.Obj) == (current_block [OBJECT_25_17]))
    goto label_90;
  if (! ((Wrd27.Obj) == (current_block [OBJECT_25_19])))
    goto label_89;

DEFLABEL (label_88)
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [11]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.Obj) = (current_block [OBJECT_25_3]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd52.Obj) = (Rsp [6]);
  (Rsp [3]) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd53.Obj);
  (Rsp [2]) = (Wrd52.Obj);
  goto invoke_41;

DEFLABEL (label_89)
  if ((Wrd27.Obj) == (current_block [OBJECT_25_20]))
    goto label_88;
  (Wrd39.Obj) = (current_block [OBJECT_25_10]);
  (Rsp [5]) = (Wrd39.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [7]);
  (Rsp [6]) = (Wrd40.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (label_90)
  (Wrd55.Obj) = (Rsp [4]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [6]);
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_46]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = ((Wrd56.pObj) [7]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_25_10]);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_91)
  (Wrd113.Obj) = (current_block [OBJECT_25_18]);
  (* (--Rsp)) = (Wrd113.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_51]));

DEFLABEL (label_92)
  (Wrd76.Obj) = (Rsp [4]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [11]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_96;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd80.Lng) = ((Wrd84.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd80.Lng)))
    goto label_96;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_95)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.Obj) = (current_block [OBJECT_25_3]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Rsp [1]) = (Wrd86.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd91.Obj);
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_94;
  Wrd93 = Wrd97;

DEFLABEL (label_93)
  (Rsp [2]) = (Wrd93.Obj);
  goto invoke_41;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_50])), (Wrd94.pObj));

DEFLABEL (label_63)
  (Wrd93.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [11]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_49]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_97)
  (Wrd99.Obj) = (Rsp [4]);
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [6]);
  if (! ((Wrd101.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_99;

DEFLABEL (label_98)
  (Wrd114.Obj) = (Rsp [4]);
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [11]);
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd120.Obj) = (Rsp [4]);
  (Wrd121.Obj) = (current_block [OBJECT_25_3]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Rsp [1]) = (Wrd117.Obj);
  (Wrd122.Obj) = (Rsp [3]);
  (Wrd123.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd123.Obj);
  (Rsp [2]) = (Wrd122.Obj);
  goto invoke_41;

DEFLABEL (label_99)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_45]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd108.Obj) = ((Wrd100.pObj) [7]);
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_25_10]);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  goto label_91;

DEFLABEL (label_101)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_48]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_47]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_60)
  (Wrd5.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_29]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_106)
  (Wrd36.Obj) = (current_block [OBJECT_25_9]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_27]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  goto label_87;

DEFLABEL (label_107)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_25_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd12.Obj) = (current_block [OBJECT_25_12]);
  goto label_108;

DEFLABEL (label_109)
  (Wrd12.Obj) = (current_block [OBJECT_25_9]);

DEFLABEL (label_108)
DEFLABEL (label_112)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [11]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_111;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_111;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd25.Lng) = ((Wrd29.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_111;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_110)
  goto invoke_41;

DEFLABEL (label_111)
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [11]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_25_46);
  goto label_92;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_25_45);
  goto label_98;

DEFLABEL (invoke_71)
DEFLABEL (invoke_41)
  INTERRUPT_CHECK (26, LABEL_25_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_122;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_121;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_120)
  if ((Wrd12.Obj) == (current_block [OBJECT_25_3]))
    goto label_115;

DEFLABEL (label_114)
  (Wrd28.Obj) = (Rsp [6]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_25_13]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_25_36);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_113)
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [9]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [10]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_38]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = ((Wrd56.pObj) [9]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_39]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_25_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [11]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [11]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.pObj) = (& (Rsp [20]));
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [11]));
    SCHEME_OBJECT * MFUp2 = (Wrd19.pObj);
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 11);
  }

DEFLABEL (label_115)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_34]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd40.Obj) = (Rsp [7]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [5]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_119;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_118)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_42]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_25_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  (Wrd74.Obj) = (Rsp [6]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [5]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_117;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd69.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_116)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd69.Obj);
  goto label_113;

DEFLABEL (label_117)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_35]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 1);

DEFLABEL (label_59)
  (Wrd69.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_41]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_40]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_57)
  (Wrd12.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_122)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_113;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_7 7
#define LABEL_26_5 9
#define LABEL_26_9 11
#define TAG_26_10 4
#define LABEL_26_11 13
#define TAG_26_12 5
#define LABEL_26_15 15
#define LABEL_26_16 17
#define LABEL_26_13 19
#define LABEL_26_17 21
#define LABEL_26_18 23
#define LABEL_26_19 25
#define LABEL_26_20 27
#define LABEL_26_22 29
#define LABEL_26_25 31
#define LABEL_26_23 33
#define LABEL_26_27 35
#define LABEL_26_21 37
#define ENVIRONMENT_LABEL_26_3 57
#define DEBUGGING_LABEL_26_2 56
#define OBJECT_26_4 55
#define OBJECT_26_3 54
#define OBJECT_26_2 53
#define OBJECT_26_1 52
#define OBJECT_26_0 51
#define EXECUTE_CACHE_26_29 39
#define EXECUTE_CACHE_26_28 41
#define EXECUTE_CACHE_26_26 43
#define EXECUTE_CACHE_26_24 45
#define EXECUTE_CACHE_26_14 47
#define EXECUTE_CACHE_26_8 49
#define FREE_REFERENCES_LABEL_26_0 38
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd85;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd36;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd91;
  machine_word Wrd98;
  machine_word Wrd93;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto replacement_make_22;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_21;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto lambda_35;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto lambda_36;

    case 6:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_26_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_26_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_26_19);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_26_20);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_26_22);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_26_25);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_26_23);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_26_27);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_26_21);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replacement_make_34)
DEFLABEL (replacement_make_22)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_39)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_38;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_9])));
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

DEFLABEL (label_38)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_26_9);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_26_11);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_64;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_63)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_62;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_62;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd121.Lng) < (Wrd122.Lng))
    goto label_59;

DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_57)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  Wrd39 = Wrd36;
  goto label_41;

DEFLABEL (label_42)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd39.Obj) = ((Wrd89.pObj) [3]);

DEFLABEL (label_41)
DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd41.uLng) == 1)
    goto label_44;

DEFLABEL (label_43)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_44)
  if (! ((Wrd41.uLng) == 1))
    goto label_55;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_54)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [2]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.Obj) = (Rsp [2]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_53;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_52)
  (Wrd79.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_51)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_21]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_50;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_49)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_23]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_46;
  (Wrd14.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_45)
  (Wrd28.Obj) = (Rsp [7]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_28]));

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_26_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_27]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_48)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_29]));

DEFLABEL (label_50)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_25]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_20]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_54;

DEFLABEL (label_59)
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [4]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_61;
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_61;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) (Wrd102.Lng)) < ((unsigned long) (Wrd108.Lng))))
    goto label_61;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd98.pObj) = (& ((Wrd106.pObj) [(Wrd93.Lng)]));
  (Wrd91.Obj) = ((Wrd98.pObj) [1]);

DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd91.Obj);
  goto label_57;

DEFLABEL (label_61)
  (Wrd114.Obj) = (Rsp [2]);
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd113.Obj) = ((Wrd115.pObj) [4]);
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (label_31)
  (Wrd91.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (label_64)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_21);
  (Wrd8.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_16);
  (* (--Rsp)) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_11 13
#define LABEL_27_13 15
#define LABEL_27_15 17
#define LABEL_27_12 19
#define LABEL_27_18 21
#define LABEL_27_20 23
#define LABEL_27_21 25
#define LABEL_27_22 27
#define LABEL_27_23 29
#define LABEL_27_6 31
#define LABEL_27_24 33
#define LABEL_27_26 35
#define LABEL_27_28 37
#define LABEL_27_31 39
#define LABEL_27_17 41
#define LABEL_27_32 43
#define LABEL_27_34 45
#define LABEL_27_35 47
#define LABEL_27_37 49
#define LABEL_27_38 51
#define LABEL_27_41 53
#define LABEL_27_42 55
#define LABEL_27_43 57
#define LABEL_27_44 59
#define LABEL_27_45 61
#define LABEL_27_46 63
#define LABEL_27_25 65
#define LABEL_27_47 67
#define LABEL_27_29 69
#define LABEL_27_48 71
#define LABEL_27_33 73
#define LABEL_27_39 75
#define TAG_27_40 36
#define ENVIRONMENT_LABEL_27_3 108
#define DEBUGGING_LABEL_27_2 107
#define OBJECT_27_15 106
#define OBJECT_27_14 105
#define OBJECT_27_13 104
#define OBJECT_27_12 103
#define OBJECT_27_11 102
#define OBJECT_27_10 101
#define OBJECT_27_9 100
#define OBJECT_27_8 99
#define OBJECT_27_7 98
#define OBJECT_27_6 97
#define OBJECT_27_5 96
#define OBJECT_27_4 95
#define OBJECT_27_3 94
#define OBJECT_27_2 93
#define OBJECT_27_1 92
#define OBJECT_27_0 91
#define EXECUTE_CACHE_27_30 77
#define EXECUTE_CACHE_27_27 79
#define EXECUTE_CACHE_27_19 81
#define EXECUTE_CACHE_27_36 83
#define EXECUTE_CACHE_27_16 85
#define EXECUTE_CACHE_27_14 87
#define EXECUTE_CACHE_27_7 89
#define FREE_REFERENCES_LABEL_27_0 76
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reduct_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd64;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd37;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd18;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_27_4);
      goto parse_replacement_56;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto parse_29;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_59;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto label_60;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto label_61;

    case 6:
      current_block = (Rpc - LABEL_27_13);
      goto label_62;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto fail_49;

    case 8:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_27_18);
      goto label_67;

    case 10:
      current_block = (Rpc - LABEL_27_20);
      goto label_63;

    case 11:
      current_block = (Rpc - LABEL_27_21);
      goto label_64;

    case 12:
      current_block = (Rpc - LABEL_27_22);
      goto label_65;

    case 13:
      current_block = (Rpc - LABEL_27_23);
      goto label_66;

    case 14:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_31;

    case 15:
      current_block = (Rpc - LABEL_27_24);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_27_26);
      goto label_68;

    case 17:
      current_block = (Rpc - LABEL_27_28);
      goto expr__case_55;

    case 18:
      current_block = (Rpc - LABEL_27_31);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_27_32);
      goto label_69;

    case 21:
      current_block = (Rpc - LABEL_27_34);
      goto label_70;

    case 22:
      current_block = (Rpc - LABEL_27_35);
      goto label_71;

    case 23:
      current_block = (Rpc - LABEL_27_37);
      goto continuation_37;

    case 24:
      current_block = (Rpc - LABEL_27_38);
      goto loop_45;

    case 25:
      current_block = (Rpc - LABEL_27_41);
      goto label_72;

    case 26:
      current_block = (Rpc - LABEL_27_42);
      goto label_73;

    case 27:
      current_block = (Rpc - LABEL_27_43);
      goto label_77;

    case 28:
      current_block = (Rpc - LABEL_27_44);
      goto label_74;

    case 29:
      current_block = (Rpc - LABEL_27_45);
      goto label_76;

    case 30:
      current_block = (Rpc - LABEL_27_46);
      goto label_75;

    case 31:
      current_block = (Rpc - LABEL_27_25);
      goto continuation_26;

    case 32:
      current_block = (Rpc - LABEL_27_47);
      goto continuation_50;

    case 33:
      current_block = (Rpc - LABEL_27_29);
      goto continuation_54;

    case 34:
      current_block = (Rpc - LABEL_27_48);
      goto label_78;

    case 35:
      current_block = (Rpc - LABEL_27_33);
      goto continuation_17;

    case 36:
      current_block = (Rpc - LABEL_27_39);
      goto lambda_85;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_replacement_80)
DEFLABEL (parse_replacement_56)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto parse_29;

DEFLABEL (parse_81)
DEFLABEL (parse_29)
  INTERRUPT_CHECK (26, LABEL_27_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_27_1])))
    goto label_86;
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd60.Obj);
  (Rsp [2]) = (Wrd59.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd65.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_45;

DEFLABEL (label_86)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_119;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_118)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_88;

DEFLABEL (label_87)
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [4]));
  goto fail_49;

DEFLABEL (label_88)
  if (! ((Wrd17.uLng) == 1))
    goto label_117;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_116)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_87;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_115;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_114)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_113;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_112)
  if (! ((Wrd39.Obj) == (current_block [OBJECT_27_1])))
    goto label_87;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_111;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_110)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_98;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_97)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_96;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_95)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_94;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_93)
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_92;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.pObj) = (& (Rsp [7]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  goto expr__case_55;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27_24);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_90;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_90;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_89)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_27]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_27_25);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto parse_29;

DEFLABEL (label_90)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_66)
  (Wrd32.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_65)
  (Wrd25.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_64)
  (Wrd16.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_27_5]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_109;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd45.Obj);
  Rsp = (& (Rsp [4]));
  goto fail_49;

DEFLABEL (label_100)
  (Wrd7.Obj) = (Rsp [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_36]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_31);

DEFLABEL (label_107)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_106;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_33]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.pObj) = (& (Rsp [6]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_104;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_103)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_102;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_101)
  goto expr__case_55;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_27_33);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto parse_29;

DEFLABEL (label_102)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_35]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_34]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_70)
  (Wrd29.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_32]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_69)
  (Wrd14.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_109)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_61)
  (Wrd39.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_60)
  (Wrd30.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_59)
  (Wrd20.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (fail_82)
DEFLABEL (fail_49)
  INTERRUPT_CHECK (26, LABEL_27_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27_4]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (expr__case_83)
DEFLABEL (expr__case_55)
  INTERRUPT_CHECK (26, LABEL_27_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_27_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_30]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_27_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_27_11]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd35.Lng))))
    goto label_130;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_129;

DEFLABEL (label_128)
  (Wrd13.Obj) = (current_block [OBJECT_27_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_120;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_12]), 2);

DEFLABEL (label_120)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_122;
  (Wrd15.Obj) = (current_block [OBJECT_27_15]);
  goto label_121;

DEFLABEL (label_122)
  (Wrd15.Obj) = (current_block [OBJECT_27_14]);

DEFLABEL (label_121)
DEFLABEL (label_127)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_124;

DEFLABEL (label_125)
  (Wrd25.Obj) = (Rsp [1]);
  goto label_123;

DEFLABEL (label_124)
  (Wrd25.Obj) = (current_block [OBJECT_27_15]);

DEFLABEL (label_123)
DEFLABEL (label_126)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_129)
  Rsp = (& (Rsp [2]));
  goto label_125;

DEFLABEL (label_130)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_48]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_12]), 2);

DEFLABEL (label_78)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  goto label_129;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_27_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  goto label_125;

DEFLABEL (loop_84)
DEFLABEL (loop_45)
  INTERRUPT_CHECK (26, LABEL_27_38);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_27_1])))
    goto label_131;
  (Wrd94.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [4]);
  (Rsp [7]) = (Wrd95.Obj);
  Rsp = (& (Rsp [6]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd98.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_39])));
  Rhp += 2;
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd98.pObj)));
  Wrd101 = Wrd98;
  (Wrd102.Obj) = (Rsp [1]);
  ((Wrd101.pObj) [2]) = (Wrd102.Obj);
  (Wrd100.Obj) = (Rsp [0]);
  ((Wrd101.pObj) [3]) = (Wrd100.Obj);
  Rvl = (Wrd97.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_131)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_144;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_143)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_142;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_141)
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_140;
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_140;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) (Wrd81.Lng)) < ((unsigned long) (Wrd85.Lng))))
    goto label_140;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd29.pObj) = (& ((Wrd83.pObj) [(Wrd26.Lng)]));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_138;

DEFLABEL (label_139)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_37]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_27_10]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_27_37);

DEFLABEL (label_138)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_137;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_136)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_135;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_135;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_135;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd55.pObj) = (& ((Wrd61.pObj) [(Wrd52.Lng)]));
  ((Wrd55.pObj) [1]) = (Wrd32.Obj);

DEFLABEL (label_134)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_133;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_132)
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_45;

DEFLABEL (label_133)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_46]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_75)
  (Wrd41.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_45]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_9]), 3);

DEFLABEL (label_76)
  goto label_134;

DEFLABEL (label_137)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_44]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_74)
  (Wrd32.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_140)
  (Wrd88.Obj) = (Rsp [3]);
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_43]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_8]), 2);

DEFLABEL (label_77)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  goto label_139;

DEFLABEL (label_142)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_42]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_41]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_27_39);

DEFLABEL (lambda_43)
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
reduct_so_256fa33554a8956e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	1,
	1,
	0,
	2,
	2,
	1,
	0,
	1,
	1,
	0,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 27)
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

static const struct liarc_code_S arr_decl_reduct_so_256fa33554a8956e [27] =
  {
    { "reduct_so_code_1", 4, reduct_so_code_1 },
    { "reduct_so_code_2", 5, reduct_so_code_2 },
    { "reduct_so_code_3", 40, reduct_so_code_3 },
    { "reduct_so_code_4", 6, reduct_so_code_4 },
    { "reduct_so_code_5", 7, reduct_so_code_5 },
    { "reduct_so_code_6", 1, reduct_so_code_6 },
    { "reduct_so_code_7", 1, reduct_so_code_7 },
    { "reduct_so_code_8", 1, reduct_so_code_8 },
    { "reduct_so_code_9", 6, reduct_so_code_9 },
    { "reduct_so_code_10", 6, reduct_so_code_10 },
    { "reduct_so_code_11", 8, reduct_so_code_11 },
    { "reduct_so_code_12", 1, reduct_so_code_12 },
    { "reduct_so_code_13", 2, reduct_so_code_13 },
    { "reduct_so_code_14", 5, reduct_so_code_14 },
    { "reduct_so_code_15", 2, reduct_so_code_15 },
    { "reduct_so_code_16", 32, reduct_so_code_16 },
    { "reduct_so_code_17", 3, reduct_so_code_17 },
    { "reduct_so_code_18", 3, reduct_so_code_18 },
    { "reduct_so_code_19", 1, reduct_so_code_19 },
    { "reduct_so_code_20", 19, reduct_so_code_20 },
    { "reduct_so_code_21", 1, reduct_so_code_21 },
    { "reduct_so_code_22", 1, reduct_so_code_22 },
    { "reduct_so_code_23", 16, reduct_so_code_23 },
    { "reduct_so_code_24", 6, reduct_so_code_24 },
    { "reduct_so_code_25", 32, reduct_so_code_25 },
    { "reduct_so_code_26", 18, reduct_so_code_26 },
    { "reduct_so_code_27", 37, reduct_so_code_27 }
  };

int
decl_reduct_so_256fa33554a8956e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_reduct_so_256fa33554a8956e);
  return (0);
}

DECLARE_COMPILED_CODE ("reduct.so", 3, decl_reduct_so_256fa33554a8956e, reduct_so_256fa33554a8956e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_reduct_so_data_256fa33554a8956e [4362] =
  "\x91\x01\x3e\xaf\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x28\x0d"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xb9\x1d\xb0\x82\x88\xc2\xba\x82\x28\x0d\xbb\x28\x0d\xbc\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83"
  "\x88\x0c\x0d\x0d\x0d\x06\x07\x85\xc2\xbe\x02\xc1\xbf\x08\xc1\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1b\xb2\x82\xb7\x08\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\xb7\x08\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\x08\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xb2\x82\x28\xb3\x28\xb4"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\x82\x28\xb3\x28\xb4\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\xb2\x82\x28\xb3\x28\x0d\x1c\x28\xb4\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb2\x82\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb7\x1b\x08\x07\xb2\x82\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x0c\x08\xb7\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x08\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x1b\x1b\x08\x80\xb7\x0d\x1c\x24\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x1b\xb7\x1b\x08\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1c\x0d\x1c\x81\x1b"
  "\x0d\x1c\x82\x0d\x1c\x0d\x0d\x0d\xb7\x08\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x08\x8c\x1b\x0d\x1c\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\xb2\xc1\xb7\x1b\x28\x0d\x1c\x28\x1b\x28\xb3\x28\x1b\x28"
  "\xb4\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x06\x07\x85\xb6\x02\x0c\xc3\xb2\x0c\x0d\x1b\x0d\x0d\x08\x8a\x0c"
  "\x1b\xb7\x08\x80\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\xb1\x2a\x17\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\xb4\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x50\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x72\x65\x64\x75\x63\x74"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x05\x12\x62\x6c\x6f\x63"
  "\x6b\x2f\x6c\x6f\x6f\x6b\x75\x70\x2d\x6e\x61\x6d\x65\x02\x1e\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x67\x65\x74\x2d\x74\x6f\x70"
  "\x2d\x6c\x65\x76\x65\x6c\x2d\x62\x6c\x6f\x63\x6b\x05\x0f\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2f\x6d\x61\x6b\x65\x04\x07\x0a\x81"
  "\x85\x02\x06\x08\x81\x87\x02\x05\x06\x81\x89\x02\x04\x04\x84\x06"
  "\x09\x14\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x03\x0a"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x04\x07\x6c\x6f\x6f\x6b\x75"
  "\x70\x03\x0c\x0c\x81\x85\x02\x0b\x0a\x81\x85\x02\x0a\x08\x81\x85"
  "\x02\x09\x06\x81\x85\x02\x08\x04\x84\x06\x0b\x15\x02\x19\x42\x61"
  "\x64\x20\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x20\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x07\x67\x6c\x6f\x62\x61\x6c\x06\x71\x75"
  "\x6f\x74\x65\x0a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x0d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x04\x63\x61\x72\x04"
  "\x63\x64\x72\x09\x03\x19\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0a\x04"
  "\x0a\x03\x06\x6c\x69\x73\x74\x3f\x0a\x04\x0e\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x2f\x6d\x61\x6b\x65\x05\x0e\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2f\x6d\x61\x6b\x65\x05\x06\x65\x72\x72\x6f\x72\x0b\x06"
  "\x0c\x61\x63\x63\x65\x73\x73\x2f\x6d\x61\x6b\x65\x08\x34\x52\x81"
  "\x87\x02\x33\x50\x81\x87\x02\x32\x4e\x81\x89\x02\x31\x4c\xff\xff"
  "\x03\x30\x4a\x81\x89\x02\x2f\x48\x81\x89\x02\x2e\x46\x81\x83\x02"
  "\x2d\x44\x81\x89\x02\x2c\x42\x81\x89\x02\x2b\x40\x81\x87\x02\x2a"
  "\x3e\x81\x87\x02\x29\x3c\x81\x87\x02\x28\x3a\x81\x87\x02\x27\x38"
  "\x81\x87\x02\x26\x36\x81\x87\x02\x25\x34\x81\x87\x02\x24\x32\x81"
  "\x87\x02\x23\x30\x81\x87\x02\x22\x2e\x81\x87\x02\x21\x2c\x81\x87"
  "\x02\x20\x2a\x81\x87\x02\x1f\x28\x81\x83\x02\x1e\x26\x85\x08\x1d"
  "\x24\x81\x87\x02\x1c\x22\x81\x87\x02\x1b\x20\x81\x87\x02\x1a\x1e"
  "\x81\x87\x02\x19\x1c\x81\x8b\x02\x18\x1a\x81\x8b\x02\x17\x18\x81"
  "\x89\x02\x16\x16\x81\x89\x02\x15\x14\x81\x89\x02\x14\x12\x81\x87"
  "\x02\x13\x10\x81\x87\x02\x12\x0e\x81\x87\x02\x11\x0c\x81\x89\x02"
  "\x10\x0a\x81\x89\x02\x0f\x08\x81\x87\x02\x0e\x06\x81\x87\x02\x0d"
  "\x04\x81\x87\x02\x51\x6f\x0c\x02\x09\x05\x15\x62\x6c\x6f\x63\x6b"
  "\x2f\x6c\x69\x6d\x69\x74\x65\x64\x2d\x6c\x6f\x6f\x6b\x75\x70\x0d"
  "\x02\x3a\x0e\x81\x8b\x02\x39\x0c\x81\x89\x02\x38\x0a\x81\x8d\x02"
  "\x37\x08\x81\x8d\x02\x36\x06\x81\x89\x02\x35\x04\x85\x08\x0d\x18"
  "\x0e\x02\x09\x03\x02\x41\x10\x81\x85\x02\x40\x0e\x81\x85\x02\x3f"
  "\x0c\x81\x85\x02\x3e\x0a\x81\x85\x02\x3d\x08\x81\x87\x02\x3c\x06"
  "\x81\x85\x02\x3b\x04\x83\x04\x0f\x18\x0f\x02\x06\x11\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x10\x02\x42"
  "\x04\x85\x08\x03\x0a\x11\x02\x08\x06\x10\x02\x43\x04\x86\x0a\x03"
  "\x0a\x12\x02\x09\x44\x04\x85\x08\x03\x13\x02\x0a\x03\x04\x03\x4a"
  "\x0e\x81\x89\x02\x49\x0c\x81\x89\x02\x48\x0a\x81\x89\x02\x47\x08"
  "\x81\x83\x02\x46\x06\x81\x83\x02\x45\x04\x83\x04\x0d\x17\x14\x02"
  "\x0b\x03\x04\x05\x0a\x63\x6f\x6d\x62\x69\x6e\x65\x2d\x31\x15\x04"
  "\x50\x0e\x81\x89\x02\x4f\x0c\x81\x89\x02\x4e\x0a\x81\x89\x02\x4d"
  "\x08\x81\x83\x02\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x0d\x19\x16"
  "\x02\x0c\x03\x04\x07\x61\x70\x70\x65\x6e\x64\x17\x04\x06\x10\x05"
  "\x58\x12\x81\x89\x02\x57\x10\x81\x89\x02\x56\x0e\x81\x89\x02\x55"
  "\x0c\x81\x89\x02\x54\x0a\x81\x89\x02\x53\x08\x81\x83\x02\x52\x06"
  "\x81\x83\x02\x51\x04\x83\x04\x11\x20\x18\x02\x0d\x59\x04\x85\x08"
  "\x03\x19\x02\x0e\x1c\x52\x45\x44\x55\x43\x45\x52\x3a\x20\x4e\x6f"
  "\x20\x73\x75\x70\x70\x6c\x69\x65\x64\x20\x76\x61\x6c\x75\x65\x73"
  "\x04\x0b\x02\x5b\x06\x81\x85\x02\x5a\x04\x83\x04\x05\x0c\x1a\x02"
  "\x0f\x03\x04\x03\x60\x0c\x81\x85\x02\x5f\x0a\x81\x85\x02\x5e\x08"
  "\x81\x83\x02\x5d\x06\x81\x83\x02\x5c\x04\x83\x04\x0b\x15\x1b\x02"
  "\x10\x62\x06\x81\x89\x02\x61\x04\x83\x04\x05\x1c\x02\x11\x09\x10"
  "\x72\x65\x64\x75\x63\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x1d"
  "\x05\x0d\x2d\x3e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1e\x03"
  "\x0c\x66\x69\x6c\x74\x65\x72\x2d\x76\x61\x72\x73\x1f\x03\x05\x0e"
  "\x61\x6e\x79\x2d\x73\x68\x61\x64\x6f\x77\x65\x64\x3f\x20\x04\x06"
  "\x0a\x63\x6f\x6d\x62\x69\x6e\x65\x2d\x32\x21\x04\x0a\x6c\x69\x73"
  "\x74\x2d\x74\x61\x69\x6c\x03\x07\x6c\x65\x6e\x67\x74\x68\x22\x04"
  "\x09\x72\x65\x61\x73\x73\x69\x67\x6e\x04\x0a\x6c\x69\x73\x74\x2d"
  "\x68\x65\x61\x64\x0b\x82\x01\x42\x81\x89\x02\x81\x01\x40\x81\x89"
  "\x02\x80\x01\x3e\x81\x89\x02\x7f\x3c\x81\x89\x02\x7e\x3a\x81\x8d"
  "\x02\x7d\x38\x81\x89\x02\x7c\x36\x81\x85\x02\x7b\x34\x81\x85\x02"
  "\x7a\x32\x81\x8d\x02\x79\x30\x81\x8b\x02\x78\x2e\x81\x89\x02\x77"
  "\x2c\x81\x8f\x02\x76\x2a\x81\x8d\x02\x75\x28\x81\x85\x02\x74\x26"
  "\x81\x8d\x02\x73\x24\x81\x8d\x02\x72\x22\x81\x8b\x02\x71\x20\x81"
  "\x89\x02\x70\x1e\x81\x89\x02\x6f\x1c\x81\x89\x02\x6e\x1a\x81\x89"
  "\x02\x6d\x18\x81\x83\x02\x6c\x16\x81\x8b\x02\x6b\x14\x81\x89\x02"
  "\x6a\x12\x81\x89\x02\x69\x10\x81\x89\x02\x68\x0e\x81\x9f\x02\x67"
  "\x0c\x81\x9f\x02\x66\x0a\x81\x9d\x02\x65\x08\x81\x9b\x02\x64\x06"
  "\x81\x99\x02\x63\x04\x8e\x1a\x41\x60\x23\x02\x12\x13\x69\x64\x65"
  "\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02"
  "\x0e\x0d\x6d\x61\x6b\x65\x2d\x67\x72\x6f\x75\x70\x65\x72\x24\x02"
  "\x85\x01\x08\x81\x99\x02\x84\x01\x06\x81\x99\x02\x83\x01\x04\x8c"
  "\x16\x07\x0f\x25\x02\x13\x07\x69\x6e\x76\x65\x72\x74\x26\x08\x72"
  "\x65\x76\x65\x72\x73\x65\x03\x0e\x24\x02\x88\x01\x08\x81\x99\x02"
  "\x87\x01\x06\x81\x99\x02\x86\x01\x04\x8c\x16\x07\x10\x27\x02\x14"
  "\x06\x61\x70\x70\x6c\x79\x28\x89\x01\x04\x84\x06\x03\x29\x02\x15"
  "\x1f\x44\x45\x43\x4f\x44\x45\x2d\x4f\x50\x54\x49\x4f\x4e\x53\x3a"
  "\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x70\x74\x69\x6f\x6e\x09"
  "\x28\x1b\x44\x45\x43\x4f\x44\x45\x2d\x4f\x50\x54\x49\x4f\x4e\x53"
  "\x3a\x20\x42\x61\x64\x20\x6f\x70\x74\x69\x6f\x6e\x04\x05\x6d\x65"
  "\x6d\x71\x2a\x03\x0a\x04\x0b\x04\x05\x61\x73\x73\x71\x05\x9c\x01"
  "\x28\x81\x87\x02\x9b\x01\x26\x81\x89\x02\x9a\x01\x24\x81\x83\x02"
  "\x99\x01\x22\x81\x85\x02\x98\x01\x20\x81\x83\x02\x97\x01\x1e\x81"
  "\x8d\x02\x96\x01\x1c\x81\x85\x02\x95\x01\x1a\x81\x89\x02\x94\x01"
  "\x18\x81\x85\x02\x93\x01\x16\x81\x87\x02\x92\x01\x14\x81\x87\x02"
  "\x91\x01\x12\x81\x85\x02\x90\x01\x10\x81\x85\x02\x8f\x01\x0e\x81"
  "\x83\x02\x8e\x01\x0c\x81\x83\x02\x8d\x01\x0a\x81\x87\x02\x8c\x01"
  "\x08\x81\x87\x02\x8b\x01\x06\x81\x83\x02\x8a\x01\x04\x85\x08\x27"
  "\x39\x0a\x02\x16\x1c\x52\x45\x44\x55\x43\x45\x2d\x4f\x50\x45\x52"
  "\x41\x54\x4f\x52\x3a\x20\x42\x61\x64\x20\x6f\x70\x74\x69\x6f\x6e"
  "\x04\x0b\x02\x9d\x01\x04\x84\x06\x03\x0a\x2b\x02\x17\x26\x52\x45"
  "\x44\x55\x43\x45\x2d\x4f\x50\x45\x52\x41\x54\x4f\x52\x3a\x20\x49"
  "\x6e\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x73\x05\x0b\x02\x9e\x01\x04\x86\x0a\x03\x0b\x2c\x02\x18"
  "\x08\x77\x72\x61\x70\x70\x65\x72\x2d\x1d\x09\x11\x69\x64\x65\x6e"
  "\x74\x69\x74\x79\x2d\x77\x72\x61\x70\x70\x65\x72\x2e\x02\x05\x1e"
  "\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x2f\x04\x05\x66"
  "\x61\x69\x6c\x30\x03\x0a\x2d\x3e\x77\x72\x61\x70\x70\x65\x72\x31"
  "\x05\xae\x01\x22\x81\x89\x02\xad\x01\x20\x81\x89\x02\xac\x01\x1e"
  "\x81\x89\x02\xab\x01\x1c\x81\x89\x02\xaa\x01\x1a\x81\x87\x02\xa9"
  "\x01\x18\x81\x87\x02\xa8\x01\x16\x81\x89\x02\xa7\x01\x14\x81\x89"
  "\x02\xa6\x01\x12\x81\x87\x02\xa5\x01\x10\x81\x87\x02\xa4\x01\x0e"
  "\x81\x8b\x02\xa3\x01\x0c\x81\x87\x02\xa2\x01\x0a\x81\x89\x02\xa1"
  "\x01\x08\x85\x08\xa0\x01\x06\x81\x8b\x02\x9f\x01\x04\x81\x87\x02"
  "\x21\x35\x32\x02\x19\x0a\x73\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x33"
  "\x1d\x09\x12\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x63\x6f\x6d\x62"
  "\x69\x6e\x65\x72\x34\x02\x05\x1e\x04\x30\x03\x12\x2d\x3e\x6d\x61"
  "\x70\x70\x65\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x65\x72\x35\x04\xb4"
  "\x01\x0e\x81\x89\x02\xb3\x01\x0c\x81\x87\x02\xb2\x01\x0a\x81\x8b"
  "\x02\xb1\x01\x08\x81\x87\x02\xb0\x01\x06\x81\x87\x02\xaf\x01\x04"
  "\x85\x08\x0d\x1e\x36\x02\x1a\x06\x65\x6d\x70\x74\x79\x05\x6e\x6f"
  "\x6e\x65\x33\x07\x73\x69\x6e\x67\x6c\x65\x04\x6f\x6e\x65\x07\x61"
  "\x6c\x77\x61\x79\x73\x04\x61\x6e\x79\x37\x08\x6d\x61\x78\x69\x6d"
  "\x75\x6d\x38\x1d\x0b\x6e\x75\x6c\x6c\x2d\x76\x61\x6c\x75\x65\x1d"
  "\x06\x67\x72\x6f\x75\x70\x39\x05\x6c\x65\x66\x74\x0c\x61\x73\x73"
  "\x6f\x63\x69\x61\x74\x69\x76\x65\x06\x72\x69\x67\x68\x74\x09\x1d"
  "\x39\x33\x2d\x38\x28\x0c\x67\x72\x6f\x75\x70\x2d\x72\x69\x67\x68"
  "\x74\x39\x0b\x67\x72\x6f\x75\x70\x2d\x6c\x65\x66\x74\x38\x34\x04"
  "\x05\x0f\x64\x65\x63\x6f\x64\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x73"
  "\x33\x04\x30\x05\x0d\x77\x69\x74\x68\x2d\x77\x72\x61\x70\x70\x65"
  "\x72\x2d\x05\x0f\x77\x69\x74\x68\x2d\x73\x69\x6e\x67\x6c\x65\x74"
  "\x6f\x6e\x28\x03\x0e\x2d\x3e\x65\x72\x72\x6f\x72\x2d\x74\x68\x75"
  "\x6e\x6b\x1d\x03\x22\x05\x1e\x03\x15\x2d\x3e\x73\x69\x6e\x67\x6c"
  "\x65\x74\x6f\x6e\x2d\x63\x6f\x6d\x62\x69\x6e\x65\x72\x3a\x05\x17"
  "\x03\x2f\x03\x0e\x2d\x3e\x76\x61\x6c\x75\x65\x2d\x74\x68\x75\x6e"
  "\x6b\x17\x06\x0d\x69\x6e\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65"
  "\x3b\x0d\xd4\x01\x42\x81\x91\x02\xd3\x01\x40\x81\x8f\x02\xd2\x01"
  "\x3e\x81\x8d\x02\xd1\x01\x3c\x81\x8d\x02\xd0\x01\x3a\x81\x8b\x02"
  "\xcf\x01\x38\x81\x8f\x02\xce\x01\x36\x81\x8f\x02\xcd\x01\x34\x81"
  "\x9b\x02\xcc\x01\x32\x81\x89\x02\xcb\x01\x30\x81\x95\x02\xca\x01"
  "\x2e\x81\x93\x02\xc9\x01\x2c\x81\x91\x02\xc8\x01\x2a\x81\x91\x02"
  "\xc7\x01\x28\x81\x93\x02\xc6\x01\x26\x81\x93\x02\xc5\x01\x24\x81"
  "\x87\x02\xc4\x01\x22\x81\x8f\x02\xc3\x01\x20\x81\x87\x02\xc2\x01"
  "\x1e\x81\x8b\x02\xc1\x01\x1c\x81\x87\x02\xc0\x01\x1a\x81\x87\x02"
  "\xbf\x01\x18\x81\x87\x02\xbe\x01\x16\x81\x89\x02\xbd\x01\x14\x81"
  "\x8f\x02\xbc\x01\x12\x81\x8f\x02\xbb\x01\x10\x81\x8f\x02\xba\x01"
  "\x0e\x81\x8d\x02\xb9\x01\x0c\x81\x8d\x02\xb8\x01\x0a\x81\x8d\x02"
  "\xb7\x01\x08\x81\x8d\x02\xb6\x01\x06\x81\x89\x02\xb5\x01\x04\x84"
  "\x06\x41\x76\x3c\x02\x1b\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x09\x05\x12\x70\x61\x72\x73\x65\x2d\x72\x65\x70"
  "\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3d\x03\x22\x03\x05\x0d\x04\x06"
  "\x10\x07\xe6\x01\x26\x81\x8b\x02\xe5\x01\x24\x81\x83\x02\xe4\x01"
  "\x22\x81\x83\x02\xe3\x01\x20\x81\x8f\x02\xe2\x01\x1e\x81\x8d\x02"
  "\xe1\x01\x1c\x81\x8b\x02\xe0\x01\x1a\x81\x8d\x02\xdf\x01\x18\x81"
  "\x8d\x02\xde\x01\x16\x81\x8d\x02\xdd\x01\x14\x81\x89\x02\xdc\x01"
  "\x12\x81\x8b\x02\xdb\x01\x10\x81\x8b\x02\xda\x01\x0e\x81\x89\x02"
  "\xd9\x01\x0c\x81\x87\x02\xd8\x01\x0a\x81\x85\x02\xd7\x01\x08\x81"
  "\x8b\x02\xd6\x01\x06\x81\x89\x02\xd5\x01\x04\x84\x06\x25\x3a\x22"
  "\x02\x1c\x1e\x22\x52\x45\x50\x4c\x41\x43\x45\x2d\x4f\x50\x45\x52"
  "\x41\x54\x4f\x52\x3a\x20\x44\x75\x70\x6c\x69\x63\x61\x74\x65\x20"
  "\x61\x72\x69\x74\x79\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x24\x52\x45\x50\x4c\x41\x43\x45\x2d\x4f\x50\x45\x52\x41\x54"
  "\x4f\x52\x3a\x20\x44\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x64\x65"
  "\x66\x61\x75\x6c\x74\x11\x72\x65\x70\x6c\x61\x63\x65\x2d\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x37\x05\x65\x6c\x73\x65\x0a\x6f\x74\x68"
  "\x65\x72\x77\x69\x73\x65\x22\x52\x45\x50\x4c\x41\x43\x45\x2d\x4f"
  "\x50\x45\x52\x41\x54\x4f\x52\x3a\x20\x42\x61\x64\x20\x72\x65\x70"
  "\x6c\x61\x63\x65\x6d\x65\x6e\x74\x09\x04\x0c\x6d\x61\x6b\x65\x2d"
  "\x76\x65\x63\x74\x6f\x72\x03\x2f\x05\x0b\x04\x0b\x04\x2a\x04\x04"
  "\x6d\x61\x78\x05\x1e\x08\x8b\x02\x4c\x81\x85\x02\x8a\x02\x4a\x81"
  "\x91\x02\x89\x02\x48\x81\x83\x02\x88\x02\x46\x81\x85\x02\x87\x02"
  "\x44\x81\x87\x02\x86\x02\x42\x81\x93\x02\x85\x02\x40\x81\x95\x02"
  "\x84\x02\x3e\x81\x95\x02\x83\x02\x3c\x81\x95\x02\x82\x02\x3a\x81"
  "\x95\x02\x81\x02\x38\x81\x93\x02\x80\x02\x36\x81\x91\x02\xff\x01"
  "\x34\x81\x91\x02\xfe\x01\x32\x81\x95\x02\xfd\x01\x30\x81\x95\x02"
  "\xfc\x01\x2e\x81\x95\x02\xfb\x01\x2c\x81\x91\x02\xfa\x01\x2a\x81"
  "\x91\x02\xf9\x01\x28\x81\x91\x02\xf8\x01\x26\x81\x85\x02\xf7\x01"
  "\x24\x81\x97\x02\xf6\x01\x22\x81\x93\x02\xf5\x01\x20\x81\x8d\x02"
  "\xf4\x01\x1e\x81\x93\x02\xf3\x01\x1c\x81\x93\x02\xf2\x01\x1a\x81"
  "\x93\x02\xf1\x01\x18\x81\x91\x02\xf0\x01\x16\x81\x95\x02\xef\x01"
  "\x14\x81\x91\x02\xee\x01\x12\x81\x89\x02\xed\x01\x10\x81\x93\x02"
  "\xec\x01\x0e\x81\x91\x02\xeb\x01\x0c\x81\x91\x02\xea\x01\x0a\x81"
  "\x91\x02\xe9\x01\x08\x81\x8f\x02\xe8\x01\x06\x81\x8f\x02\xe7\x01"
  "\x04\x85\x08\x4b\x6d\x37\x1c\x2f\x2f\x37\x04\x22\x04\x3c\x04\x36"
  "\x04\x32\x08\x2c\x04\x2b\x04\x0a\x04\x29\x04\x27\x04\x25\x04\x23"
  "\x04\x1c\x04\x1b\x04\x1a\x04\x19\x04\x18\x04\x16\x04\x14\x04\x13"
  "\x04\x12\x04\x11\x04\x0f\x04\x0e\x04\x0c\x26\x04\x04\x1c\x3d\x11"
  "\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x2f\x6d\x61\x6b\x65"
  "\x0d\x72\x65\x64\x75\x63\x65\x72\x2f\x6d\x61\x6b\x65\x28\x2d\x3b"
  "\x30\x33\x14\x77\x69\x74\x68\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x73\x2d\x66\x72\x6f\x6d\x38\x39\x24\x26\x17\x1d\x2e\x31\x35\x3a"
  "\x34\x21\x15\x1f\x20\x1e\x10\x68\x61\x6e\x64\x6c\x65\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x1c\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
reduct_so_data_256fa33554a8956e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_reduct_so_data_256fa33554a8956e [0]))), (sizeof (prog_reduct_so_data_256fa33554a8956e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("reduct.so", reduct_so_data_256fa33554a8956e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("reduct.so", "afe4bf7ebdede5ce")
