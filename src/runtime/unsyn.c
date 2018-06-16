/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:59-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
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
#define LABEL_1_17 27
#define LABEL_1_18 29
#define LABEL_1_19 31
#define LABEL_1_20 33
#define LABEL_1_21 35
#define LABEL_1_22 37
#define LABEL_1_5 39
#define LABEL_1_24 41
#define ENVIRONMENT_LABEL_1_3 84
#define DEBUGGING_LABEL_1_2 83
#define OBJECT_1_17 82
#define OBJECT_1_16 81
#define OBJECT_1_15 80
#define OBJECT_1_14 79
#define OBJECT_1_13 78
#define OBJECT_1_12 77
#define OBJECT_1_11 76
#define OBJECT_1_10 75
#define OBJECT_1_9 74
#define OBJECT_1_8 73
#define OBJECT_1_7 72
#define OBJECT_1_6 71
#define OBJECT_1_5 70
#define OBJECT_1_4 69
#define OBJECT_1_3 68
#define OBJECT_1_2 67
#define OBJECT_1_1 66
#define OBJECT_1_0 65
#define EXECUTE_CACHE_1_23 43
#define FREE_REFERENCE_1_16 46
#define FREE_REFERENCE_1_15 47
#define FREE_REFERENCE_1_14 48
#define FREE_REFERENCE_1_13 49
#define FREE_REFERENCE_1_12 50
#define FREE_REFERENCE_1_11 51
#define FREE_REFERENCE_1_10 52
#define FREE_REFERENCE_1_9 53
#define FREE_REFERENCE_1_8 54
#define FREE_REFERENCE_1_7 55
#define FREE_REFERENCE_1_6 56
#define FREE_REFERENCE_1_5 57
#define FREE_REFERENCE_1_4 58
#define FREE_REFERENCE_1_3 59
#define FREE_REFERENCE_1_2 60
#define FREE_REFERENCE_1_1 61
#define FREE_REFERENCE_1_0 62
#define FREE_ASSIGNMENT_1_0 64
#define FREE_REFERENCES_LABEL_1_0 42
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd312;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd313;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd308;
  machine_word Wrd304;
  machine_word Wrd306;
  machine_word Wrd307;
  machine_word Wrd300;
  machine_word Wrd302;
  machine_word Wrd303;
  machine_word Wrd294;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd295;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd289;
  machine_word Wrd285;
  machine_word Wrd287;
  machine_word Wrd288;
  machine_word Wrd281;
  machine_word Wrd283;
  machine_word Wrd284;
  machine_word Wrd275;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd276;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd270;
  machine_word Wrd266;
  machine_word Wrd268;
  machine_word Wrd269;
  machine_word Wrd262;
  machine_word Wrd264;
  machine_word Wrd265;
  machine_word Wrd256;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd254;
  machine_word Wrd253;
  machine_word Wrd251;
  machine_word Wrd247;
  machine_word Wrd249;
  machine_word Wrd250;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd246;
  machine_word Wrd237;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd228;
  machine_word Wrd230;
  machine_word Wrd231;
  machine_word Wrd224;
  machine_word Wrd226;
  machine_word Wrd227;
  machine_word Wrd218;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd213;
  machine_word Wrd209;
  machine_word Wrd211;
  machine_word Wrd212;
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
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd189;
  machine_word Wrd180;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd175;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd174;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd156;
  machine_word Wrd152;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd142;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd123;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd104;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto initialize_packageB_49;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_52;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_53;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_57;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_58;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto label_59;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto label_61;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_1_18);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_1_19);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_1_20);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_1_21);
      goto label_66;

    case 17:
      current_block = (Rpc - LABEL_1_22);
      goto label_67;

    case 18:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_48;

    case 19:
      current_block = (Rpc - LABEL_1_24);
      goto label_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_70)
DEFLABEL (initialize_packageB_49)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_107;
  Wrd9 = Wrd13;

DEFLABEL (label_106)
  (Wrd18.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_105;
  Wrd28 = Wrd32;

DEFLABEL (label_104)
  (Wrd37.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd42.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_103;
  Wrd47 = Wrd51;

DEFLABEL (label_102)
  (Wrd56.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_101;
  Wrd66 = Wrd70;

DEFLABEL (label_100)
  (Wrd75.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (Wrd80.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_99;
  Wrd85 = Wrd89;

DEFLABEL (label_98)
  (Wrd94.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd98.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (Wrd99.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_97;
  Wrd104 = Wrd108;

DEFLABEL (label_96)
  (Wrd113.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd117.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd118.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd120.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd120.pObj)));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd127.Obj) = ((Wrd124.pObj) [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if ((Wrd128.uLng) == 50)
    goto label_95;
  Wrd123 = Wrd127;

DEFLABEL (label_94)
  (Wrd132.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd137.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_93;
  Wrd142 = Wrd146;

DEFLABEL (label_92)
  (Wrd151.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd142.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd155.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  (Wrd154.pObj) = (& (Rhp [-2]));
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd154.pObj)));
  (Wrd156.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd156.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_91;
  Wrd161 = Wrd165;

DEFLABEL (label_90)
  (Wrd170.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (Wrd174.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd167.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Wrd175.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd171.Obj);
  (* (Rhp++)) = (Wrd175.Obj);
  (Wrd177.pObj) = (& (Rhp [-2]));
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd177.pObj)));
  (* (--Rsp)) = (Wrd178.Obj);
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_89;
  Wrd180 = Wrd184;

DEFLABEL (label_88)
  (Wrd189.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd186.Obj);
  (Wrd192.pObj) = (& (Rhp [-2]));
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd192.pObj)));
  (Wrd194.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd190.Obj);
  (* (Rhp++)) = (Wrd194.Obj);
  (Wrd196.pObj) = (& (Rhp [-2]));
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd196.pObj)));
  (* (--Rsp)) = (Wrd197.Obj);
  (Wrd200.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_10]));
  (Wrd203.Obj) = ((Wrd200.pObj) [0]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 50)
    goto label_87;
  Wrd199 = Wrd203;

DEFLABEL (label_86)
  (Wrd208.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd212.Obj) = (current_block [OBJECT_1_11]);
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd205.Obj);
  (Wrd211.pObj) = (& (Rhp [-2]));
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd211.pObj)));
  (Wrd213.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd209.Obj);
  (* (Rhp++)) = (Wrd213.Obj);
  (Wrd215.pObj) = (& (Rhp [-2]));
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd215.pObj)));
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd219.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_11]));
  (Wrd222.Obj) = ((Wrd219.pObj) [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if ((Wrd223.uLng) == 50)
    goto label_85;
  Wrd218 = Wrd222;

DEFLABEL (label_84)
  (Wrd227.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd226.pObj) = (& (Rhp [-2]));
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd226.pObj)));
  (Wrd231.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd224.Obj);
  (Wrd230.pObj) = (& (Rhp [-2]));
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd230.pObj)));
  (Wrd232.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd228.Obj);
  (* (Rhp++)) = (Wrd232.Obj);
  (Wrd234.pObj) = (& (Rhp [-2]));
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd234.pObj)));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_12]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_83;
  Wrd237 = Wrd241;

DEFLABEL (label_82)
  (Wrd246.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (Wrd250.Obj) = (current_block [OBJECT_1_13]);
  (* (Rhp++)) = (Wrd250.Obj);
  (* (Rhp++)) = (Wrd243.Obj);
  (Wrd249.pObj) = (& (Rhp [-2]));
  (Wrd247.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd249.pObj)));
  (Wrd251.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd247.Obj);
  (* (Rhp++)) = (Wrd251.Obj);
  (Wrd253.pObj) = (& (Rhp [-2]));
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd253.pObj)));
  (* (--Rsp)) = (Wrd254.Obj);
  (Wrd257.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_13]));
  (Wrd260.Obj) = ((Wrd257.pObj) [0]);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd260.Obj));
  if ((Wrd261.uLng) == 50)
    goto label_81;
  Wrd256 = Wrd260;

DEFLABEL (label_80)
  (Wrd265.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Wrd269.Obj) = (current_block [OBJECT_1_14]);
  (* (Rhp++)) = (Wrd269.Obj);
  (* (Rhp++)) = (Wrd262.Obj);
  (Wrd268.pObj) = (& (Rhp [-2]));
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd268.pObj)));
  (Wrd270.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd266.Obj);
  (* (Rhp++)) = (Wrd270.Obj);
  (Wrd272.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd272.pObj)));
  (* (--Rsp)) = (Wrd273.Obj);
  (Wrd276.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_14]));
  (Wrd279.Obj) = ((Wrd276.pObj) [0]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if ((Wrd280.uLng) == 50)
    goto label_79;
  Wrd275 = Wrd279;

DEFLABEL (label_78)
  (Wrd284.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd275.Obj);
  (* (Rhp++)) = (Wrd284.Obj);
  (Wrd283.pObj) = (& (Rhp [-2]));
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd283.pObj)));
  (Wrd288.Obj) = (current_block [OBJECT_1_15]);
  (* (Rhp++)) = (Wrd288.Obj);
  (* (Rhp++)) = (Wrd281.Obj);
  (Wrd287.pObj) = (& (Rhp [-2]));
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd287.pObj)));
  (Wrd289.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd285.Obj);
  (* (Rhp++)) = (Wrd289.Obj);
  (Wrd291.pObj) = (& (Rhp [-2]));
  (Wrd292.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd291.pObj)));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd295.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_15]));
  (Wrd298.Obj) = ((Wrd295.pObj) [0]);
  (Wrd299.uLng) = (OBJECT_TYPE (Wrd298.Obj));
  if ((Wrd299.uLng) == 50)
    goto label_77;
  Wrd294 = Wrd298;

DEFLABEL (label_76)
  (Wrd303.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd294.Obj);
  (* (Rhp++)) = (Wrd303.Obj);
  (Wrd302.pObj) = (& (Rhp [-2]));
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd302.pObj)));
  (Wrd307.Obj) = (current_block [OBJECT_1_16]);
  (* (Rhp++)) = (Wrd307.Obj);
  (* (Rhp++)) = (Wrd300.Obj);
  (Wrd306.pObj) = (& (Rhp [-2]));
  (Wrd304.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd306.pObj)));
  (Wrd308.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd304.Obj);
  (* (Rhp++)) = (Wrd308.Obj);
  (Wrd310.pObj) = (& (Rhp [-2]));
  (Wrd311.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd310.pObj)));
  (* (--Rsp)) = (Wrd311.Obj);
  (Wrd313.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_16]));
  (Wrd316.Obj) = ((Wrd313.pObj) [0]);
  (Wrd317.uLng) = (OBJECT_TYPE (Wrd316.Obj));
  if ((Wrd317.uLng) == 50)
    goto label_75;
  Wrd312 = Wrd316;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd312.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_1_17]);
  goto pop_return;

DEFLABEL (label_73)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_24])), (Wrd6.pObj), Rvl);

DEFLABEL (label_68)
  goto label_71;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd313.pObj));

DEFLABEL (label_67)
  (Wrd312.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd295.pObj));

DEFLABEL (label_66)
  (Wrd294.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_20])), (Wrd276.pObj));

DEFLABEL (label_65)
  (Wrd275.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_19])), (Wrd257.pObj));

DEFLABEL (label_64)
  (Wrd256.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd238.pObj));

DEFLABEL (label_63)
  (Wrd237.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd219.pObj));

DEFLABEL (label_62)
  (Wrd218.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_16])), (Wrd200.pObj));

DEFLABEL (label_61)
  (Wrd199.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd181.pObj));

DEFLABEL (label_60)
  (Wrd180.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd162.pObj));

DEFLABEL (label_59)
  (Wrd161.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd143.pObj));

DEFLABEL (label_58)
  (Wrd142.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd124.pObj));

DEFLABEL (label_57)
  (Wrd123.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd105.pObj));

DEFLABEL (label_56)
  (Wrd104.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd86.pObj));

DEFLABEL (label_55)
  (Wrd85.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd67.pObj));

DEFLABEL (label_54)
  (Wrd66.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd48.pObj));

DEFLABEL (label_53)
  (Wrd47.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd29.pObj));

DEFLABEL (label_52)
  (Wrd28.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd10.pObj));

DEFLABEL (label_51)
  (Wrd9.Obj) = Rvl;
  goto label_106;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define LABEL_2_11 9
#define TAG_2_12 3
#define LABEL_2_9 11
#define TAG_2_10 4
#define LABEL_2_15 13
#define LABEL_2_16 15
#define LABEL_2_17 17
#define ENVIRONMENT_LABEL_2_3 35
#define DEBUGGING_LABEL_2_2 34
#define OBJECT_2_2 33
#define OBJECT_2_1 32
#define OBJECT_2_0 31
#define EXECUTE_CACHE_2_14 19
#define EXECUTE_CACHE_2_13 21
#define EXECUTE_CACHE_2_8 23
#define EXECUTE_CACHE_2_6 25
#define FREE_REFERENCE_2_0 28
#define FREE_ASSIGNMENT_2_0 30
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
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
      goto unsyntax_with_substitutions_11;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto swapB_18;

    case 5:
      current_block = (Rpc - LABEL_2_15);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_2_16);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_with_substitutions_17)
DEFLABEL (unsyntax_with_substitutions_11)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_15])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_4 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_0 15
#define EXECUTE_CACHE_3_8 11
#define FREE_REFERENCE_3_0 14
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_3_4);
      goto maybe_substitute_3;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_substitute_8)
DEFLABEL (maybe_substitute_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd15.uLng) == 1)
    goto label_12;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_10;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  Rvl = ((Wrd23.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_12)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_14;
  Wrd29 = Wrd33;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd30.pObj));

DEFLABEL (label_6)
  (Wrd29.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCE_4_0 12
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto has_substitutionP_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (has_substitutionP_6)
DEFLABEL (has_substitutionP_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_9;
  Wrd17 = Wrd21;

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define FREE_REFERENCE_5_1 9
#define FREE_REFERENCE_5_0 10
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_5_4);
      goto with_bindings_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_bindings_6)
DEFLABEL (with_bindings_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd24.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd19.Obj);
  goto label_7;

DEFLABEL (label_8)
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd27.Obj);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_8 7
#define EXECUTE_CACHE_6_7 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto is_boundP_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (is_boundP_4)
DEFLABEL (is_boundP_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define ENVIRONMENT_LABEL_7_3 17
#define DEBUGGING_LABEL_7_2 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_9 9
#define EXECUTE_CACHE_7_8 11
#define EXECUTE_CACHE_7_7 13
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto unsyntax_2;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_5)
DEFLABEL (unsyntax_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_7)
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_4 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_10 11
#define LABEL_8_9 13
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define OBJECT_8_0 22
#define EXECUTE_CACHE_8_11 15
#define EXECUTE_CACHE_8_8 17
#define FREE_REFERENCE_8_1 20
#define FREE_REFERENCE_8_0 21
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_8_4);
      goto unsyntax_object_4;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_object_10)
DEFLABEL (unsyntax_object_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_20;
  Wrd9 = Wrd13;

DEFLABEL (label_19)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd15.uLng) == 1)
    goto label_16;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_11;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  Rvl = ((Wrd23.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_12)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_14;
  Wrd32 = Wrd36;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd33.pObj));

DEFLABEL (label_7)
  (Wrd32.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_18;
  Wrd38 = Wrd42;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd39.pObj));

DEFLABEL (label_8)
  (Wrd38.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_8 7
#define LABEL_9_5 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define LABEL_9_11 15
#define LABEL_9_12 17
#define LABEL_9_13 19
#define LABEL_9_14 21
#define LABEL_9_16 23
#define ENVIRONMENT_LABEL_9_3 47
#define DEBUGGING_LABEL_9_2 46
#define OBJECT_9_12 45
#define OBJECT_9_11 44
#define OBJECT_9_10 43
#define OBJECT_9_9 42
#define OBJECT_9_8 41
#define OBJECT_9_7 40
#define OBJECT_9_6 39
#define OBJECT_9_5 38
#define OBJECT_9_4 37
#define OBJECT_9_3 36
#define OBJECT_9_2 35
#define OBJECT_9_1 34
#define OBJECT_9_0 33
#define EXECUTE_CACHE_9_18 25
#define EXECUTE_CACHE_9_17 27
#define EXECUTE_CACHE_9_15 29
#define EXECUTE_CACHE_9_6 31
#define FREE_REFERENCES_LABEL_9_0 24
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd94;
  machine_word Wrd54;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd135;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto unsyntax_constant_21;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_9_12);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_9_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_constant_29)
DEFLABEL (unsyntax_constant_21)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (Rsp [1]);

DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd127.Obj) = (current_block [OBJECT_9_0]);
  (Wrd130.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd130.Lng))))
    goto label_57;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd127.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_50;

DEFLABEL (label_56)
  (Wrd117.Obj) = (current_block [OBJECT_9_2]);
  (Wrd120.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd120.Lng))))
    goto label_55;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd117.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_50;

DEFLABEL (label_54)
  (Wrd107.Obj) = (current_block [OBJECT_9_3]);
  (Wrd110.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd110.Lng))))
    goto label_53;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd107.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_50;

DEFLABEL (label_52)
  (Wrd97.Obj) = (current_block [OBJECT_9_4]);
  (Wrd100.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd100.Lng))))
    goto label_51;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd97.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_50;

DEFLABEL (label_49)
  (Wrd29.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd39.Lng)))
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_34)
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_36;
  (Wrd31.Obj) = (current_block [OBJECT_9_7]);
  goto label_35;

DEFLABEL (label_36)
  (Wrd31.Obj) = (current_block [OBJECT_9_6]);

DEFLABEL (label_35)
DEFLABEL (label_48)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd31.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_47)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 2)
    goto label_31;
  if ((Wrd42.uLng) == 30)
    goto label_31;
  if ((Wrd42.uLng) == 1)
    goto label_39;
  if ((Wrd41.Obj) == (current_block [OBJECT_9_8]))
    goto label_39;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_9_9]);
  (Wrd89.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd89.Lng))))
    goto label_46;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  if ((Wrd54.Obj) == (Wrd42.Obj))
    goto label_45;

DEFLABEL (label_44)
  (Wrd57.Obj) = (current_block [OBJECT_9_10]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng))))
    goto label_33;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_38;
  (Wrd59.Obj) = (current_block [OBJECT_9_7]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd59.Obj) = (current_block [OBJECT_9_6]);

DEFLABEL (label_37)
DEFLABEL (label_43)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.Obj) = (current_block [OBJECT_9_8]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_9_11]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  goto label_30;

DEFLABEL (label_40)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 10)
    goto label_39;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  if (Rvl == (Wrd6.Obj))
    goto label_42;
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (label_42)
  (Wrd13.Obj) = (current_block [OBJECT_9_8]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_9_12]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  goto label_39;

DEFLABEL (label_46)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto label_31;

DEFLABEL (label_51)
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_53)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_50;

DEFLABEL (label_55)
  (Wrd122.Obj) = (Rsp [0]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_50;

DEFLABEL (label_57)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_50;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
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
      goto unsyntax_quotation_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_quotation_6)
DEFLABEL (unsyntax_quotation_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define EXECUTE_CACHE_11_5 5
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto unsyntax_variable_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_variable_object_3)
DEFLABEL (unsyntax_variable_object_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_5 3
#define LABEL_12_4 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_13 11
#define LABEL_12_14 13
#define LABEL_12_10 15
#define TAG_12_11 6
#define LABEL_12_8 17
#define LABEL_12_16 19
#define ENVIRONMENT_LABEL_12_3 37
#define DEBUGGING_LABEL_12_2 36
#define OBJECT_12_1 35
#define OBJECT_12_0 34
#define EXECUTE_CACHE_12_18 21
#define EXECUTE_CACHE_12_17 23
#define EXECUTE_CACHE_12_15 25
#define EXECUTE_CACHE_12_12 27
#define EXECUTE_CACHE_12_9 29
#define FREE_REFERENCE_12_1 32
#define FREE_REFERENCE_12_0 33
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_12_4);
      goto unsyntax_access_object_8;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto lambda_14;

    case 7:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_access_object_13)
DEFLABEL (unsyntax_access_object_8)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_21;
  Wrd8 = Wrd12;

DEFLABEL (label_20)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_19;
  Wrd15 = Wrd19;

DEFLABEL (label_18)
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_10])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Wrd29.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Wrd10.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_7])), (Wrd16.pObj));

DEFLABEL (label_11)
  (Wrd15.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_12_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_13);
  if (! (Rvl == (current_block [OBJECT_12_0])))
    goto label_22;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_24;

DEFLABEL (label_25)
  Rvl = (Rsp [2]);

DEFLABEL (label_24)
DEFLABEL (label_26)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_5 13
#define TAG_13_6 5
#define LABEL_13_15 15
#define LABEL_13_12 17
#define TAG_13_13 7
#define LABEL_13_19 19
#define LABEL_13_18 21
#define ENVIRONMENT_LABEL_13_3 37
#define DEBUGGING_LABEL_13_2 36
#define OBJECT_13_1 35
#define OBJECT_13_0 34
#define EXECUTE_CACHE_13_17 23
#define EXECUTE_CACHE_13_16 25
#define EXECUTE_CACHE_13_14 27
#define EXECUTE_CACHE_13_11 29
#define FREE_REFERENCE_13_1 32
#define FREE_REFERENCE_13_0 33
#define FREE_REFERENCES_LABEL_13_0 22
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto unexpand_access_10;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_13_5);
      goto loop_8;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto lambda_18;

    case 8:
      current_block = (Rpc - LABEL_13_19);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unexpand_access_16)
DEFLABEL (unexpand_access_10)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  Wrd10 = Wrd12;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [2]) = (Wrd8.Obj);
  goto loop_8;

DEFLABEL (loop_17)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_15);
  (Wrd10.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_26;
  Wrd21 = Wrd25;

DEFLABEL (label_25)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_22;

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_12])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Rsp [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_22)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_24;
  Wrd37 = Wrd41;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_19;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd38.pObj));

DEFLABEL (label_13)
  (Wrd37.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd22.pObj));

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_13_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_31;
  Wrd9 = Wrd13;

DEFLABEL (label_30)
  (Wrd15.Obj) = (current_block [OBJECT_13_0]);
  if ((Wrd15.Obj) == (Wrd9.Obj))
    goto label_28;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_27)
DEFLABEL (label_29)
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_18);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_19])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_8 7
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto unsyntax_definition_object_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_definition_object_4)
DEFLABEL (unsyntax_definition_object_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_8 7
#define ENVIRONMENT_LABEL_15_3 15
#define DEBUGGING_LABEL_15_2 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_9 9
#define EXECUTE_CACHE_15_7 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto unsyntax_assignment_object_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_assignment_object_6)
DEFLABEL (unsyntax_assignment_object_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
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

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_8 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_5 13
#define LABEL_16_15 15
#define LABEL_16_19 17
#define LABEL_16_20 19
#define LABEL_16_17 21
#define LABEL_16_12 23
#define TAG_16_13 10
#define LABEL_16_27 25
#define LABEL_16_23 27
#define LABEL_16_24 29
#define TAG_16_25 13
#define LABEL_16_28 31
#define ENVIRONMENT_LABEL_16_3 61
#define DEBUGGING_LABEL_16_2 60
#define OBJECT_16_3 59
#define OBJECT_16_2 58
#define OBJECT_16_1 57
#define OBJECT_16_0 56
#define EXECUTE_CACHE_16_30 33
#define EXECUTE_CACHE_16_29 35
#define EXECUTE_CACHE_16_26 37
#define EXECUTE_CACHE_16_22 39
#define EXECUTE_CACHE_16_21 41
#define EXECUTE_CACHE_16_18 43
#define EXECUTE_CACHE_16_16 45
#define EXECUTE_CACHE_16_14 47
#define EXECUTE_CACHE_16_11 49
#define EXECUTE_CACHE_16_6 51
#define FREE_REFERENCE_16_1 54
#define FREE_REFERENCE_16_0 55
#define FREE_REFERENCES_LABEL_16_0 32
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_16_4);
      goto unexpand_definition_20;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_16_15);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_16_12);
      goto lambda_27;

    case 11:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_16_24);
      goto lambda_28;

    case 14:
      current_block = (Rpc - LABEL_16_28);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unexpand_definition_26)
DEFLABEL (unexpand_definition_20)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_21]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_16_19);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_39;
  Wrd15 = Wrd19;

DEFLABEL (label_38)
  if ((Wrd15.Obj) == (current_block [OBJECT_16_0]))
    goto label_31;

DEFLABEL (label_30)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_37;
  Wrd34 = Wrd38;

DEFLABEL (label_36)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_33;

DEFLABEL (label_32)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_12])));
  Rhp += 3;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  Wrd48 = Wrd43;
  (Wrd49.Obj) = (Rsp [2]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  ((Wrd48.pObj) [3]) = (Wrd47.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  ((Wrd48.pObj) [4]) = (Wrd45.Obj);
  (Rsp [1]) = (Wrd49.Obj);
  (Rsp [2]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (label_33)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_35;
  Wrd55 = Wrd59;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd61.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_30;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_10])), (Wrd56.pObj));

DEFLABEL (label_24)
  (Wrd55.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_9])), (Wrd35.pObj));

DEFLABEL (label_23)
  (Wrd34.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_15])), (Wrd16.pObj));

DEFLABEL (label_22)
  (Wrd15.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_16_12);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_40;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_24])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd23 = Wrd22;
  (Wrd24.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_28);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_16_24);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_30]));

INVOKE_INTERFACE_TARGET_0
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
unsyn_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto unexpand_binding_value_2;

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

DEFLABEL (unexpand_binding_value_5)
DEFLABEL (unexpand_binding_value_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd10.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_8 7
#define LABEL_18_6 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 24
#define DEBUGGING_LABEL_18_2 23
#define OBJECT_18_1 22
#define OBJECT_18_0 21
#define EXECUTE_CACHE_18_11 13
#define EXECUTE_CACHE_18_10 15
#define EXECUTE_CACHE_18_7 17
#define FREE_REFERENCE_18_0 20
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_18_4);
      goto unsyntax_comment_object_6;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_comment_object_10)
DEFLABEL (unsyntax_comment_object_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_18_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_8])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_8 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define OBJECT_19_1 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto unsyntax_declaration_object_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_declaration_object_7)
DEFLABEL (unsyntax_declaration_object_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd9.Obj) = (current_block [OBJECT_19_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_11 9
#define LABEL_20_12 11
#define LABEL_20_9 13
#define LABEL_20_14 15
#define ENVIRONMENT_LABEL_20_3 32
#define DEBUGGING_LABEL_20_2 31
#define OBJECT_20_1 30
#define OBJECT_20_0 29
#define EXECUTE_CACHE_20_16 17
#define EXECUTE_CACHE_20_15 19
#define EXECUTE_CACHE_20_13 21
#define EXECUTE_CACHE_20_10 23
#define EXECUTE_CACHE_20_8 25
#define EXECUTE_CACHE_20_6 27
#define FREE_REFERENCES_LABEL_20_0 16
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_20_4);
      goto unsyntax_sequence_object_9;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_sequence_object_12)
DEFLABEL (unsyntax_sequence_object_9)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Wrd10.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_10 9
#define LABEL_21_7 11
#define ENVIRONMENT_LABEL_21_3 25
#define DEBUGGING_LABEL_21_2 24
#define OBJECT_21_2 23
#define OBJECT_21_1 22
#define OBJECT_21_0 21
#define EXECUTE_CACHE_21_11 13
#define EXECUTE_CACHE_21_8 15
#define EXECUTE_CACHE_21_6 17
#define FREE_REFERENCE_21_0 20
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_21_4);
      goto unsyntax_sequence_5;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_sequence_9)
DEFLABEL (unsyntax_sequence_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd10.Obj) = (current_block [OBJECT_21_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  if ((Wrd8.Obj) == (current_block [OBJECT_21_0]))
    goto label_11;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_12;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Wrd9.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_21_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_5 3
#define LABEL_22_4 5
#define LABEL_22_9 7
#define LABEL_22_13 9
#define LABEL_22_16 11
#define LABEL_22_10 13
#define LABEL_22_8 15
#define LABEL_22_17 17
#define LABEL_22_18 19
#define LABEL_22_20 21
#define LABEL_22_25 23
#define LABEL_22_12 25
#define LABEL_22_11 27
#define LABEL_22_22 29
#define LABEL_22_23 31
#define LABEL_22_21 33
#define LABEL_22_19 35
#define LABEL_22_6 37
#define LABEL_22_14 39
#define LABEL_22_15 41
#define ENVIRONMENT_LABEL_22_3 65
#define DEBUGGING_LABEL_22_2 64
#define OBJECT_22_2 63
#define OBJECT_22_1 62
#define OBJECT_22_0 61
#define EXECUTE_CACHE_22_30 43
#define EXECUTE_CACHE_22_29 45
#define EXECUTE_CACHE_22_28 47
#define EXECUTE_CACHE_22_27 49
#define EXECUTE_CACHE_22_26 51
#define EXECUTE_CACHE_22_24 53
#define EXECUTE_CACHE_22_7 55
#define FREE_REFERENCE_22_2 58
#define FREE_REFERENCE_22_1 59
#define FREE_REFERENCE_22_0 60
#define FREE_REFERENCES_LABEL_22_0 42
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd18;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_22_4);
      goto unsyntax_sequence_actions_19;

    case 2:
      current_block = (Rpc - LABEL_22_9);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_22_16);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_22_17);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_22_18);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_22_20);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_22_25);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_22_22);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_22_23);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_22_21);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_22_19);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_22_14);
      goto continuation_15;

    case 19:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_sequence_actions_27)
DEFLABEL (unsyntax_sequence_actions_19)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_28;

DEFLABEL (label_29)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_28)
DEFLABEL (label_30)
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_9])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_26]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_29]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_48)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_47;
  Wrd9 = Wrd13;

DEFLABEL (label_46)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd15.uLng) == 1)
    goto label_43;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_34;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_33)
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_23)
  (Wrd20.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_41;
  Wrd35 = Wrd39;

DEFLABEL (label_40)
  if ((Wrd35.Obj) == (current_block [OBJECT_22_1]))
    goto label_37;

DEFLABEL (label_38)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_36;

DEFLABEL (label_37)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_36)
DEFLABEL (label_39)
  (Wrd48.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_24]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_20])), (Wrd36.pObj));

DEFLABEL (label_24)
  (Wrd35.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_45;
  Wrd56 = Wrd60;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd64.Obj);
  goto label_39;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_18])), (Wrd57.pObj));

DEFLABEL (label_25)
  (Wrd56.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_17])), (Wrd10.pObj));

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_46;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_27]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (Wrd71.Obj) = (current_block [OBJECT_22_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd68.Obj);
  goto label_48;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_22);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  goto label_39;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_16);
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22_14);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_30]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define TAG_23_7 2
#define LABEL_23_10 9
#define ENVIRONMENT_LABEL_23_3 23
#define DEBUGGING_LABEL_23_2 22
#define OBJECT_23_0 21
#define EXECUTE_CACHE_23_12 11
#define EXECUTE_CACHE_23_11 13
#define EXECUTE_CACHE_23_9 15
#define EXECUTE_CACHE_23_8 17
#define FREE_REFERENCE_23_0 20
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_23_4);
      goto unsyntax_open_block_object_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_open_block_object_7)
DEFLABEL (unsyntax_open_block_object_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  if ((Wrd6.Obj) == (current_block [OBJECT_23_0]))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_9)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_6])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_23_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define ENVIRONMENT_LABEL_24_3 16
#define DEBUGGING_LABEL_24_2 15
#define OBJECT_24_1 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 9
#define EXECUTE_CACHE_24_7 11
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto unsyntax_delay_object_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_delay_object_6)
DEFLABEL (unsyntax_delay_object_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_24_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 6
#define DEBUGGING_LABEL_25_2 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto unsyntax_the_environment_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_the_environment_object_3)
DEFLABEL (unsyntax_the_environment_object_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  Rvl = (current_block [OBJECT_25_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_9 9
#define TAG_26_10 3
#define LABEL_26_7 11
#define TAG_26_8 4
#define LABEL_26_12 13
#define LABEL_26_15 15
#define ENVIRONMENT_LABEL_26_3 29
#define DEBUGGING_LABEL_26_2 28
#define OBJECT_26_2 27
#define OBJECT_26_1 26
#define OBJECT_26_0 25
#define EXECUTE_CACHE_26_14 17
#define EXECUTE_CACHE_26_13 19
#define EXECUTE_CACHE_26_11 21
#define FREE_REFERENCE_26_0 24
#define FREE_REFERENCES_LABEL_26_0 16
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_26_4);
      goto unsyntax_disjunction_object_8;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_26_7);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_disjunction_object_12)
DEFLABEL (unsyntax_disjunction_object_8)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_19;
  Wrd9 = Wrd13;

DEFLABEL (label_18)
  if ((Wrd9.Obj) == (current_block [OBJECT_26_0]))
    goto label_16;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_9])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_15;

DEFLABEL (label_16)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_7])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd23 = Wrd22;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_15)
DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd10.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_26_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Wrd9.Obj) = (current_block [OBJECT_26_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_26_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_8 5
#define LABEL_27_5 7
#define LABEL_27_6 9
#define LABEL_27_9 11
#define LABEL_27_11 13
#define TAG_27_12 5
#define ENVIRONMENT_LABEL_27_3 25
#define DEBUGGING_LABEL_27_2 24
#define OBJECT_27_0 23
#define EXECUTE_CACHE_27_14 15
#define EXECUTE_CACHE_27_13 17
#define EXECUTE_CACHE_27_10 19
#define EXECUTE_CACHE_27_7 21
#define FREE_REFERENCES_LABEL_27_0 14
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_27_4);
      goto unexpand_disjunction_5;

    case 1:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unexpand_disjunction_8)
DEFLABEL (unexpand_disjunction_5)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_10)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (Wrd15.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_27_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define TAG_28_9 2
#define LABEL_28_6 9
#define TAG_28_7 3
#define ENVIRONMENT_LABEL_28_3 21
#define DEBUGGING_LABEL_28_2 20
#define OBJECT_28_0 19
#define EXECUTE_CACHE_28_12 11
#define EXECUTE_CACHE_28_11 13
#define EXECUTE_CACHE_28_10 15
#define FREE_REFERENCE_28_0 18
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_28_4);
      goto unsyntax_conditional_object_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_28_6);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_conditional_object_8)
DEFLABEL (unsyntax_conditional_object_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  if ((Wrd6.Obj) == (current_block [OBJECT_28_0]))
    goto label_12;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_8])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  Wrd17 = Wrd13;
  goto label_11;

DEFLABEL (label_12)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_6])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  Wrd17 = Wrd19;

DEFLABEL (label_11)
DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_28_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_28_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define OBJECT_29_1 14
#define OBJECT_29_0 13
#define EXECUTE_CACHE_29_6 11
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_29_4);
      goto unsyntax_conditional_default_6;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_conditional_default_9)
DEFLABEL (unsyntax_conditional_default_6)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_12 5
#define LABEL_30_10 7
#define LABEL_30_14 9
#define LABEL_30_15 11
#define LABEL_30_8 13
#define LABEL_30_7 15
#define LABEL_30_5 17
#define LABEL_30_17 19
#define LABEL_30_19 21
#define LABEL_30_20 23
#define ENVIRONMENT_LABEL_30_3 46
#define DEBUGGING_LABEL_30_2 45
#define OBJECT_30_5 44
#define OBJECT_30_4 43
#define OBJECT_30_3 42
#define OBJECT_30_2 41
#define OBJECT_30_1 40
#define OBJECT_30_0 39
#define EXECUTE_CACHE_30_18 25
#define EXECUTE_CACHE_30_16 27
#define EXECUTE_CACHE_30_13 29
#define EXECUTE_CACHE_30_11 31
#define EXECUTE_CACHE_30_9 33
#define EXECUTE_CACHE_30_6 35
#define FREE_REFERENCE_30_0 38
#define FREE_REFERENCES_LABEL_30_0 24
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_30_4);
      goto unsyntax_conditional_17;

    case 1:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_14);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_30_15);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_30_19);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_conditional_22)
DEFLABEL (unsyntax_conditional_17)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd10.Obj) = (current_block [OBJECT_30_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_34;
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == (Wrd8.Obj))
    goto label_32;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (label_25)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_27;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (Wrd10.Obj) = (current_block [OBJECT_30_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_29;
  Wrd25 = Wrd29;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_24;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_15])), (Wrd26.pObj));

DEFLABEL (label_20)
  (Wrd25.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_14])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_33)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (label_34)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_33;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_19);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_30_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_30_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_30_5]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_9 9
#define ENVIRONMENT_LABEL_31_3 18
#define DEBUGGING_LABEL_31_2 17
#define EXECUTE_CACHE_31_10 11
#define EXECUTE_CACHE_31_8 13
#define EXECUTE_CACHE_31_6 15
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_31_4);
      goto unsyntax_cond_conditional_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_cond_conditional_7)
DEFLABEL (unsyntax_cond_conditional_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define ENVIRONMENT_LABEL_32_3 15
#define DEBUGGING_LABEL_32_2 14
#define OBJECT_32_0 13
#define EXECUTE_CACHE_32_8 9
#define EXECUTE_CACHE_32_6 11
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_32_4);
      goto unsyntax_cond_disjunction_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_cond_disjunction_6)
DEFLABEL (unsyntax_cond_disjunction_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_5 3
#define LABEL_33_4 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_9 11
#define LABEL_33_13 13
#define TAG_33_14 5
#define LABEL_33_11 15
#define LABEL_33_19 17
#define TAG_33_20 7
#define LABEL_33_17 19
#define ENVIRONMENT_LABEL_33_3 43
#define DEBUGGING_LABEL_33_2 42
#define OBJECT_33_2 41
#define OBJECT_33_1 40
#define OBJECT_33_0 39
#define EXECUTE_CACHE_33_22 21
#define EXECUTE_CACHE_33_21 23
#define EXECUTE_CACHE_33_18 25
#define EXECUTE_CACHE_33_16 27
#define EXECUTE_CACHE_33_15 29
#define EXECUTE_CACHE_33_12 31
#define EXECUTE_CACHE_33_10 33
#define EXECUTE_CACHE_33_8 35
#define FREE_REFERENCE_33_0 38
#define FREE_REFERENCES_LABEL_33_0 20
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_33_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_33_4);
      goto unsyntax_cond_alternative_13;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto lambda_19;

    case 6:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_33_19);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_cond_alternative_18)
DEFLABEL (unsyntax_cond_alternative_13)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_33_0])))
    goto label_21;
  Rvl = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_26;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_33_2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_13])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_19])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (label_24)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (Wrd9.Obj) = (current_block [OBJECT_33_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_28;
  Wrd42 = Wrd46;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_7])), (Wrd43.pObj));

DEFLABEL (label_16)
  (Wrd42.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_6])), (Wrd12.pObj));

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_33_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_33_19);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_22]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_7 5
#define LABEL_34_5 7
#define LABEL_34_10 9
#define LABEL_34_11 11
#define LABEL_34_13 13
#define LABEL_34_14 15
#define TAG_34_15 6
#define LABEL_34_8 17
#define LABEL_34_17 19
#define LABEL_34_19 21
#define LABEL_34_21 23
#define ENVIRONMENT_LABEL_34_3 41
#define DEBUGGING_LABEL_34_2 40
#define OBJECT_34_0 39
#define EXECUTE_CACHE_34_20 25
#define EXECUTE_CACHE_34_18 27
#define EXECUTE_CACHE_34_16 29
#define EXECUTE_CACHE_34_12 31
#define EXECUTE_CACHE_34_9 33
#define EXECUTE_CACHE_34_6 35
#define FREE_REFERENCE_34_0 38
#define FREE_REFERENCES_LABEL_34_0 24
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_34_4);
      goto unexpand_conjunction_10;

    case 1:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_34_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_34_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_34_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_34_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unexpand_conjunction_15)
DEFLABEL (unexpand_conjunction_10)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (Wrd9.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_14])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_22;
  Wrd26 = Wrd30;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_17;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_11])), (Wrd27.pObj));

DEFLABEL (label_13)
  (Wrd26.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_10])), (Wrd9.pObj));

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_34_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd16.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [2]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_19);
  (Wrd10.Obj) = (current_block [OBJECT_34_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define LABEL_35_10 11
#define LABEL_35_13 13
#define ENVIRONMENT_LABEL_35_3 30
#define DEBUGGING_LABEL_35_2 29
#define OBJECT_35_1 28
#define OBJECT_35_0 27
#define EXECUTE_CACHE_35_14 15
#define EXECUTE_CACHE_35_12 17
#define EXECUTE_CACHE_35_11 19
#define EXECUTE_CACHE_35_9 21
#define EXECUTE_CACHE_35_8 23
#define FREE_REFERENCE_35_0 26
#define FREE_REFERENCES_LABEL_35_0 14
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_35_4);
      goto unsyntax_extended_lambda_object_7;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_35_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_extended_lambda_object_11)
DEFLABEL (unsyntax_extended_lambda_object_7)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (label_12)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (Wrd9.Obj) = (current_block [OBJECT_35_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_35_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_12 13
#define ENVIRONMENT_LABEL_36_3 31
#define DEBUGGING_LABEL_36_2 30
#define OBJECT_36_0 29
#define EXECUTE_CACHE_36_15 15
#define EXECUTE_CACHE_36_14 17
#define EXECUTE_CACHE_36_13 19
#define EXECUTE_CACHE_36_11 21
#define EXECUTE_CACHE_36_8 23
#define EXECUTE_CACHE_36_7 25
#define FREE_REFERENCE_36_0 28
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_36_4);
      goto unsyntax_lambda_object_5;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_lambda_object_9)
DEFLABEL (unsyntax_lambda_object_5)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_10)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Wrd9.Obj) = (current_block [OBJECT_36_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define TAG_37_6 1
#define LABEL_37_8 7
#define LABEL_37_10 9
#define LABEL_37_11 11
#define TAG_37_12 4
#define ENVIRONMENT_LABEL_37_3 25
#define DEBUGGING_LABEL_37_2 24
#define OBJECT_37_0 23
#define EXECUTE_CACHE_37_15 13
#define EXECUTE_CACHE_37_14 15
#define EXECUTE_CACHE_37_13 17
#define EXECUTE_CACHE_37_9 19
#define EXECUTE_CACHE_37_7 21
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_37_4);
      goto unsyntax_lambda_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_lambda_7)
DEFLABEL (unsyntax_lambda_4)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_37_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_11])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [6]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_37_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 8
#define DEBUGGING_LABEL_38_2 7
#define OBJECT_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_38_4);
      goto collect_lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (collect_lambda_7)
DEFLABEL (collect_lambda_4)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_38_0]))
    goto label_9;
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_38_2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  goto label_8;

DEFLABEL (label_9)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd21.Obj);

DEFLABEL (label_8)
DEFLABEL (label_10)
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_7 5
#define LABEL_39_5 7
#define LABEL_39_9 9
#define ENVIRONMENT_LABEL_39_3 23
#define DEBUGGING_LABEL_39_2 22
#define OBJECT_39_2 21
#define OBJECT_39_1 20
#define OBJECT_39_0 19
#define EXECUTE_CACHE_39_11 11
#define EXECUTE_CACHE_39_10 13
#define EXECUTE_CACHE_39_8 15
#define EXECUTE_CACHE_39_6 17
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_39_4);
      goto unsyntax_lambda_list_3;

    case 1:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_lambda_list_6)
DEFLABEL (unsyntax_lambda_list_3)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (label_9)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  goto label_8;

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_39_9);
  (Wrd5.Obj) = (current_block [OBJECT_39_2]);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_8 7
#define TAG_40_9 2
#define LABEL_40_11 9
#define ENVIRONMENT_LABEL_40_3 20
#define DEBUGGING_LABEL_40_2 19
#define EXECUTE_CACHE_40_12 11
#define EXECUTE_CACHE_40_10 13
#define EXECUTE_CACHE_40_7 15
#define EXECUTE_CACHE_40_6 17
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_40_4);
      goto unsyntax_lambda_body_3;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_8);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_lambda_body_6)
DEFLABEL (unsyntax_lambda_body_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_40_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_9 7
#define LABEL_41_7 9
#define LABEL_41_11 11
#define LABEL_41_14 13
#define LABEL_41_15 15
#define LABEL_41_17 17
#define ENVIRONMENT_LABEL_41_3 36
#define DEBUGGING_LABEL_41_2 35
#define OBJECT_41_1 34
#define OBJECT_41_0 33
#define EXECUTE_CACHE_41_18 19
#define EXECUTE_CACHE_41_16 21
#define EXECUTE_CACHE_41_13 23
#define EXECUTE_CACHE_41_12 25
#define EXECUTE_CACHE_41_10 27
#define EXECUTE_CACHE_41_8 29
#define EXECUTE_CACHE_41_6 31
#define FREE_REFERENCES_LABEL_41_0 18
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto unsyntax_lambda_body_sequence_9;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_41_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_lambda_body_sequence_12)
DEFLABEL (unsyntax_lambda_body_sequence_9)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_41_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_17);
  (Wrd9.Obj) = (current_block [OBJECT_41_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Wrd10.Obj) = (current_block [OBJECT_41_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_10 7
#define LABEL_42_11 9
#define LABEL_42_12 11
#define LABEL_42_13 13
#define LABEL_42_14 15
#define LABEL_42_15 17
#define LABEL_42_18 19
#define LABEL_42_19 21
#define LABEL_42_21 23
#define LABEL_42_22 25
#define LABEL_42_23 27
#define LABEL_42_24 29
#define LABEL_42_25 31
#define LABEL_42_27 33
#define LABEL_42_6 35
#define TAG_42_7 16
#define LABEL_42_32 37
#define LABEL_42_33 39
#define LABEL_42_34 41
#define LABEL_42_30 43
#define TAG_42_31 20
#define LABEL_42_38 45
#define LABEL_42_39 47
#define TAG_42_40 22
#define LABEL_42_28 49
#define LABEL_42_42 51
#define LABEL_42_47 53
#define LABEL_42_48 55
#define LABEL_42_49 57
#define LABEL_42_44 59
#define TAG_42_45 28
#define LABEL_42_16 61
#define LABEL_42_56 63
#define LABEL_42_17 65
#define LABEL_42_54 67
#define LABEL_42_55 69
#define LABEL_42_50 71
#define LABEL_42_51 73
#define TAG_42_52 35
#define LABEL_42_57 75
#define ENVIRONMENT_LABEL_42_3 120
#define DEBUGGING_LABEL_42_2 119
#define OBJECT_42_9 118
#define OBJECT_42_8 117
#define OBJECT_42_7 116
#define OBJECT_42_6 115
#define OBJECT_42_5 114
#define OBJECT_42_4 113
#define OBJECT_42_3 112
#define OBJECT_42_2 111
#define OBJECT_42_1 110
#define OBJECT_42_0 109
#define EXECUTE_CACHE_42_59 77
#define EXECUTE_CACHE_42_58 79
#define EXECUTE_CACHE_42_53 81
#define EXECUTE_CACHE_42_46 83
#define EXECUTE_CACHE_42_43 85
#define EXECUTE_CACHE_42_41 87
#define EXECUTE_CACHE_42_37 89
#define EXECUTE_CACHE_42_36 91
#define EXECUTE_CACHE_42_35 93
#define EXECUTE_CACHE_42_29 95
#define EXECUTE_CACHE_42_26 97
#define EXECUTE_CACHE_42_20 99
#define EXECUTE_CACHE_42_9 101
#define EXECUTE_CACHE_42_8 103
#define FREE_REFERENCE_42_2 106
#define FREE_REFERENCE_42_1 107
#define FREE_REFERENCE_42_0 108
#define FREE_REFERENCES_LABEL_42_0 76
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd59;
  machine_word Wrd58;
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
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd61;
  machine_word Wrd121;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd146;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd124;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_42_4);
      goto unsyntax_combination_object_41;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_40;

    case 2:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_17;

    case 3:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_42_12);
      goto label_49;

    case 5:
      current_block = (Rpc - LABEL_42_13);
      goto label_52;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto label_53;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto label_54;

    case 8:
      current_block = (Rpc - LABEL_42_18);
      goto label_50;

    case 9:
      current_block = (Rpc - LABEL_42_19);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_42_21);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_42_22);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_42_23);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_42_24);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_42_25);
      goto label_47;

    case 15:
      current_block = (Rpc - LABEL_42_27);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_42_6);
      goto lambda_60;

    case 17:
      current_block = (Rpc - LABEL_42_32);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_42_33);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_42_34);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_42_30);
      goto lambda_3;

    case 21:
      current_block = (Rpc - LABEL_42_38);
      goto continuation_2;

    case 22:
      current_block = (Rpc - LABEL_42_39);
      goto lambda_62;

    case 23:
      current_block = (Rpc - LABEL_42_28);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_42_42);
      goto continuation_0;

    case 25:
      current_block = (Rpc - LABEL_42_47);
      goto continuation_20;

    case 26:
      current_block = (Rpc - LABEL_42_48);
      goto label_56;

    case 27:
      current_block = (Rpc - LABEL_42_49);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_42_44);
      goto lambda_63;

    case 29:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_35;

    case 30:
      current_block = (Rpc - LABEL_42_56);
      goto label_55;

    case 31:
      current_block = (Rpc - LABEL_42_17);
      goto continuation_34;

    case 32:
      current_block = (Rpc - LABEL_42_54);
      goto continuation_21;

    case 33:
      current_block = (Rpc - LABEL_42_55);
      goto continuation_31;

    case 34:
      current_block = (Rpc - LABEL_42_50);
      goto continuation_27;

    case 35:
      current_block = (Rpc - LABEL_42_51);
      goto lambda_64;

    case 36:
      current_block = (Rpc - LABEL_42_57);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_combination_object_59)
DEFLABEL (unsyntax_combination_object_41)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_42_6);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_30])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_99;
  Wrd16 = Wrd20;

DEFLABEL (label_98)
  if ((Wrd16.Obj) == (current_block [OBJECT_42_3]))
    goto label_66;

DEFLABEL (label_65)
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd23.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_3;

DEFLABEL (label_66)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_97;
  Wrd26 = Wrd30;

DEFLABEL (label_96)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd32.uLng) == 1)
    goto label_93;

DEFLABEL (label_92)
  (Wrd33.Obj) = (Rsp [2]);
  if ((Wrd33.Obj) == (current_block [OBJECT_42_4]))
    goto label_91;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_27]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_42_5]);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_37]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;

DEFLABEL (label_91)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_22]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_22);
  (Wrd61.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd61.uLng) == 26))
    goto label_90;
  if (Rvl == (current_block [OBJECT_42_2]))
    goto label_69;

DEFLABEL (label_68)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_28]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_29]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_42_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_44])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_46]));

DEFLABEL (label_67)
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_3;

DEFLABEL (label_69)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd69.Obj) = (Rsp [4]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_89;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_88)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_87;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_86)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_42_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_85;
  Wrd93 = Wrd97;

DEFLABEL (label_84)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd99.uLng) == 1)
    goto label_77;

DEFLABEL (label_76)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd109.Obj) = (Rsp [5]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_75;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_74)
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd117.uLng) == 1))
    goto label_73;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (* (--Rsp)) = (Wrd116.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_20]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_42_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_43]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_42_16);
  (Wrd9.Obj) = (current_block [OBJECT_42_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_55]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_70)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_43]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_42_55);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_42_8]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_56]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_50)
  (Wrd106.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_83;
  Wrd125 = Wrd129;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd134.Obj) = (Rsp [5]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_81;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd131.Obj) = ((Wrd133.pObj) [1]);

DEFLABEL (label_80)
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd142.uLng) == 1))
    goto label_79;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_35]));

DEFLABEL (label_79)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_53)
  (Wrd131.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_13])), (Wrd126.pObj));

DEFLABEL (label_52)
  (Wrd125.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_12])), (Wrd94.pObj));

DEFLABEL (label_49)
  (Wrd93.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_25]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_24]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_46)
  (Wrd66.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  (Wrd83.Obj) = (current_block [OBJECT_42_2]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_93)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_95;
  Wrd47 = Wrd51;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  goto label_78;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_34])), (Wrd48.pObj));

DEFLABEL (label_45)
  (Wrd47.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_33])), (Wrd27.pObj));

DEFLABEL (label_44)
  (Wrd26.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_32])), (Wrd17.pObj));

DEFLABEL (label_43)
  (Wrd16.Obj) = Rvl;
  goto label_98;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_42_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_68;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_42_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_65;

DEFLABEL (lambda_61)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_42_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_39])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd16.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_41]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_43]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_42);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_42_39);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_43]));

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_42_44);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_42_7]))
    goto label_101;

DEFLABEL (label_100)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [5]);
  (Rsp [5]) = (Wrd39.Obj);
  Rsp = (& (Rsp [5]));
  goto lambda_3;

DEFLABEL (label_101)
  (Wrd11.Obj) = (Rsp [4]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_54]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_36]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_42_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_36]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42_47);
  (Wrd20.Obj) = Rvl;
  (Wrd19.Obj) = (* (Rsp++));
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_107;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_107;
  if (! (Rvl == (Wrd19.Obj)))
    goto label_100;

DEFLABEL (label_106)
  (Wrd29.Obj) = (Rsp [1]);
  if (! ((Wrd29.Obj) == (current_block [OBJECT_42_6])))
    goto label_103;

DEFLABEL (label_102)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_50]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_51])));
  Rhp += 1;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd48 = Wrd47;
  (Wrd49.Obj) = (Rsp [6]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = ((Wrd51.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_53]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_42_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_58]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_42_57);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_42_9]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_105;
  Wrd32 = Wrd36;

DEFLABEL (label_104)
  (Wrd38.Obj) = (Rsp [1]);
  if ((Wrd38.Obj) == (Wrd32.Obj))
    goto label_102;
  goto label_100;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_49])), (Wrd33.pObj));

DEFLABEL (label_57)
  (Wrd32.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_48]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  goto label_106;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_42_51);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_59]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define ENVIRONMENT_LABEL_43_3 12
#define DEBUGGING_LABEL_43_2 11
#define EXECUTE_CACHE_43_8 7
#define EXECUTE_CACHE_43_7 9
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto unsyntax_let_bindings_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_let_bindings_4)
DEFLABEL (unsyntax_let_bindings_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 10
#define DEBUGGING_LABEL_44_2 9
#define EXECUTE_CACHE_44_6 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto unsyntax_let_binding_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsyntax_let_binding_4)
DEFLABEL (unsyntax_let_binding_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_5 3
#define LABEL_45_6 5
#define LABEL_45_7 7
#define LABEL_45_8 9
#define LABEL_45_9 11
#define LABEL_45_11 13
#define LABEL_45_12 15
#define LABEL_45_13 17
#define LABEL_45_14 19
#define LABEL_45_15 21
#define LABEL_45_16 23
#define LABEL_45_17 25
#define LABEL_45_18 27
#define LABEL_45_19 29
#define LABEL_45_20 31
#define LABEL_45_21 33
#define LABEL_45_22 35
#define LABEL_45_23 37
#define LABEL_45_24 39
#define LABEL_45_25 41
#define LABEL_45_26 43
#define LABEL_45_27 45
#define LABEL_45_28 47
#define LABEL_45_29 49
#define LABEL_45_30 51
#define LABEL_45_31 53
#define LABEL_45_32 55
#define LABEL_45_33 57
#define LABEL_45_34 59
#define LABEL_45_35 61
#define LABEL_45_36 63
#define LABEL_45_37 65
#define LABEL_45_38 67
#define LABEL_45_40 69
#define LABEL_45_41 71
#define LABEL_45_42 73
#define LABEL_45_43 75
#define LABEL_45_44 77
#define LABEL_45_45 79
#define LABEL_45_46 81
#define LABEL_45_48 83
#define LABEL_45_49 85
#define LABEL_45_50 87
#define LABEL_45_51 89
#define LABEL_45_52 91
#define LABEL_45_53 93
#define LABEL_45_54 95
#define LABEL_45_55 97
#define LABEL_45_4 99
#define LABEL_45_58 101
#define LABEL_45_47 103
#define LABEL_45_60 105
#define LABEL_45_61 107
#define LABEL_45_62 109
#define LABEL_45_63 111
#define LABEL_45_64 113
#define LABEL_45_56 115
#define LABEL_45_65 117
#define ENVIRONMENT_LABEL_45_3 143
#define DEBUGGING_LABEL_45_2 142
#define OBJECT_45_10 141
#define OBJECT_45_9 140
#define OBJECT_45_8 139
#define OBJECT_45_7 138
#define OBJECT_45_6 137
#define OBJECT_45_5 136
#define OBJECT_45_4 135
#define OBJECT_45_3 134
#define OBJECT_45_2 133
#define OBJECT_45_1 132
#define OBJECT_45_0 131
#define EXECUTE_CACHE_45_66 119
#define EXECUTE_CACHE_45_59 121
#define EXECUTE_CACHE_45_57 123
#define EXECUTE_CACHE_45_39 125
#define EXECUTE_CACHE_45_10 127
#define FREE_REFERENCE_45_0 130
#define FREE_REFERENCES_LABEL_45_0 118
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unsyn_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd135;
  machine_word Wrd133;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd359;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd355;
  machine_word Wrd352;
  machine_word Wrd346;
  machine_word Wrd347;
  machine_word Wrd348;
  machine_word Wrd345;
  machine_word Wrd337;
  machine_word Wrd339;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd336;
  machine_word Wrd333;
  machine_word Wrd332;
  machine_word Wrd326;
  machine_word Wrd327;
  machine_word Wrd328;
  machine_word Wrd325;
  machine_word Wrd319;
  machine_word Wrd320;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd310;
  machine_word Wrd312;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd309;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd305;
  machine_word Wrd302;
  machine_word Wrd296;
  machine_word Wrd297;
  machine_word Wrd298;
  machine_word Wrd295;
  machine_word Wrd289;
  machine_word Wrd290;
  machine_word Wrd291;
  machine_word Wrd288;
  machine_word Wrd280;
  machine_word Wrd282;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd272;
  machine_word Wrd273;
  machine_word Wrd274;
  machine_word Wrd271;
  machine_word Wrd263;
  machine_word Wrd265;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd255;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd242;
  machine_word Wrd236;
  machine_word Wrd237;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd217;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd225;
  machine_word Wrd215;
  machine_word Wrd369;
  machine_word Wrd366;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd364;
  machine_word Wrd361;
  machine_word Wrd210;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd203;
  machine_word Wrd197;
  machine_word Wrd198;
  machine_word Wrd199;
  machine_word Wrd196;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd180;
  machine_word Wrd176;
  machine_word Wrd170;
  machine_word Wrd171;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd159;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd400;
  machine_word Wrd405;
  machine_word Wrd404;
  machine_word Wrd401;
  machine_word Wrd398;
  machine_word Wrd392;
  machine_word Wrd393;
  machine_word Wrd394;
  machine_word Wrd391;
  machine_word Wrd385;
  machine_word Wrd386;
  machine_word Wrd387;
  machine_word Wrd384;
  machine_word Wrd376;
  machine_word Wrd378;
  machine_word Wrd380;
  machine_word Wrd379;
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
      goto continuation_38;

    case 1:
      current_block = (Rpc - LABEL_45_6);
      goto label_116;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_117;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto label_118;

    case 4:
      current_block = (Rpc - LABEL_45_9);
      goto label_119;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_45_13);
      goto label_91;

    case 8:
      current_block = (Rpc - LABEL_45_14);
      goto label_92;

    case 9:
      current_block = (Rpc - LABEL_45_15);
      goto label_93;

    case 10:
      current_block = (Rpc - LABEL_45_16);
      goto label_94;

    case 11:
      current_block = (Rpc - LABEL_45_17);
      goto label_95;

    case 12:
      current_block = (Rpc - LABEL_45_18);
      goto label_96;

    case 13:
      current_block = (Rpc - LABEL_45_19);
      goto label_97;

    case 14:
      current_block = (Rpc - LABEL_45_20);
      goto label_98;

    case 15:
      current_block = (Rpc - LABEL_45_21);
      goto label_115;

    case 16:
      current_block = (Rpc - LABEL_45_22);
      goto label_99;

    case 17:
      current_block = (Rpc - LABEL_45_23);
      goto label_100;

    case 18:
      current_block = (Rpc - LABEL_45_24);
      goto label_101;

    case 19:
      current_block = (Rpc - LABEL_45_25);
      goto label_102;

    case 20:
      current_block = (Rpc - LABEL_45_26);
      goto label_103;

    case 21:
      current_block = (Rpc - LABEL_45_27);
      goto label_104;

    case 22:
      current_block = (Rpc - LABEL_45_28);
      goto label_105;

    case 23:
      current_block = (Rpc - LABEL_45_29);
      goto label_106;

    case 24:
      current_block = (Rpc - LABEL_45_30);
      goto label_107;

    case 25:
      current_block = (Rpc - LABEL_45_31);
      goto label_108;

    case 26:
      current_block = (Rpc - LABEL_45_32);
      goto label_109;

    case 27:
      current_block = (Rpc - LABEL_45_33);
      goto label_110;

    case 28:
      current_block = (Rpc - LABEL_45_34);
      goto label_111;

    case 29:
      current_block = (Rpc - LABEL_45_35);
      goto label_112;

    case 30:
      current_block = (Rpc - LABEL_45_36);
      goto label_113;

    case 31:
      current_block = (Rpc - LABEL_45_37);
      goto label_114;

    case 32:
      current_block = (Rpc - LABEL_45_38);
      goto continuation_3;

    case 33:
      current_block = (Rpc - LABEL_45_40);
      goto continuation_2;

    case 34:
      current_block = (Rpc - LABEL_45_41);
      goto label_72;

    case 35:
      current_block = (Rpc - LABEL_45_42);
      goto label_73;

    case 36:
      current_block = (Rpc - LABEL_45_43);
      goto label_74;

    case 37:
      current_block = (Rpc - LABEL_45_44);
      goto label_75;

    case 38:
      current_block = (Rpc - LABEL_45_45);
      goto label_76;

    case 39:
      current_block = (Rpc - LABEL_45_46);
      goto label_77;

    case 40:
      current_block = (Rpc - LABEL_45_48);
      goto label_78;

    case 41:
      current_block = (Rpc - LABEL_45_49);
      goto label_79;

    case 42:
      current_block = (Rpc - LABEL_45_50);
      goto label_80;

    case 43:
      current_block = (Rpc - LABEL_45_51);
      goto label_81;

    case 44:
      current_block = (Rpc - LABEL_45_52);
      goto label_82;

    case 45:
      current_block = (Rpc - LABEL_45_53);
      goto label_83;

    case 46:
      current_block = (Rpc - LABEL_45_54);
      goto label_84;

    case 47:
      current_block = (Rpc - LABEL_45_55);
      goto label_85;

    case 48:
      current_block = (Rpc - LABEL_45_4);
      goto rewrite_named_let_69;

    case 49:
      current_block = (Rpc - LABEL_45_58);
      goto label_71;

    case 50:
      current_block = (Rpc - LABEL_45_47);
      goto continuation_60;

    case 51:
      current_block = (Rpc - LABEL_45_60);
      goto label_86;

    case 52:
      current_block = (Rpc - LABEL_45_61);
      goto label_87;

    case 53:
      current_block = (Rpc - LABEL_45_62);
      goto label_88;

    case 54:
      current_block = (Rpc - LABEL_45_63);
      goto label_89;

    case 55:
      current_block = (Rpc - LABEL_45_64);
      goto label_90;

    case 56:
      current_block = (Rpc - LABEL_45_56);
      goto lambda_51;

    case 57:
      current_block = (Rpc - LABEL_45_65);
      goto continuation_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_named_let_121)
DEFLABEL (rewrite_named_let_69)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_124;

DEFLABEL (label_123)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_124)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_40]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_127;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_126)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_38]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_125)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_59]));

DEFLABEL (label_127)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_58]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_126;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_38);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd141.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd141.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_39]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_12);
  (Wrd144.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd144.uLng) == 26))
    goto label_185;
  if (Rvl == (current_block [OBJECT_45_2]))
    goto label_129;

DEFLABEL (label_128)
  Rsp = (& (Rsp [2]));
  goto label_123;

DEFLABEL (label_129)
  (Wrd154.Obj) = (Rsp [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_184;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd151.Obj) = ((Wrd153.pObj) [0]);

DEFLABEL (label_183)
  if (! ((Wrd151.Obj) == (current_block [OBJECT_45_3])))
    goto label_128;
  (Wrd164.Obj) = (Rsp [0]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if (! ((Wrd165.uLng) == 1))
    goto label_182;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd164.Obj));
  (Wrd161.Obj) = ((Wrd163.pObj) [1]);

DEFLABEL (label_181)
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd172.uLng) == 1))
    goto label_180;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd170.Obj) = ((Wrd171.pObj) [0]);

DEFLABEL (label_179)
  if (! ((Wrd170.Obj) == (current_block [OBJECT_45_4])))
    goto label_128;
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd184.Obj) = (Rsp [1]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if (! ((Wrd185.uLng) == 1))
    goto label_178;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd181.Obj) = ((Wrd183.pObj) [1]);

DEFLABEL (label_177)
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd192.uLng) == 1))
    goto label_176;
  (Wrd191.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd190.Obj) = ((Wrd191.pObj) [1]);

DEFLABEL (label_175)
  (Wrd199.uLng) = (OBJECT_TYPE (Wrd190.Obj));
  if (! ((Wrd199.uLng) == 1))
    goto label_174;
  (Wrd198.pObj) = (OBJECT_ADDRESS (Wrd190.Obj));
  (Wrd197.Obj) = ((Wrd198.pObj) [1]);

DEFLABEL (label_173)
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if (! ((Wrd206.uLng) == 1))
    goto label_172;
  (Wrd204.pObj) = (OBJECT_ADDRESS (Wrd197.Obj));
  (Wrd205.Obj) = ((Wrd204.pObj) [0]);
  (* (--Rsp)) = (Wrd205.Obj);

DEFLABEL (label_171)
  (Wrd361.Obj) = (current_block [OBJECT_45_5]);
  (Wrd364.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd364.Lng))))
    goto label_170;
  (Wrd212.uLng) = (OBJECT_DATUM (Wrd361.Obj));
  (Wrd213.Obj) = (Rsp [0]);
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if ((Wrd212.Obj) == (Wrd214.Obj))
    goto label_169;

DEFLABEL (label_168)
  (Wrd215.Obj) = (current_block [OBJECT_45_7]);
  (* (--Rsp)) = (Wrd215.Obj);
  (Wrd225.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd225.Lng)))
    goto label_130;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_130)
  (Wrd219.uLng) = (OBJECT_DATUM (Wrd215.Obj));
  (Wrd220.Obj) = (Rsp [1]);
  (Wrd221.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if ((Wrd219.Obj) == (Wrd221.Obj))
    goto label_132;
  (Wrd217.Obj) = (current_block [OBJECT_45_9]);
  goto label_131;

DEFLABEL (label_132)
  (Wrd217.Obj) = (current_block [OBJECT_45_8]);

DEFLABEL (label_131)
DEFLABEL (label_167)
  Rsp = (& (Rsp [3]));
  if ((Wrd217.Obj) == ((SCHEME_OBJECT) 0))
    goto label_128;

DEFLABEL (label_166)
  (Wrd230.Obj) = (Rsp [0]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if (! ((Wrd231.uLng) == 1))
    goto label_165;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd230.Obj));
  (Wrd227.Obj) = ((Wrd229.pObj) [1]);

DEFLABEL (label_164)
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd227.Obj));
  if (! ((Wrd238.uLng) == 1))
    goto label_163;
  (Wrd237.pObj) = (OBJECT_ADDRESS (Wrd227.Obj));
  (Wrd236.Obj) = ((Wrd237.pObj) [1]);

DEFLABEL (label_162)
  (Wrd245.uLng) = (OBJECT_TYPE (Wrd236.Obj));
  if (! ((Wrd245.uLng) == 1))
    goto label_161;
  (Wrd243.pObj) = (OBJECT_ADDRESS (Wrd236.Obj));
  (Wrd244.Obj) = ((Wrd243.pObj) [0]);
  (* (--Rsp)) = (Wrd244.Obj);

DEFLABEL (label_160)
  (Wrd250.Obj) = (Rsp [0]);
  (Wrd251.uLng) = (OBJECT_TYPE (Wrd250.Obj));
  if ((Wrd251.uLng) == 1)
    goto label_134;

DEFLABEL (label_133)
  Rsp = (& (Rsp [3]));
  goto label_123;

DEFLABEL (label_134)
  if (! ((Wrd251.uLng) == 1))
    goto label_159;
  (Wrd255.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd253.Obj) = ((Wrd255.pObj) [0]);

DEFLABEL (label_158)
  if (! ((Wrd253.Obj) == (current_block [OBJECT_45_10])))
    goto label_133;
  (Wrd266.Obj) = (Rsp [0]);
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd266.Obj));
  if (! ((Wrd267.uLng) == 1))
    goto label_157;
  (Wrd265.pObj) = (OBJECT_ADDRESS (Wrd266.Obj));
  (Wrd263.Obj) = ((Wrd265.pObj) [1]);

DEFLABEL (label_156)
  (Wrd274.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if (! ((Wrd274.uLng) == 1))
    goto label_155;
  (Wrd273.pObj) = (OBJECT_ADDRESS (Wrd263.Obj));
  (Wrd272.Obj) = ((Wrd273.pObj) [0]);

DEFLABEL (label_154)
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd272.Obj));
  if (! ((Wrd279.uLng) == 1))
    goto label_133;
  (Wrd283.Obj) = (Rsp [1]);
  (Wrd284.uLng) = (OBJECT_TYPE (Wrd283.Obj));
  if (! ((Wrd284.uLng) == 1))
    goto label_153;
  (Wrd282.pObj) = (OBJECT_ADDRESS (Wrd283.Obj));
  (Wrd280.Obj) = ((Wrd282.pObj) [1]);

DEFLABEL (label_152)
  (Wrd291.uLng) = (OBJECT_TYPE (Wrd280.Obj));
  if (! ((Wrd291.uLng) == 1))
    goto label_151;
  (Wrd290.pObj) = (OBJECT_ADDRESS (Wrd280.Obj));
  (Wrd289.Obj) = ((Wrd290.pObj) [1]);

DEFLABEL (label_150)
  (Wrd298.uLng) = (OBJECT_TYPE (Wrd289.Obj));
  if (! ((Wrd298.uLng) == 1))
    goto label_149;
  (Wrd297.pObj) = (OBJECT_ADDRESS (Wrd289.Obj));
  (Wrd296.Obj) = ((Wrd297.pObj) [1]);

DEFLABEL (label_148)
  (Wrd305.uLng) = (OBJECT_TYPE (Wrd296.Obj));
  if (! ((Wrd305.uLng) == 1))
    goto label_147;
  (Wrd303.pObj) = (OBJECT_ADDRESS (Wrd296.Obj));
  (Wrd304.Obj) = ((Wrd303.pObj) [0]);
  (* (--Rsp)) = (Wrd304.Obj);

DEFLABEL (label_146)
  (Wrd313.Obj) = (Rsp [1]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if (! ((Wrd314.uLng) == 1))
    goto label_145;
  (Wrd312.pObj) = (OBJECT_ADDRESS (Wrd313.Obj));
  (Wrd310.Obj) = ((Wrd312.pObj) [1]);

DEFLABEL (label_144)
  (Wrd321.uLng) = (OBJECT_TYPE (Wrd310.Obj));
  if (! ((Wrd321.uLng) == 1))
    goto label_143;
  (Wrd320.pObj) = (OBJECT_ADDRESS (Wrd310.Obj));
  (Wrd319.Obj) = ((Wrd320.pObj) [0]);

DEFLABEL (label_142)
  (Wrd328.uLng) = (OBJECT_TYPE (Wrd319.Obj));
  if (! ((Wrd328.uLng) == 1))
    goto label_141;
  (Wrd327.pObj) = (OBJECT_ADDRESS (Wrd319.Obj));
  (Wrd326.Obj) = ((Wrd327.pObj) [0]);

DEFLABEL (label_140)
  (Wrd333.Obj) = (* (Rsp++));
  if (! ((Wrd326.Obj) == (Wrd333.Obj)))
    goto label_133;
  (Wrd336.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd336.Obj);
  (Wrd340.Obj) = (Rsp [1]);
  (Wrd341.uLng) = (OBJECT_TYPE (Wrd340.Obj));
  if (! ((Wrd341.uLng) == 1))
    goto label_139;
  (Wrd339.pObj) = (OBJECT_ADDRESS (Wrd340.Obj));
  (Wrd337.Obj) = ((Wrd339.pObj) [1]);

DEFLABEL (label_138)
  (Wrd348.uLng) = (OBJECT_TYPE (Wrd337.Obj));
  if (! ((Wrd348.uLng) == 1))
    goto label_137;
  (Wrd347.pObj) = (OBJECT_ADDRESS (Wrd337.Obj));
  (Wrd346.Obj) = ((Wrd347.pObj) [0]);

DEFLABEL (label_136)
  (Wrd355.uLng) = (OBJECT_TYPE (Wrd346.Obj));
  if (! ((Wrd355.uLng) == 1))
    goto label_135;
  (Wrd353.pObj) = (OBJECT_ADDRESS (Wrd346.Obj));
  (Wrd354.Obj) = ((Wrd353.pObj) [1]);
  (* (--Rsp)) = (Wrd354.Obj);
  goto label_125;

DEFLABEL (label_135)
  (Wrd359.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_37]))));
  (* (--Rsp)) = (Wrd359.Obj);
  (* (--Rsp)) = (Wrd346.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_114)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_137)
  (Wrd352.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_36]))));
  (* (--Rsp)) = (Wrd352.Obj);
  (* (--Rsp)) = (Wrd337.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_113)
  (Wrd346.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd345.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_35]))));
  (* (--Rsp)) = (Wrd345.Obj);
  (* (--Rsp)) = (Wrd340.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_112)
  (Wrd337.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd332.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_34]))));
  (* (--Rsp)) = (Wrd332.Obj);
  (* (--Rsp)) = (Wrd319.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_111)
  (Wrd326.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd325.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_33]))));
  (* (--Rsp)) = (Wrd325.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_110)
  (Wrd319.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd318.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd318.Obj);
  (* (--Rsp)) = (Wrd313.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_109)
  (Wrd310.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd309.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd309.Obj);
  (* (--Rsp)) = (Wrd296.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd302.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd302.Obj);
  (* (--Rsp)) = (Wrd289.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_107)
  (Wrd296.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd295.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_29]))));
  (* (--Rsp)) = (Wrd295.Obj);
  (* (--Rsp)) = (Wrd280.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_106)
  (Wrd289.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd288.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_28]))));
  (* (--Rsp)) = (Wrd288.Obj);
  (* (--Rsp)) = (Wrd283.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_105)
  (Wrd280.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd278.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_27]))));
  (* (--Rsp)) = (Wrd278.Obj);
  (* (--Rsp)) = (Wrd263.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_104)
  (Wrd272.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd271.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd271.Obj);
  (* (--Rsp)) = (Wrd266.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_103)
  (Wrd263.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd261.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_102)
  (Wrd253.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd249.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_101)
  (* (--Rsp)) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd242.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd242.Obj);
  (* (--Rsp)) = (Wrd227.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_100)
  (Wrd236.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_22]))));
  (* (--Rsp)) = (Wrd235.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_99)
  (Wrd227.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_169)
  Rsp = (& (Rsp [2]));
  goto label_166;

DEFLABEL (label_170)
  (Wrd366.Obj) = (Rsp [0]);
  (Wrd369.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd369.Obj);
  (* (--Rsp)) = (Wrd366.Obj);
  (* (--Rsp)) = (Wrd361.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_115)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_168;
  goto label_169;

DEFLABEL (label_172)
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd203.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_97)
  (Wrd197.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_96)
  (Wrd190.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_95)
  (Wrd181.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_94)
  (Wrd170.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_93)
  (Wrd161.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_92)
  (Wrd151.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_185)
  (Wrd145.Obj) = (current_block [OBJECT_45_2]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_91)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  goto label_129;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_123;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_223;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_222)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_221;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_220)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_219;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_218)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_217;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [0]);

DEFLABEL (label_216)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_215;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_214)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_213;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_212)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_47]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_211;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [1]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_210)
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_209;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [0]);

DEFLABEL (label_208)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_207;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_206)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_205;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_204)
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_203;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd107.pObj) [0]);

DEFLABEL (label_202)
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_201;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd113.Obj) = ((Wrd114.pObj) [1]);

DEFLABEL (label_200)
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd122.uLng) == 1))
    goto label_199;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd120.Obj) = ((Wrd121.pObj) [0]);

DEFLABEL (label_198)
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_197;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [1]);
  (* (--Rsp)) = (Wrd128.Obj);

DEFLABEL (label_196)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_56]))));
  (* (--Rsp)) = (Wrd135.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_57]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_45_47);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_195;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_194)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_193;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_192)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_191;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_190)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_189;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_188)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_187;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_186)
  (Wrd47.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_45_3]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_187)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_64]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_90)
  (Wrd40.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_63]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_89)
  (Wrd33.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_62]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_88)
  (Wrd26.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_61]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_87)
  (Wrd19.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_60]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_86)
  (Wrd10.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_55]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_54]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_84)
  (Wrd120.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_53]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_83)
  (Wrd113.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_52]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_82)
  (Wrd106.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_51]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_81)
  (Wrd99.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_50]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_80)
  (Wrd92.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_49]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_79)
  (Wrd83.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_48]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_46]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_45]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_76)
  (Wrd57.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_44]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_75)
  (Wrd50.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_43]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_74)
  (Wrd43.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_42]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_73)
  (Wrd36.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_41]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_72)
  (Wrd27.Obj) = Rvl;
  goto label_222;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  (Wrd379.Obj) = (Rsp [0]);
  (Wrd380.uLng) = (OBJECT_TYPE (Wrd379.Obj));
  if (! ((Wrd380.uLng) == 1))
    goto label_231;
  (Wrd378.pObj) = (OBJECT_ADDRESS (Wrd379.Obj));
  (Wrd376.Obj) = ((Wrd378.pObj) [1]);

DEFLABEL (label_230)
  (Wrd387.uLng) = (OBJECT_TYPE (Wrd376.Obj));
  if (! ((Wrd387.uLng) == 1))
    goto label_229;
  (Wrd386.pObj) = (OBJECT_ADDRESS (Wrd376.Obj));
  (Wrd385.Obj) = ((Wrd386.pObj) [0]);

DEFLABEL (label_228)
  (Wrd394.uLng) = (OBJECT_TYPE (Wrd385.Obj));
  if (! ((Wrd394.uLng) == 1))
    goto label_227;
  (Wrd393.pObj) = (OBJECT_ADDRESS (Wrd385.Obj));
  (Wrd392.Obj) = ((Wrd393.pObj) [1]);

DEFLABEL (label_226)
  (Rsp [0]) = (Wrd392.Obj);
  (Wrd401.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd404.Obj) = ((Wrd401.pObj) [0]);
  (Wrd405.uLng) = (OBJECT_TYPE (Wrd404.Obj));
  if ((Wrd405.uLng) == 50)
    goto label_225;
  Wrd400 = Wrd404;

DEFLABEL (label_224)
  (Rsp [1]) = (Wrd400.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_9])), (Wrd401.pObj));

DEFLABEL (label_119)
  (Wrd400.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  (Wrd398.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd398.Obj);
  (* (--Rsp)) = (Wrd385.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_118)
  (Wrd392.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  (Wrd391.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd391.Obj);
  (* (--Rsp)) = (Wrd376.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_117)
  (Wrd385.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  (Wrd384.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd384.Obj);
  (* (--Rsp)) = (Wrd379.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_116)
  (Wrd376.Obj) = Rvl;
  goto label_230;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_45_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  goto label_166;

DEFLABEL (lambda_122)
DEFLABEL (lambda_51)
  INTERRUPT_CHECK (26, LABEL_45_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_66]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_45_65);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_233;
  (Wrd7.Obj) = (current_block [OBJECT_45_4]);
  goto label_232;

DEFLABEL (label_233)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));

DEFLABEL (label_232)
DEFLABEL (label_234)
  (Wrd12.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
unsyn_so_3d6dd04dfb8156d4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	0,
	1,
	2,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	2,
	0,
	1,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	2,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 45)
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

static const struct liarc_code_S arr_decl_unsyn_so_3d6dd04dfb8156d4 [45] =
  {
    { "unsyn_so_code_1", 20, unsyn_so_code_1 },
    { "unsyn_so_code_2", 8, unsyn_so_code_2 },
    { "unsyn_so_code_3", 4, unsyn_so_code_3 },
    { "unsyn_so_code_4", 3, unsyn_so_code_4 },
    { "unsyn_so_code_5", 3, unsyn_so_code_5 },
    { "unsyn_so_code_6", 2, unsyn_so_code_6 },
    { "unsyn_so_code_7", 3, unsyn_so_code_7 },
    { "unsyn_so_code_8", 6, unsyn_so_code_8 },
    { "unsyn_so_code_9", 11, unsyn_so_code_9 },
    { "unsyn_so_code_10", 3, unsyn_so_code_10 },
    { "unsyn_so_code_11", 1, unsyn_so_code_11 },
    { "unsyn_so_code_12", 9, unsyn_so_code_12 },
    { "unsyn_so_code_13", 10, unsyn_so_code_13 },
    { "unsyn_so_code_14", 2, unsyn_so_code_14 },
    { "unsyn_so_code_15", 3, unsyn_so_code_15 },
    { "unsyn_so_code_16", 15, unsyn_so_code_16 },
    { "unsyn_so_code_17", 3, unsyn_so_code_17 },
    { "unsyn_so_code_18", 5, unsyn_so_code_18 },
    { "unsyn_so_code_19", 3, unsyn_so_code_19 },
    { "unsyn_so_code_20", 7, unsyn_so_code_20 },
    { "unsyn_so_code_21", 5, unsyn_so_code_21 },
    { "unsyn_so_code_22", 20, unsyn_so_code_22 },
    { "unsyn_so_code_23", 4, unsyn_so_code_23 },
    { "unsyn_so_code_24", 3, unsyn_so_code_24 },
    { "unsyn_so_code_25", 1, unsyn_so_code_25 },
    { "unsyn_so_code_26", 7, unsyn_so_code_26 },
    { "unsyn_so_code_27", 6, unsyn_so_code_27 },
    { "unsyn_so_code_28", 4, unsyn_so_code_28 },
    { "unsyn_so_code_29", 4, unsyn_so_code_29 },
    { "unsyn_so_code_30", 11, unsyn_so_code_30 },
    { "unsyn_so_code_31", 4, unsyn_so_code_31 },
    { "unsyn_so_code_32", 3, unsyn_so_code_32 },
    { "unsyn_so_code_33", 9, unsyn_so_code_33 },
    { "unsyn_so_code_34", 11, unsyn_so_code_34 },
    { "unsyn_so_code_35", 6, unsyn_so_code_35 },
    { "unsyn_so_code_36", 6, unsyn_so_code_36 },
    { "unsyn_so_code_37", 5, unsyn_so_code_37 },
    { "unsyn_so_code_38", 1, unsyn_so_code_38 },
    { "unsyn_so_code_39", 4, unsyn_so_code_39 },
    { "unsyn_so_code_40", 4, unsyn_so_code_40 },
    { "unsyn_so_code_41", 8, unsyn_so_code_41 },
    { "unsyn_so_code_42", 37, unsyn_so_code_42 },
    { "unsyn_so_code_43", 2, unsyn_so_code_43 },
    { "unsyn_so_code_44", 2, unsyn_so_code_44 },
    { "unsyn_so_code_45", 58, unsyn_so_code_45 }
  };

int
decl_unsyn_so_3d6dd04dfb8156d4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_unsyn_so_3d6dd04dfb8156d4);
  return (0);
}

DECLARE_COMPILED_CODE ("unsyn.so", 3, decl_unsyn_so_3d6dd04dfb8156d4, unsyn_so_3d6dd04dfb8156d4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_unsyn_so_data_3d6dd04dfb8156d4 [7175] =
  "\xbf\x01\x67\xca\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9"
  "\x0d\x0d\x0d\xba\x0d\x0d\x0d\x0d\xbb\x0d\x0d\x0d\xbc\x0d\x0d\x0d"
  "\x0d\xbd\x0d\x08\x0d\xbe\x25\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x1d\x0c\x0d"
  "\x1c\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc1\x1c\x1b\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x0d\x1c\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\xb6\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x85"
  "\x02\x08\x06\x07\x02\x86\x02\x02\xc2\x1c\x02\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x0d\x1b\x1b\x24\x28\x0d\xb9\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x07\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x08\x07\x1b\x1b\x24\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\x08\x0d\xba\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x1b\x07\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x07\x08\x0d\x1c\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x08\x28\x0d\xbb\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x08\x88\x22\x29\x21"
  "\x9d\x2b\xbd\x1d\xb0\x02\x88\x08\x0d\x07\x1b\x24\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc1\x0d"
  "\x0d\x08\x1d\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x08\x1d\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\xb4\x0d\xbc\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x08\xb4\x0d\xc2\x07\x82\xc1"
  "\x1c\x1b\x1b\x1b\x0d\x24\x28\x0d\x28\x0d\x1c\x28\xb3\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\x1b\x06\x07\x85\x1b\x02"
  "\x08\x1b\x84\x1b\x1b\x0d\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a"
  "\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x06\x07\x07\x07\x1b\x2a\x17\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb1"
  "\x1b\xb7\x1b\x1b\xb6\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\xb2\x1b\x1b"
  "\x1b\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x6e\x73\x79\x6e\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x07\x61\x63\x63\x65\x73"
  "\x73\x0b\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0c\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x08\x63\x6f\x6d\x6d\x65\x6e\x74"
  "\x0c\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x0c\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x0b\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x06\x64\x65\x6c\x61\x79\x0c\x64\x69\x73\x6a\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x10\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x07\x6c\x61\x6d\x62\x64\x61\x0b\x6f\x70\x65"
  "\x6e\x2d\x62\x6c\x6f\x63\x6b\x0a\x71\x75\x6f\x74\x61\x74\x69\x6f"
  "\x6e\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x10\x74\x68\x65\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x09\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x18\x75\x6e\x73\x79\x6e\x74\x61\x78\x65\x72\x2f\x73"
  "\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x02\x19\x75\x6e\x73"
  "\x79\x6e\x74\x61\x78\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x20\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x74"
  "\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x09\x19\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x6f\x62\x6a\x65\x63\x74\x0a"
  "\x13\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x71\x75\x6f\x74\x61\x74"
  "\x69\x6f\x6e\x0b\x1b\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x6f\x70"
  "\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x6f\x62\x6a\x65\x63\x74\x0c"
  "\x17\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x0d\x20\x75\x6e\x73\x79\x6e\x74\x61"
  "\x78\x2d\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x6f\x62\x6a\x65\x63\x74\x0e\x1c\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x0f\x16\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x64\x65\x6c\x61\x79\x2d\x6f\x62\x6a\x65\x63\x74\x10\x1b\x75\x6e"
  "\x73\x79\x6e\x74\x61\x78\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f"
  "\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x11\x1c\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x12\x1c\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x13\x18\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x2d\x6f\x62\x6a\x65\x63\x74\x14\x1c\x75\x6e\x73"
  "\x79\x6e\x74\x61\x78\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x15\x1b\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x16\x17\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x61"
  "\x63\x63\x65\x73\x73\x2d\x6f\x62\x6a\x65\x63\x74\x17\x12\x75\x6e"
  "\x73\x79\x6e\x74\x61\x78\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x18"
  "\x12\x04\x12\x6d\x61\x6b\x65\x2d\x73\x63\x6f\x64\x65\x2d\x77\x61"
  "\x6c\x6b\x65\x72\x02\x17\x2a\x81\x81\x02\x16\x28\x81\x81\x02\x15"
  "\x26\x81\x85\x02\x14\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20"
  "\x81\x85\x02\x11\x1e\x81\x85\x02\x10\x1c\x81\x85\x02\x0f\x1a\x81"
  "\x85\x02\x0e\x18\x81\x85\x02\x0d\x16\x81\x85\x02\x0c\x14\x81\x85"
  "\x02\x0b\x12\x81\x85\x02\x0a\x10\x81\x85\x02\x09\x0e\x81\x85\x02"
  "\x08\x0c\x81\x85\x02\x07\x0a\x81\x85\x02\x06\x08\x81\x85\x02\x05"
  "\x06\x81\x83\x02\x04\x04\x82\x02\x29\x55\x19\x02\x02\x06\x61\x6c"
  "\x69\x73\x74\x1c\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x77\x69\x74"
  "\x68\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x73\x1a"
  "\x0e\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x73\x1b\x02"
  "\x1b\x02\x03\x07\x61\x6c\x69\x73\x74\x3f\x05\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x1c\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d"
  "\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x09\x75\x6e\x73\x79"
  "\x6e\x74\x61\x78\x1d\x05\x1f\x12\x81\x83\x02\x1e\x10\x81\x85\x02"
  "\x1d\x0e\x81\x83\x02\x1c\x0c\x81\x83\x02\x1b\x0a\x81\x83\x02\x1a"
  "\x08\x81\x85\x02\x19\x06\x81\x85\x02\x18\x04\x84\x06\x11\x24\x1e"
  "\x02\x04\x63\x64\x72\x1f\x1b\x02\x04\x05\x61\x73\x73\x71\x20\x02"
  "\x23\x0a\x81\x87\x02\x22\x08\x81\x87\x02\x21\x06\x84\x06\x20\x04"
  "\x81\x85\x02\x09\x12\x21\x02\x1b\x02\x04\x20\x02\x26\x08\x81\x85"
  "\x02\x25\x06\x81\x83\x02\x24\x04\x83\x04\x07\x0f\x22\x02\x22\x75"
  "\x6e\x73\x79\x6e\x74\x61\x78\x65\x72\x3a\x65\x6c\x69\x64\x65\x2d"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x61\x63\x63\x65\x73\x73\x65\x73\x3f"
  "\x23\x15\x75\x6e\x73\x79\x6e\x74\x61\x78\x65\x72\x3a\x6d\x61\x63"
  "\x72\x6f\x69\x7a\x65\x3f\x24\x03\x29\x08\x81\x87\x02\x28\x06\x81"
  "\x87\x02\x27\x04\x85\x08\x07\x0d\x25\x02\x04\x0e\x74\x68\x65\x72"
  "\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x04\x0e\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x62\x6f\x75\x6e\x64\x3f\x03\x2b\x06\x81\x85\x02\x2a\x04"
  "\x84\x06\x05\x0d\x26\x02\x08\x03\x0b\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x03\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x04\x10\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x27\x04\x2e\x08\x81\x85\x02\x2d\x06\x81"
  "\x87\x02\x2c\x04\x83\x04\x07\x12\x28\x02\x09\x1f\x1b\x03\x04\x20"
  "\x04\x0b\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x03\x34\x0e\x81"
  "\x87\x02\x33\x0c\x81\x8b\x02\x32\x0a\x81\x87\x02\x31\x08\x81\x87"
  "\x02\x30\x06\x84\x06\x2f\x04\x81\x85\x02\x0d\x19\x29\x02\x0a\x0c"
  "\x73\x63\x6f\x64\x65\x2d\x71\x75\x6f\x74\x65\x2a\x06\x71\x75\x6f"
  "\x74\x65\x1e\x3d\x3b\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x2b\x1b\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x03"
  "\x15\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x3f\x03\x1a\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x73\x63\x6f\x64\x65"
  "\x04\x27\x05\x3f\x18\x81\x85\x02\x3e\x16\x81\x85\x02\x3d\x14\x81"
  "\x83\x02\x3c\x12\x81\x83\x02\x3b\x10\x81\x83\x02\x3a\x0e\x81\x83"
  "\x02\x39\x0c\x81\x83\x02\x38\x0a\x81\x85\x02\x37\x08\x81\x85\x02"
  "\x36\x06\x81\x85\x02\x35\x04\x84\x06\x17\x30\x2c\x02\x0b\x2a\x03"
  "\x15\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x04\x27\x03\x42\x08\x81\x87\x02\x41\x06\x81"
  "\x85\x02\x40\x04\x84\x06\x07\x11\x2a\x02\x0c\x03\x0e\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x2d\x02\x43\x04\x84\x06"
  "\x03\x2e\x02\x0d\x1a\x73\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62"
  "\x61\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x23\x24"
  "\x03\x04\x10\x75\x6e\x65\x78\x70\x61\x6e\x64\x2d\x61\x63\x63\x65"
  "\x73\x73\x04\x12\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6d\x70\x6f"
  "\x6e\x65\x6e\x74\x73\x2f\x03\x2d\x04\x0a\x69\x73\x2d\x62\x6f\x75"
  "\x6e\x64\x3f\x2d\x03\x0a\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x06"
  "\x4c\x14\x81\x87\x02\x4b\x12\x81\x87\x02\x4a\x10\x81\x87\x02\x49"
  "\x0e\x81\x87\x02\x48\x0c\x81\x87\x02\x47\x0a\x81\x87\x02\x46\x08"
  "\x81\x87\x02\x45\x06\x84\x06\x44\x04\x81\x85\x02\x13\x26\x30\x02"
  "\x0e\x1b\x24\x03\x04\x20\x04\x2f\x04\x27\x03\x08\x61\x63\x63\x65"
  "\x73\x73\x3f\x05\x56\x16\x81\x87\x02\x55\x14\x81\x89\x02\x54\x12"
  "\x81\x87\x02\x53\x10\x81\x87\x02\x52\x0e\x81\x87\x02\x51\x0c\x81"
  "\x89\x02\x50\x0a\x81\x87\x02\x4f\x08\x81\x87\x02\x4e\x06\x81\x87"
  "\x02\x4d\x04\x84\x06\x15\x26\x2f\x02\x0f\x04\x16\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74"
  "\x73\x05\x14\x75\x6e\x65\x78\x70\x61\x6e\x64\x2d\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x31\x03\x58\x06\x81\x87\x02\x57\x04\x84"
  "\x06\x05\x0d\x32\x02\x10\x05\x73\x65\x74\x21\x04\x16\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x73\x04\x17\x75\x6e\x65\x78\x70\x61\x6e\x64\x2d\x62\x69\x6e"
  "\x64\x69\x6e\x67\x2d\x76\x61\x6c\x75\x65\x33\x03\x5b\x08\x81\x87"
  "\x02\x5a\x06\x81\x87\x02\x59\x04\x84\x06\x07\x10\x34\x02\x11\x07"
  "\x64\x65\x66\x69\x6e\x65\x35\x0e\x64\x65\x66\x69\x6e\x65\x2d\x73"
  "\x79\x6e\x74\x61\x78\x1b\x24\x03\x03\x21\x6d\x61\x63\x72\x6f\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x04\x20\x04\x13\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x2a"
  "\x36\x03\x08\x6c\x61\x6d\x62\x64\x61\x3f\x37\x04\x33\x03\x2c\x6d"
  "\x61\x63\x72\x6f\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74"
  "\x72\x61\x70\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x04\x27\x05\x0e\x77\x69"
  "\x74\x68\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x38\x06\x11\x6d\x61"
  "\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x39\x04"
  "\x15\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x62\x6f\x64\x79\x3a\x0b\x6a\x20\x81\x8f\x02\x69\x1e\x81\x85"
  "\x02\x68\x1c\x81\x8d\x02\x67\x1a\x81\x8d\x02\x66\x18\x81\x8d\x02"
  "\x65\x16\x81\x87\x02\x64\x14\x81\x89\x02\x63\x12\x81\x87\x02\x62"
  "\x10\x81\x87\x02\x61\x0e\x81\x87\x02\x60\x0c\x81\x89\x02\x5f\x0a"
  "\x81\x87\x02\x5e\x08\x81\x87\x02\x5d\x06\x81\x87\x02\x5c\x04\x85"
  "\x08\x1f\x3e\x3b\x02\x12\x03\x1b\x75\x6e\x61\x73\x73\x69\x67\x6e"
  "\x65\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61"
  "\x70\x3f\x3c\x04\x27\x03\x6d\x08\x81\x85\x02\x6c\x06\x81\x85\x02"
  "\x6b\x04\x84\x06\x07\x10\x3d\x02\x13\x1a\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x65\x72\x3a\x73\x68\x6f\x77\x2d\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x73\x3f\x02\x03\x13\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x0d\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x2d\x74\x65\x78\x74\x04\x27\x04\x72\x0c\x81\x87\x02\x71\x0a"
  "\x81\x87\x02\x70\x08\x81\x87\x02\x6f\x06\x81\x85\x02\x6e\x04\x84"
  "\x06\x0b\x19\x3e\x02\x14\x0e\x6c\x6f\x63\x61\x6c\x2d\x64\x65\x63"
  "\x6c\x61\x72\x65\x04\x17\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x27\x03\x75"
  "\x08\x81\x87\x02\x74\x06\x81\x87\x02\x73\x04\x84\x06\x07\x11\x3f"
  "\x02\x15\x08\x64\x65\x63\x6c\x61\x72\x65\x40\x06\x62\x65\x67\x69"
  "\x6e\x41\x03\x19\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x69\x6d\x6d"
  "\x65\x64\x69\x61\x74\x65\x2d\x66\x69\x72\x73\x74\x42\x03\x13\x62"
  "\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x3f\x43\x04\x1a\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x73\x65\x71"
  "\x75\x65\x6e\x63\x65\x2d\x61\x63\x74\x69\x6f\x6e\x73\x44\x03\x1a"
  "\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x69\x6d\x6d\x65\x64\x69\x61"
  "\x74\x65\x2d\x73\x65\x63\x6f\x6e\x64\x45\x03\x17\x62\x6c\x6f\x63"
  "\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x74\x65"
  "\x78\x74\x46\x04\x12\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x47\x07\x7c\x10\x81\x89\x02\x7b\x0e\x81"
  "\x87\x02\x7a\x0c\x81\x89\x02\x79\x0a\x81\x87\x02\x78\x08\x81\x87"
  "\x02\x77\x06\x81\x85\x02\x76\x04\x84\x06\x0f\x21\x48\x02\x16\x41"
  "\x24\x02\x03\x0a\x73\x65\x71\x75\x65\x6e\x63\x65\x3f\x41\x04\x27"
  "\x04\x44\x04\x81\x01\x0c\x81\x85\x02\x80\x01\x0a\x81\x85\x02\x7f"
  "\x08\x81\x85\x02\x7e\x06\x81\x85\x02\x7d\x04\x84\x06\x0b\x1a\x49"
  "\x02\x17\x1f\x1f\x75\x6e\x73\x79\x6e\x74\x61\x78\x65\x72\x3a\x66"
  "\x6f\x6c\x64\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x74\x61\x69"
  "\x6c\x3f\x4a\x1b\x24\x04\x03\x45\x03\x42\x03\x41\x04\x27\x04\x20"
  "\x04\x44\x04\x07\x61\x70\x70\x65\x6e\x64\x08\x95\x01\x2a\x81\x8b"
  "\x02\x94\x01\x28\x81\x89\x02\x93\x01\x26\x81\x87\x02\x92\x01\x24"
  "\x81\x8b\x02\x91\x01\x22\x81\x8b\x02\x90\x01\x20\x81\x8b\x02\x8f"
  "\x01\x1e\x81\x89\x02\x8e\x01\x1c\x81\x89\x02\x8d\x01\x1a\x81\x89"
  "\x02\x8c\x01\x18\x81\x89\x02\x8b\x01\x16\x81\x89\x02\x8a\x01\x14"
  "\x81\x89\x02\x89\x01\x12\x81\x89\x02\x88\x01\x10\x81\x85\x02\x87"
  "\x01\x0e\x81\x87\x02\x86\x01\x0c\x81\x87\x02\x85\x01\x0a\x81\x89"
  "\x02\x84\x01\x08\x81\x87\x02\x83\x01\x06\x84\x06\x82\x01\x04\x81"
  "\x87\x02\x29\x42\x4b\x02\x18\x24\x02\x04\x16\x6f\x70\x65\x6e\x2d"
  "\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73"
  "\x4c\x04\x0a\x05\x0f\x75\x6e\x73\x63\x61\x6e\x2d\x64\x65\x66\x69"
  "\x6e\x65\x73\x4d\x04\x27\x05\x99\x01\x0a\x81\x89\x02\x98\x01\x08"
  "\x81\x89\x02\x97\x01\x06\x81\x85\x02\x96\x01\x04\x84\x06\x09\x18"
  "\x4e\x02\x19\x03\x11\x64\x65\x6c\x61\x79\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x04\x27\x03\x9c\x01\x08\x81\x87\x02\x9b\x01"
  "\x06\x81\x85\x02\x9a\x01\x04\x84\x06\x07\x11\x4f\x02\x1a\x9d\x01"
  "\x04\x84\x06\x03\x02\x1b\x03\x6f\x72\x24\x02\x04\x17\x64\x69\x73"
  "\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x50\x04\x27\x05\x15\x75\x6e\x65\x78\x70\x61\x6e\x64"
  "\x2d\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x51\x04\xa4\x01"
  "\x10\x81\x89\x02\xa3\x01\x0e\x81\x87\x02\xa2\x01\x0c\x81\x87\x02"
  "\xa1\x01\x0a\x81\x87\x02\xa0\x01\x08\x81\x85\x02\x9f\x01\x06\x81"
  "\x87\x02\x9e\x01\x04\x84\x06\x0f\x1e\x52\x02\x1c\x03\x0d\x64\x69"
  "\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x3f\x53\x04\x27\x04\x50\x05"
  "\x51\x05\xaa\x01\x0e\x81\x87\x02\xa9\x01\x0c\x81\x89\x02\xa8\x01"
  "\x0a\x81\x89\x02\xa7\x01\x08\x81\x87\x02\xa6\x01\x06\x81\x89\x02"
  "\xa5\x01\x04\x85\x08\x0d\x1a\x54\x02\x1d\x24\x02\x04\x17\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x73\x55\x06\x1d\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2f\x64\x65\x66\x61"
  "\x75\x6c\x74\x56\x06\x15\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x57\x04\xae\x01\x0a\x81"
  "\x89\x02\xad\x01\x08\x81\x89\x02\xac\x01\x06\x81\x85\x02\xab\x01"
  "\x04\x84\x06\x09\x16\x58\x02\x1e\x03\x69\x66\x59\x04\x27\x02\xb2"
  "\x01\x0a\x81\x8b\x02\xb1\x01\x08\x81\x8b\x02\xb0\x01\x06\x81\x89"
  "\x02\xaf\x01\x04\x86\x0a\x09\x11\x5a\x02\x1f\x59\x04\x6e\x6f\x74"
  "\x05\x63\x6f\x6e\x64\x04\x61\x6e\x64\x02\x1b\x02\x05\x15\x75\x6e"
  "\x65\x78\x70\x61\x6e\x64\x2d\x63\x6f\x6e\x6a\x75\x6e\x63\x74\x69"
  "\x6f\x6e\x59\x04\x27\x03\x0d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x61\x6c\x3f\x5b\x06\x56\x04\x20\x06\x1a\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x63\x6f\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x61\x6c\x5c\x07\xbd\x01\x18\x81\x8b\x02\xbc\x01\x16\x81\x8b"
  "\x02\xbb\x01\x14\x81\x89\x02\xba\x01\x12\x81\x89\x02\xb9\x01\x10"
  "\x81\x89\x02\xb8\x01\x0e\x81\x89\x02\xb7\x01\x0c\x81\x8b\x02\xb6"
  "\x01\x0a\x81\x89\x02\xb5\x01\x08\x81\x89\x02\xb4\x01\x06\x81\x89"
  "\x02\xb3\x01\x04\x86\x0a\x17\x2f\x5d\x02\x20\x04\x1a\x75\x6e\x73"
  "\x79\x6e\x74\x61\x78\x2d\x63\x6f\x6e\x64\x2d\x61\x6c\x74\x65\x72"
  "\x6e\x61\x74\x69\x76\x65\x5e\x04\x47\x04\x27\x04\xc1\x01\x0a\x81"
  "\x8d\x02\xc0\x01\x08\x81\x8b\x02\xbf\x01\x06\x81\x89\x02\xbe\x01"
  "\x04\x86\x0a\x09\x13\x5f\x02\x21\x04\x5e\x04\x27\x03\xc4\x01\x08"
  "\x81\x89\x02\xc3\x01\x06\x81\x87\x02\xc2\x01\x04\x85\x08\x07\x10"
  "\x60\x02\x22\x05\x65\x6c\x73\x65\x02\x1b\x02\x04\x20\x03\x53\x03"
  "\x5b\x04\x50\x05\x1a\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x63\x6f"
  "\x6e\x64\x2d\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x53\x04"
  "\x47\x04\x55\x06\x5c\x09\xcd\x01\x14\x81\x87\x02\xcc\x01\x12\x81"
  "\x89\x02\xcb\x01\x10\x81\x87\x02\xca\x01\x0e\x81\x87\x02\xc9\x01"
  "\x0c\x81\x87\x02\xc8\x01\x0a\x81\x87\x02\xc7\x01\x08\x81\x87\x02"
  "\xc6\x01\x06\x84\x06\xc5\x01\x04\x81\x85\x02\x13\x2c\x50\x02\x23"
  "\x1b\x02\x03\x5b\x04\x27\x04\x20\x04\x55\x05\x59\x06\x57\x07\xd8"
  "\x01\x18\x81\x89\x02\xd7\x01\x16\x81\x89\x02\xd6\x01\x14\x81\x89"
  "\x02\xd5\x01\x12\x81\x87\x02\xd4\x01\x10\x81\x89\x02\xd3\x01\x0e"
  "\x81\x87\x02\xd2\x01\x0c\x81\x89\x02\xd1\x01\x0a\x81\x87\x02\xd0"
  "\x01\x08\x81\x87\x02\xcf\x01\x06\x81\x87\x02\xce\x01\x04\x85\x08"
  "\x17\x2a\x5b\x02\x24\x09\x26\x78\x6c\x61\x6d\x62\x64\x61\x24\x02"
  "\x03\x16\x6c\x61\x6d\x62\x64\x61\x2d\x69\x6d\x6d\x65\x64\x69\x61"
  "\x74\x65\x2d\x62\x6f\x64\x79\x55\x04\x10\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x6c\x61\x6d\x62\x64\x61\x61\x03\x11\x6c\x61\x6d\x62"
  "\x64\x61\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x62\x04\x27\x03"
  "\x0c\x6c\x61\x6d\x62\x64\x61\x2d\x6e\x61\x6d\x65\x63\x06\xde\x01"
  "\x0e\x81\x89\x02\xdd\x01\x0c\x81\x87\x02\xdc\x01\x0a\x81\x87\x02"
  "\xdb\x01\x08\x81\x85\x02\xda\x01\x06\x81\x85\x02\xd9\x01\x04\x84"
  "\x06\x0d\x1f\x64\x02\x25\x24\x02\x03\x63\x04\x61\x03\x55\x03\x62"
  "\x04\x27\x05\x0f\x63\x6f\x6c\x6c\x65\x63\x74\x2d\x6c\x61\x6d\x62"
  "\x64\x61\x63\x07\xe4\x01\x0e\x81\x89\x02\xe3\x01\x0c\x81\x89\x02"
  "\xe2\x01\x0a\x81\x87\x02\xe1\x01\x08\x81\x85\x02\xe0\x01\x06\x81"
  "\x85\x02\xdf\x01\x04\x84\x06\x0d\x20\x62\x02\x26\x04\x36\x06\x39"
  "\x05\x38\x05\x63\x04\x3a\x06\xe9\x01\x0c\x81\x85\x02\xe8\x01\x0a"
  "\x81\x8d\x02\xe7\x01\x08\x81\x8d\x02\xe6\x01\x06\x81\x8d\x02\xe5"
  "\x01\x04\x84\x06\x0b\x1a\x55\x02\x27\x0d\x6e\x61\x6d\x65\x64\x2d"
  "\x6c\x61\x6d\x62\x64\x61\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\xea\x01\x04\x85\x08"
  "\x03\x65\x02\x28\x0d\x53\x43\x6f\x64\x65\x20\x6c\x61\x6d\x62\x64"
  "\x61\x15\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x6c\x69\x73\x74\x66\x03\x37\x05\x1c\x04\x36\x06\x39\x05"
  "\xee\x01\x0a\x87\x0c\xed\x01\x08\x81\x83\x02\xec\x01\x06\x81\x83"
  "\x02\xeb\x01\x04\x83\x04\x09\x18\x39\x02\x29\x03\x0c\x6f\x70\x65"
  "\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x04\x1e\x75\x6e\x73\x79\x6e\x74"
  "\x61\x78\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x62\x6f\x64\x79\x2d\x73"
  "\x65\x71\x75\x65\x6e\x63\x65\x1c\x04\x4c\x05\x4d\x05\xf2\x01\x0a"
  "\x81\x89\x02\xf1\x01\x08\x81\x89\x02\xf0\x01\x06\x81\x85\x02\xef"
  "\x01\x04\x84\x06\x09\x15\x4d\x02\x2a\x40\x03\x41\x04\x27\x03\x42"
  "\x03\x43\x04\x47\x03\x45\x03\x46\x08\xfa\x01\x12\x81\x89\x02\xf9"
  "\x01\x10\x81\x89\x02\xf8\x01\x0e\x81\x87\x02\xf7\x01\x0c\x81\x87"
  "\x02\xf6\x01\x0a\x81\x85\x02\xf5\x01\x08\x81\x85\x02\xf4\x01\x06"
  "\x81\x85\x02\xf3\x01\x04\x84\x06\x11\x25\x4c\x02\x2b\x04\x6c\x65"
  "\x74\x46\x0c\x63\x6f\x6e\x73\x2d\x73\x74\x72\x65\x61\x6d\x05\x63"
  "\x6f\x6e\x73\x05\x63\x6f\x6e\x73\x04\x63\x61\x72\x45\x1f\x1b\x24"
  "\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c\x65\x74\x04"
  "\x04\x17\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x03\x12\x72\x65\x77\x72\x69\x74"
  "\x65\x2d\x6e\x61\x6d\x65\x64\x2d\x6c\x65\x74\x43\x03\x03\x07\x64"
  "\x65\x6c\x61\x79\x3f\x03\x37\x04\x20\x03\x07\x6c\x65\x6e\x67\x74"
  "\x68\x42\x04\x17\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x6f\x3f\x04\x04\x6d\x61\x70\x41"
  "\x04\x27\x04\x36\x05\x38\x05\x16\x75\x6e\x73\x79\x6e\x74\x61\x78"
  "\x2d\x6c\x65\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x40\x04\x3a"
  "\x0f\x9f\x02\x4c\x81\x8f\x02\x9e\x02\x4a\x81\x85\x02\x9d\x02\x48"
  "\x81\x8d\x02\x9c\x02\x46\x81\x8b\x02\x9b\x02\x44\x81\x8d\x02\x9a"
  "\x02\x42\x81\x8b\x02\x99\x02\x40\x81\x8d\x02\x98\x02\x3e\x81\x89"
  "\x02\x97\x02\x3c\x81\x8d\x02\x96\x02\x3a\x81\x8d\x02\x95\x02\x38"
  "\x81\x8d\x02\x94\x02\x36\x81\x8f\x02\x93\x02\x34\x81\x85\x02\x92"
  "\x02\x32\x81\x89\x02\x91\x02\x30\x81\x85\x02\x90\x02\x2e\x81\x83"
  "\x02\x8f\x02\x2c\x81\x83\x02\x8e\x02\x2a\x81\x8b\x02\x8d\x02\x28"
  "\x81\x89\x02\x8c\x02\x26\x81\x89\x02\x8b\x02\x24\x81\x87\x02\x8a"
  "\x02\x22\x81\x89\x02\x89\x02\x20\x81\x8b\x02\x88\x02\x1e\x81\x8b"
  "\x02\x87\x02\x1c\x81\x89\x02\x86\x02\x1a\x81\x89\x02\x85\x02\x18"
  "\x81\x89\x02\x84\x02\x16\x81\x8d\x02\x83\x02\x14\x81\x8d\x02\x82"
  "\x02\x12\x81\x8d\x02\x81\x02\x10\x81\x8d\x02\x80\x02\x0e\x81\x8b"
  "\x02\xff\x01\x0c\x81\x89\x02\xfe\x01\x0a\x81\x89\x02\xfd\x01\x08"
  "\x81\x89\x02\xfc\x01\x06\x81\x85\x02\xfb\x01\x04\x84\x06\x4b\x79"
  "\x37\x02\x2c\x05\x41\x05\x15\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x6c\x65\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x36\x03\xa1\x02\x06"
  "\x81\x87\x02\xa0\x02\x04\x85\x08\x05\x0d\x20\x02\x2d\x04\x33\x02"
  "\xa3\x02\x06\x81\x87\x02\xa2\x02\x04\x85\x08\x05\x0b\x02\x2e\x35"
  "\x2b\x1e\x46\x45\x1f\x08\x73\x79\x6d\x62\x6f\x6c\x3f\x02\x04\x09"
  "\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x03\x42\x05\x41\x03\x06\x6c\x69"
  "\x73\x74\x3f\x03\x3c\x06\xdd\x02\x76\x81\x85\x02\xdc\x02\x74\x84"
  "\x06\xdb\x02\x72\x81\x85\x02\xda\x02\x70\x81\x85\x02\xd9\x02\x6e"
  "\x81\x85\x02\xd8\x02\x6c\x81\x85\x02\xd7\x02\x6a\x81\x85\x02\xd6"
  "\x02\x68\x81\x85\x02\xd5\x02\x66\x81\x85\x02\xd4\x02\x64\x83\x04"
  "\xd3\x02\x62\x81\x89\x02\xd2\x02\x60\x81\x89\x02\xd1\x02\x5e\x81"
  "\x89\x02\xd0\x02\x5c\x81\x89\x02\xcf\x02\x5a\x81\x89\x02\xce\x02"
  "\x58\x81\x89\x02\xcd\x02\x56\x81\x89\x02\xcc\x02\x54\x81\x87\x02"
  "\xcb\x02\x52\x81\x83\x02\xca\x02\x50\x81\x83\x02\xc9\x02\x4e\x81"
  "\x83\x02\xc8\x02\x4c\x81\x83\x02\xc7\x02\x4a\x81\x83\x02\xc6\x02"
  "\x48\x81\x83\x02\xc5\x02\x46\x81\x83\x02\xc4\x02\x44\x81\x83\x02"
  "\xc3\x02\x42\x81\x87\x02\xc2\x02\x40\x81\x87\x02\xc1\x02\x3e\x81"
  "\x87\x02\xc0\x02\x3c\x81\x87\x02\xbf\x02\x3a\x81\x87\x02\xbe\x02"
  "\x38\x81\x87\x02\xbd\x02\x36\x81\x85\x02\xbc\x02\x34\x81\x85\x02"
  "\xbb\x02\x32\x81\x85\x02\xba\x02\x30\x81\x85\x02\xb9\x02\x2e\x81"
  "\x85\x02\xb8\x02\x2c\x81\x85\x02\xb7\x02\x2a\x81\x85\x02\xb6\x02"
  "\x28\x81\x83\x02\xb5\x02\x26\x81\x83\x02\xb4\x02\x24\x81\x83\x02"
  "\xb3\x02\x22\x81\x83\x02\xb2\x02\x20\x81\x85\x02\xb1\x02\x1e\x81"
  "\x85\x02\xb0\x02\x1c\x81\x85\x02\xaf\x02\x1a\x81\x85\x02\xae\x02"
  "\x18\x81\x83\x02\xad\x02\x16\x81\x83\x02\xac\x02\x14\x81\x83\x02"
  "\xab\x02\x12\x81\x83\x02\xaa\x02\x10\x81\x83\x02\xa9\x02\x0e\x81"
  "\x83\x02\xa8\x02\x0c\x81\x85\x02\xa7\x02\x0a\x81\x85\x02\xa6\x02"
  "\x08\x81\x85\x02\xa5\x02\x06\x81\x85\x02\xa4\x02\x04\x81\x85\x02"
  "\x75\x90\x01\x46\x2e\x45\x45\x46\x64\x04\x20\x04\x37\x04\x4c\x04"
  "\x4d\x04\x39\x04\x65\x04\x55\x04\x62\x04\x64\x04\x5b\x04\x50\x06"
  "\x60\x04\x5f\x04\x5d\x04\x5a\x04\x58\x04\x54\x04\x52\x04\x04\x4f"
  "\x04\x4e\x04\x4b\x06\x49\x04\x48\x04\x3f\x04\x3e\x04\x3d\x04\x3b"
  "\x04\x34\x04\x32\x04\x2f\x04\x30\x06\x2e\x04\x2a\x04\x2c\x04\x29"
  "\x06\x28\x04\x26\x04\x25\x04\x22\x04\x21\x06\x1e\x04\x19\x04\x34"
  "\x43\x36\x40\x15\x1c\x3a\x66\x63\x61\x0d\x0e\x59\x5e\x53\x5c\x57"
  "\x56\x13\x51\x0f\x09\x10\x0c\x44\x47\x0a\x12\x14\x33\x31\x16\x11"
  "\x17\x0b\x18\x27\x1d\x2d\x38\x12\x68\x61\x73\x2d\x73\x75\x62\x73"
  "\x74\x69\x74\x75\x74\x69\x6f\x6e\x3f\x11\x6d\x61\x79\x62\x65\x2d"
  "\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x1a\x1b\x4a\x23\x24\x14"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61"
  "\x67\x65\x21\x34\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
unsyn_so_data_3d6dd04dfb8156d4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_unsyn_so_data_3d6dd04dfb8156d4 [0]))), (sizeof (prog_unsyn_so_data_3d6dd04dfb8156d4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("unsyn.so", unsyn_so_data_3d6dd04dfb8156d4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("unsyn.so", "50aa83c089349781")
