/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_15 23
#define LABEL_1_16 25
#define LABEL_1_18 27
#define LABEL_1_19 29
#define LABEL_1_4 31
#define LABEL_1_20 33
#define LABEL_1_21 35
#define LABEL_1_22 37
#define LABEL_1_23 39
#define LABEL_1_24 41
#define LABEL_1_26 43
#define LABEL_1_27 45
#define LABEL_1_28 47
#define LABEL_1_30 49
#define LABEL_1_31 51
#define LABEL_1_33 53
#define LABEL_1_34 55
#define LABEL_1_35 57
#define LABEL_1_36 59
#define LABEL_1_37 61
#define LABEL_1_38 63
#define LABEL_1_39 65
#define LABEL_1_40 67
#define LABEL_1_43 69
#define ENVIRONMENT_LABEL_1_3 116
#define DEBUGGING_LABEL_1_2 115
#define OBJECT_1_19 114
#define OBJECT_1_18 113
#define OBJECT_1_17 112
#define OBJECT_1_16 111
#define OBJECT_1_15 110
#define OBJECT_1_14 109
#define OBJECT_1_13 108
#define OBJECT_1_12 107
#define OBJECT_1_11 106
#define OBJECT_1_10 105
#define OBJECT_1_9 104
#define OBJECT_1_8 103
#define OBJECT_1_7 102
#define OBJECT_1_6 101
#define OBJECT_1_5 100
#define OBJECT_1_4 99
#define OBJECT_1_3 98
#define OBJECT_1_2 97
#define OBJECT_1_1 96
#define OBJECT_1_0 95
#define EXECUTE_CACHE_1_45 71
#define EXECUTE_CACHE_1_44 73
#define EXECUTE_CACHE_1_42 75
#define EXECUTE_CACHE_1_41 77
#define EXECUTE_CACHE_1_32 79
#define EXECUTE_CACHE_1_29 81
#define EXECUTE_CACHE_1_25 83
#define EXECUTE_CACHE_1_17 85
#define FREE_REFERENCE_1_6 88
#define FREE_REFERENCE_1_5 89
#define FREE_REFERENCE_1_4 90
#define FREE_REFERENCE_1_3 91
#define FREE_REFERENCE_1_2 92
#define FREE_REFERENCE_1_1 93
#define FREE_REFERENCE_1_0 94
#define FREE_REFERENCES_LABEL_1_0 70
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd204;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd190;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd175;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd149;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd143;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd142;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd120;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd111;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd92;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd227;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd214;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd211;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd233;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd230;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd7;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd254;
  machine_word Wrd253;
  machine_word Wrd167;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd275;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd276;
  machine_word Wrd295;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd296;
  machine_word Wrd287;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd288;
  machine_word Wrd313;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd283;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd327;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd328;
  machine_word Wrd335;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd336;
  machine_word Wrd345;
  machine_word Wrd350;
  machine_word Wrd349;
  machine_word Wrd346;
  machine_word Wrd353;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd354;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_31;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_59;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_29;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_57;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_56;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_55;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_54;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto label_52;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto label_53;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_1_4);
      goto generate_combination_33;

    case 15:
      current_block = (Rpc - LABEL_1_20);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_1_21);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_1_22);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_1_23);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_1_24);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_1_26);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_1_27);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_1_28);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_1_30);
      goto label_40;

    case 24:
      current_block = (Rpc - LABEL_1_31);
      goto label_41;

    case 25:
      current_block = (Rpc - LABEL_1_33);
      goto label_42;

    case 26:
      current_block = (Rpc - LABEL_1_34);
      goto label_43;

    case 27:
      current_block = (Rpc - LABEL_1_35);
      goto label_44;

    case 28:
      current_block = (Rpc - LABEL_1_36);
      goto label_45;

    case 29:
      current_block = (Rpc - LABEL_1_37);
      goto label_46;

    case 30:
      current_block = (Rpc - LABEL_1_38);
      goto label_47;

    case 31:
      current_block = (Rpc - LABEL_1_39);
      goto continuation_14;

    case 32:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_13;

    case 33:
      current_block = (Rpc - LABEL_1_43);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_combination_61)
DEFLABEL (generate_combination_33)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd253.Obj) = (Rsp [0]);
  (Wrd254.uLng) = (OBJECT_TYPE (Wrd253.Obj));
  if (! ((Wrd254.uLng) == 10))
    goto label_127;
  (Wrd250.pObj) = (OBJECT_ADDRESS (Wrd253.Obj));
  (Wrd251.Obj) = ((Wrd250.pObj) [0]);
  (Wrd252.Lng) = (FIXNUM_TO_LONG (Wrd251.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd252.Lng))))
    goto label_127;
  (Wrd7.Obj) = ((Wrd250.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_42]));

DEFLABEL (label_63)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_126;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd17.Lng))))
    goto label_126;
  (Wrd11.Obj) = ((Wrd15.pObj) [16]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_125)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_124;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd33.Lng))))
    goto label_124;
  (Wrd27.Obj) = ((Wrd31.pObj) [14]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_123)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_122;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd49.Lng))))
    goto label_122;
  (Wrd43.Obj) = ((Wrd47.pObj) [10]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_121)
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd60.Obj);
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_113;
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_112;
  Wrd63 = Wrd67;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd78.Obj) = (Rsp [5]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_110;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd77.Lng))))
    goto label_110;
  (Wrd69.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_109)
  (Wrd85.Obj) = (* (Rsp++));
  if ((Wrd69.Obj) == (Wrd85.Obj))
    goto label_101;
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_100;
  Wrd86 = Wrd90;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd101.Obj) = (Rsp [5]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_98;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd100.Lng))))
    goto label_98;
  (Wrd92.Obj) = ((Wrd98.pObj) [1]);

DEFLABEL (label_97)
  (Wrd108.Obj) = (* (Rsp++));
  if (! ((Wrd92.Obj) == (Wrd108.Obj)))
    goto label_94;
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd207.Obj);
  (Wrd208.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd208.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_1_0]))
    goto label_91;
  if (Rvl == (current_block [OBJECT_1_1]))
    goto label_91;
  if (Rvl == (current_block [OBJECT_1_2]))
    goto label_83;
  if (Rvl == (current_block [OBJECT_1_3]))
    goto label_83;
  if (Rvl == (current_block [OBJECT_1_6]))
    goto label_64;
  (Wrd271.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd271.Obj);
  (Wrd272.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd272.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (label_64)
  (Wrd276.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd279.Obj) = ((Wrd276.pObj) [0]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if ((Wrd280.uLng) == 50)
    goto label_82;
  Wrd275 = Wrd279;

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd275.Obj);

DEFLABEL (label_80)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd129.Obj) = (Rsp [6]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 10))
    goto label_79;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd128.Lng))))
    goto label_79;
  (Wrd120.Obj) = ((Wrd126.pObj) [11]);

DEFLABEL (label_78)
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd138.uLng) == 1))
    goto label_77;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (* (--Rsp)) = (Wrd137.Obj);

DEFLABEL (label_76)
  (Wrd144.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd147.Obj) = ((Wrd144.pObj) [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd148.uLng) == 50)
    goto label_75;
  Wrd143 = Wrd147;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd158.Obj) = (Rsp [1]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if (! ((Wrd159.uLng) == 10))
    goto label_73;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd158.Obj));
  (Wrd156.Obj) = ((Wrd155.pObj) [0]);
  (Wrd157.Lng) = (FIXNUM_TO_LONG (Wrd156.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd157.Lng))))
    goto label_73;
  (Wrd149.Obj) = ((Wrd155.pObj) [1]);

DEFLABEL (label_72)
  (Wrd165.Obj) = (* (Rsp++));
  if ((Wrd149.Obj) == (Wrd165.Obj))
    goto label_67;

DEFLABEL (label_66)
  (Wrd167.Obj) = (current_block [OBJECT_1_19]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd167.Obj);
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (Wrd174.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd174.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_44]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_39);
  (Rsp [5]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_67)
  (Wrd184.Obj) = (Rsp [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if (! ((Wrd185.uLng) == 10))
    goto label_71;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd182.Obj) = ((Wrd181.pObj) [0]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd183.Lng))))
    goto label_71;
  (Wrd175.Obj) = ((Wrd181.pObj) [17]);

DEFLABEL (label_70)
  if ((Wrd175.Obj) == (current_block [OBJECT_1_17]))
    goto label_66;
  (Wrd192.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd192.Obj);
  (Wrd193.Obj) = (current_block [OBJECT_1_18]);
  (Rsp [1]) = (Wrd193.Obj);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if ((Wrd204.uLng) == 10)
    goto label_69;

DEFLABEL (label_68)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_69)
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd201.Obj) = ((Wrd200.pObj) [0]);
  (Wrd202.Lng) = (FIXNUM_TO_LONG (Wrd201.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd202.Lng))))
    goto label_68;
  (Wrd167.Obj) = ((Wrd200.pObj) [15]);
  Rsp = (& (Rsp [3]));
  goto label_65;

DEFLABEL (label_71)
  (Wrd186.Obj) = (Rsp [0]);
  (Wrd187.Obj) = (current_block [OBJECT_1_16]);
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_47)
  (Wrd175.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd160.Obj) = (Rsp [1]);
  (Wrd161.Obj) = (current_block [OBJECT_1_12]);
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_46)
  (Wrd149.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_36])), (Wrd144.pObj));

DEFLABEL (label_45)
  (Wrd143.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_15]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd131.Obj) = (Rsp [6]);
  (Wrd132.Obj) = (current_block [OBJECT_1_14]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_43)
  (Wrd120.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_16])), (Wrd276.pObj));

DEFLABEL (label_51)
  (Wrd275.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd307.Obj) = (Rsp [5]);
  (Wrd308.uLng) = (OBJECT_TYPE (Wrd307.Obj));
  if (! ((Wrd308.uLng) == 10))
    goto label_90;
  (Wrd304.pObj) = (OBJECT_ADDRESS (Wrd307.Obj));
  (Wrd305.Obj) = ((Wrd304.pObj) [0]);
  (Wrd306.Lng) = (FIXNUM_TO_LONG (Wrd305.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd306.Lng))))
    goto label_90;
  (Wrd283.Obj) = ((Wrd304.pObj) [8]);
  if ((Wrd283.Obj) == ((SCHEME_OBJECT) 0))
    goto label_87;

DEFLABEL (label_86)
  (Wrd296.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd299.Obj) = ((Wrd296.pObj) [0]);
  (Wrd300.uLng) = (OBJECT_TYPE (Wrd299.Obj));
  if ((Wrd300.uLng) == 50)
    goto label_85;
  Wrd295 = Wrd299;

DEFLABEL (label_84)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd295.Obj);
  goto label_80;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd296.pObj));

DEFLABEL (label_53)
  (Wrd295.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd288.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd291.Obj) = ((Wrd288.pObj) [0]);
  (Wrd292.uLng) = (OBJECT_TYPE (Wrd291.Obj));
  if ((Wrd292.uLng) == 50)
    goto label_89;
  Wrd287 = Wrd291;

DEFLABEL (label_88)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd287.Obj);
  goto label_80;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd288.pObj));

DEFLABEL (label_52)
  (Wrd287.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  (Wrd309.Obj) = (Rsp [5]);
  (Wrd310.Obj) = (current_block [OBJECT_1_4]);
  (Wrd313.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd313.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  (* (--Rsp)) = (Wrd309.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_86;

DEFLABEL (label_91)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_93;
  Wrd317 = Wrd321;

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd317.Obj);
  goto label_80;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd318.pObj));

DEFLABEL (label_55)
  (Wrd317.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd112.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd115.Obj) = ((Wrd112.pObj) [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd116.uLng) == 50)
    goto label_96;
  Wrd111 = Wrd115;

DEFLABEL (label_95)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd111.Obj);
  goto label_80;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd112.pObj));

DEFLABEL (label_42)
  (Wrd111.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.Obj) = (current_block [OBJECT_1_12]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_41)
  (Wrd92.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd87.pObj));

DEFLABEL (label_40)
  (Wrd86.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd211.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd211.Obj);
  (Wrd221.Obj) = (Rsp [5]);
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if (! ((Wrd222.uLng) == 10))
    goto label_108;
  (Wrd218.pObj) = (OBJECT_ADDRESS (Wrd221.Obj));
  (Wrd219.Obj) = ((Wrd218.pObj) [0]);
  (Wrd220.Lng) = (FIXNUM_TO_LONG (Wrd219.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd220.Lng))))
    goto label_108;
  (Wrd214.Obj) = ((Wrd218.pObj) [3]);
  (* (--Rsp)) = (Wrd214.Obj);

DEFLABEL (label_107)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  (Wrd328.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd331.Obj) = ((Wrd328.pObj) [0]);
  (Wrd332.uLng) = (OBJECT_TYPE (Wrd331.Obj));
  if ((Wrd332.uLng) == 50)
    goto label_103;
  Wrd327 = Wrd331;

DEFLABEL (label_102)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd327.Obj);
  goto label_80;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd328.pObj));

DEFLABEL (label_56)
  (Wrd327.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_104)
  (Wrd336.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd339.Obj) = ((Wrd336.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_106;
  Wrd335 = Wrd339;

DEFLABEL (label_105)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd335.Obj);
  goto label_80;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd336.pObj));

DEFLABEL (label_57)
  (Wrd335.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd223.Obj) = (Rsp [5]);
  (Wrd224.Obj) = (current_block [OBJECT_1_13]);
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd80.Obj) = (Rsp [5]);
  (Wrd81.Obj) = (current_block [OBJECT_1_12]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_39)
  (Wrd69.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_26])), (Wrd64.pObj));

DEFLABEL (label_38)
  (Wrd63.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_113)
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd230.Obj);
  (Wrd240.Obj) = (Rsp [6]);
  (Wrd241.uLng) = (OBJECT_TYPE (Wrd240.Obj));
  if (! ((Wrd241.uLng) == 10))
    goto label_120;
  (Wrd237.pObj) = (OBJECT_ADDRESS (Wrd240.Obj));
  (Wrd238.Obj) = ((Wrd237.pObj) [0]);
  (Wrd239.Lng) = (FIXNUM_TO_LONG (Wrd238.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd239.Lng))))
    goto label_120;
  (Wrd233.Obj) = ((Wrd237.pObj) [10]);
  (* (--Rsp)) = (Wrd233.Obj);

DEFLABEL (label_119)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd346.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd349.Obj) = ((Wrd346.pObj) [0]);
  (Wrd350.uLng) = (OBJECT_TYPE (Wrd349.Obj));
  if ((Wrd350.uLng) == 50)
    goto label_115;
  Wrd345 = Wrd349;

DEFLABEL (label_114)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd345.Obj);
  goto label_80;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd346.pObj));

DEFLABEL (label_58)
  (Wrd345.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd354.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd357.Obj) = ((Wrd354.pObj) [0]);
  (Wrd358.uLng) = (OBJECT_TYPE (Wrd357.Obj));
  if ((Wrd358.uLng) == 50)
    goto label_118;
  Wrd353 = Wrd357;

DEFLABEL (label_117)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd353.Obj);
  goto label_80;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd354.pObj));

DEFLABEL (label_59)
  (Wrd353.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd242.Obj) = (Rsp [6]);
  (Wrd243.Obj) = (current_block [OBJECT_1_11]);
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd242.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (current_block [OBJECT_1_11]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_1_10]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_1_9]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_127)
  (Wrd255.Obj) = (Rsp [0]);
  (Wrd256.Obj) = (current_block [OBJECT_1_8]);
  (Wrd259.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd259.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd255.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_62;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd167.Obj) = Rvl;
  goto label_65;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  goto label_80;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define LABEL_2_10 9
#define LABEL_2_11 11
#define LABEL_2_12 13
#define LABEL_2_8 15
#define LABEL_2_13 17
#define LABEL_2_15 19
#define LABEL_2_16 21
#define LABEL_2_20 23
#define LABEL_2_23 25
#define LABEL_2_26 27
#define LABEL_2_27 29
#define LABEL_2_28 31
#define LABEL_2_29 33
#define LABEL_2_21 35
#define LABEL_2_24 37
#define LABEL_2_34 39
#define LABEL_2_37 41
#define LABEL_2_32 43
#define LABEL_2_40 45
#define LABEL_2_41 47
#define LABEL_2_42 49
#define LABEL_2_43 51
#define LABEL_2_46 53
#define LABEL_2_47 55
#define LABEL_2_48 57
#define LABEL_2_30 59
#define LABEL_2_35 61
#define LABEL_2_50 63
#define LABEL_2_36 65
#define LABEL_2_39 67
#define LABEL_2_44 69
#define LABEL_2_45 71
#define ENVIRONMENT_LABEL_2_3 117
#define DEBUGGING_LABEL_2_2 116
#define OBJECT_2_10 115
#define OBJECT_2_9 114
#define OBJECT_2_8 113
#define OBJECT_2_7 112
#define OBJECT_2_6 111
#define OBJECT_2_5 110
#define OBJECT_2_4 109
#define OBJECT_2_3 108
#define OBJECT_2_2 107
#define OBJECT_2_1 106
#define OBJECT_2_0 105
#define EXECUTE_CACHE_2_52 73
#define EXECUTE_CACHE_2_51 75
#define EXECUTE_CACHE_2_49 77
#define EXECUTE_CACHE_2_38 79
#define EXECUTE_CACHE_2_33 81
#define EXECUTE_CACHE_2_31 83
#define EXECUTE_CACHE_2_25 85
#define EXECUTE_CACHE_2_22 87
#define EXECUTE_CACHE_2_19 89
#define EXECUTE_CACHE_2_18 91
#define EXECUTE_CACHE_2_17 93
#define EXECUTE_CACHE_2_14 95
#define EXECUTE_CACHE_2_9 97
#define EXECUTE_CACHE_2_6 99
#define FREE_REFERENCE_2_2 102
#define FREE_REFERENCE_2_1 103
#define FREE_REFERENCE_2_0 104
#define FREE_REFERENCES_LABEL_2_0 72
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd86;
  machine_word Wrd89;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd114;
  machine_word Wrd124;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd72;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd5;
  machine_word Wrd77;
  machine_word Wrd126;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd20;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd51;
  machine_word Wrd50;
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
      current_block = (Rpc - LABEL_2_4);
      goto invocation_jump_45;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_41;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_2_20);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_2_23);
      goto label_50;

    case 12:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_2_27);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_2_28);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_2_29);
      goto label_54;

    case 16:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_34;

    case 18:
      current_block = (Rpc - LABEL_2_34);
      goto lambda_12;

    case 19:
      current_block = (Rpc - LABEL_2_37);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_35;

    case 21:
      current_block = (Rpc - LABEL_2_40);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_2_42);
      goto lambda_33;

    case 24:
      current_block = (Rpc - LABEL_2_43);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_2_46);
      goto label_58;

    case 26:
      current_block = (Rpc - LABEL_2_47);
      goto label_60;

    case 27:
      current_block = (Rpc - LABEL_2_48);
      goto label_59;

    case 28:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_11;

    case 30:
      current_block = (Rpc - LABEL_2_50);
      goto label_61;

    case 31:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_10;

    case 32:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_37;

    case 33:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_32;

    case 34:
      current_block = (Rpc - LABEL_2_45);
      goto continuation_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_jump_63)
DEFLABEL (invocation_jump_45)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (label_66)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_83;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd38.Lng))))
    goto label_83;
  (Wrd7.Obj) = ((Wrd36.pObj) [8]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_77;

DEFLABEL (label_76)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;

DEFLABEL (label_67)
  (Wrd11.pObj) = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_12;

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_75;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_75;
  (Wrd16.Obj) = ((Wrd22.pObj) [4]);

DEFLABEL (label_74)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_73;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_73;
  (Wrd33.Obj) = ((Wrd36.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_72)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_71;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd53.Lng))))
    goto label_71;
  (Wrd47.Obj) = ((Wrd51.pObj) [17]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_70)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (Rsp [0]);
  if (! ((Wrd61.Obj) == (Wrd62.Obj)))
    goto label_69;
  (Wrd71.pObj) = (& (Rsp [3]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd71.pObj)));
  (Rsp [1]) = (Wrd73.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_12;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.pObj) = (& (Rsp [5]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd69.Obj);
  goto lambda_12;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_49]));

DEFLABEL (label_71)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_2_5]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd41.Obj) = (current_block [OBJECT_2_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_2_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_52)
  (Wrd16.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_82;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_82;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_81)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_78;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  Rdl = (& (Rsp [3]));
  goto lambda_33;

DEFLABEL (label_78)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_80;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_80;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_79)
  Rdl = (& (Rsp [2]));
  goto lambda_33;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_2_39);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (label_80)
  (Wrd11.Obj) = (Rsp [8]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_2_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_2_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (label_84)
  (Wrd14.Obj) = (Rsp [2]);
  if (! ((Wrd14.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_93;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_2_7);

DEFLABEL (label_93)
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_92;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd39.Lng))))
    goto label_92;
  (Wrd20.Obj) = ((Wrd37.pObj) [8]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;

DEFLABEL (label_88)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_87;
  Wrd28 = Wrd32;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_85)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd29.pObj));

DEFLABEL (label_48)
  (Wrd28.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_91;
  Wrd22 = Wrd26;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_85;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd23.pObj));

DEFLABEL (label_47)
  (Wrd22.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.Obj) = (current_block [OBJECT_2_1]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_88;

DEFLABEL (lambda_64)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_2_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_97;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng))))
    goto label_97;
  (Wrd11.Obj) = ((Wrd21.pObj) [15]);

DEFLABEL (label_96)
  (Wrd38.Obj) = (current_block [OBJECT_2_7]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd50.Obj) = ((Wrd43.pObj) [3]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_2_8]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_52]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_95;
  Wrd6 = Wrd10;

DEFLABEL (label_94)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_51]));

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_50])), (Wrd7.pObj));

DEFLABEL (label_61)
  (Wrd6.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);
  (Wrd31.Obj) = (current_block [OBJECT_2_6]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_96;

DEFLABEL (lambda_65)
DEFLABEL (lambda_33)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_42);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_107;
  Wrd5 = Wrd13;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_45]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_105;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd37.Lng))))
    goto label_105;
  (Wrd25.Obj) = ((Wrd35.pObj) [15]);

DEFLABEL (label_104)
  (Wrd56.Obj) = (current_block [OBJECT_2_7]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (Rsp [6]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [6]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd112.Obj) = ((Wrd61.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 10))
    goto label_103;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd109.Lng))))
    goto label_103;
  (Wrd72.Obj) = ((Wrd107.pObj) [18]);
  if ((Wrd72.Obj) == ((SCHEME_OBJECT) 0))
    goto label_102;

DEFLABEL (label_101)
  (Wrd97.Obj) = (Rsp [8]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 26))
    goto label_100;
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  (Wrd99.Lng) = ((Wrd101.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd99.Lng)))
    goto label_100;
  (Wrd77.Obj) = (LONG_TO_FIXNUM (Wrd99.Lng));

DEFLABEL (label_99)
  Rsp = (& (Rsp [1]));
  (Wrd86.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd86.Obj));

DEFLABEL (label_98)
  (Wrd78.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd85.Obj) = (current_block [OBJECT_2_10]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_45);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_52]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_2_44);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_51]));

DEFLABEL (label_100)
  (Wrd93.Obj) = (Rsp [8]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_48]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_59)
  (Wrd89.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd77.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd77.Obj) = (Rsp [8]);
  goto label_99;

DEFLABEL (label_103)
  (Wrd119.Obj) = (Rsp [9]);
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd118.Obj) = ((Wrd120.pObj) [0]);
  (Wrd121.Obj) = (current_block [OBJECT_2_9]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_47]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_60)
  (Wrd114.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd114.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  goto label_101;

DEFLABEL (label_105)
  (Wrd47.Obj) = (Rsp [6]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [2]);
  (Wrd49.Obj) = (current_block [OBJECT_2_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_58)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_43])), (Wrd6.pObj));

DEFLABEL (label_57)
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_106;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_41);
  (Wrd126.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd77.Obj) = Rvl;
  goto label_98;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_8 7
#define LABEL_3_10 9
#define LABEL_3_11 11
#define LABEL_3_6 13
#define LABEL_3_13 15
#define LABEL_3_9 17
#define LABEL_3_15 19
#define LABEL_3_16 21
#define ENVIRONMENT_LABEL_3_3 44
#define DEBUGGING_LABEL_3_2 43
#define OBJECT_3_5 42
#define OBJECT_3_4 41
#define OBJECT_3_3 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_19 23
#define EXECUTE_CACHE_3_18 25
#define EXECUTE_CACHE_3_17 27
#define EXECUTE_CACHE_3_14 29
#define EXECUTE_CACHE_3_12 31
#define EXECUTE_CACHE_3_7 33
#define FREE_REFERENCE_3_0 36
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd47;
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
      goto invocation_adjust_closure_prefix_14;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_adjust_closure_prefix_21)
DEFLABEL (invocation_adjust_closure_prefix_14)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd11.pObj) [18]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_28;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd47.Lng) == 0))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_27;
  Wrd17 = Wrd21;

DEFLABEL (label_26)
  Wrd16 = Wrd17;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_25;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_25;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_24)
  (Wrd39.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (label_25)
  (Wrd32.Obj) = (current_block [OBJECT_3_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_10])), (Wrd18.pObj));

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_3_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_2 11
#define OBJECT_4_1 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto rtl_bump_closure_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_bump_closure_7)
DEFLABEL (rtl_bump_closure_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto invocation_apply_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_apply_3)
DEFLABEL (invocation_apply_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_10 13
#define ENVIRONMENT_LABEL_6_3 28
#define DEBUGGING_LABEL_6_2 27
#define OBJECT_6_1 26
#define OBJECT_6_0 25
#define EXECUTE_CACHE_6_13 15
#define EXECUTE_CACHE_6_12 17
#define EXECUTE_CACHE_6_11 19
#define EXECUTE_CACHE_6_9 21
#define FREE_REFERENCE_6_0 24
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_6_4);
      goto invocation_apply__7;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_apply__11)
DEFLABEL (invocation_apply__7)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Obj) = (current_block [OBJECT_6_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_9 9
#define LABEL_7_8 11
#define LABEL_7_13 13
#define LABEL_7_10 15
#define LABEL_7_15 17
#define LABEL_7_16 19
#define LABEL_7_18 21
#define ENVIRONMENT_LABEL_7_3 40
#define DEBUGGING_LABEL_7_2 39
#define OBJECT_7_3 38
#define OBJECT_7_2 37
#define OBJECT_7_1 36
#define OBJECT_7_0 35
#define EXECUTE_CACHE_7_17 23
#define EXECUTE_CACHE_7_14 25
#define EXECUTE_CACHE_7_12 27
#define EXECUTE_CACHE_7_11 29
#define EXECUTE_CACHE_7_7 31
#define FREE_REFERENCE_7_0 34
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_7_4);
      goto invocation_primitive_11;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_7_18);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_primitive_17)
DEFLABEL (invocation_primitive_11)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_13);

DEFLABEL (label_24)
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_23;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_23;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_19)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_21;
  Wrd11 = Wrd15;

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_18])), (Wrd12.pObj));

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  (Wrd15.Obj) = (current_block [OBJECT_7_1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define TAG_8_7 1
#define LABEL_8_5 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define ENVIRONMENT_LABEL_8_3 16
#define DEBUGGING_LABEL_8_2 15
#define EXECUTE_CACHE_8_10 13
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_8_4);
      goto prefix_append_4;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prefix_append_7)
DEFLABEL (prefix_append_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_6])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  ((Wrd14.pObj) [2]) = (Wrd7.Obj);
  ((Wrd14.pObj) [3]) = (Wrd5.Obj);
  Rvl = (Wrd10.Obj);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [1]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Wrd18.Obj);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));

DEFLABEL (label_14)
  goto label_12;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_8_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_5);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_6 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define LABEL_9_11 15
#define LABEL_9_4 17
#define LABEL_9_14 19
#define LABEL_9_15 21
#define LABEL_9_16 23
#define LABEL_9_17 25
#define LABEL_9_12 27
#define LABEL_9_19 29
#define ENVIRONMENT_LABEL_9_3 49
#define DEBUGGING_LABEL_9_2 48
#define OBJECT_9_7 47
#define OBJECT_9_6 46
#define OBJECT_9_5 45
#define OBJECT_9_4 44
#define OBJECT_9_3 43
#define OBJECT_9_2 42
#define OBJECT_9_1 41
#define OBJECT_9_0 40
#define EXECUTE_CACHE_9_20 31
#define EXECUTE_CACHE_9_18 33
#define EXECUTE_CACHE_9_13 35
#define FREE_REFERENCE_9_1 38
#define FREE_REFERENCE_9_0 39
#define FREE_REFERENCES_LABEL_9_0 30
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
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
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd113;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd99;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd106;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd76;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_9_4);
      goto generate_link_prefix_15;

    case 8:
      current_block = (Rpc - LABEL_9_14);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_9_15);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_9_16);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_9_17);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_9_19);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_link_prefix_29)
DEFLABEL (generate_link_prefix_15)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_41;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_41;
  (Wrd10.Obj) = ((Wrd14.pObj) [16]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_39;
  Wrd26 = Wrd30;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_37;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_37;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_36)
  (Wrd48.Obj) = (* (Rsp++));
  if ((Wrd32.Obj) == (Wrd48.Obj))
    goto label_33;

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_31)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_35;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd60.Lng))))
    goto label_35;
  (Wrd52.Obj) = ((Wrd58.pObj) [4]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (label_35)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_9_6]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_20)
  (Wrd52.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_9_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_19)
  (Wrd32.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_15])), (Wrd27.pObj));

DEFLABEL (label_18)
  (Wrd26.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_9_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_57;
  Wrd70 = Wrd74;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_55;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd84.Lng))))
    goto label_55;
  (Wrd76.Obj) = ((Wrd82.pObj) [11]);

DEFLABEL (label_54)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_53;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [0]);

DEFLABEL (label_52)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd106.uLng) == 10))
    goto label_51;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd105.Lng))))
    goto label_51;
  (Wrd99.Obj) = ((Wrd103.pObj) [1]);

DEFLABEL (label_50)
  (Wrd112.Obj) = (* (Rsp++));
  if ((Wrd99.Obj) == (Wrd112.Obj))
    goto label_47;
  (Wrd122.Obj) = (Rsp [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 10))
    goto label_46;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd121.Lng))))
    goto label_46;
  (Wrd113.Obj) = ((Wrd119.pObj) [9]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd113.Obj);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd12.Lng))))
    goto label_44;
  (Wrd7.Obj) = ((Wrd10.pObj) [20]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_43)
  (Wrd19.Obj) = (Rsp [0]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd22.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd15.Obj) = (current_block [OBJECT_9_7]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd125.Obj) = (current_block [OBJECT_9_4]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_25)
  (Wrd113.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd135.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd138.Obj) = ((Wrd135.pObj) [0]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if ((Wrd139.uLng) == 50)
    goto label_49;
  Wrd134 = Wrd138;

DEFLABEL (label_48)
  Rvl = (Wrd134.Obj);
  goto label_30;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_10])), (Wrd135.pObj));

DEFLABEL (label_26)
  (Wrd134.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd108.Obj) = (current_block [OBJECT_9_3]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_24)
  (Wrd99.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_23)
  (Wrd92.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.Obj) = (current_block [OBJECT_9_0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_22)
  (Wrd76.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd71.pObj));

DEFLABEL (label_21)
  (Wrd70.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_4 15
#define OBJECT_10_3 14
#define OBJECT_10_2 13
#define OBJECT_10_1 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto link_prefix_subproblem_5;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_prefix_subproblem_8)
DEFLABEL (link_prefix_subproblem_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_0]);
  (Wrd13.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_10_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define OBJECT_11_1 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_9 9
#define EXECUTE_CACHE_11_8 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto link_prefix_reduction_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_prefix_reduction_5)
DEFLABEL (link_prefix_reduction_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_9 13
#define LABEL_12_11 15
#define LABEL_12_15 17
#define LABEL_12_17 19
#define LABEL_12_18 21
#define LABEL_12_16 23
#define ENVIRONMENT_LABEL_12_3 48
#define DEBUGGING_LABEL_12_2 47
#define OBJECT_12_7 46
#define OBJECT_12_6 45
#define OBJECT_12_5 44
#define OBJECT_12_4 43
#define OBJECT_12_3 42
#define OBJECT_12_2 41
#define OBJECT_12_1 40
#define OBJECT_12_0 39
#define EXECUTE_CACHE_12_20 25
#define EXECUTE_CACHE_12_19 27
#define EXECUTE_CACHE_12_14 29
#define EXECUTE_CACHE_12_13 31
#define EXECUTE_CACHE_12_12 33
#define EXECUTE_CACHE_12_10 35
#define FREE_REFERENCE_12_0 38
#define FREE_REFERENCES_LABEL_12_0 24
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_12_4);
      goto generate_invocation_prefix_13;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12_15);
      goto lambda_9;

    case 8:
      current_block = (Rpc - LABEL_12_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_12_18);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_invocation_prefix_23)
DEFLABEL (generate_invocation_prefix_13)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [18]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_36;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_36;
  (Wrd23.Obj) = ((Wrd27.pObj) [9]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_35)
  (Wrd37.Obj) = (Rsp [1]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_25)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_34;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd50.Lng))))
    goto label_34;
  (Wrd44.Obj) = ((Wrd48.pObj) [17]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_33)
  (Wrd58.Obj) = (Rsp [0]);
  if (! ((Wrd58.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_32;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [1]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_31)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_30;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);

DEFLABEL (label_29)
  if (! ((Wrd69.Obj) == (current_block [OBJECT_12_6])))
    goto label_27;
  (Wrd83.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd84.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (label_27)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_30)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 1);

DEFLABEL (label_19)
  (Wrd69.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Obj) = (current_block [OBJECT_12_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_12_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_24)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_12_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_42;
  Wrd10 = Wrd14;

DEFLABEL (label_41)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_40;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_40;
  (Wrd17.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (label_40)
  (Wrd25.Obj) = (current_block [OBJECT_12_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_17])), (Wrd11.pObj));

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_11 11
#define LABEL_13_13 13
#define LABEL_13_9 15
#define LABEL_13_12 17
#define LABEL_13_15 19
#define LABEL_13_18 21
#define LABEL_13_19 23
#define LABEL_13_21 25
#define LABEL_13_20 27
#define ENVIRONMENT_LABEL_13_3 43
#define DEBUGGING_LABEL_13_2 42
#define OBJECT_13_4 41
#define OBJECT_13_3 40
#define OBJECT_13_2 39
#define OBJECT_13_1 38
#define OBJECT_13_0 37
#define EXECUTE_CACHE_13_17 29
#define EXECUTE_CACHE_13_16 31
#define EXECUTE_CACHE_13_14 33
#define EXECUTE_CACHE_13_10 35
#define FREE_REFERENCES_LABEL_13_0 28
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto invocation_prefix_reuse_adjustment_18;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_11);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_13_13);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_13_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_13_18);
      goto loop_9;

    case 10:
      current_block = (Rpc - LABEL_13_19);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_13_21);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_prefix_reuse_adjustment_27)
DEFLABEL (invocation_prefix_reuse_adjustment_18)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_39;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_39;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_39;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_38)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.pObj) = (& (Rsp [2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  goto loop_9;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_37;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd40.Lng) > (Wrd42.Lng))
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_36;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = (0 - (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_36;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_35)
  (Wrd33.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_34;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd20.Lng) == 0)
    goto label_33;

DEFLABEL (label_32)
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (label_33)
  (Wrd16.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_17]));

DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (label_36)
  (Wrd20.Obj) = (current_block [OBJECT_13_0]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_39)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (loop_29)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_13_18);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_46;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_45)
  Rdl = (& (Rsp [3]));
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.Obj) = (Rsp [1]);
  if (! ((Wrd25.Obj) == (Wrd26.Obj)))
    goto label_40;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_40)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_44;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_44;
  (Wrd38.Obj) = ((Wrd42.pObj) [4]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_43)
  goto loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 26)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_42)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_41;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_41;
  Rvl = (LONG_TO_FIXNUM (Wrd13.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.Obj) = (current_block [OBJECT_13_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_25)
  (Wrd47.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd47.Obj));
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_9 9
#define EXECUTE_CACHE_14_8 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_14_4);
      goto invocation_prefix_move_frame_up_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_prefix_move_frame_up_5)
DEFLABEL (invocation_prefix_move_frame_up_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_8 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define ENVIRONMENT_LABEL_15_3 26
#define DEBUGGING_LABEL_15_2 25
#define OBJECT_15_1 24
#define OBJECT_15_0 23
#define EXECUTE_CACHE_15_13 13
#define EXECUTE_CACHE_15_12 15
#define EXECUTE_CACHE_15_11 17
#define EXECUTE_CACHE_15_7 19
#define FREE_REFERENCE_15_0 22
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_4);
      goto make_move_frame_up_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_move_frame_up_10)
DEFLABEL (make_move_frame_up_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_8])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_7 7
#define TAG_16_8 2
#define LABEL_16_13 9
#define LABEL_16_14 11
#define LABEL_16_9 13
#define LABEL_16_11 15
#define TAG_16_12 6
#define LABEL_16_16 17
#define LABEL_16_17 19
#define LABEL_16_18 21
#define ENVIRONMENT_LABEL_16_3 42
#define DEBUGGING_LABEL_16_2 41
#define OBJECT_16_4 40
#define OBJECT_16_3 39
#define OBJECT_16_2 38
#define OBJECT_16_1 37
#define OBJECT_16_0 36
#define EXECUTE_CACHE_16_21 23
#define EXECUTE_CACHE_16_20 25
#define EXECUTE_CACHE_16_19 27
#define EXECUTE_CACHE_16_15 29
#define EXECUTE_CACHE_16_10 31
#define FREE_REFERENCE_16_1 34
#define FREE_REFERENCE_16_0 35
#define FREE_REFERENCES_LABEL_16_0 22
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgcomb_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_16_4);
      goto invocation_prefix_dynamic_link_11;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_16_13);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_16_14);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_16_16);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invocation_prefix_dynamic_link_17)
DEFLABEL (invocation_prefix_dynamic_link_11)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_7])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_15]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_16_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_24;
  Wrd15 = Wrd19;

DEFLABEL (label_23)
  Wrd14 = Wrd15;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_22;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_15]));

DEFLABEL (label_22)
  (Wrd30.Obj) = (current_block [OBJECT_16_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_13])), (Wrd16.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_16_11);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd33.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_20]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_16])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define TAG_16 9
#define LABEL_24 23
#define LABEL_17 25
#define TAG_18 11
#define LABEL_19 27
#define TAG_20 12
#define LABEL_28 29
#define LABEL_31 31
#define LABEL_23 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_30 39
#define LABEL_39 41
#define LABEL_29 43
#define LABEL_42 45
#define LABEL_44 47
#define LABEL_47 49
#define LABEL_33 51
#define LABEL_35 53
#define LABEL_41 55
#define LABEL_52 57
#define LABEL_55 59
#define LABEL_37 61
#define TAG_38 29
#define LABEL_43 63
#define LABEL_45 65
#define LABEL_46 67
#define LABEL_50 69
#define LABEL_65 71
#define LABEL_51 73
#define LABEL_53 75
#define LABEL_54 77
#define LABEL_56 79
#define LABEL_70 81
#define LABEL_57 83
#define LABEL_58 85
#define TAG_59 41
#define LABEL_72 87
#define LABEL_75 89
#define LABEL_63 91
#define LABEL_66 93
#define TAG_67 45
#define LABEL_77 95
#define LABEL_80 97
#define LABEL_68 99
#define LABEL_69 101
#define LABEL_71 103
#define LABEL_73 105
#define LABEL_74 107
#define LABEL_78 109
#define LABEL_79 111
#define LABEL_81 113
#define LABEL_85 115
#define LABEL_86 117
#define LABEL_83 119
#define LABEL_84 121
#define LABEL_89 123
#define LABEL_90 125
#define LABEL_88 127
#define LABEL_92 129
#define LABEL_93 131
#define LABEL_91 133
#define LABEL_95 135
#define LABEL_96 137
#define LABEL_97 139
#define LABEL_98 141
#define ENVIRONMENT_LABEL_3 220
#define DEBUGGING_LABEL_2 219
#define PURIFICATION_ROOT 218
#define OBJECT_31 217
#define OBJECT_30 216
#define OBJECT_29 215
#define OBJECT_28 214
#define OBJECT_27 213
#define OBJECT_26 212
#define OBJECT_25 211
#define OBJECT_24 210
#define OBJECT_23 209
#define OBJECT_22 208
#define OBJECT_21 207
#define OBJECT_20 206
#define OBJECT_19 205
#define OBJECT_18 204
#define OBJECT_17 203
#define OBJECT_16 202
#define OBJECT_15 201
#define OBJECT_14 200
#define OBJECT_13 199
#define OBJECT_12 198
#define OBJECT_11 197
#define OBJECT_10 196
#define OBJECT_9 195
#define OBJECT_8 194
#define OBJECT_7 193
#define OBJECT_6 192
#define OBJECT_5 191
#define OBJECT_4 190
#define OBJECT_3 189
#define OBJECT_2 188
#define OBJECT_1 187
#define OBJECT_0 186
#define EXECUTE_CACHE_94 143
#define EXECUTE_CACHE_87 145
#define EXECUTE_CACHE_82 147
#define EXECUTE_CACHE_76 149
#define EXECUTE_CACHE_64 151
#define EXECUTE_CACHE_62 153
#define EXECUTE_CACHE_61 155
#define EXECUTE_CACHE_60 157
#define EXECUTE_CACHE_49 159
#define EXECUTE_CACHE_48 161
#define EXECUTE_CACHE_40 163
#define EXECUTE_CACHE_36 165
#define EXECUTE_CACHE_34 167
#define EXECUTE_CACHE_32 169
#define EXECUTE_CACHE_27 171
#define EXECUTE_CACHE_22 173
#define EXECUTE_CACHE_21 175
#define EXECUTE_CACHE_12 177
#define FREE_REFERENCE_2 180
#define FREE_REFERENCE_1 181
#define FREE_REFERENCE_0 182
#define GLOBAL_EXECUTE_CACHE_5 184
#define FREE_REFERENCES_LABEL_0 142
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rgcomb_so_3cb221c3641b7a8b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd56;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto label_100;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_26;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto invocation_reference_25;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_101;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto label_102;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto lambda_126;

    case 10:
      current_block = (Rpc - LABEL_24);
      goto label_103;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto lambda_127;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto lambda_128;

    case 13:
      current_block = (Rpc - LABEL_28);
      goto label_105;

    case 14:
      current_block = (Rpc - LABEL_31);
      goto label_104;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_39);
      goto label_106;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_42);
      goto label_107;

    case 22:
      current_block = (Rpc - LABEL_44);
      goto label_108;

    case 23:
      current_block = (Rpc - LABEL_47);
      goto label_109;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_7;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto continuation_11;

    case 26:
      current_block = (Rpc - LABEL_41);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_52);
      goto label_110;

    case 28:
      current_block = (Rpc - LABEL_55);
      goto label_111;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto lambda_129;

    case 30:
      current_block = (Rpc - LABEL_43);
      goto continuation_59;

    case 31:
      current_block = (Rpc - LABEL_45);
      goto continuation_58;

    case 32:
      current_block = (Rpc - LABEL_46);
      goto continuation_57;

    case 33:
      current_block = (Rpc - LABEL_50);
      goto continuation_40;

    case 34:
      current_block = (Rpc - LABEL_65);
      goto lambda_36;

    case 35:
      current_block = (Rpc - LABEL_51);
      goto continuation_50;

    case 36:
      current_block = (Rpc - LABEL_53);
      goto continuation_49;

    case 37:
      current_block = (Rpc - LABEL_54);
      goto continuation_48;

    case 38:
      current_block = (Rpc - LABEL_56);
      goto continuation_82;

    case 39:
      current_block = (Rpc - LABEL_70);
      goto label_112;

    case 40:
      current_block = (Rpc - LABEL_57);
      goto continuation_81;

    case 41:
      current_block = (Rpc - LABEL_58);
      goto lambda_130;

    case 42:
      current_block = (Rpc - LABEL_72);
      goto label_113;

    case 43:
      current_block = (Rpc - LABEL_75);
      goto label_114;

    case 44:
      current_block = (Rpc - LABEL_63);
      goto continuation_37;

    case 45:
      current_block = (Rpc - LABEL_66);
      goto lambda_132;

    case 46:
      current_block = (Rpc - LABEL_77);
      goto label_115;

    case 47:
      current_block = (Rpc - LABEL_80);
      goto label_116;

    case 48:
      current_block = (Rpc - LABEL_68);
      goto continuation_71;

    case 49:
      current_block = (Rpc - LABEL_69);
      goto continuation_70;

    case 50:
      current_block = (Rpc - LABEL_71);
      goto continuation_72;

    case 51:
      current_block = (Rpc - LABEL_73);
      goto continuation_79;

    case 52:
      current_block = (Rpc - LABEL_74);
      goto continuation_78;

    case 53:
      current_block = (Rpc - LABEL_78);
      goto continuation_34;

    case 54:
      current_block = (Rpc - LABEL_79);
      goto continuation_33;

    case 55:
      current_block = (Rpc - LABEL_81);
      goto continuation_67;

    case 56:
      current_block = (Rpc - LABEL_85);
      goto label_117;

    case 57:
      current_block = (Rpc - LABEL_86);
      goto label_118;

    case 58:
      current_block = (Rpc - LABEL_83);
      goto continuation_68;

    case 59:
      current_block = (Rpc - LABEL_84);
      goto continuation_85;

    case 60:
      current_block = (Rpc - LABEL_89);
      goto label_119;

    case 61:
      current_block = (Rpc - LABEL_90);
      goto label_120;

    case 62:
      current_block = (Rpc - LABEL_88);
      goto continuation_88;

    case 63:
      current_block = (Rpc - LABEL_92);
      goto label_121;

    case 64:
      current_block = (Rpc - LABEL_93);
      goto label_122;

    case 65:
      current_block = (Rpc - LABEL_91);
      goto continuation_92;

    case 66:
      current_block = (Rpc - LABEL_95);
      goto label_123;

    case 67:
      current_block = (Rpc - LABEL_96);
      goto label_134;

    case 68:
      current_block = (Rpc - LABEL_97);
      goto label_135;

    case 69:
      current_block = (Rpc - LABEL_98);
      goto expression_99;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_99)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_97])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_135)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_134)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 16)
      goto label_133;
    blocks = (current_block [OBJECT_31]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_96])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_133)
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
    goto label_137;
  Wrd8 = Wrd12;

DEFLABEL (label_136)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_100)
  (Wrd8.Obj) = Rvl;
  goto label_136;

DEFLABEL (invocation_reference_125)
DEFLABEL (invocation_reference_25)
  INTERRUPT_CHECK (26, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (label_138)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_142;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_142;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_141)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_140;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_140;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_139)
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd43.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 3;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd51 = Wrd46;
  (Wrd52.Obj) = (Rsp [6]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [5]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  ((Wrd51.pObj) [4]) = (Wrd48.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17])));
  Rhp += 4;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  Wrd62 = Wrd55;
  ((Wrd62.pObj) [2]) = (Wrd52.Obj);
  ((Wrd62.pObj) [3]) = (Wrd50.Obj);
  ((Wrd62.pObj) [4]) = (Wrd48.Obj);
  ((Wrd62.pObj) [5]) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19])));
  Rhp += 4;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  Wrd73 = Wrd66;
  ((Wrd73.pObj) [2]) = (Wrd52.Obj);
  ((Wrd73.pObj) [3]) = (Wrd50.Obj);
  ((Wrd73.pObj) [4]) = (Wrd48.Obj);
  ((Wrd73.pObj) [5]) = (Wrd43.Obj);
  (Rsp [6]) = (Wrd65.Obj);
  (Rsp [5]) = (Wrd54.Obj);
  (Rsp [4]) = (Wrd45.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (label_140)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_12]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_10]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_101)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (lambda_126)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd23.Obj) = ((Wrd9.pObj) [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_144;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd29.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_144;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_143)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (label_144)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (lambda_127)
  CLOSURE_HEADER (LABEL_17);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_35);
  (Rsp [2]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_145;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  Rdl = (& (Rsp [7]));
  goto lambda_36;

DEFLABEL (label_145)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_23]);
  (Wrd18.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Rdl = (& (Rsp [2]));
  goto lambda_36;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_50);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_63);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (lambda_128)
  CLOSURE_HEADER (LABEL_19);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_156;

DEFLABEL (label_155)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_154;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd22.Lng))))
    goto label_154;
  (Wrd14.Obj) = ((Wrd20.pObj) [20]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_153)
  (Wrd34.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_41);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_149;
  Wrd9 = Wrd13;

DEFLABEL (label_148)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_147;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_147;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_146)
  (Wrd34.Obj) = (Rsp [7]);
  (Wrd35.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd39.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_51);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (label_147)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_111)
  (Wrd25.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd10.pObj));

DEFLABEL (label_110)
  (Wrd9.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_150)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = ((Wrd24.pObj) [2]);
  (Rsp [2]) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 3;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd38 = Wrd33;
  ((Wrd38.pObj) [2]) = (Wrd29.Obj);
  ((Wrd38.pObj) [3]) = (Wrd25.Obj);
  ((Wrd38.pObj) [4]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_152;
  Wrd50 = Wrd54;

DEFLABEL (label_151)
  (Rsp [2]) = (Wrd50.Obj);
  (Wrd56.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd56.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd51.pObj));

DEFLABEL (label_106)
  (Wrd50.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [5]);
  (Wrd30.Obj) = (current_block [OBJECT_17]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  if (! ((Wrd6.uLng) == 1))
    goto label_164;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_163)
  if (! ((Wrd35.Obj) == (current_block [OBJECT_16])))
    goto label_155;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = ((Wrd46.pObj) [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_29);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_162;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_161)
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_160;
  Wrd18 = Wrd22;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_158;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_158;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_157)
  (Wrd43.Obj) = (Rsp [7]);
  (Wrd44.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd48.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_46);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_43);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (label_158)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_109)
  (Wrd34.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd19.pObj));

DEFLABEL (label_108)
  (Wrd18.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 1);

DEFLABEL (label_107)
  (Wrd6.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_105)
  (Wrd35.Obj) = Rvl;
  goto label_163;

DEFLABEL (lambda_129)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (lambda_95)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd28.pObj) [4]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_56);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd27.Obj) = ((Wrd13.pObj) [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_180;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd33.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_180;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_179)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_29]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_81);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_178;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_178;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_177)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_176;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_176;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_175)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_174;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_174;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_173)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_172;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_172;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_171)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_170;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_170;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_169)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_168;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_168;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_167)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_91);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_166;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_166;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_165)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd28.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd29.Obj) = (current_block [OBJECT_30]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_166)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_14]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_123)
  (Wrd5.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_12]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_122)
  (* (--Rsp)) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_12]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_10]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_120)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_12]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_118)
  (* (--Rsp)) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_14]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 2);

DEFLABEL (label_117)
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_112)
  (* (--Rsp)) = Rvl;
  goto label_179;

DEFLABEL (lambda_131)
DEFLABEL (lambda_36)
  DLINK_INTERRUPT_CHECK (25, LABEL_65);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [4]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [1]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd17.pObj) [0]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (lambda_130)
  CLOSURE_HEADER (LABEL_58);

DEFLABEL (lambda_80)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_184;
  Wrd5 = Wrd9;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_182;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_182;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_181)
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_73);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (label_182)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_114)
  (Wrd23.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd6.pObj));

DEFLABEL (label_113)
  (Wrd5.Obj) = Rvl;
  goto label_183;

DEFLABEL (lambda_132)
  CLOSURE_HEADER (LABEL_66);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_188;
  Wrd5 = Wrd9;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_186;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_186;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_185)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (Wrd39.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd43.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd49.Obj) = ((Wrd37.pObj) [3]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_78);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (label_186)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_116)
  (Wrd23.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd6.pObj));

DEFLABEL (label_115)
  (Wrd5.Obj) = Rvl;
  goto label_187;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rgcomb_so_3cb221c3641b7a8b [16] =
  {
    { "rgcomb_so_code_1", 34, rgcomb_so_code_1 },
    { "rgcomb_so_code_2", 35, rgcomb_so_code_2 },
    { "rgcomb_so_code_3", 10, rgcomb_so_code_3 },
    { "rgcomb_so_code_4", 2, rgcomb_so_code_4 },
    { "rgcomb_so_code_5", 1, rgcomb_so_code_5 },
    { "rgcomb_so_code_6", 6, rgcomb_so_code_6 },
    { "rgcomb_so_code_7", 10, rgcomb_so_code_7 },
    { "rgcomb_so_code_8", 5, rgcomb_so_code_8 },
    { "rgcomb_so_code_9", 14, rgcomb_so_code_9 },
    { "rgcomb_so_code_10", 2, rgcomb_so_code_10 },
    { "rgcomb_so_code_11", 3, rgcomb_so_code_11 },
    { "rgcomb_so_code_12", 11, rgcomb_so_code_12 },
    { "rgcomb_so_code_13", 13, rgcomb_so_code_13 },
    { "rgcomb_so_code_14", 3, rgcomb_so_code_14 },
    { "rgcomb_so_code_15", 5, rgcomb_so_code_15 },
    { "rgcomb_so_code_16", 10, rgcomb_so_code_16 }
  };

int
decl_rgcomb_so_3cb221c3641b7a8b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgcomb_so_3cb221c3641b7a8b);
  return (0);
}

DECLARE_COMPILED_CODE ("rgcomb.so", 70, decl_rgcomb_so_3cb221c3641b7a8b, rgcomb_so_3cb221c3641b7a8b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgcomb_so_data_3cb221c3641b7a8b [4683] =
  "\xdd\x01\x30\x8a\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x06\x02\x0d"
  "\x02\xc1\xb9\x02\x82\x80\x02\x02\x02\x02\x0c\x0d\xc2\xba\x02\x0d"
  "\x0d\x0d\x0d\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x82\x88\x0d\x02\x0d\x08\x02\x02\x83\x80\xb2\x02\x0c\x0d\x0d\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x83\x88\x02\x0d\x1c\x08\xb2\x81\x80\x0d\x1c\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x0d\x1c\x08\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x80\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\x08\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb2\x82"
  "\x80\x0d\x24\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x83\x02\x02\x80\xb1\xb2\x02\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x1b\x08\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x83\x0d\xb1\xc1\x1c\x02\x02\xb2\x02\x1b"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\xb2\x86\x1b\x80\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x08\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x08\xb2\x83\x80\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x0d\x0d\x02\x0d\x0d\x0d\x1b\x0d\x0d\xb1\x0d\x08\x0d"
  "\x02\x0d\x1b\x81\x80\x82\xb2\x83\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x17\xc3\xb4\xb4\xb5\x99\x1e\x1b\x2a\x99\xc3\xb7"
  "\x1b\xb3\x1b\x1b\xb6\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9d\x28\x0d\x26\xb3\x1b\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x67\x65\x6e\x2f"
  "\x72\x67\x63\x6f\x6d\x62\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0f\x07\x61\x6c\x77\x61\x79\x73\x11\x04\x63\x61\x72\x0b\x0a\x0e"
  "\x10\x0d\x17\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x20\x74\x79\x70\x65\x03\x69\x63\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x08\x10\x74\x72\x69\x76\x69\x61\x6c"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x08\x63\x6c\x6f\x73\x75\x72\x65"
  "\x0e\x6f\x70\x65\x6e\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x0e\x6f"
  "\x70\x65\x6e\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x11\x69\x6e\x76"
  "\x6f\x63\x61\x74\x69\x6f\x6e\x2f\x61\x70\x70\x6c\x79\x15\x69\x6e"
  "\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2f\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x15\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2f\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x10\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x2f\x6a\x75\x6d\x70\x0e\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x2f\x69\x63\x0d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x74"
  "\x61\x67\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67"
  "\x09\x08\x04\x06\x65\x72\x72\x6f\x72\x0a\x03\x0b\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x3f\x03\x15\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x0f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x79\x70\x65\x03\x1b\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x70\x72\x65\x66\x69\x78\x0b\x03\x13\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2f\x69\x6e\x6c\x69\x6e\x65\x03\x15\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x6c\x69\x6e\x6b\x2d\x70\x72\x65"
  "\x66\x69\x78\x0c\x04\x0e\x70\x72\x65\x66\x69\x78\x2f\x61\x70\x70"
  "\x65\x6e\x64\x0d\x09\x68\x46\x81\x91\x02\x67\x44\x81\x8f\x02\x66"
  "\x42\x81\x8d\x02\x65\x40\x81\x83\x02\x64\x3e\x81\x85\x02\x63\x3c"
  "\x81\x83\x02\x62\x3a\x81\x8f\x02\x61\x38\x81\x8f\x02\x60\x36\x81"
  "\x8d\x02\x5f\x34\x81\x8f\x02\x5e\x32\x81\x8d\x02\x5d\x30\x81\x8f"
  "\x02\x5c\x2e\x81\x8f\x02\x5b\x2c\x81\x8d\x02\x5a\x2a\x81\x8f\x02"
  "\x59\x28\x81\x87\x02\x58\x26\x81\x85\x02\x57\x24\x81\x83\x02\x56"
  "\x22\x81\x83\x02\x55\x20\x83\x04\x54\x1e\x81\x8b\x02\x53\x1c\x81"
  "\x8d\x02\x52\x1a\x81\x83\x02\x51\x18\x81\x83\x02\x50\x16\x81\x83"
  "\x02\x4f\x14\x81\x83\x02\x4e\x12\x81\x83\x02\x4d\x10\x81\x8d\x02"
  "\x4c\x0e\x81\x8d\x02\x4b\x0c\x81\x8d\x02\x4a\x0a\x81\x8d\x02\x49"
  "\x08\x81\x8d\x02\x48\x06\x81\x8d\x02\x47\x04\x81\x8d\x02\x45\x75"
  "\x0e\x02\x11\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c\x65"
  "\x78\x70\x72\x12\x10\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a"
  "\x6a\x75\x6d\x70\x0f\x11\x08\x26\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x2f\x6a\x75\x6d\x70\x3a\x20\x47\x6f\x69\x6e\x67\x20\x74"
  "\x6f\x20\x68\x79\x70\x65\x72\x73\x70\x61\x63\x65\x21\x22\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6a\x75\x6d\x70\x23"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x76\x6f\x63\x61\x74"
  "\x69\x6f\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6c\x65\x78"
  "\x70\x72\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78"
  "\x74\x2d\x65\x64\x67\x65\x21\x0f\x04\x03\x13\x72\x76\x61\x6c\x75"
  "\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x10\x03\x0a"
  "\x03\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e\x6c\x69"
  "\x6e\x65\x2d\x63\x6f\x64\x65\x3f\x03\x13\x65\x6e\x71\x75\x65\x75"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21\x03\x20\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x65\x6e\x74\x72\x79\x2f\x69\x6e\x6c\x69\x6e\x65\x04\x11\x73"
  "\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21\x11"
  "\x03\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73"
  "\x75\x72\x65\x3f\x03\x14\x62\x6c\x6f\x63\x6b\x2f\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x12\x03\x1b\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x3f\x02\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x03\x15\x6d\x61\x6b\x65"
  "\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e"
  "\x13\x05\x21\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2f\x61\x64"
  "\x6a\x75\x73\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x70\x72\x65"
  "\x66\x69\x78\x14\x04\x0b\x6e\x6f\x64\x65\x2d\x3e\x73\x63\x66\x67"
  "\x15\x03\x0c\x6d\x61\x6b\x65\x2d\x73\x62\x6c\x6f\x63\x6b\x16\x0f"
  "\x8b\x01\x48\xfd\xff\x03\x8a\x01\x46\xfd\xff\x03\x89\x01\x44\x81"
  "\x85\x02\x88\x01\x42\x81\x85\x02\x87\x01\x40\x81\x85\x02\x86\x01"
  "\x3e\x81\x83\x02\x85\x01\x3c\x81\x87\x02\x84\x01\x3a\xfd\xff\x03"
  "\x83\x01\x38\xfd\xff\x03\x82\x01\x36\xfd\xff\x03\x81\x01\x34\xfd"
  "\xff\x03\x80\x01\x32\xff\xff\x03\x7f\x30\xfd\xff\x03\x7e\x2e\x81"
  "\x89\x02\x7d\x2c\x81\x83\x02\x7c\x2a\x81\x87\x02\x7b\x28\x81\x83"
  "\x02\x7a\x26\x81\x83\x02\x79\x24\x81\x81\x02\x78\x22\x81\x83\x02"
  "\x77\x20\x81\x81\x02\x76\x1e\x81\x81\x02\x75\x1c\x81\x81\x02\x74"
  "\x1a\x81\x81\x02\x73\x18\x81\x81\x02\x72\x16\x81\x8f\x02\x71\x14"
  "\x81\x8f\x02\x70\x12\x81\x8f\x02\x6f\x10\x81\x8d\x02\x6e\x0e\x81"
  "\x93\x02\x6d\x0c\x81\x93\x02\x6c\x0a\x81\x93\x02\x6b\x08\x81\x8b"
  "\x02\x6a\x06\x81\x8f\x02\x69\x04\x87\x0c\x47\x76\x17\x02\x12\x06"
  "\x66\x65\x74\x63\x68\x18\x17\x2a\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a\x19\x02\x03"
  "\x1b\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x65"
  "\x6e\x74\x72\x79\x2d\x6e\x75\x6d\x62\x65\x72\x04\x1b\x72\x74\x6c"
  "\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x6f\x66\x66\x73\x65\x74\x1a\x04\x1f\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x64"
  "\x6a\x75\x73\x74\x6d\x65\x6e\x74\x04\x11\x72\x74\x6c\x3a\x62\x75"
  "\x6d\x70\x2d\x63\x6c\x6f\x73\x75\x72\x65\x1b\x04\x11\x04\x14\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x1c\x07\x95\x01\x16\x81\x8d\x02\x94\x01\x14\x81\x8b\x02"
  "\x93\x01\x12\x81\x89\x02\x92\x01\x10\x81\x8b\x02\x91\x01\x0e\x81"
  "\x89\x02\x90\x01\x0c\x81\x8d\x02\x8f\x01\x0a\x81\x8d\x02\x8e\x01"
  "\x08\x81\x89\x02\x8d\x01\x06\x81\x87\x02\x8c\x01\x04\x85\x08\x15"
  "\x2d\x1d\x02\x15\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x08\x61\x64\x64\x72\x65\x73\x73"
  "\x1e\x04\x19\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d"
  "\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x02\x97\x01\x06\x81"
  "\x85\x02\x96\x01\x04\x84\x06\x05\x0e\x1f\x02\x06\x12\x69\x6e\x76"
  "\x6f\x63\x61\x74\x69\x6f\x6e\x2f\x61\x70\x70\x6c\x79\x2a\x20\x02"
  "\x98\x01\x04\x87\x0c\x03\x0a\x21\x02\x11\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x61\x70\x70\x6c\x79\x0f\x02\x03\x13\x04\x15"
  "\x03\x16\x04\x11\x05\x9e\x01\x0e\x81\x8b\x02\x9d\x01\x0c\x81\x8f"
  "\x02\x9c\x01\x0a\x81\x8d\x02\x9b\x01\x08\x81\x89\x02\x9a\x01\x06"
  "\x81\x8b\x02\x99\x01\x04\x86\x0a\x0d\x1d\x22\x02\x08\x35\x50\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x77"
  "\x69\x74\x68\x20\x69\x6e\x63\x6f\x72\x72\x65\x63\x74\x20\x6e\x75"
  "\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x73\x2e\x1e\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x76\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x02\x03\x10\x04\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x61"
  "\x72\x69\x74\x79\x2d\x63\x6f\x72\x72\x65\x63\x74\x3f\x04\x11\x05"
  "\x0a\x03\x1a\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72\x06\xa8\x01\x16"
  "\x81\x89\x02\xa7\x01\x14\x81\x87\x02\xa6\x01\x12\x81\x85\x02\xa5"
  "\x01\x10\x81\x83\x02\xa4\x01\x0e\x81\x83\x02\xa3\x01\x0c\x81\x8d"
  "\x02\xa2\x01\x0a\x81\x8d\x02\xa1\x01\x08\x81\x8d\x02\xa0\x01\x06"
  "\x81\x8b\x02\x9f\x01\x04\x87\x0c\x15\x29\x10\x02\x09\x04\x11\x02"
  "\xad\x01\x0c\x81\x89\x02\xac\x01\x0a\x81\x87\x02\xab\x01\x08\x84"
  "\x06\xaa\x01\x06\x81\x87\x02\xa9\x01\x04\x84\x06\x0b\x11\x0a\x02"
  "\x0a\x14\x10\x09\x0b\x09\x17\x6c\x69\x6e\x6b\x2d\x70\x72\x65\x66"
  "\x69\x78\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x09\x03\x03"
  "\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x23\x03\x12\x04\x16\x6c\x69\x6e"
  "\x6b\x2d\x70\x72\x65\x66\x69\x78\x2f\x72\x65\x64\x75\x63\x74\x69"
  "\x6f\x6e\x12\x04\xbb\x01\x1e\x81\x83\x02\xba\x01\x1c\x81\x83\x02"
  "\xb9\x01\x1a\x81\x83\x02\xb8\x01\x18\x81\x85\x02\xb7\x01\x16\x81"
  "\x83\x02\xb6\x01\x14\x81\x85\x02\xb5\x01\x12\x83\x04\xb4\x01\x10"
  "\x81\x83\x02\xb3\x01\x0e\x81\x83\x02\xb2\x01\x0c\x81\x85\x02\xb1"
  "\x01\x0a\x81\x85\x02\xb0\x01\x08\x81\x85\x02\xaf\x01\x06\x81\x83"
  "\x02\xae\x01\x04\x81\x83\x02\x1d\x32\x24\x02\x0b\x0d\x64\x79\x6e"
  "\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x25\x1e\x18\x0e\x73\x74\x61"
  "\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x1e\x04\x1a\x04\x1c\x03"
  "\xbd\x01\x06\x81\x85\x02\xbc\x01\x04\x84\x06\x05\x12\x26\x02\x0c"
  "\x25\x06\x17\x70\x6f\x70\x70\x69\x6e\x67\x2d\x6c\x69\x6d\x69\x74"
  "\x2f\x6c\x6f\x63\x61\x74\x69\x76\x65\x25\x04\x1c\x03\xc0\x01\x08"
  "\x81\x87\x02\xbf\x01\x06\x81\x87\x02\xbe\x01\x04\x84\x06\x07\x11"
  "\x27\x02\x0d\x06\x6b\x6e\x6f\x77\x6e\x04\x63\x64\x72\x28\x11\x09"
  "\x12\x19\x02\x04\x20\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x70\x72\x65\x66\x69\x78\x2f\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x75\x70\x29\x03\x10\x62\x6c\x6f\x63\x6b\x2f\x65\x78\x74"
  "\x65\x72\x6e\x61\x6c\x3f\x04\x23\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x2f\x72\x65\x75\x73\x65\x2d"
  "\x61\x64\x6a\x75\x73\x74\x6d\x65\x6e\x74\x2a\x04\x1f\x69\x6e\x76"
  "\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x2f\x64"
  "\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x2b\x04\x1a\x04\x13"
  "\x6d\x61\x6b\x65\x2d\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65\x2d"
  "\x75\x70\x1a\x07\xcb\x01\x18\x81\x85\x02\xca\x01\x16\x81\x89\x02"
  "\xc9\x01\x14\x81\x89\x02\xc8\x01\x12\x84\x06\xc7\x01\x10\x81\x8b"
  "\x02\xc6\x01\x0e\x81\x8b\x02\xc5\x01\x0c\x81\x89\x02\xc4\x01\x0a"
  "\x81\x87\x02\xc3\x01\x08\x81\x85\x02\xc2\x01\x06\x81\x83\x02\xc1"
  "\x01\x04\x83\x04\x17\x31\x2c\x02\x0e\x1e\x03\x23\x06\x25\x04\x1a"
  "\x04\x1c\x05\xd8\x01\x1c\xfd\xff\x03\xd7\x01\x1a\xfd\xff\x03\xd6"
  "\x01\x18\x81\x85\x02\xd5\x01\x16\x81\x85\x02\xd4\x01\x14\x81\x89"
  "\x02\xd3\x01\x12\x81\x89\x02\xd2\x01\x10\x81\x8d\x02\xd1\x01\x0e"
  "\x81\x8b\x02\xd0\x01\x0c\x81\x89\x02\xcf\x01\x0a\x81\x89\x02\xce"
  "\x01\x08\x81\x87\x02\xcd\x01\x06\x81\x87\x02\xcc\x01\x04\x84\x06"
  "\x1b\x2c\x1e\x02\x0f\x06\x25\x04\x1a\x03\xdb\x01\x08\x81\x87\x02"
  "\xda\x01\x06\x81\x87\x02\xd9\x01\x04\x84\x06\x07\x10\x2d\x02\x10"
  "\x20\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66"
  "\x69\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65\x2d\x75\x70"
  "\x0f\x02\x04\x22\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73"
  "\x69\x6d\x70\x6c\x69\x66\x79\x2d\x66\x6f\x72\x2d\x73\x74\x61\x74"
  "\x65\x6d\x65\x6e\x74\x2e\x03\x13\x04\x15\x03\x16\x05\xe0\x01\x0c"
  "\x81\x89\x02\xdf\x01\x0a\x81\x87\x02\xde\x01\x08\x81\x85\x02\xdd"
  "\x01\x06\x81\x85\x02\xdc\x01\x04\x84\x06\x0b\x1b\x2f\x02\x11\x1f"
  "\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69"
  "\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x19\x0f"
  "\x03\x06\x25\x04\x2e\x03\x13\x04\x15\x03\x16\x06\xea\x01\x16\x81"
  "\x89\x02\xe9\x01\x14\x81\x87\x02\xe8\x01\x12\x81\x85\x02\xe7\x01"
  "\x10\x81\x85\x02\xe6\x01\x0e\x81\x89\x02\xe5\x01\x0c\x81\x85\x02"
  "\xe4\x01\x0a\x81\x85\x02\xe3\x01\x08\x81\x85\x02\xe2\x01\x06\x81"
  "\x87\x02\xe1\x01\x04\x84\x06\x15\x2b\x25\x11\x19\x19\x0a\x73\x6e"
  "\x6f\x64\x65\x2d\x63\x66\x67\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x74\x79\x70\x65\x33\x12\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x3a\x6c\x6f\x6f\x6b\x75\x70\x1b\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x14\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x75\x75"
  "\x6f\x2d\x6c\x69\x6e\x6b\x18\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x17\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x67"
  "\x6c\x6f\x62\x61\x6c\x2d\x6c\x69\x6e\x6b\x0f\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2d\x63\x61\x63\x68\x65\x09\x75\x75\x6f\x2d\x6c\x69"
  "\x6e\x6b\x14\x09\x2a\x67\x6c\x6f\x62\x61\x6c\x2a\x28\x25\x04\x2f"
  "\x04\x2d\x04\x1e\x04\x2c\x04\x27\x04\x26\x04\x24\x12\x0a\x04\x0a"
  "\x2b\x1a\x29\x2a\x0b\x12\x09\x0c\x0d\x0a\x13\x6c\x65\x78\x69\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x04\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x20\x1b\x14\x15\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x22\x04\x21\x04\x1f\x04\x1d\x04"
  "\x17\x04\x0e\x20\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x11\x0f\x04\x03\x1d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x74\x6f\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6c\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3f\x07\x14\x66\x69\x6e\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\x06\x20\x03\x23"
  "\x04\x05\x6d\x65\x6d\x71\x03\x0e\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x70\x75\x73\x68\x04\x17\x69\x6e\x74\x65\x72\x6e\x2d\x73\x63"
  "\x6f\x64\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x05\x18\x6c"
  "\x6f\x61\x64\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x03\x13\x04\x11\x04\x2e\x04\x15\x03\x16"
  "\x04\x1c\x05\x0d\x73\x63\x66\x67\x2d\x61\x70\x70\x65\x6e\x64\x21"
  "\x04\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x79\x70\x65\x2d"
  "\x74\x65\x73\x74\x04\x0f\x68\x6f\x6f\x6b\x73\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x21\x04\x0c\x68\x6f\x6f\x6b\x73\x2d\x75\x6e\x69\x6f"
  "\x6e\x13\x46\x8e\x01\x80\x80\x04\x45\x8c\x01\x81\x81\x02\x44\x8a"
  "\x01\x81\x81\x02\x43\x88\x01\x81\x89\x02\x42\x86\x01\x81\x87\x02"
  "\x41\x84\x01\x81\x8b\x02\x40\x82\x01\x81\x89\x02\x3f\x80\x01\x81"
  "\x87\x02\x3e\x7e\x81\x8b\x02\x3d\x7c\x81\x89\x02\x3c\x7a\x81\x87"
  "\x02\x3b\x78\x81\x8b\x02\x3a\x76\x81\x8b\x02\x39\x74\x81\x89\x02"
  "\x38\x72\x81\x89\x02\x37\x70\x81\x89\x02\x36\x6e\x81\x87\x02\x35"
  "\x6c\x81\x89\x02\x34\x6a\x81\x87\x02\x33\x68\x81\x8b\x02\x32\x66"
  "\x81\x89\x02\x31\x64\x81\x87\x02\x30\x62\x81\x8b\x02\x2f\x60\x81"
  "\x85\x02\x2e\x5e\x81\x85\x02\x2d\x5c\x81\x8d\x02\x2c\x5a\x81\x8b"
  "\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x89\x02"
  "\x28\x52\x81\x91\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x8f\x02\x25"
  "\x4c\x81\x8d\x02\x24\x4a\x81\x89\x02\x23\x48\xff\xff\x03\x22\x46"
  "\x81\x8b\x02\x21\x44\x81\x8f\x02\x20\x42\x81\x8d\x02\x1f\x40\x81"
  "\x89\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x91\x02\x1c\x3a\x81\x8b"
  "\x02\x1b\x38\x81\x89\x02\x1a\x36\x81\x8b\x02\x19\x34\x81\x87\x02"
  "\x18\x32\x81\x91\x02\x17\x30\x81\x8b\x02\x16\x2e\x81\x89\x02\x15"
  "\x2c\x81\x89\x02\x14\x2a\x81\x8b\x02\x13\x28\x81\x85\x02\x12\x26"
  "\x81\x8f\x02\x11\x24\x81\x8b\x02\x10\x22\x81\x85\x02\x0f\x20\x81"
  "\x87\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x87"
  "\x02\x0b\x18\x81\x8d\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x8d\x02"
  "\x08\x12\x81\x8b\x02\x07\x10\x81\x8b\x02\x06\x0e\x87\x0c\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x85\x02\x01\x04\x81\x83\x02\x8d\x01\xdd\x01";

SCHEME_OBJECT *
rgcomb_so_data_3cb221c3641b7a8b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgcomb_so_data_3cb221c3641b7a8b [0]))), (sizeof (prog_rgcomb_so_data_3cb221c3641b7a8b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_98]));
}

DECLARE_COMPILED_DATA_NS ("rgcomb.so", rgcomb_so_data_3cb221c3641b7a8b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgcomb.so", "b398de162d64d7ed")
