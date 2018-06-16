/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:17-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_4 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_15 25
#define LABEL_1_16 27
#define LABEL_1_17 29
#define LABEL_1_18 31
#define LABEL_1_19 33
#define LABEL_1_20 35
#define LABEL_1_21 37
#define LABEL_1_22 39
#define LABEL_1_23 41
#define LABEL_1_24 43
#define LABEL_1_25 45
#define LABEL_1_26 47
#define ENVIRONMENT_LABEL_1_3 60
#define DEBUGGING_LABEL_1_2 59
#define OBJECT_1_7 58
#define OBJECT_1_6 57
#define OBJECT_1_5 56
#define OBJECT_1_4 55
#define OBJECT_1_3 54
#define OBJECT_1_2 53
#define OBJECT_1_1 52
#define OBJECT_1_0 51
#define EXECUTE_CACHE_1_27 49
#define FREE_REFERENCES_LABEL_1_0 48
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd242;
  machine_word Wrd246;
  machine_word Wrd244;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd106;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd89;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd151;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd158;
  machine_word Wrd163;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd193;
  machine_word Wrd190;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd203;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd227;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd235;
  machine_word Wrd225;
  machine_word Wrd257;
  machine_word Wrd254;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd252;
  machine_word Wrd249;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd262;
  machine_word Wrd259;
  machine_word Wrd277;
  machine_word Wrd274;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd287;
  machine_word Wrd212;
  machine_word Wrd210;
  machine_word Wrd282;
  machine_word Wrd279;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd298;
  machine_word Wrd295;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd308;
  machine_word Wrd305;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd303;
  machine_word Wrd300;
  machine_word Wrd318;
  machine_word Wrd315;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd313;
  machine_word Wrd310;
  machine_word Wrd328;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd323;
  machine_word Wrd320;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_1_4);
      goto back_end___26;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_45;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_43;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_42;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_1_18);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_1_19);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_1_20);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_1_21);
      goto label_33;

    case 18:
      current_block = (Rpc - LABEL_1_22);
      goto label_32;

    case 19:
      current_block = (Rpc - LABEL_1_23);
      goto label_31;

    case 20:
      current_block = (Rpc - LABEL_1_24);
      goto label_30;

    case 21:
      current_block = (Rpc - LABEL_1_25);
      goto label_29;

    case 22:
      current_block = (Rpc - LABEL_1_26);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___47)
DEFLABEL (back_end___26)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd320.Obj) = (current_block [OBJECT_1_0]);
  (Wrd323.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd323.Lng))))
    goto label_111;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd320.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_104;

DEFLABEL (label_110)
  (Wrd310.Obj) = (current_block [OBJECT_1_2]);
  (Wrd313.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd313.Lng))))
    goto label_109;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd310.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_104;

DEFLABEL (label_108)
  (Wrd300.Obj) = (current_block [OBJECT_1_3]);
  (Wrd303.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd303.Lng))))
    goto label_107;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd300.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_104;

DEFLABEL (label_106)
  (Wrd290.Obj) = (current_block [OBJECT_1_4]);
  (Wrd293.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd293.Lng))))
    goto label_105;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd290.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_104;

DEFLABEL (label_103)
  (Wrd25.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_49;

DEFLABEL (label_48)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_49)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_51;
  (Wrd27.Obj) = (current_block [OBJECT_1_7]);
  goto label_50;

DEFLABEL (label_51)
  (Wrd27.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_50)
DEFLABEL (label_102)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;

DEFLABEL (label_101)
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd207.Obj);
  (Wrd208.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd208.Obj);
  (Wrd279.Obj) = (current_block [OBJECT_1_0]);
  (Wrd282.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd282.Lng))))
    goto label_100;
  (Wrd210.uLng) = (OBJECT_DATUM (Wrd279.Obj));
  (Wrd212.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if ((Wrd210.Obj) == (Wrd212.Obj))
    goto label_93;

DEFLABEL (label_99)
  (Wrd269.Obj) = (current_block [OBJECT_1_2]);
  (Wrd272.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd272.Lng))))
    goto label_98;
  (Wrd214.uLng) = (OBJECT_DATUM (Wrd269.Obj));
  (Wrd215.Obj) = (Rsp [0]);
  (Wrd216.uLng) = (OBJECT_TYPE (Wrd215.Obj));
  if ((Wrd214.Obj) == (Wrd216.Obj))
    goto label_93;

DEFLABEL (label_97)
  (Wrd259.Obj) = (current_block [OBJECT_1_3]);
  (Wrd262.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd262.Lng))))
    goto label_96;
  (Wrd218.uLng) = (OBJECT_DATUM (Wrd259.Obj));
  (Wrd219.Obj) = (Rsp [0]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if ((Wrd218.Obj) == (Wrd220.Obj))
    goto label_93;

DEFLABEL (label_95)
  (Wrd249.Obj) = (current_block [OBJECT_1_4]);
  (Wrd252.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd252.Lng))))
    goto label_94;
  (Wrd222.uLng) = (OBJECT_DATUM (Wrd249.Obj));
  (Wrd223.Obj) = (Rsp [0]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if ((Wrd222.Obj) == (Wrd224.Obj))
    goto label_93;

DEFLABEL (label_92)
  (Wrd225.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd225.Obj);
  (Wrd235.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd235.Lng))))
    goto label_48;
  (Wrd229.uLng) = (OBJECT_DATUM (Wrd225.Obj));
  (Wrd230.Obj) = (Rsp [1]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if ((Wrd229.Obj) == (Wrd231.Obj))
    goto label_53;
  (Wrd227.Obj) = (current_block [OBJECT_1_7]);
  goto label_52;

DEFLABEL (label_53)
  (Wrd227.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_52)
DEFLABEL (label_91)
  Rsp = (& (Rsp [3]));
  if ((Wrd227.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;

DEFLABEL (label_57)
  (Wrd238.Obj) = (Rsp [0]);
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if ((Wrd239.uLng) == 26)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_55)
  (Wrd240.Obj) = (Rsp [1]);
  (Wrd241.uLng) = (OBJECT_TYPE (Wrd240.Obj));
  if (! ((Wrd241.uLng) == 26))
    goto label_54;
  (Wrd244.Lng) = (FIXNUM_TO_LONG (Wrd238.Obj));
  (Wrd246.Lng) = (FIXNUM_TO_LONG (Wrd240.Obj));
  (Wrd242.Lng) = ((Wrd244.Lng) + (Wrd246.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd242.Lng)))
    goto label_54;
  Rvl = (LONG_TO_FIXNUM (Wrd242.Lng));

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd195.Obj) = (current_block [OBJECT_1_0]);
  (Wrd198.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd198.Lng))))
    goto label_90;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd195.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_83;

DEFLABEL (label_89)
  (Wrd185.Obj) = (current_block [OBJECT_1_2]);
  (Wrd188.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd188.Lng))))
    goto label_88;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd185.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_83;

DEFLABEL (label_87)
  (Wrd175.Obj) = (current_block [OBJECT_1_3]);
  (Wrd178.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd178.Lng))))
    goto label_86;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd175.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_83;

DEFLABEL (label_85)
  (Wrd165.Obj) = (current_block [OBJECT_1_4]);
  (Wrd168.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd168.Lng))))
    goto label_84;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd165.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_83;

DEFLABEL (label_82)
  (Wrd57.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng))))
    goto label_48;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_60;
  (Wrd59.Obj) = (current_block [OBJECT_1_7]);
  goto label_59;

DEFLABEL (label_60)
  (Wrd59.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_59)
DEFLABEL (label_81)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_80)
  (Wrd153.Obj) = (Rsp [1]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd154.uLng) == 26))
    goto label_79;
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if ((Wrd163.Lng) == 0)
    goto label_78;

DEFLABEL (label_77)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd143.Obj) = (current_block [OBJECT_1_0]);
  (Wrd146.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd146.Lng))))
    goto label_76;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd143.Obj));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd74.Obj) == (Wrd76.Obj))
    goto label_69;

DEFLABEL (label_75)
  (Wrd133.Obj) = (current_block [OBJECT_1_2]);
  (Wrd136.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd136.Lng))))
    goto label_74;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd133.Obj));
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd78.Obj) == (Wrd80.Obj))
    goto label_69;

DEFLABEL (label_73)
  (Wrd123.Obj) = (current_block [OBJECT_1_3]);
  (Wrd126.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd126.Lng))))
    goto label_72;
  (Wrd82.uLng) = (OBJECT_DATUM (Wrd123.Obj));
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd82.Obj) == (Wrd84.Obj))
    goto label_69;

DEFLABEL (label_71)
  (Wrd113.Obj) = (current_block [OBJECT_1_4]);
  (Wrd116.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd116.Lng))))
    goto label_70;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd113.Obj));
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd86.Obj) == (Wrd88.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd89.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd99.Lng))))
    goto label_48;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_62;
  (Wrd91.Obj) = (current_block [OBJECT_1_7]);
  goto label_61;

DEFLABEL (label_62)
  (Wrd91.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_61)
DEFLABEL (label_67)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd91.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_64;

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (label_64)
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 26))
    goto label_66;
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! ((Wrd111.Lng) == 0))
    goto label_63;

DEFLABEL (label_65)
  Rvl = (Rsp [1]);
  goto label_56;

DEFLABEL (label_66)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_65;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto label_64;

DEFLABEL (label_70)
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_72)
  (Wrd128.Obj) = (Rsp [0]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_69;

DEFLABEL (label_74)
  (Wrd138.Obj) = (Rsp [0]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_69;

DEFLABEL (label_76)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_69;

DEFLABEL (label_78)
  Rvl = (Rsp [0]);
  goto label_56;

DEFLABEL (label_79)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_78;

DEFLABEL (label_83)
  Rsp = (& (Rsp [2]));
  goto label_80;

DEFLABEL (label_84)
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (label_86)
  (Wrd180.Obj) = (Rsp [0]);
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_83;

DEFLABEL (label_88)
  (Wrd190.Obj) = (Rsp [0]);
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_83;

DEFLABEL (label_90)
  (Wrd203.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_83;

DEFLABEL (label_93)
  Rsp = (& (Rsp [2]));
  goto label_57;

DEFLABEL (label_94)
  (Wrd254.Obj) = (Rsp [0]);
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  (* (--Rsp)) = (Wrd249.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_93;

DEFLABEL (label_96)
  (Wrd264.Obj) = (Rsp [0]);
  (Wrd267.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd267.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd259.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_93;

DEFLABEL (label_98)
  (Wrd274.Obj) = (Rsp [0]);
  (Wrd277.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd277.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  goto label_93;

DEFLABEL (label_100)
  (Wrd287.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd287.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd279.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_93;

DEFLABEL (label_104)
  Rsp = (& (Rsp [2]));
  goto label_101;

DEFLABEL (label_105)
  (Wrd295.Obj) = (Rsp [0]);
  (Wrd298.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd298.Obj);
  (* (--Rsp)) = (Wrd295.Obj);
  (* (--Rsp)) = (Wrd290.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_104;

DEFLABEL (label_107)
  (Wrd305.Obj) = (Rsp [0]);
  (Wrd308.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd300.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  goto label_104;

DEFLABEL (label_109)
  (Wrd315.Obj) = (Rsp [0]);
  (Wrd318.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd318.Obj);
  (* (--Rsp)) = (Wrd315.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  goto label_104;

DEFLABEL (label_111)
  (Wrd328.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd320.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  goto label_104;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_80;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_57;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_101;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_4 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_13 21
#define LABEL_2_14 23
#define LABEL_2_15 25
#define LABEL_2_16 27
#define LABEL_2_17 29
#define LABEL_2_18 31
#define LABEL_2_19 33
#define LABEL_2_20 35
#define LABEL_2_21 37
#define ENVIRONMENT_LABEL_2_3 53
#define DEBUGGING_LABEL_2_2 52
#define OBJECT_2_8 51
#define OBJECT_2_7 50
#define OBJECT_2_6 49
#define OBJECT_2_5 48
#define OBJECT_2_4 47
#define OBJECT_2_3 46
#define OBJECT_2_2 45
#define OBJECT_2_1 44
#define OBJECT_2_0 43
#define EXECUTE_CACHE_2_23 39
#define EXECUTE_CACHE_2_22 41
#define FREE_REFERENCES_LABEL_2_0 38
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd163;
  machine_word Wrd167;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd79;
  machine_word Wrd84;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd124;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd148;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd156;
  machine_word Wrd146;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd193;
  machine_word Wrd190;
  machine_word Wrd208;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd214;
  machine_word Wrd211;
  machine_word Wrd229;
  machine_word Wrd226;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd224;
  machine_word Wrd221;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd234;
  machine_word Wrd231;
  machine_word Wrd249;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd244;
  machine_word Wrd241;
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
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_4);
      goto back_end___20;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_2_14);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_2_15);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_2_16);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_2_17);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_2_18);
      goto label_24;

    case 15:
      current_block = (Rpc - LABEL_2_19);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_2_20);
      goto label_22;

    case 17:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___36)
DEFLABEL (back_end___20)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd241.Obj) = (current_block [OBJECT_2_0]);
  (Wrd244.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd244.Lng))))
    goto label_85;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd241.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_78;

DEFLABEL (label_84)
  (Wrd231.Obj) = (current_block [OBJECT_2_2]);
  (Wrd234.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd234.Lng))))
    goto label_83;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd231.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_78;

DEFLABEL (label_82)
  (Wrd221.Obj) = (current_block [OBJECT_2_3]);
  (Wrd224.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd224.Lng))))
    goto label_81;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd221.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_78;

DEFLABEL (label_80)
  (Wrd211.Obj) = (current_block [OBJECT_2_4]);
  (Wrd214.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd214.Lng))))
    goto label_79;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd211.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_78;

DEFLABEL (label_77)
  (Wrd25.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_38;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_38)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_40;
  (Wrd27.Obj) = (current_block [OBJECT_2_7]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd27.Obj) = (current_block [OBJECT_2_6]);

DEFLABEL (label_39)
DEFLABEL (label_76)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_75)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd129.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd200.Obj) = (current_block [OBJECT_2_0]);
  (Wrd203.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd203.Lng))))
    goto label_74;
  (Wrd131.uLng) = (OBJECT_DATUM (Wrd200.Obj));
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd131.Obj) == (Wrd133.Obj))
    goto label_67;

DEFLABEL (label_73)
  (Wrd190.Obj) = (current_block [OBJECT_2_2]);
  (Wrd193.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd193.Lng))))
    goto label_72;
  (Wrd135.uLng) = (OBJECT_DATUM (Wrd190.Obj));
  (Wrd136.Obj) = (Rsp [0]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if ((Wrd135.Obj) == (Wrd137.Obj))
    goto label_67;

DEFLABEL (label_71)
  (Wrd180.Obj) = (current_block [OBJECT_2_3]);
  (Wrd183.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd183.Lng))))
    goto label_70;
  (Wrd139.uLng) = (OBJECT_DATUM (Wrd180.Obj));
  (Wrd140.Obj) = (Rsp [0]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if ((Wrd139.Obj) == (Wrd141.Obj))
    goto label_67;

DEFLABEL (label_69)
  (Wrd170.Obj) = (current_block [OBJECT_2_4]);
  (Wrd173.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd173.Lng))))
    goto label_68;
  (Wrd143.uLng) = (OBJECT_DATUM (Wrd170.Obj));
  (Wrd144.Obj) = (Rsp [0]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if ((Wrd143.Obj) == (Wrd145.Obj))
    goto label_67;

DEFLABEL (label_66)
  (Wrd146.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd156.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd156.Lng))))
    goto label_37;
  (Wrd150.uLng) = (OBJECT_DATUM (Wrd146.Obj));
  (Wrd151.Obj) = (Rsp [1]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd150.Obj) == (Wrd152.Obj))
    goto label_42;
  (Wrd148.Obj) = (current_block [OBJECT_2_7]);
  goto label_41;

DEFLABEL (label_42)
  (Wrd148.Obj) = (current_block [OBJECT_2_6]);

DEFLABEL (label_41)
DEFLABEL (label_65)
  Rsp = (& (Rsp [3]));
  if ((Wrd148.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_46)
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if ((Wrd160.uLng) == 26)
    goto label_44;

DEFLABEL (label_43)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_44)
  (Wrd161.Obj) = (Rsp [1]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 26))
    goto label_43;
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  (Wrd167.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  (Wrd163.Lng) = ((Wrd165.Lng) - (Wrd167.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd163.Lng)))
    goto label_43;
  Rvl = (LONG_TO_FIXNUM (Wrd163.Lng));

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd116.Obj) = (current_block [OBJECT_2_0]);
  (Wrd119.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd119.Lng))))
    goto label_64;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd116.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_57;

DEFLABEL (label_63)
  (Wrd106.Obj) = (current_block [OBJECT_2_2]);
  (Wrd109.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd109.Lng))))
    goto label_62;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd106.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_57;

DEFLABEL (label_61)
  (Wrd96.Obj) = (current_block [OBJECT_2_3]);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd99.Lng))))
    goto label_60;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd96.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_57;

DEFLABEL (label_59)
  (Wrd86.Obj) = (current_block [OBJECT_2_4]);
  (Wrd89.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd89.Lng))))
    goto label_58;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_57;

DEFLABEL (label_56)
  (Wrd57.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng))))
    goto label_37;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_49;
  (Wrd59.Obj) = (current_block [OBJECT_2_7]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd59.Obj) = (current_block [OBJECT_2_6]);

DEFLABEL (label_48)
DEFLABEL (label_55)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd59.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_52;

DEFLABEL (label_51)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  Rvl = (current_block [OBJECT_2_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (label_52)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_54;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! ((Wrd84.Lng) == 0))
    goto label_51;

DEFLABEL (label_53)
  Rvl = (Rsp [0]);
  goto label_45;

DEFLABEL (label_54)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_53;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto label_52;

DEFLABEL (label_58)
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_60)
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_57;

DEFLABEL (label_62)
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_57;

DEFLABEL (label_64)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_57;

DEFLABEL (label_67)
  Rsp = (& (Rsp [2]));
  goto label_46;

DEFLABEL (label_68)
  (Wrd175.Obj) = (Rsp [0]);
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_70)
  (Wrd185.Obj) = (Rsp [0]);
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_67;

DEFLABEL (label_72)
  (Wrd195.Obj) = (Rsp [0]);
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_67;

DEFLABEL (label_74)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_67;

DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  goto label_75;

DEFLABEL (label_79)
  (Wrd216.Obj) = (Rsp [0]);
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_78;

DEFLABEL (label_81)
  (Wrd226.Obj) = (Rsp [0]);
  (Wrd229.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd229.Obj);
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_78;

DEFLABEL (label_83)
  (Wrd236.Obj) = (Rsp [0]);
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd231.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_78;

DEFLABEL (label_85)
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd249.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd241.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  goto label_78;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_46;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_4 15
#define LABEL_3_11 17
#define LABEL_3_12 19
#define LABEL_3_13 21
#define LABEL_3_14 23
#define LABEL_3_15 25
#define LABEL_3_16 27
#define LABEL_3_17 29
#define LABEL_3_18 31
#define LABEL_3_19 33
#define LABEL_3_20 35
#define LABEL_3_21 37
#define LABEL_3_22 39
#define LABEL_3_23 41
#define LABEL_3_24 43
#define LABEL_3_25 45
#define LABEL_3_26 47
#define LABEL_3_27 49
#define LABEL_3_28 51
#define LABEL_3_29 53
#define LABEL_3_30 55
#define LABEL_3_31 57
#define LABEL_3_32 59
#define LABEL_3_33 61
#define LABEL_3_34 63
#define LABEL_3_35 65
#define LABEL_3_36 67
#define LABEL_3_37 69
#define LABEL_3_38 71
#define ENVIRONMENT_LABEL_3_3 86
#define DEBUGGING_LABEL_3_2 85
#define OBJECT_3_9 84
#define OBJECT_3_8 83
#define OBJECT_3_7 82
#define OBJECT_3_6 81
#define OBJECT_3_5 80
#define OBJECT_3_4 79
#define OBJECT_3_3 78
#define OBJECT_3_2 77
#define OBJECT_3_1 76
#define OBJECT_3_0 75
#define EXECUTE_CACHE_3_39 73
#define FREE_REFERENCES_LABEL_3_0 72
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd410;
  machine_word Wrd414;
  machine_word Wrd412;
  machine_word Wrd409;
  machine_word Wrd408;
  machine_word Wrd407;
  machine_word Wrd406;
  machine_word Wrd170;
  machine_word Wrd175;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd155;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd163;
  machine_word Wrd153;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd195;
  machine_word Wrd192;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd190;
  machine_word Wrd187;
  machine_word Wrd205;
  machine_word Wrd202;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd215;
  machine_word Wrd140;
  machine_word Wrd138;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd227;
  machine_word Wrd224;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd131;
  machine_word Wrd121;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd248;
  machine_word Wrd245;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd258;
  machine_word Wrd255;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd253;
  machine_word Wrd250;
  machine_word Wrd268;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd263;
  machine_word Wrd260;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd275;
  machine_word Wrd278;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd89;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd283;
  machine_word Wrd280;
  machine_word Wrd298;
  machine_word Wrd295;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd308;
  machine_word Wrd305;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd303;
  machine_word Wrd300;
  machine_word Wrd318;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd313;
  machine_word Wrd310;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd330;
  machine_word Wrd327;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd341;
  machine_word Wrd338;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd336;
  machine_word Wrd333;
  machine_word Wrd351;
  machine_word Wrd348;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd346;
  machine_word Wrd343;
  machine_word Wrd361;
  machine_word Wrd358;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd356;
  machine_word Wrd353;
  machine_word Wrd371;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd366;
  machine_word Wrd363;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd395;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd403;
  machine_word Wrd393;
  machine_word Wrd425;
  machine_word Wrd422;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd390;
  machine_word Wrd420;
  machine_word Wrd417;
  machine_word Wrd435;
  machine_word Wrd432;
  machine_word Wrd388;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd430;
  machine_word Wrd427;
  machine_word Wrd445;
  machine_word Wrd442;
  machine_word Wrd384;
  machine_word Wrd383;
  machine_word Wrd382;
  machine_word Wrd440;
  machine_word Wrd437;
  machine_word Wrd455;
  machine_word Wrd380;
  machine_word Wrd378;
  machine_word Wrd450;
  machine_word Wrd447;
  machine_word Wrd376;
  machine_word Wrd375;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd466;
  machine_word Wrd463;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd461;
  machine_word Wrd458;
  machine_word Wrd476;
  machine_word Wrd473;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd471;
  machine_word Wrd468;
  machine_word Wrd486;
  machine_word Wrd483;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd481;
  machine_word Wrd478;
  machine_word Wrd496;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd491;
  machine_word Wrd488;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_33;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_26;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_3_4);
      goto back_end___40;

    case 7:
      current_block = (Rpc - LABEL_3_11);
      goto label_69;

    case 8:
      current_block = (Rpc - LABEL_3_12);
      goto label_68;

    case 9:
      current_block = (Rpc - LABEL_3_13);
      goto label_67;

    case 10:
      current_block = (Rpc - LABEL_3_14);
      goto label_66;

    case 11:
      current_block = (Rpc - LABEL_3_15);
      goto label_65;

    case 12:
      current_block = (Rpc - LABEL_3_16);
      goto label_64;

    case 13:
      current_block = (Rpc - LABEL_3_17);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_3_18);
      goto label_62;

    case 15:
      current_block = (Rpc - LABEL_3_19);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_3_20);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_3_21);
      goto label_59;

    case 18:
      current_block = (Rpc - LABEL_3_22);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_3_23);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_3_24);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_3_25);
      goto label_55;

    case 22:
      current_block = (Rpc - LABEL_3_26);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_3_27);
      goto label_53;

    case 24:
      current_block = (Rpc - LABEL_3_28);
      goto label_52;

    case 25:
      current_block = (Rpc - LABEL_3_29);
      goto label_51;

    case 26:
      current_block = (Rpc - LABEL_3_30);
      goto label_50;

    case 27:
      current_block = (Rpc - LABEL_3_31);
      goto label_49;

    case 28:
      current_block = (Rpc - LABEL_3_32);
      goto label_48;

    case 29:
      current_block = (Rpc - LABEL_3_33);
      goto label_47;

    case 30:
      current_block = (Rpc - LABEL_3_34);
      goto label_46;

    case 31:
      current_block = (Rpc - LABEL_3_35);
      goto label_45;

    case 32:
      current_block = (Rpc - LABEL_3_36);
      goto label_44;

    case 33:
      current_block = (Rpc - LABEL_3_37);
      goto label_43;

    case 34:
      current_block = (Rpc - LABEL_3_38);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___71)
DEFLABEL (back_end___40)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd488.Obj) = (current_block [OBJECT_3_0]);
  (Wrd491.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd491.Lng))))
    goto label_166;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd488.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_159;

DEFLABEL (label_165)
  (Wrd478.Obj) = (current_block [OBJECT_3_2]);
  (Wrd481.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd481.Lng))))
    goto label_164;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd478.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_159;

DEFLABEL (label_163)
  (Wrd468.Obj) = (current_block [OBJECT_3_3]);
  (Wrd471.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd471.Lng))))
    goto label_162;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd468.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_159;

DEFLABEL (label_161)
  (Wrd458.Obj) = (current_block [OBJECT_3_4]);
  (Wrd461.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd461.Lng))))
    goto label_160;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd458.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_159;

DEFLABEL (label_158)
  (Wrd25.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_73;

DEFLABEL (label_72)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_73)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_75;
  (Wrd27.Obj) = (current_block [OBJECT_3_7]);
  goto label_74;

DEFLABEL (label_75)
  (Wrd27.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_74)
DEFLABEL (label_157)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_156)
  (Wrd375.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd375.Obj);
  (Wrd376.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd376.Obj);
  (Wrd447.Obj) = (current_block [OBJECT_3_0]);
  (Wrd450.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd450.Lng))))
    goto label_155;
  (Wrd378.uLng) = (OBJECT_DATUM (Wrd447.Obj));
  (Wrd380.uLng) = (OBJECT_TYPE (Wrd376.Obj));
  if ((Wrd378.Obj) == (Wrd380.Obj))
    goto label_148;

DEFLABEL (label_154)
  (Wrd437.Obj) = (current_block [OBJECT_3_2]);
  (Wrd440.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd440.Lng))))
    goto label_153;
  (Wrd382.uLng) = (OBJECT_DATUM (Wrd437.Obj));
  (Wrd383.Obj) = (Rsp [0]);
  (Wrd384.uLng) = (OBJECT_TYPE (Wrd383.Obj));
  if ((Wrd382.Obj) == (Wrd384.Obj))
    goto label_148;

DEFLABEL (label_152)
  (Wrd427.Obj) = (current_block [OBJECT_3_3]);
  (Wrd430.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd430.Lng))))
    goto label_151;
  (Wrd386.uLng) = (OBJECT_DATUM (Wrd427.Obj));
  (Wrd387.Obj) = (Rsp [0]);
  (Wrd388.uLng) = (OBJECT_TYPE (Wrd387.Obj));
  if ((Wrd386.Obj) == (Wrd388.Obj))
    goto label_148;

DEFLABEL (label_150)
  (Wrd417.Obj) = (current_block [OBJECT_3_4]);
  (Wrd420.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd420.Lng))))
    goto label_149;
  (Wrd390.uLng) = (OBJECT_DATUM (Wrd417.Obj));
  (Wrd391.Obj) = (Rsp [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd390.Obj) == (Wrd392.Obj))
    goto label_148;

DEFLABEL (label_147)
  (Wrd393.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd393.Obj);
  (Wrd403.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd403.Lng))))
    goto label_72;
  (Wrd397.uLng) = (OBJECT_DATUM (Wrd393.Obj));
  (Wrd398.Obj) = (Rsp [1]);
  (Wrd399.uLng) = (OBJECT_TYPE (Wrd398.Obj));
  if ((Wrd397.Obj) == (Wrd399.Obj))
    goto label_77;
  (Wrd395.Obj) = (current_block [OBJECT_3_7]);
  goto label_76;

DEFLABEL (label_77)
  (Wrd395.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_76)
DEFLABEL (label_146)
  Rsp = (& (Rsp [3]));
  if ((Wrd395.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_81)
  (Wrd406.Obj) = (Rsp [0]);
  (Wrd407.uLng) = (OBJECT_TYPE (Wrd406.Obj));
  if ((Wrd407.uLng) == 26)
    goto label_79;

DEFLABEL (label_78)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_79)
  (Wrd408.Obj) = (Rsp [1]);
  (Wrd409.uLng) = (OBJECT_TYPE (Wrd408.Obj));
  if (! ((Wrd409.uLng) == 26))
    goto label_78;
  (Wrd412.Lng) = (FIXNUM_TO_LONG (Wrd406.Obj));
  (Wrd414.Lng) = (FIXNUM_TO_LONG (Wrd408.Obj));
  if (multiply_with_overflow ((Wrd412.Lng), (Wrd414.Lng), (& (Wrd410.Lng))))
    goto label_78;
  Rvl = (LONG_TO_FIXNUM (Wrd410.Lng));

DEFLABEL (label_80)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd363.Obj) = (current_block [OBJECT_3_0]);
  (Wrd366.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd366.Lng))))
    goto label_145;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd363.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_138;

DEFLABEL (label_144)
  (Wrd353.Obj) = (current_block [OBJECT_3_2]);
  (Wrd356.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd356.Lng))))
    goto label_143;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd353.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_138;

DEFLABEL (label_142)
  (Wrd343.Obj) = (current_block [OBJECT_3_3]);
  (Wrd346.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd346.Lng))))
    goto label_141;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd343.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_138;

DEFLABEL (label_140)
  (Wrd333.Obj) = (current_block [OBJECT_3_4]);
  (Wrd336.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd336.Lng))))
    goto label_139;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd333.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_138;

DEFLABEL (label_137)
  (Wrd57.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng))))
    goto label_72;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_84;
  (Wrd59.Obj) = (current_block [OBJECT_3_7]);
  goto label_83;

DEFLABEL (label_84)
  (Wrd59.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_83)
DEFLABEL (label_136)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_132;

DEFLABEL (label_135)
  (Wrd320.Obj) = (Rsp [1]);
  (Wrd321.uLng) = (OBJECT_TYPE (Wrd320.Obj));
  if (! ((Wrd321.uLng) == 26))
    goto label_134;
  if ((Wrd320.Obj) == (current_block [OBJECT_3_8]))
    goto label_133;

DEFLABEL (label_132)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd310.Obj) = (current_block [OBJECT_3_0]);
  (Wrd313.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd313.Lng))))
    goto label_131;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd310.Obj));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd74.Obj) == (Wrd76.Obj))
    goto label_124;

DEFLABEL (label_130)
  (Wrd300.Obj) = (current_block [OBJECT_3_2]);
  (Wrd303.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd303.Lng))))
    goto label_129;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd300.Obj));
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd78.Obj) == (Wrd80.Obj))
    goto label_124;

DEFLABEL (label_128)
  (Wrd290.Obj) = (current_block [OBJECT_3_3]);
  (Wrd293.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd293.Lng))))
    goto label_127;
  (Wrd82.uLng) = (OBJECT_DATUM (Wrd290.Obj));
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd82.Obj) == (Wrd84.Obj))
    goto label_124;

DEFLABEL (label_126)
  (Wrd280.Obj) = (current_block [OBJECT_3_4]);
  (Wrd283.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd283.Lng))))
    goto label_125;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd280.Obj));
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd86.Obj) == (Wrd88.Obj))
    goto label_124;

DEFLABEL (label_123)
  (Wrd89.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd99.Lng))))
    goto label_72;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_86;
  (Wrd91.Obj) = (current_block [OBJECT_3_7]);
  goto label_85;

DEFLABEL (label_86)
  (Wrd91.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_85)
DEFLABEL (label_122)
  Rsp = (& (Rsp [3]));
  if ((Wrd91.Obj) == ((SCHEME_OBJECT) 0))
    goto label_119;

DEFLABEL (label_121)
  (Wrd270.Obj) = (Rsp [1]);
  (Wrd271.uLng) = (OBJECT_TYPE (Wrd270.Obj));
  if (! ((Wrd271.uLng) == 26))
    goto label_120;
  (Wrd278.Lng) = (FIXNUM_TO_LONG (Wrd270.Obj));
  if ((Wrd278.Lng) == 0)
    goto label_93;

DEFLABEL (label_119)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd260.Obj) = (current_block [OBJECT_3_0]);
  (Wrd263.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd263.Lng))))
    goto label_118;
  (Wrd106.uLng) = (OBJECT_DATUM (Wrd260.Obj));
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd106.Obj) == (Wrd108.Obj))
    goto label_111;

DEFLABEL (label_117)
  (Wrd250.Obj) = (current_block [OBJECT_3_2]);
  (Wrd253.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd253.Lng))))
    goto label_116;
  (Wrd110.uLng) = (OBJECT_DATUM (Wrd250.Obj));
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd110.Obj) == (Wrd112.Obj))
    goto label_111;

DEFLABEL (label_115)
  (Wrd240.Obj) = (current_block [OBJECT_3_3]);
  (Wrd243.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd243.Lng))))
    goto label_114;
  (Wrd114.uLng) = (OBJECT_DATUM (Wrd240.Obj));
  (Wrd115.Obj) = (Rsp [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd114.Obj) == (Wrd116.Obj))
    goto label_111;

DEFLABEL (label_113)
  (Wrd230.Obj) = (current_block [OBJECT_3_4]);
  (Wrd233.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd233.Lng))))
    goto label_112;
  (Wrd118.uLng) = (OBJECT_DATUM (Wrd230.Obj));
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd118.Obj) == (Wrd120.Obj))
    goto label_111;

DEFLABEL (label_110)
  (Wrd121.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd131.Lng))))
    goto label_72;
  (Wrd125.uLng) = (OBJECT_DATUM (Wrd121.Obj));
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd125.Obj) == (Wrd127.Obj))
    goto label_88;
  (Wrd123.Obj) = (current_block [OBJECT_3_7]);
  goto label_87;

DEFLABEL (label_88)
  (Wrd123.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_87)
DEFLABEL (label_109)
  Rsp = (& (Rsp [3]));
  if ((Wrd123.Obj) == ((SCHEME_OBJECT) 0))
    goto label_105;

DEFLABEL (label_108)
  (Wrd217.Obj) = (Rsp [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if (! ((Wrd218.uLng) == 26))
    goto label_107;
  if ((Wrd217.Obj) == (current_block [OBJECT_3_8]))
    goto label_106;

DEFLABEL (label_105)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (Wrd136.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd207.Obj) = (current_block [OBJECT_3_0]);
  (Wrd210.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd210.Lng))))
    goto label_104;
  (Wrd138.uLng) = (OBJECT_DATUM (Wrd207.Obj));
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if ((Wrd138.Obj) == (Wrd140.Obj))
    goto label_97;

DEFLABEL (label_103)
  (Wrd197.Obj) = (current_block [OBJECT_3_2]);
  (Wrd200.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd200.Lng))))
    goto label_102;
  (Wrd142.uLng) = (OBJECT_DATUM (Wrd197.Obj));
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd142.Obj) == (Wrd144.Obj))
    goto label_97;

DEFLABEL (label_101)
  (Wrd187.Obj) = (current_block [OBJECT_3_3]);
  (Wrd190.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd190.Lng))))
    goto label_100;
  (Wrd146.uLng) = (OBJECT_DATUM (Wrd187.Obj));
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd146.Obj) == (Wrd148.Obj))
    goto label_97;

DEFLABEL (label_99)
  (Wrd177.Obj) = (current_block [OBJECT_3_4]);
  (Wrd180.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd180.Lng))))
    goto label_98;
  (Wrd150.uLng) = (OBJECT_DATUM (Wrd177.Obj));
  (Wrd151.Obj) = (Rsp [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd150.Obj) == (Wrd152.Obj))
    goto label_97;

DEFLABEL (label_96)
  (Wrd153.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd163.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd163.Lng))))
    goto label_72;
  (Wrd157.uLng) = (OBJECT_DATUM (Wrd153.Obj));
  (Wrd158.Obj) = (Rsp [1]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if ((Wrd157.Obj) == (Wrd159.Obj))
    goto label_90;
  (Wrd155.Obj) = (current_block [OBJECT_3_7]);
  goto label_89;

DEFLABEL (label_90)
  (Wrd155.Obj) = (current_block [OBJECT_3_6]);

DEFLABEL (label_89)
DEFLABEL (label_95)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd155.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_92;

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (label_92)
  (Wrd165.Obj) = (Rsp [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 26))
    goto label_94;
  (Wrd175.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  if (! ((Wrd175.Lng) == 0))
    goto label_91;

DEFLABEL (label_93)
  Rvl = (current_block [OBJECT_3_9]);
  goto label_80;

DEFLABEL (label_94)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_93;

DEFLABEL (label_97)
  Rsp = (& (Rsp [2]));
  goto label_92;

DEFLABEL (label_98)
  (Wrd182.Obj) = (Rsp [0]);
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  goto label_97;

DEFLABEL (label_100)
  (Wrd192.Obj) = (Rsp [0]);
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_97;

DEFLABEL (label_102)
  (Wrd202.Obj) = (Rsp [0]);
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_97;

DEFLABEL (label_104)
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_97;

DEFLABEL (label_106)
  Rvl = (Rsp [1]);
  goto label_80;

DEFLABEL (label_107)
  (Wrd224.Obj) = (current_block [OBJECT_3_8]);
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  goto label_106;

DEFLABEL (label_111)
  Rsp = (& (Rsp [2]));
  goto label_108;

DEFLABEL (label_112)
  (Wrd235.Obj) = (Rsp [0]);
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd238.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  goto label_111;

DEFLABEL (label_114)
  (Wrd245.Obj) = (Rsp [0]);
  (Wrd248.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd248.Obj);
  (* (--Rsp)) = (Wrd245.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  goto label_111;

DEFLABEL (label_116)
  (Wrd255.Obj) = (Rsp [0]);
  (Wrd258.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd258.Obj);
  (* (--Rsp)) = (Wrd255.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_111;

DEFLABEL (label_118)
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd268.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd260.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_111;

DEFLABEL (label_120)
  (Wrd275.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd275.Obj);
  (* (--Rsp)) = (Wrd270.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_52)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  goto label_93;

DEFLABEL (label_124)
  Rsp = (& (Rsp [2]));
  goto label_121;

DEFLABEL (label_125)
  (Wrd285.Obj) = (Rsp [0]);
  (Wrd288.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd288.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd280.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_123;
  goto label_124;

DEFLABEL (label_127)
  (Wrd295.Obj) = (Rsp [0]);
  (Wrd298.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd298.Obj);
  (* (--Rsp)) = (Wrd295.Obj);
  (* (--Rsp)) = (Wrd290.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  goto label_124;

DEFLABEL (label_129)
  (Wrd305.Obj) = (Rsp [0]);
  (Wrd308.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd300.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  goto label_124;

DEFLABEL (label_131)
  (Wrd318.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd318.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_130;
  goto label_124;

DEFLABEL (label_133)
  Rvl = (Rsp [0]);
  goto label_80;

DEFLABEL (label_134)
  (Wrd327.Obj) = (current_block [OBJECT_3_8]);
  (Wrd330.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd330.Obj);
  (* (--Rsp)) = (Wrd327.Obj);
  (* (--Rsp)) = (Wrd320.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;
  goto label_133;

DEFLABEL (label_138)
  Rsp = (& (Rsp [2]));
  goto label_135;

DEFLABEL (label_139)
  (Wrd338.Obj) = (Rsp [0]);
  (Wrd341.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd341.Obj);
  (* (--Rsp)) = (Wrd338.Obj);
  (* (--Rsp)) = (Wrd333.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_58)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  goto label_138;

DEFLABEL (label_141)
  (Wrd348.Obj) = (Rsp [0]);
  (Wrd351.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd351.Obj);
  (* (--Rsp)) = (Wrd348.Obj);
  (* (--Rsp)) = (Wrd343.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_140;
  goto label_138;

DEFLABEL (label_143)
  (Wrd358.Obj) = (Rsp [0]);
  (Wrd361.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd361.Obj);
  (* (--Rsp)) = (Wrd358.Obj);
  (* (--Rsp)) = (Wrd353.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  goto label_138;

DEFLABEL (label_145)
  (Wrd371.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd371.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd363.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_144;
  goto label_138;

DEFLABEL (label_148)
  Rsp = (& (Rsp [2]));
  goto label_81;

DEFLABEL (label_149)
  (Wrd422.Obj) = (Rsp [0]);
  (Wrd425.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd425.Obj);
  (* (--Rsp)) = (Wrd422.Obj);
  (* (--Rsp)) = (Wrd417.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_62)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_147;
  goto label_148;

DEFLABEL (label_151)
  (Wrd432.Obj) = (Rsp [0]);
  (Wrd435.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd435.Obj);
  (* (--Rsp)) = (Wrd432.Obj);
  (* (--Rsp)) = (Wrd427.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  goto label_148;

DEFLABEL (label_153)
  (Wrd442.Obj) = (Rsp [0]);
  (Wrd445.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd445.Obj);
  (* (--Rsp)) = (Wrd442.Obj);
  (* (--Rsp)) = (Wrd437.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_152;
  goto label_148;

DEFLABEL (label_155)
  (Wrd455.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd455.Obj);
  (* (--Rsp)) = (Wrd376.Obj);
  (* (--Rsp)) = (Wrd447.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_65)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_154;
  goto label_148;

DEFLABEL (label_159)
  Rsp = (& (Rsp [2]));
  goto label_156;

DEFLABEL (label_160)
  (Wrd463.Obj) = (Rsp [0]);
  (Wrd466.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd466.Obj);
  (* (--Rsp)) = (Wrd463.Obj);
  (* (--Rsp)) = (Wrd458.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_158;
  goto label_159;

DEFLABEL (label_162)
  (Wrd473.Obj) = (Rsp [0]);
  (Wrd476.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd476.Obj);
  (* (--Rsp)) = (Wrd473.Obj);
  (* (--Rsp)) = (Wrd468.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_161;
  goto label_159;

DEFLABEL (label_164)
  (Wrd483.Obj) = (Rsp [0]);
  (Wrd486.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd486.Obj);
  (* (--Rsp)) = (Wrd483.Obj);
  (* (--Rsp)) = (Wrd478.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_68)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_163;
  goto label_159;

DEFLABEL (label_166)
  (Wrd496.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd496.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd488.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_165;
  goto label_159;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_3_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_92;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  goto label_108;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  goto label_121;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;
  goto label_135;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_81;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_156;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_4 11
#define LABEL_4_9 13
#define LABEL_4_10 15
#define LABEL_4_11 17
#define LABEL_4_12 19
#define LABEL_4_13 21
#define LABEL_4_14 23
#define LABEL_4_15 25
#define LABEL_4_16 27
#define LABEL_4_17 29
#define LABEL_4_18 31
#define LABEL_4_19 33
#define LABEL_4_20 35
#define LABEL_4_21 37
#define LABEL_4_22 39
#define LABEL_4_23 41
#define LABEL_4_24 43
#define LABEL_4_25 45
#define LABEL_4_26 47
#define LABEL_4_27 49
#define ENVIRONMENT_LABEL_4_3 66
#define DEBUGGING_LABEL_4_2 65
#define OBJECT_4_9 64
#define OBJECT_4_8 63
#define OBJECT_4_7 62
#define OBJECT_4_6 61
#define OBJECT_4_5 60
#define OBJECT_4_4 59
#define OBJECT_4_3 58
#define OBJECT_4_2 57
#define OBJECT_4_1 56
#define OBJECT_4_0 55
#define EXECUTE_CACHE_4_29 51
#define EXECUTE_CACHE_4_28 53
#define FREE_REFERENCES_LABEL_4_0 50
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd111;
  machine_word Wrd116;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd89;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd156;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd179;
  machine_word Wrd176;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd199;
  machine_word Wrd196;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd209;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd233;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd241;
  machine_word Wrd231;
  machine_word Wrd252;
  machine_word Wrd249;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd262;
  machine_word Wrd259;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd257;
  machine_word Wrd254;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd282;
  machine_word Wrd218;
  machine_word Wrd216;
  machine_word Wrd277;
  machine_word Wrd274;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd303;
  machine_word Wrd300;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd298;
  machine_word Wrd295;
  machine_word Wrd313;
  machine_word Wrd310;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd308;
  machine_word Wrd305;
  machine_word Wrd323;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd318;
  machine_word Wrd315;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_4_4);
      goto back_end_quotient_27;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_4_11);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_4_12);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_4_13);
      goto label_42;

    case 10:
      current_block = (Rpc - LABEL_4_14);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_4_15);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_4_16);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_4_17);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_4_18);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_4_19);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_4_20);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_4_21);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_4_22);
      goto label_33;

    case 19:
      current_block = (Rpc - LABEL_4_23);
      goto label_32;

    case 20:
      current_block = (Rpc - LABEL_4_24);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_4_25);
      goto label_30;

    case 22:
      current_block = (Rpc - LABEL_4_26);
      goto label_29;

    case 23:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end_quotient_48)
DEFLABEL (back_end_quotient_27)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd315.Obj) = (current_block [OBJECT_4_0]);
  (Wrd318.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd318.Lng))))
    goto label_111;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd315.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_104;

DEFLABEL (label_110)
  (Wrd305.Obj) = (current_block [OBJECT_4_2]);
  (Wrd308.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd308.Lng))))
    goto label_109;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd305.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_104;

DEFLABEL (label_108)
  (Wrd295.Obj) = (current_block [OBJECT_4_3]);
  (Wrd298.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd298.Lng))))
    goto label_107;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd295.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_104;

DEFLABEL (label_106)
  (Wrd285.Obj) = (current_block [OBJECT_4_4]);
  (Wrd288.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd288.Lng))))
    goto label_105;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd285.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_104;

DEFLABEL (label_103)
  (Wrd25.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_50;

DEFLABEL (label_49)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_50)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_52;
  (Wrd27.Obj) = (current_block [OBJECT_4_7]);
  goto label_51;

DEFLABEL (label_52)
  (Wrd27.Obj) = (current_block [OBJECT_4_6]);

DEFLABEL (label_51)
DEFLABEL (label_102)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;

DEFLABEL (label_101)
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd214.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd214.Obj);
  (Wrd274.Obj) = (current_block [OBJECT_4_0]);
  (Wrd277.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd277.Lng))))
    goto label_100;
  (Wrd216.uLng) = (OBJECT_DATUM (Wrd274.Obj));
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if ((Wrd216.Obj) == (Wrd218.Obj))
    goto label_93;

DEFLABEL (label_99)
  (Wrd264.Obj) = (current_block [OBJECT_4_2]);
  (Wrd267.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd267.Lng))))
    goto label_98;
  (Wrd220.uLng) = (OBJECT_DATUM (Wrd264.Obj));
  (Wrd221.Obj) = (Rsp [0]);
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if ((Wrd220.Obj) == (Wrd222.Obj))
    goto label_93;

DEFLABEL (label_97)
  (Wrd254.Obj) = (current_block [OBJECT_4_3]);
  (Wrd257.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd257.Lng))))
    goto label_96;
  (Wrd224.uLng) = (OBJECT_DATUM (Wrd254.Obj));
  (Wrd225.Obj) = (Rsp [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd224.Obj) == (Wrd226.Obj))
    goto label_93;

DEFLABEL (label_95)
  (Wrd244.Obj) = (current_block [OBJECT_4_4]);
  (Wrd247.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd247.Lng))))
    goto label_94;
  (Wrd228.uLng) = (OBJECT_DATUM (Wrd244.Obj));
  (Wrd229.Obj) = (Rsp [0]);
  (Wrd230.uLng) = (OBJECT_TYPE (Wrd229.Obj));
  if ((Wrd228.Obj) == (Wrd230.Obj))
    goto label_93;

DEFLABEL (label_92)
  (Wrd231.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd231.Obj);
  (Wrd241.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd241.Lng))))
    goto label_49;
  (Wrd235.uLng) = (OBJECT_DATUM (Wrd231.Obj));
  (Wrd236.Obj) = (Rsp [1]);
  (Wrd237.uLng) = (OBJECT_TYPE (Wrd236.Obj));
  if ((Wrd235.Obj) == (Wrd237.Obj))
    goto label_54;
  (Wrd233.Obj) = (current_block [OBJECT_4_7]);
  goto label_53;

DEFLABEL (label_54)
  (Wrd233.Obj) = (current_block [OBJECT_4_6]);

DEFLABEL (label_53)
DEFLABEL (label_91)
  Rsp = (& (Rsp [3]));
  if ((Wrd233.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;

DEFLABEL (label_55)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (label_56)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd201.Obj) = (current_block [OBJECT_4_0]);
  (Wrd204.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd204.Lng))))
    goto label_90;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd201.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_83;

DEFLABEL (label_89)
  (Wrd191.Obj) = (current_block [OBJECT_4_2]);
  (Wrd194.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd194.Lng))))
    goto label_88;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd191.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_83;

DEFLABEL (label_87)
  (Wrd181.Obj) = (current_block [OBJECT_4_3]);
  (Wrd184.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd184.Lng))))
    goto label_86;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd181.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_83;

DEFLABEL (label_85)
  (Wrd171.Obj) = (current_block [OBJECT_4_4]);
  (Wrd174.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd174.Lng))))
    goto label_84;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd171.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_83;

DEFLABEL (label_82)
  (Wrd57.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng))))
    goto label_49;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_58;
  (Wrd59.Obj) = (current_block [OBJECT_4_7]);
  goto label_57;

DEFLABEL (label_58)
  (Wrd59.Obj) = (current_block [OBJECT_4_6]);

DEFLABEL (label_57)
DEFLABEL (label_81)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_80)
  (Wrd158.Obj) = (Rsp [1]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if (! ((Wrd159.uLng) == 26))
    goto label_79;
  if ((Wrd158.Obj) == (current_block [OBJECT_4_8]))
    goto label_78;

DEFLABEL (label_77)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd148.Obj) = (current_block [OBJECT_4_0]);
  (Wrd151.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd151.Lng))))
    goto label_76;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd148.Obj));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd74.Obj) == (Wrd76.Obj))
    goto label_69;

DEFLABEL (label_75)
  (Wrd138.Obj) = (current_block [OBJECT_4_2]);
  (Wrd141.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd141.Lng))))
    goto label_74;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd138.Obj));
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd78.Obj) == (Wrd80.Obj))
    goto label_69;

DEFLABEL (label_73)
  (Wrd128.Obj) = (current_block [OBJECT_4_3]);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd131.Lng))))
    goto label_72;
  (Wrd82.uLng) = (OBJECT_DATUM (Wrd128.Obj));
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd82.Obj) == (Wrd84.Obj))
    goto label_69;

DEFLABEL (label_71)
  (Wrd118.Obj) = (current_block [OBJECT_4_4]);
  (Wrd121.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd121.Lng))))
    goto label_70;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd118.Obj));
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd86.Obj) == (Wrd88.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd89.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd99.Lng))))
    goto label_49;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_60;
  (Wrd91.Obj) = (current_block [OBJECT_4_7]);
  goto label_59;

DEFLABEL (label_60)
  (Wrd91.Obj) = (current_block [OBJECT_4_6]);

DEFLABEL (label_59)
DEFLABEL (label_67)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd91.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_63;

DEFLABEL (label_62)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd105.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_4_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  Rvl = (current_block [OBJECT_4_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (label_63)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 26))
    goto label_66;
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! ((Wrd116.Lng) == 0))
    goto label_62;

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_4_9]);

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_65;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto label_63;

DEFLABEL (label_70)
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_72)
  (Wrd133.Obj) = (Rsp [0]);
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_69;

DEFLABEL (label_74)
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_69;

DEFLABEL (label_76)
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_69;

DEFLABEL (label_78)
  Rvl = (Rsp [0]);
  goto label_64;

DEFLABEL (label_79)
  (Wrd165.Obj) = (current_block [OBJECT_4_8]);
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_78;

DEFLABEL (label_83)
  Rsp = (& (Rsp [2]));
  goto label_80;

DEFLABEL (label_84)
  (Wrd176.Obj) = (Rsp [0]);
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (label_86)
  (Wrd186.Obj) = (Rsp [0]);
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_83;

DEFLABEL (label_88)
  (Wrd196.Obj) = (Rsp [0]);
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd199.Obj);
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_83;

DEFLABEL (label_90)
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd201.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_83;

DEFLABEL (label_93)
  Rsp = (& (Rsp [2]));
  goto label_55;

DEFLABEL (label_94)
  (Wrd249.Obj) = (Rsp [0]);
  (Wrd252.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd252.Obj);
  (* (--Rsp)) = (Wrd249.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_93;

DEFLABEL (label_96)
  (Wrd259.Obj) = (Rsp [0]);
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd262.Obj);
  (* (--Rsp)) = (Wrd259.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_93;

DEFLABEL (label_98)
  (Wrd269.Obj) = (Rsp [0]);
  (Wrd272.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  goto label_93;

DEFLABEL (label_100)
  (Wrd282.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd282.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_93;

DEFLABEL (label_104)
  Rsp = (& (Rsp [2]));
  goto label_101;

DEFLABEL (label_105)
  (Wrd290.Obj) = (Rsp [0]);
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd290.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_104;

DEFLABEL (label_107)
  (Wrd300.Obj) = (Rsp [0]);
  (Wrd303.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd303.Obj);
  (* (--Rsp)) = (Wrd300.Obj);
  (* (--Rsp)) = (Wrd295.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  goto label_104;

DEFLABEL (label_109)
  (Wrd310.Obj) = (Rsp [0]);
  (Wrd313.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd313.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  goto label_104;

DEFLABEL (label_111)
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd323.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd315.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  goto label_104;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_63;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_80;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_55;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_101;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_6 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_4 15
#define LABEL_5_11 17
#define LABEL_5_12 19
#define LABEL_5_13 21
#define LABEL_5_14 23
#define LABEL_5_15 25
#define LABEL_5_16 27
#define LABEL_5_17 29
#define LABEL_5_18 31
#define LABEL_5_19 33
#define LABEL_5_20 35
#define LABEL_5_21 37
#define LABEL_5_22 39
#define LABEL_5_23 41
#define LABEL_5_24 43
#define LABEL_5_25 45
#define LABEL_5_26 47
#define LABEL_5_27 49
#define LABEL_5_28 51
#define LABEL_5_29 53
#define LABEL_5_30 55
#define LABEL_5_31 57
#define LABEL_5_32 59
#define LABEL_5_33 61
#define LABEL_5_34 63
#define LABEL_5_35 65
#define LABEL_5_36 67
#define LABEL_5_37 69
#define LABEL_5_38 71
#define LABEL_5_39 73
#define ENVIRONMENT_LABEL_5_3 93
#define DEBUGGING_LABEL_5_2 92
#define OBJECT_5_10 91
#define OBJECT_5_9 90
#define OBJECT_5_8 89
#define OBJECT_5_7 88
#define OBJECT_5_6 87
#define OBJECT_5_5 86
#define OBJECT_5_4 85
#define OBJECT_5_3 84
#define OBJECT_5_2 83
#define OBJECT_5_1 82
#define OBJECT_5_0 81
#define EXECUTE_CACHE_5_42 75
#define EXECUTE_CACHE_5_41 77
#define EXECUTE_CACHE_5_40 79
#define FREE_REFERENCES_LABEL_5_0 74
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd170;
  machine_word Wrd165;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd155;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd163;
  machine_word Wrd153;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd206;
  machine_word Wrd203;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd216;
  machine_word Wrd140;
  machine_word Wrd138;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd131;
  machine_word Wrd121;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd234;
  machine_word Wrd231;
  machine_word Wrd249;
  machine_word Wrd246;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd244;
  machine_word Wrd241;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd254;
  machine_word Wrd251;
  machine_word Wrd269;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd264;
  machine_word Wrd261;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd276;
  machine_word Wrd281;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd89;
  machine_word Wrd291;
  machine_word Wrd288;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd286;
  machine_word Wrd283;
  machine_word Wrd301;
  machine_word Wrd298;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd296;
  machine_word Wrd293;
  machine_word Wrd311;
  machine_word Wrd308;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd306;
  machine_word Wrd303;
  machine_word Wrd321;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd316;
  machine_word Wrd313;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd340;
  machine_word Wrd337;
  machine_word Wrd331;
  machine_word Wrd330;
  machine_word Wrd328;
  machine_word Wrd343;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd353;
  machine_word Wrd350;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd348;
  machine_word Wrd345;
  machine_word Wrd363;
  machine_word Wrd360;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd358;
  machine_word Wrd355;
  machine_word Wrd373;
  machine_word Wrd370;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd368;
  machine_word Wrd365;
  machine_word Wrd383;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd378;
  machine_word Wrd375;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd407;
  machine_word Wrd411;
  machine_word Wrd410;
  machine_word Wrd409;
  machine_word Wrd415;
  machine_word Wrd405;
  machine_word Wrd426;
  machine_word Wrd423;
  machine_word Wrd404;
  machine_word Wrd403;
  machine_word Wrd402;
  machine_word Wrd421;
  machine_word Wrd418;
  machine_word Wrd436;
  machine_word Wrd433;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd446;
  machine_word Wrd443;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd394;
  machine_word Wrd441;
  machine_word Wrd438;
  machine_word Wrd456;
  machine_word Wrd392;
  machine_word Wrd390;
  machine_word Wrd451;
  machine_word Wrd448;
  machine_word Wrd388;
  machine_word Wrd387;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd467;
  machine_word Wrd464;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd462;
  machine_word Wrd459;
  machine_word Wrd477;
  machine_word Wrd474;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd472;
  machine_word Wrd469;
  machine_word Wrd487;
  machine_word Wrd484;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd482;
  machine_word Wrd479;
  machine_word Wrd497;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd492;
  machine_word Wrd489;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_34;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_5_4);
      goto back_end_expt_41;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto label_71;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto label_70;

    case 9:
      current_block = (Rpc - LABEL_5_13);
      goto label_69;

    case 10:
      current_block = (Rpc - LABEL_5_14);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_5_15);
      goto label_67;

    case 12:
      current_block = (Rpc - LABEL_5_16);
      goto label_66;

    case 13:
      current_block = (Rpc - LABEL_5_17);
      goto label_65;

    case 14:
      current_block = (Rpc - LABEL_5_18);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_5_19);
      goto label_63;

    case 16:
      current_block = (Rpc - LABEL_5_20);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_5_21);
      goto label_61;

    case 18:
      current_block = (Rpc - LABEL_5_22);
      goto label_60;

    case 19:
      current_block = (Rpc - LABEL_5_23);
      goto label_58;

    case 20:
      current_block = (Rpc - LABEL_5_24);
      goto label_59;

    case 21:
      current_block = (Rpc - LABEL_5_25);
      goto label_57;

    case 22:
      current_block = (Rpc - LABEL_5_26);
      goto label_56;

    case 23:
      current_block = (Rpc - LABEL_5_27);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_5_28);
      goto label_54;

    case 25:
      current_block = (Rpc - LABEL_5_29);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_5_30);
      goto label_52;

    case 27:
      current_block = (Rpc - LABEL_5_31);
      goto label_51;

    case 28:
      current_block = (Rpc - LABEL_5_32);
      goto label_50;

    case 29:
      current_block = (Rpc - LABEL_5_33);
      goto label_49;

    case 30:
      current_block = (Rpc - LABEL_5_34);
      goto label_48;

    case 31:
      current_block = (Rpc - LABEL_5_35);
      goto label_47;

    case 32:
      current_block = (Rpc - LABEL_5_36);
      goto label_46;

    case 33:
      current_block = (Rpc - LABEL_5_37);
      goto label_45;

    case 34:
      current_block = (Rpc - LABEL_5_38);
      goto label_44;

    case 35:
      current_block = (Rpc - LABEL_5_39);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end_expt_73)
DEFLABEL (back_end_expt_41)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd489.Obj) = (current_block [OBJECT_5_0]);
  (Wrd492.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd492.Lng))))
    goto label_168;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd489.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_161;

DEFLABEL (label_167)
  (Wrd479.Obj) = (current_block [OBJECT_5_2]);
  (Wrd482.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd482.Lng))))
    goto label_166;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd479.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_161;

DEFLABEL (label_165)
  (Wrd469.Obj) = (current_block [OBJECT_5_3]);
  (Wrd472.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd472.Lng))))
    goto label_164;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd469.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_161;

DEFLABEL (label_163)
  (Wrd459.Obj) = (current_block [OBJECT_5_4]);
  (Wrd462.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd462.Lng))))
    goto label_162;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd459.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_161;

DEFLABEL (label_160)
  (Wrd25.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_75;

DEFLABEL (label_74)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_75)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_77;
  (Wrd27.Obj) = (current_block [OBJECT_5_7]);
  goto label_76;

DEFLABEL (label_77)
  (Wrd27.Obj) = (current_block [OBJECT_5_6]);

DEFLABEL (label_76)
DEFLABEL (label_159)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_158)
  (Wrd387.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd387.Obj);
  (Wrd388.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd388.Obj);
  (Wrd448.Obj) = (current_block [OBJECT_5_0]);
  (Wrd451.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd451.Lng))))
    goto label_157;
  (Wrd390.uLng) = (OBJECT_DATUM (Wrd448.Obj));
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd388.Obj));
  if ((Wrd390.Obj) == (Wrd392.Obj))
    goto label_150;

DEFLABEL (label_156)
  (Wrd438.Obj) = (current_block [OBJECT_5_2]);
  (Wrd441.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd441.Lng))))
    goto label_155;
  (Wrd394.uLng) = (OBJECT_DATUM (Wrd438.Obj));
  (Wrd395.Obj) = (Rsp [0]);
  (Wrd396.uLng) = (OBJECT_TYPE (Wrd395.Obj));
  if ((Wrd394.Obj) == (Wrd396.Obj))
    goto label_150;

DEFLABEL (label_154)
  (Wrd428.Obj) = (current_block [OBJECT_5_3]);
  (Wrd431.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd431.Lng))))
    goto label_153;
  (Wrd398.uLng) = (OBJECT_DATUM (Wrd428.Obj));
  (Wrd399.Obj) = (Rsp [0]);
  (Wrd400.uLng) = (OBJECT_TYPE (Wrd399.Obj));
  if ((Wrd398.Obj) == (Wrd400.Obj))
    goto label_150;

DEFLABEL (label_152)
  (Wrd418.Obj) = (current_block [OBJECT_5_4]);
  (Wrd421.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd421.Lng))))
    goto label_151;
  (Wrd402.uLng) = (OBJECT_DATUM (Wrd418.Obj));
  (Wrd403.Obj) = (Rsp [0]);
  (Wrd404.uLng) = (OBJECT_TYPE (Wrd403.Obj));
  if ((Wrd402.Obj) == (Wrd404.Obj))
    goto label_150;

DEFLABEL (label_149)
  (Wrd405.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd405.Obj);
  (Wrd415.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd415.Lng))))
    goto label_74;
  (Wrd409.uLng) = (OBJECT_DATUM (Wrd405.Obj));
  (Wrd410.Obj) = (Rsp [1]);
  (Wrd411.uLng) = (OBJECT_TYPE (Wrd410.Obj));
  if ((Wrd409.Obj) == (Wrd411.Obj))
    goto label_79;
  (Wrd407.Obj) = (current_block [OBJECT_5_7]);
  goto label_78;

DEFLABEL (label_79)
  (Wrd407.Obj) = (current_block [OBJECT_5_6]);

DEFLABEL (label_78)
DEFLABEL (label_148)
  Rsp = (& (Rsp [3]));
  if ((Wrd407.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_42]));

DEFLABEL (label_81)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd375.Obj) = (current_block [OBJECT_5_0]);
  (Wrd378.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd378.Lng))))
    goto label_147;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd375.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_140;

DEFLABEL (label_146)
  (Wrd365.Obj) = (current_block [OBJECT_5_2]);
  (Wrd368.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd368.Lng))))
    goto label_145;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd365.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_140;

DEFLABEL (label_144)
  (Wrd355.Obj) = (current_block [OBJECT_5_3]);
  (Wrd358.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd358.Lng))))
    goto label_143;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd355.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_140;

DEFLABEL (label_142)
  (Wrd345.Obj) = (current_block [OBJECT_5_4]);
  (Wrd348.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd348.Lng))))
    goto label_141;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd345.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_140;

DEFLABEL (label_139)
  (Wrd57.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng))))
    goto label_74;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_83;
  (Wrd59.Obj) = (current_block [OBJECT_5_7]);
  goto label_82;

DEFLABEL (label_83)
  (Wrd59.Obj) = (current_block [OBJECT_5_6]);

DEFLABEL (label_82)
DEFLABEL (label_138)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_133;

DEFLABEL (label_137)
  (Wrd323.Obj) = (Rsp [0]);
  (Wrd324.uLng) = (OBJECT_TYPE (Wrd323.Obj));
  if (! ((Wrd324.uLng) == 26))
    goto label_136;
  (Wrd343.Lng) = (FIXNUM_TO_LONG (Wrd323.Obj));
  if ((Wrd343.Lng) == 0)
    goto label_105;

DEFLABEL (label_135)
  (Wrd330.Obj) = (Rsp [0]);
  (Wrd331.uLng) = (OBJECT_TYPE (Wrd330.Obj));
  if (! ((Wrd331.uLng) == 26))
    goto label_134;
  if ((Wrd330.Obj) == (current_block [OBJECT_5_8]))
    goto label_105;

DEFLABEL (label_133)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd313.Obj) = (current_block [OBJECT_5_0]);
  (Wrd316.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd316.Lng))))
    goto label_132;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd313.Obj));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd74.Obj) == (Wrd76.Obj))
    goto label_125;

DEFLABEL (label_131)
  (Wrd303.Obj) = (current_block [OBJECT_5_2]);
  (Wrd306.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd306.Lng))))
    goto label_130;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd303.Obj));
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd78.Obj) == (Wrd80.Obj))
    goto label_125;

DEFLABEL (label_129)
  (Wrd293.Obj) = (current_block [OBJECT_5_3]);
  (Wrd296.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd296.Lng))))
    goto label_128;
  (Wrd82.uLng) = (OBJECT_DATUM (Wrd293.Obj));
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd82.Obj) == (Wrd84.Obj))
    goto label_125;

DEFLABEL (label_127)
  (Wrd283.Obj) = (current_block [OBJECT_5_4]);
  (Wrd286.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd286.Lng))))
    goto label_126;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd283.Obj));
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd86.Obj) == (Wrd88.Obj))
    goto label_125;

DEFLABEL (label_124)
  (Wrd89.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd99.Lng))))
    goto label_74;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_85;
  (Wrd91.Obj) = (current_block [OBJECT_5_7]);
  goto label_84;

DEFLABEL (label_85)
  (Wrd91.Obj) = (current_block [OBJECT_5_6]);

DEFLABEL (label_84)
DEFLABEL (label_123)
  Rsp = (& (Rsp [3]));
  if ((Wrd91.Obj) == ((SCHEME_OBJECT) 0))
    goto label_119;

DEFLABEL (label_122)
  (Wrd271.Obj) = (Rsp [1]);
  (Wrd272.uLng) = (OBJECT_TYPE (Wrd271.Obj));
  if (! ((Wrd272.uLng) == 26))
    goto label_121;
  (Wrd281.Lng) = (FIXNUM_TO_LONG (Wrd271.Obj));
  if ((Wrd281.Lng) == 0)
    goto label_120;

DEFLABEL (label_119)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd261.Obj) = (current_block [OBJECT_5_0]);
  (Wrd264.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd264.Lng))))
    goto label_118;
  (Wrd106.uLng) = (OBJECT_DATUM (Wrd261.Obj));
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd106.Obj) == (Wrd108.Obj))
    goto label_111;

DEFLABEL (label_117)
  (Wrd251.Obj) = (current_block [OBJECT_5_2]);
  (Wrd254.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd254.Lng))))
    goto label_116;
  (Wrd110.uLng) = (OBJECT_DATUM (Wrd251.Obj));
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd110.Obj) == (Wrd112.Obj))
    goto label_111;

DEFLABEL (label_115)
  (Wrd241.Obj) = (current_block [OBJECT_5_3]);
  (Wrd244.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd244.Lng))))
    goto label_114;
  (Wrd114.uLng) = (OBJECT_DATUM (Wrd241.Obj));
  (Wrd115.Obj) = (Rsp [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd114.Obj) == (Wrd116.Obj))
    goto label_111;

DEFLABEL (label_113)
  (Wrd231.Obj) = (current_block [OBJECT_5_4]);
  (Wrd234.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd234.Lng))))
    goto label_112;
  (Wrd118.uLng) = (OBJECT_DATUM (Wrd231.Obj));
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd118.Obj) == (Wrd120.Obj))
    goto label_111;

DEFLABEL (label_110)
  (Wrd121.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd131.Lng))))
    goto label_74;
  (Wrd125.uLng) = (OBJECT_DATUM (Wrd121.Obj));
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd125.Obj) == (Wrd127.Obj))
    goto label_87;
  (Wrd123.Obj) = (current_block [OBJECT_5_7]);
  goto label_86;

DEFLABEL (label_87)
  (Wrd123.Obj) = (current_block [OBJECT_5_6]);

DEFLABEL (label_86)
DEFLABEL (label_109)
  Rsp = (& (Rsp [3]));
  if ((Wrd123.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;

DEFLABEL (label_108)
  (Wrd218.Obj) = (Rsp [1]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if (! ((Wrd219.uLng) == 26))
    goto label_107;
  if ((Wrd218.Obj) == (current_block [OBJECT_5_8]))
    goto label_105;

DEFLABEL (label_104)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (Wrd136.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd208.Obj) = (current_block [OBJECT_5_0]);
  (Wrd211.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd211.Lng))))
    goto label_103;
  (Wrd138.uLng) = (OBJECT_DATUM (Wrd208.Obj));
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if ((Wrd138.Obj) == (Wrd140.Obj))
    goto label_96;

DEFLABEL (label_102)
  (Wrd198.Obj) = (current_block [OBJECT_5_2]);
  (Wrd201.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd201.Lng))))
    goto label_101;
  (Wrd142.uLng) = (OBJECT_DATUM (Wrd198.Obj));
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd142.Obj) == (Wrd144.Obj))
    goto label_96;

DEFLABEL (label_100)
  (Wrd188.Obj) = (current_block [OBJECT_5_3]);
  (Wrd191.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd191.Lng))))
    goto label_99;
  (Wrd146.uLng) = (OBJECT_DATUM (Wrd188.Obj));
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd146.Obj) == (Wrd148.Obj))
    goto label_96;

DEFLABEL (label_98)
  (Wrd178.Obj) = (current_block [OBJECT_5_4]);
  (Wrd181.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd181.Lng))))
    goto label_97;
  (Wrd150.uLng) = (OBJECT_DATUM (Wrd178.Obj));
  (Wrd151.Obj) = (Rsp [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd150.Obj) == (Wrd152.Obj))
    goto label_96;

DEFLABEL (label_95)
  (Wrd153.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd163.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd163.Lng))))
    goto label_74;
  (Wrd157.uLng) = (OBJECT_DATUM (Wrd153.Obj));
  (Wrd158.Obj) = (Rsp [1]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if ((Wrd157.Obj) == (Wrd159.Obj))
    goto label_89;
  (Wrd155.Obj) = (current_block [OBJECT_5_7]);
  goto label_88;

DEFLABEL (label_89)
  (Wrd155.Obj) = (current_block [OBJECT_5_6]);

DEFLABEL (label_88)
DEFLABEL (label_94)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd155.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_91;

DEFLABEL (label_90)
  (Wrd165.Obj) = (current_block [OBJECT_5_10]);
  (* (--Rsp)) = (Wrd165.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_40]));

DEFLABEL (label_91)
  (Wrd166.Obj) = (Rsp [0]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd167.uLng) == 26))
    goto label_93;
  if (! ((Wrd166.Obj) == (current_block [OBJECT_5_9])))
    goto label_90;

DEFLABEL (label_92)
  (Wrd170.Obj) = (current_block [OBJECT_5_8]);
  (Rsp [0]) = (Wrd170.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_41]));

DEFLABEL (label_93)
  (Wrd172.Obj) = (current_block [OBJECT_5_9]);
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_92;

DEFLABEL (label_96)
  Rsp = (& (Rsp [2]));
  goto label_91;

DEFLABEL (label_97)
  (Wrd183.Obj) = (Rsp [0]);
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_96;

DEFLABEL (label_99)
  (Wrd193.Obj) = (Rsp [0]);
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_96;

DEFLABEL (label_101)
  (Wrd203.Obj) = (Rsp [0]);
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  goto label_96;

DEFLABEL (label_103)
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  goto label_96;

DEFLABEL (label_105)
  Rvl = (Rsp [0]);

DEFLABEL (label_106)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd225.Obj) = (current_block [OBJECT_5_8]);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd218.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_105;

DEFLABEL (label_111)
  Rsp = (& (Rsp [2]));
  goto label_108;

DEFLABEL (label_112)
  (Wrd236.Obj) = (Rsp [0]);
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd231.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  goto label_111;

DEFLABEL (label_114)
  (Wrd246.Obj) = (Rsp [0]);
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd249.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd241.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  goto label_111;

DEFLABEL (label_116)
  (Wrd256.Obj) = (Rsp [0]);
  (Wrd259.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd259.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd251.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_111;

DEFLABEL (label_118)
  (Wrd269.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd261.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_52)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_111;

DEFLABEL (label_120)
  Rvl = (current_block [OBJECT_5_8]);
  goto label_106;

DEFLABEL (label_121)
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = (Wrd271.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  goto label_120;

DEFLABEL (label_125)
  Rsp = (& (Rsp [2]));
  goto label_122;

DEFLABEL (label_126)
  (Wrd288.Obj) = (Rsp [0]);
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd291.Obj);
  (* (--Rsp)) = (Wrd288.Obj);
  (* (--Rsp)) = (Wrd283.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  goto label_125;

DEFLABEL (label_128)
  (Wrd298.Obj) = (Rsp [0]);
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd301.Obj);
  (* (--Rsp)) = (Wrd298.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  goto label_125;

DEFLABEL (label_130)
  (Wrd308.Obj) = (Rsp [0]);
  (Wrd311.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd311.Obj);
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd303.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_129;
  goto label_125;

DEFLABEL (label_132)
  (Wrd321.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd321.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd313.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  goto label_125;

DEFLABEL (label_134)
  (Wrd337.Obj) = (current_block [OBJECT_5_8]);
  (Wrd340.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd340.Obj);
  (* (--Rsp)) = (Wrd337.Obj);
  (* (--Rsp)) = (Wrd330.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  goto label_105;

DEFLABEL (label_136)
  (Wrd328.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd323.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_58)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;
  goto label_105;

DEFLABEL (label_140)
  Rsp = (& (Rsp [2]));
  goto label_137;

DEFLABEL (label_141)
  (Wrd350.Obj) = (Rsp [0]);
  (Wrd353.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd353.Obj);
  (* (--Rsp)) = (Wrd350.Obj);
  (* (--Rsp)) = (Wrd345.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  goto label_140;

DEFLABEL (label_143)
  (Wrd360.Obj) = (Rsp [0]);
  (Wrd363.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd363.Obj);
  (* (--Rsp)) = (Wrd360.Obj);
  (* (--Rsp)) = (Wrd355.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  goto label_140;

DEFLABEL (label_145)
  (Wrd370.Obj) = (Rsp [0]);
  (Wrd373.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd373.Obj);
  (* (--Rsp)) = (Wrd370.Obj);
  (* (--Rsp)) = (Wrd365.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_62)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_144;
  goto label_140;

DEFLABEL (label_147)
  (Wrd383.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd383.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd375.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_146;
  goto label_140;

DEFLABEL (label_150)
  Rsp = (& (Rsp [2]));
  goto label_80;

DEFLABEL (label_151)
  (Wrd423.Obj) = (Rsp [0]);
  (Wrd426.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd426.Obj);
  (* (--Rsp)) = (Wrd423.Obj);
  (* (--Rsp)) = (Wrd418.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;
  goto label_150;

DEFLABEL (label_153)
  (Wrd433.Obj) = (Rsp [0]);
  (Wrd436.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd436.Obj);
  (* (--Rsp)) = (Wrd433.Obj);
  (* (--Rsp)) = (Wrd428.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_65)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_152;
  goto label_150;

DEFLABEL (label_155)
  (Wrd443.Obj) = (Rsp [0]);
  (Wrd446.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd446.Obj);
  (* (--Rsp)) = (Wrd443.Obj);
  (* (--Rsp)) = (Wrd438.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_154;
  goto label_150;

DEFLABEL (label_157)
  (Wrd456.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd456.Obj);
  (* (--Rsp)) = (Wrd388.Obj);
  (* (--Rsp)) = (Wrd448.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_150;

DEFLABEL (label_161)
  Rsp = (& (Rsp [2]));
  goto label_158;

DEFLABEL (label_162)
  (Wrd464.Obj) = (Rsp [0]);
  (Wrd467.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd467.Obj);
  (* (--Rsp)) = (Wrd464.Obj);
  (* (--Rsp)) = (Wrd459.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_68)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_160;
  goto label_161;

DEFLABEL (label_164)
  (Wrd474.Obj) = (Rsp [0]);
  (Wrd477.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd477.Obj);
  (* (--Rsp)) = (Wrd474.Obj);
  (* (--Rsp)) = (Wrd469.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_163;
  goto label_161;

DEFLABEL (label_166)
  (Wrd484.Obj) = (Rsp [0]);
  (Wrd487.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd487.Obj);
  (* (--Rsp)) = (Wrd484.Obj);
  (* (--Rsp)) = (Wrd479.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_70)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_165;
  goto label_161;

DEFLABEL (label_168)
  (Wrd497.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd497.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd489.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_71)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_167;
  goto label_161;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_91;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_108;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  goto label_122;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  goto label_137;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_80;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_158;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_6 5
#define LABEL_6_4 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define LABEL_6_10 15
#define LABEL_6_11 17
#define LABEL_6_12 19
#define LABEL_6_13 21
#define LABEL_6_14 23
#define ENVIRONMENT_LABEL_6_3 36
#define DEBUGGING_LABEL_6_2 35
#define OBJECT_6_7 34
#define OBJECT_6_6 33
#define OBJECT_6_5 32
#define OBJECT_6_4 31
#define OBJECT_6_3 30
#define OBJECT_6_2 29
#define OBJECT_6_1 28
#define OBJECT_6_0 27
#define EXECUTE_CACHE_6_15 25
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd117;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd158;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd153;
  machine_word Wrd150;
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
      current_block = (Rpc - LABEL_6_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_4);
      goto back_end___12;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_6_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_6_11);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_6_12);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_6_13);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_6_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___23)
DEFLABEL (back_end___12)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd150.Obj) = (current_block [OBJECT_6_0]);
  (Wrd153.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd153.Lng))))
    goto label_57;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd150.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_50;

DEFLABEL (label_56)
  (Wrd140.Obj) = (current_block [OBJECT_6_2]);
  (Wrd143.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd143.Lng))))
    goto label_55;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd140.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_50;

DEFLABEL (label_54)
  (Wrd130.Obj) = (current_block [OBJECT_6_3]);
  (Wrd133.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd133.Lng))))
    goto label_53;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd130.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_50;

DEFLABEL (label_52)
  (Wrd120.Obj) = (current_block [OBJECT_6_4]);
  (Wrd123.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd123.Lng))))
    goto label_51;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd120.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_50;

DEFLABEL (label_49)
  (Wrd25.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_25)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_27;
  (Wrd27.Obj) = (current_block [OBJECT_6_7]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd27.Obj) = (current_block [OBJECT_6_6]);

DEFLABEL (label_26)
DEFLABEL (label_48)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd27.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_29;

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_29)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_6_0]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd112.Lng))))
    goto label_47;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_40;

DEFLABEL (label_46)
  (Wrd99.Obj) = (current_block [OBJECT_6_2]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd102.Lng))))
    goto label_45;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_40;

DEFLABEL (label_44)
  (Wrd89.Obj) = (current_block [OBJECT_6_3]);
  (Wrd92.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd92.Lng))))
    goto label_43;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_40;

DEFLABEL (label_42)
  (Wrd79.Obj) = (current_block [OBJECT_6_4]);
  (Wrd82.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd82.Lng))))
    goto label_41;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd79.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_40;

DEFLABEL (label_39)
  (Wrd57.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng))))
    goto label_24;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_31;
  (Wrd59.Obj) = (current_block [OBJECT_6_7]);
  goto label_30;

DEFLABEL (label_31)
  (Wrd59.Obj) = (current_block [OBJECT_6_6]);

DEFLABEL (label_30)
DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;

DEFLABEL (label_37)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 26)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_33)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_32;
  if ((Wrd70.Obj) == (Wrd72.Obj))
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_34;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_6_6]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (label_41)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_43)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_40;

DEFLABEL (label_45)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_40;

DEFLABEL (label_47)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_40;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto label_29;

DEFLABEL (label_51)
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_53)
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_50;

DEFLABEL (label_55)
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_50;

DEFLABEL (label_57)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_50;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_37;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_6 5
#define LABEL_7_4 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_10 15
#define LABEL_7_11 17
#define LABEL_7_12 19
#define LABEL_7_13 21
#define LABEL_7_14 23
#define ENVIRONMENT_LABEL_7_3 33
#define DEBUGGING_LABEL_7_2 32
#define OBJECT_7_7 31
#define OBJECT_7_6 30
#define OBJECT_7_5 29
#define OBJECT_7_4 28
#define OBJECT_7_3 27
#define OBJECT_7_2 26
#define OBJECT_7_1 25
#define OBJECT_7_0 24
#define FREE_REFERENCES_LABEL_7_0 24
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd121;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd162;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd157;
  machine_word Wrd154;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_4);
      goto back_end___12;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_7_11);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_7_13);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_7_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___23)
DEFLABEL (back_end___12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd154.Obj) = (current_block [OBJECT_7_0]);
  (Wrd157.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd157.Lng))))
    goto label_57;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd154.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_50;

DEFLABEL (label_56)
  (Wrd144.Obj) = (current_block [OBJECT_7_2]);
  (Wrd147.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd147.Lng))))
    goto label_55;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd144.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_50;

DEFLABEL (label_54)
  (Wrd134.Obj) = (current_block [OBJECT_7_3]);
  (Wrd137.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd137.Lng))))
    goto label_53;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd134.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_50;

DEFLABEL (label_52)
  (Wrd124.Obj) = (current_block [OBJECT_7_4]);
  (Wrd127.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd127.Lng))))
    goto label_51;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd124.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_50;

DEFLABEL (label_49)
  (Wrd25.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_25)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_27;
  (Wrd27.Obj) = (current_block [OBJECT_7_7]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd27.Obj) = (current_block [OBJECT_7_6]);

DEFLABEL (label_26)
DEFLABEL (label_48)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_47)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_7_0]);
  (Wrd116.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd116.Lng))))
    goto label_46;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd113.Obj));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_39;

DEFLABEL (label_45)
  (Wrd103.Obj) = (current_block [OBJECT_7_2]);
  (Wrd106.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd106.Lng))))
    goto label_44;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd103.Obj));
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd48.Obj) == (Wrd50.Obj))
    goto label_39;

DEFLABEL (label_43)
  (Wrd93.Obj) = (current_block [OBJECT_7_3]);
  (Wrd96.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd96.Lng))))
    goto label_42;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd52.Obj) == (Wrd54.Obj))
    goto label_39;

DEFLABEL (label_41)
  (Wrd83.Obj) = (current_block [OBJECT_7_4]);
  (Wrd86.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd86.Lng))))
    goto label_40;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd83.Obj));
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd56.Obj) == (Wrd58.Obj))
    goto label_39;

DEFLABEL (label_38)
  (Wrd59.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd69.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd69.Lng))))
    goto label_24;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd63.Obj) == (Wrd65.Obj))
    goto label_29;
  (Wrd61.Obj) = (current_block [OBJECT_7_7]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd61.Obj) = (current_block [OBJECT_7_6]);

DEFLABEL (label_28)
DEFLABEL (label_37)
  Rsp = (& (Rsp [3]));
  if ((Wrd61.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_36)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 26)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_31)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_30;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if ((Wrd77.Lng) < (Wrd79.Lng))
    goto label_33;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_32;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_7_6]);

DEFLABEL (label_32)
DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  Rsp = (& (Rsp [2]));
  goto label_36;

DEFLABEL (label_40)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_39;

DEFLABEL (label_42)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_39;

DEFLABEL (label_44)
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_39;

DEFLABEL (label_46)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_39;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto label_47;

DEFLABEL (label_51)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_53)
  (Wrd139.Obj) = (Rsp [0]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_50;

DEFLABEL (label_55)
  (Wrd149.Obj) = (Rsp [0]);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_50;

DEFLABEL (label_57)
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_50;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_36;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto guarantee_c_line_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_c_line_4)
DEFLABEL (guarantee_c_line_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_2 9
#define OBJECT_9_1 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto error_not_c_line_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_c_line_5)
DEFLABEL (error_not_c_line_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_9_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_9_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_7 9
#define FREE_REFERENCE_10_0 12
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto c_line_1;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_line_5)
DEFLABEL (c_line_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_7;
  Wrd10 = Wrd14;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_8 9
#define LABEL_11_10 11
#define LABEL_11_7 13
#define ENVIRONMENT_LABEL_11_3 27
#define DEBUGGING_LABEL_11_2 26
#define OBJECT_11_3 25
#define OBJECT_11_2 24
#define OBJECT_11_1 23
#define OBJECT_11_0 22
#define EXECUTE_CACHE_11_11 15
#define EXECUTE_CACHE_11_9 17
#define FREE_REFERENCE_11_1 20
#define FREE_REFERENCE_11_0 21
#define FREE_REFERENCES_LABEL_11_0 14
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto c_line_items_5;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_line_items_12)
DEFLABEL (c_line_items_5)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_13;
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_16;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_15;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_20;
  Wrd28 = Wrd32;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_18;
  Wrd38 = Wrd42;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 2);

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_8])), (Wrd39.pObj));

DEFLABEL (label_10)
  (Wrd38.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd29.pObj));

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_5 3
#define LABEL_12_6 5
#define LABEL_12_4 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define LABEL_12_12 17
#define LABEL_12_15 19
#define LABEL_12_16 21
#define LABEL_12_17 23
#define LABEL_12_13 25
#define ENVIRONMENT_LABEL_12_3 59
#define DEBUGGING_LABEL_12_2 58
#define OBJECT_12_18 57
#define OBJECT_12_17 56
#define OBJECT_12_16 55
#define OBJECT_12_15 54
#define OBJECT_12_14 53
#define OBJECT_12_13 52
#define OBJECT_12_12 51
#define OBJECT_12_11 50
#define OBJECT_12_10 49
#define OBJECT_12_9 48
#define OBJECT_12_8 47
#define OBJECT_12_7 46
#define OBJECT_12_6 45
#define OBJECT_12_5 44
#define OBJECT_12_4 43
#define OBJECT_12_3 42
#define OBJECT_12_2 41
#define OBJECT_12_1 40
#define OBJECT_12_0 39
#define EXECUTE_CACHE_12_21 27
#define EXECUTE_CACHE_12_20 29
#define EXECUTE_CACHE_12_19 31
#define EXECUTE_CACHE_12_18 33
#define EXECUTE_CACHE_12_14 35
#define EXECUTE_CACHE_12_7 37
#define FREE_REFERENCES_LABEL_12_0 26
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd89;
  double Dbl82;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd69;
  double Dbl74;
  double Dbl73;
  machine_word Wrd72;
  double Dbl71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd96;
  double Dbl68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd137;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd148;
  machine_word Wrd14;
  machine_word Wrd143;
  machine_word Wrd140;
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
      current_block = (Rpc - LABEL_12_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_12_4);
      goto c_line_item_17;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_12_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_12_16);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_12_17);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_line_item_28)
DEFLABEL (c_line_item_17)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_67;
  if (! ((Wrd6.uLng) == 2))
    goto label_29;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd140.Obj) = (current_block [OBJECT_12_0]);
  (Wrd143.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd143.Lng))))
    goto label_66;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd140.Obj));
  if ((Wrd14.Obj) == (Wrd6.Obj))
    goto label_65;

DEFLABEL (label_64)
  (Wrd17.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng)))
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_31)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_33;
  (Wrd19.Obj) = (current_block [OBJECT_12_4]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd19.Obj) = (current_block [OBJECT_12_3]);

DEFLABEL (label_32)
DEFLABEL (label_63)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (label_35)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd129.Obj) = (current_block [OBJECT_12_5]);
  (Wrd132.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd132.Lng))))
    goto label_62;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd129.Obj));
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.Obj) == (Wrd36.Obj))
    goto label_55;

DEFLABEL (label_61)
  (Wrd119.Obj) = (current_block [OBJECT_12_6]);
  (Wrd122.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd122.Lng))))
    goto label_60;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd119.Obj));
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_55;

DEFLABEL (label_59)
  (Wrd109.Obj) = (current_block [OBJECT_12_7]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd112.Lng))))
    goto label_58;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_55;

DEFLABEL (label_57)
  (Wrd99.Obj) = (current_block [OBJECT_12_8]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd102.Lng))))
    goto label_56;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_55;

DEFLABEL (label_54)
  (Wrd49.Obj) = (current_block [OBJECT_12_9]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd59.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd59.Lng))))
    goto label_30;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd53.Obj) == (Wrd55.Obj))
    goto label_37;
  (Wrd51.Obj) = (current_block [OBJECT_12_4]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd51.Obj) = (current_block [OBJECT_12_3]);

DEFLABEL (label_36)
DEFLABEL (label_53)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd51.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (label_38)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  if ((Wrd7.Obj) == (current_block [OBJECT_12_3]))
    goto label_39;
  (Wrd11.Obj) = (current_block [OBJECT_12_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_12_18]);
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_12_16]);

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  Rvl = (current_block [OBJECT_12_15]);
  goto label_40;

DEFLABEL (label_43)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 6)
    goto label_45;

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (label_45)
  if (! ((Wrd66.uLng) == 6))
    goto label_52;
  Dbl68 = (FLONUM_TO_DOUBLE (Wrd65.Obj));
  if (! (Dbl68 == 0.0))
    goto label_44;

DEFLABEL (label_51)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 6))
    goto label_50;
  Dbl71 = (FLONUM_TO_DOUBLE (Wrd75.Obj));
  (Wrd72.Obj) = (current_block [OBJECT_12_11]);
  Dbl73 = (FLONUM_TO_DOUBLE (Wrd72.Obj));
  Dbl74 = (DOUBLE_ATAN2 (Dbl71, Dbl73));
  INLINE_DOUBLE_TO_FLONUM (Dbl74, (Wrd69.Obj));

DEFLABEL (label_49)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd85.uLng) == 6))
    goto label_48;
  Dbl82 = (FLONUM_TO_DOUBLE (Wrd69.Obj));
  if (! (Dbl82 < 0.0))
    goto label_44;

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_12_14]);

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_13]), 1);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_47;

DEFLABEL (label_50)
  (Wrd78.Obj) = (current_block [OBJECT_12_11]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_12]), 2);

DEFLABEL (label_19)
  (Wrd69.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_10]), 1);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_51;

DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto label_43;

DEFLABEL (label_56)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (label_58)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_55;

DEFLABEL (label_60)
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_55;

DEFLABEL (label_62)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_55;

DEFLABEL (label_65)
  Rsp = (& (Rsp [2]));
  goto label_34;

DEFLABEL (label_66)
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_67)
  Rvl = (Wrd5.Obj);
  goto label_46;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_5 9
#define ENVIRONMENT_LABEL_13_3 21
#define DEBUGGING_LABEL_13_2 20
#define OBJECT_13_2 19
#define OBJECT_13_1 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_10 11
#define EXECUTE_CACHE_13_9 13
#define EXECUTE_CACHE_13_6 15
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_13_4);
      goto c_make_line_4;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_make_line_7)
DEFLABEL (c_make_line_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_10)
  (Wrd7.Obj) = (current_block [OBJECT_13_2]);
  goto label_8;

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);

DEFLABEL (label_8)
DEFLABEL (label_11)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_7 7
#define LABEL_14_5 9
#define LABEL_14_8 11
#define LABEL_14_13 13
#define LABEL_14_9 15
#define LABEL_14_11 17
#define LABEL_14_16 19
#define LABEL_14_17 21
#define LABEL_14_20 23
#define LABEL_14_18 25
#define LABEL_14_22 27
#define LABEL_14_23 29
#define LABEL_14_24 31
#define LABEL_14_26 33
#define LABEL_14_27 35
#define LABEL_14_25 37
#define LABEL_14_31 39
#define ENVIRONMENT_LABEL_14_3 67
#define DEBUGGING_LABEL_14_2 66
#define OBJECT_14_3 65
#define OBJECT_14_2 64
#define OBJECT_14_1 63
#define OBJECT_14_0 62
#define EXECUTE_CACHE_14_30 41
#define EXECUTE_CACHE_14_29 43
#define EXECUTE_CACHE_14_28 45
#define EXECUTE_CACHE_14_21 47
#define EXECUTE_CACHE_14_19 49
#define EXECUTE_CACHE_14_15 51
#define EXECUTE_CACHE_14_14 53
#define EXECUTE_CACHE_14_12 55
#define EXECUTE_CACHE_14_10 57
#define FREE_REFERENCE_14_1 60
#define FREE_REFERENCE_14_0 61
#define FREE_REFERENCES_LABEL_14_0 40
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_14_4);
      goto c_write_line_29;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto do_loop_13;

    case 9:
      current_block = (Rpc - LABEL_14_17);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_14_20);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_14_22);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_14_23);
      goto do_loop_23;

    case 14:
      current_block = (Rpc - LABEL_14_24);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_14_26);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_14_27);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_14_25);
      goto continuation_20;

    case 18:
      current_block = (Rpc - LABEL_14_31);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_write_line_39)
DEFLABEL (c_write_line_29)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_45;
  Wrd14 = Wrd18;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_43;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_43;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd15.Lng), (Wrd16.Lng), (& (Wrd14.Lng))))
    goto label_43;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_13;

DEFLABEL (label_43)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd15.pObj));

DEFLABEL (label_32)
  (Wrd14.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd9.pObj));

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (do_loop_40)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_14_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_55;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_55;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd30.Lng) < (Wrd32.Lng))
    goto label_49;

DEFLABEL (label_50)
  (Wrd15.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_48;

DEFLABEL (label_49)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rsp = (& (Rsp [3]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_21]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14_20);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_23;

DEFLABEL (label_51)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_53;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_53;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_13;

DEFLABEL (label_53)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_35)
  (Wrd9.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_49;

DEFLABEL (do_loop_41)
DEFLABEL (do_loop_23)
  INTERRUPT_CHECK (26, LABEL_14_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_63;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_63;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd34.Lng) < (Wrd36.Lng))
    goto label_57;

DEFLABEL (label_58)
  (Wrd15.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_56;

DEFLABEL (label_57)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_56)
DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;
  Rsp = (& (Rsp [3]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_27]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_28]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_14_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_14_26);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_29]));

DEFLABEL (label_59)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_14_25);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_61;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_61;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_60)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_23;

DEFLABEL (label_61)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto c_blank_lineP_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_blank_lineP_4)
DEFLABEL (c_blank_lineP_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_7 7
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto guarantee_c_group_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_c_group_4)
DEFLABEL (guarantee_c_group_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 11
#define DEBUGGING_LABEL_17_2 10
#define OBJECT_17_2 9
#define OBJECT_17_1 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      goto error_not_c_group_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_c_group_5)
DEFLABEL (error_not_c_group_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_17_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_17_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto c_group_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_group_3)
DEFLABEL (c_group_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_6 5
#define LABEL_19_4 7
#define LABEL_19_7 9
#define LABEL_19_9 11
#define LABEL_19_10 13
#define LABEL_19_13 15
#define LABEL_19_15 17
#define ENVIRONMENT_LABEL_19_3 36
#define DEBUGGING_LABEL_19_2 35
#define OBJECT_19_3 34
#define OBJECT_19_2 33
#define OBJECT_19_1 32
#define OBJECT_19_0 31
#define EXECUTE_CACHE_19_17 19
#define EXECUTE_CACHE_19_16 21
#define EXECUTE_CACHE_19_14 23
#define EXECUTE_CACHE_19_12 25
#define EXECUTE_CACHE_19_11 27
#define EXECUTE_CACHE_19_8 29
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_19_4);
      goto c_group__9;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto lambda_7;

    case 6:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_group__14)
DEFLABEL (c_group__9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_20;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_19)
  if (! ((Wrd27.Obj) == (current_block [OBJECT_19_1])))
    goto label_16;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_18;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  Rvl = ((Wrd39.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_20)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_12)
  (Wrd27.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (lambda_15)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_19_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (label_24)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_19_3]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto c_group_length_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_group_length_4)
DEFLABEL (c_group_length_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define EXECUTE_CACHE_21_5 5
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto c_indent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_indent_3)
DEFLABEL (c_indent_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto c_exdent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_exdent_3)
DEFLABEL (c_exdent_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 13
#define DEBUGGING_LABEL_23_2 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto c_indent__1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_indent__4)
DEFLABEL (c_indent__1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 13
#define DEBUGGING_LABEL_24_2 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto c_exdent__1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_exdent__4)
DEFLABEL (c_exdent__1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_11 11
#define LABEL_25_13 13
#define LABEL_25_19 15
#define LABEL_25_16 17
#define LABEL_25_17 19
#define ENVIRONMENT_LABEL_25_3 41
#define DEBUGGING_LABEL_25_2 40
#define OBJECT_25_0 39
#define EXECUTE_CACHE_25_22 21
#define EXECUTE_CACHE_25_21 23
#define EXECUTE_CACHE_25_20 25
#define EXECUTE_CACHE_25_18 27
#define EXECUTE_CACHE_25_15 29
#define EXECUTE_CACHE_25_14 31
#define EXECUTE_CACHE_25_12 33
#define EXECUTE_CACHE_25_10 35
#define EXECUTE_CACHE_25_8 37
#define FREE_REFERENCES_LABEL_25_0 20
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_25_4);
      goto c__indent_9;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_25_19);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_25_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c__indent_13)
DEFLABEL (c__indent_9)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_3;

DEFLABEL (label_15)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd14.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_16);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_21]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_13);
  (Wrd5.Obj) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_18;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_18;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd20.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_18;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd25.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_20]));

DEFLABEL (label_18)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_11 9
#define LABEL_26_13 11
#define LABEL_26_14 13
#define LABEL_26_15 15
#define LABEL_26_18 17
#define LABEL_26_19 19
#define LABEL_26_20 21
#define LABEL_26_16 23
#define LABEL_26_22 25
#define ENVIRONMENT_LABEL_26_3 48
#define DEBUGGING_LABEL_26_2 47
#define OBJECT_26_3 46
#define OBJECT_26_2 45
#define OBJECT_26_1 44
#define OBJECT_26_0 43
#define EXECUTE_CACHE_26_23 27
#define EXECUTE_CACHE_26_21 29
#define EXECUTE_CACHE_26_17 31
#define EXECUTE_CACHE_26_12 33
#define EXECUTE_CACHE_26_10 35
#define EXECUTE_CACHE_26_9 37
#define EXECUTE_CACHE_26_8 39
#define EXECUTE_CACHE_26_6 41
#define FREE_REFERENCES_LABEL_26_0 26
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_26_4);
      goto c_write_group_15;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_13);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_26_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_26_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_26_18);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_26_20);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_26_22);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_write_group_20)
DEFLABEL (c_write_group_15)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd12.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (label_23)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  goto loop_13;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_26_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  if (! ((Wrd6.uLng) == 1))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_28)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_22);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_13;

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_19);
  goto label_25;

DEFLABEL (label_29)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_8 9
#define LABEL_27_9 11
#define LABEL_27_11 13
#define ENVIRONMENT_LABEL_27_3 25
#define DEBUGGING_LABEL_27_2 24
#define OBJECT_27_2 23
#define OBJECT_27_1 22
#define OBJECT_27_0 21
#define EXECUTE_CACHE_27_12 15
#define EXECUTE_CACHE_27_10 17
#define EXECUTE_CACHE_27_7 19
#define FREE_REFERENCES_LABEL_27_0 14
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto c_label_lineP_7;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_label_lineP_10)
DEFLABEL (c_label_lineP_7)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd10.Obj) = (current_block [OBJECT_27_1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define ENVIRONMENT_LABEL_28_3 18
#define DEBUGGING_LABEL_28_2 17
#define OBJECT_28_1 16
#define OBJECT_28_0 15
#define EXECUTE_CACHE_28_9 9
#define EXECUTE_CACHE_28_8 11
#define EXECUTE_CACHE_28_7 13
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto c_comment_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_comment_5)
DEFLABEL (c_comment_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define TAG_29_8 2
#define LABEL_29_10 9
#define LABEL_29_11 11
#define LABEL_29_12 13
#define LABEL_29_14 15
#define LABEL_29_16 17
#define LABEL_29_17 19
#define ENVIRONMENT_LABEL_29_3 37
#define DEBUGGING_LABEL_29_2 36
#define OBJECT_29_4 35
#define OBJECT_29_3 34
#define OBJECT_29_2 33
#define OBJECT_29_1 32
#define OBJECT_29_0 31
#define EXECUTE_CACHE_29_18 21
#define EXECUTE_CACHE_29_15 23
#define EXECUTE_CACHE_29_13 25
#define EXECUTE_CACHE_29_9 27
#define EXECUTE_CACHE_29_6 29
#define FREE_REFERENCES_LABEL_29_0 20
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto c_preserve_comment_16;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto lambda_22;

    case 3:
      current_block = (Rpc - LABEL_29_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_29_16);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_29_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_preserve_comment_21)
DEFLABEL (c_preserve_comment_16)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_7])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (label_24)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_29_7);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 30))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto loop_10;

DEFLABEL (label_26)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_23)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_29_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_14);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_29;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_29;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  goto loop_10;

DEFLABEL (label_27)
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_29_4]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 13
#define DEBUGGING_LABEL_30_2 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto c_string_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_string_4)
DEFLABEL (c_string_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 14
#define DEBUGGING_LABEL_31_2 13
#define OBJECT_31_1 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_31_4);
      goto c_parens_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_parens_4)
DEFLABEL (c_parens_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 14
#define DEBUGGING_LABEL_32_2 13
#define OBJECT_32_1 12
#define OBJECT_32_0 11
#define EXECUTE_CACHE_32_7 7
#define EXECUTE_CACHE_32_6 9
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto c_struct_init_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_init_4)
DEFLABEL (c_struct_init_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_5 7
#define ENVIRONMENT_LABEL_33_3 18
#define DEBUGGING_LABEL_33_2 17
#define OBJECT_33_1 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_8 9
#define EXECUTE_CACHE_33_7 11
#define FREE_REFERENCE_33_0 14
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_33_4);
      goto c_comma_list_1;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_comma_list_5)
DEFLABEL (c_comma_list_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_7;
  Wrd12 = Wrd16;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 14
#define DEBUGGING_LABEL_34_2 13
#define OBJECT_34_1 12
#define OBJECT_34_0 11
#define EXECUTE_CACHE_34_7 7
#define EXECUTE_CACHE_34_6 9
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto c_hex_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_hex_4)
DEFLABEL (c_hex_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 9
#define DEBUGGING_LABEL_35_2 8
#define OBJECT_35_0 7
#define EXECUTE_CACHE_35_5 5
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto c_page_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_page_3)
DEFLABEL (c_page_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define EXECUTE_CACHE_36_5 5
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto c_brace_group_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_brace_group_3)
DEFLABEL (c_brace_group_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_9 9
#define ENVIRONMENT_LABEL_37_3 20
#define DEBUGGING_LABEL_37_2 19
#define OBJECT_37_1 18
#define OBJECT_37_0 17
#define EXECUTE_CACHE_37_10 11
#define EXECUTE_CACHE_37_8 13
#define EXECUTE_CACHE_37_6 15
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_37_4);
      goto c_brace_group__3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_brace_group__6)
DEFLABEL (c_brace_group__3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 11
#define DEBUGGING_LABEL_38_2 10
#define OBJECT_38_1 9
#define OBJECT_38_0 8
#define FREE_REFERENCE_38_0 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_38_4);
      goto c_code_section_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_code_section_5)
DEFLABEL (c_code_section_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38_0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 11
#define DEBUGGING_LABEL_39_2 10
#define OBJECT_39_1 9
#define OBJECT_39_0 8
#define FREE_REFERENCE_39_0 7
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_39_4);
      goto c_data_section_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_data_section_5)
DEFLABEL (c_data_section_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39_0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_9 9
#define LABEL_40_10 11
#define LABEL_40_12 13
#define LABEL_40_13 15
#define LABEL_40_16 17
#define ENVIRONMENT_LABEL_40_3 35
#define DEBUGGING_LABEL_40_2 34
#define OBJECT_40_2 33
#define OBJECT_40_1 32
#define OBJECT_40_0 31
#define EXECUTE_CACHE_40_17 19
#define EXECUTE_CACHE_40_14 21
#define EXECUTE_CACHE_40_11 23
#define EXECUTE_CACHE_40_15 25
#define EXECUTE_CACHE_40_8 27
#define EXECUTE_CACHE_40_6 29
#define FREE_REFERENCES_LABEL_40_0 18
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_40_4);
      goto c_ifndef_7;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_ifndef_10)
DEFLABEL (c_ifndef_7)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_16);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_8 5
#define LABEL_41_6 7
#define LABEL_41_5 9
#define ENVIRONMENT_LABEL_41_3 23
#define DEBUGGING_LABEL_41_2 22
#define OBJECT_41_2 21
#define OBJECT_41_1 20
#define OBJECT_41_0 19
#define EXECUTE_CACHE_41_11 11
#define EXECUTE_CACHE_41_10 13
#define EXECUTE_CACHE_41_9 15
#define EXECUTE_CACHE_41_7 17
#define FREE_REFERENCES_LABEL_41_0 10
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto c_include_3;

    case 1:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_include_6)
DEFLABEL (c_include_3)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (label_9)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define ENVIRONMENT_LABEL_42_3 18
#define DEBUGGING_LABEL_42_2 17
#define OBJECT_42_1 16
#define OBJECT_42_0 15
#define EXECUTE_CACHE_42_9 9
#define EXECUTE_CACHE_42_8 11
#define EXECUTE_CACHE_42_6 13
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_42_4);
      goto c_define_2;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_define_5)
DEFLABEL (c_define_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_5 3
#define LABEL_43_4 5
#define LABEL_43_6 7
#define LABEL_43_8 9
#define LABEL_43_9 11
#define LABEL_43_10 13
#define LABEL_43_17 15
#define LABEL_43_12 17
#define LABEL_43_16 19
#define LABEL_43_22 21
#define LABEL_43_19 23
#define LABEL_43_20 25
#define LABEL_43_21 27
#define ENVIRONMENT_LABEL_43_3 57
#define DEBUGGING_LABEL_43_2 56
#define OBJECT_43_6 55
#define OBJECT_43_5 54
#define OBJECT_43_4 53
#define OBJECT_43_3 52
#define OBJECT_43_2 51
#define OBJECT_43_1 50
#define OBJECT_43_0 49
#define EXECUTE_CACHE_43_26 29
#define EXECUTE_CACHE_43_24 31
#define EXECUTE_CACHE_43_23 33
#define EXECUTE_CACHE_43_18 35
#define EXECUTE_CACHE_43_15 37
#define EXECUTE_CACHE_43_14 39
#define EXECUTE_CACHE_43_13 41
#define EXECUTE_CACHE_43_11 43
#define EXECUTE_CACHE_43_25 45
#define EXECUTE_CACHE_43_7 47
#define FREE_REFERENCES_LABEL_43_0 28
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_43_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_43_4);
      goto c_fn_14;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_43_10);
      goto lambda_9;

    case 6:
      current_block = (Rpc - LABEL_43_17);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_43_12);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_43_16);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_43_22);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_43_19);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_43_20);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_43_21);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_fn_19)
DEFLABEL (c_fn_14)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  if ((Wrd11.Obj) == (current_block [OBJECT_43_0]))
    goto label_25;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_24)
  (Wrd24.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_43_12);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd7.Obj) = (current_block [OBJECT_43_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd8.Obj) = (current_block [OBJECT_43_5]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_21)
DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_25]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_19);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_24]));

DEFLABEL (label_25)
  (Wrd23.Obj) = (current_block [OBJECT_43_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_24;

DEFLABEL (lambda_20)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_43_10);
  (Wrd5.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_43_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_27;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_43_21);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_26]));

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define ENVIRONMENT_LABEL_44_3 16
#define DEBUGGING_LABEL_44_2 15
#define OBJECT_44_1 14
#define OBJECT_44_0 13
#define EXECUTE_CACHE_44_8 9
#define EXECUTE_CACHE_44_6 11
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_44_4);
      goto c___2;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___5)
DEFLABEL (c___2)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_44_1]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define ENVIRONMENT_LABEL_45_3 16
#define DEBUGGING_LABEL_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_8 9
#define EXECUTE_CACHE_45_6 11
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_45_4);
      goto c____2;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____5)
DEFLABEL (c____2)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_45_1]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define ENVIRONMENT_LABEL_46_3 16
#define DEBUGGING_LABEL_46_2 15
#define OBJECT_46_1 14
#define OBJECT_46_0 13
#define EXECUTE_CACHE_46_8 9
#define EXECUTE_CACHE_46_6 11
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_46_4);
      goto c____2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____5)
DEFLABEL (c____2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_46_1]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define ENVIRONMENT_LABEL_47_3 16
#define DEBUGGING_LABEL_47_2 15
#define OBJECT_47_1 14
#define OBJECT_47_0 13
#define EXECUTE_CACHE_47_8 9
#define EXECUTE_CACHE_47_6 11
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_47_4);
      goto c____2;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____5)
DEFLABEL (c____2)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_47_1]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define ENVIRONMENT_LABEL_48_3 16
#define DEBUGGING_LABEL_48_2 15
#define OBJECT_48_1 14
#define OBJECT_48_0 13
#define EXECUTE_CACHE_48_8 9
#define EXECUTE_CACHE_48_6 11
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_48_4);
      goto c____2;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____5)
DEFLABEL (c____2)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_48_1]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 14
#define DEBUGGING_LABEL_49_2 13
#define OBJECT_49_1 12
#define OBJECT_49_0 11
#define EXECUTE_CACHE_49_7 7
#define EXECUTE_CACHE_49_6 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_49_4);
      goto c_goto_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_goto_4)
DEFLABEL (c_goto_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define ENVIRONMENT_LABEL_50_3 17
#define DEBUGGING_LABEL_50_2 16
#define OBJECT_50_0 15
#define EXECUTE_CACHE_50_9 9
#define EXECUTE_CACHE_50_8 11
#define EXECUTE_CACHE_50_7 13
#define FREE_REFERENCES_LABEL_50_0 8
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_50_4);
      goto c_label_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_label_5)
DEFLABEL (c_label_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 14
#define DEBUGGING_LABEL_51_2 13
#define OBJECT_51_1 12
#define OBJECT_51_0 11
#define EXECUTE_CACHE_51_7 7
#define EXECUTE_CACHE_51_6 9
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_51_4);
      goto c_return_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_return_4)
DEFLABEL (c_return_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_51_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_5 7
#define ENVIRONMENT_LABEL_52_3 16
#define DEBUGGING_LABEL_52_2 15
#define OBJECT_52_1 14
#define OBJECT_52_0 13
#define EXECUTE_CACHE_52_7 9
#define FREE_REFERENCE_52_0 12
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_52_4);
      goto c_scall_2;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_scall_6)
DEFLABEL (c_scall_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_8;
  Wrd13 = Wrd17;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_52_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_6])), (Wrd14.pObj));

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_6 5
#define LABEL_53_5 7
#define ENVIRONMENT_LABEL_53_3 15
#define DEBUGGING_LABEL_53_2 14
#define OBJECT_53_0 13
#define EXECUTE_CACHE_53_7 9
#define FREE_REFERENCE_53_0 12
#define FREE_REFERENCES_LABEL_53_0 8
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_53_4);
      goto c_ecall_2;

    case 1:
      current_block = (Rpc - LABEL_53_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_ecall_6)
DEFLABEL (c_ecall_2)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_8;
  Wrd13 = Wrd17;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_6])), (Wrd14.pObj));

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_9 7
#define LABEL_54_11 9
#define LABEL_54_8 11
#define LABEL_54_12 13
#define LABEL_54_13 15
#define LABEL_54_7 17
#define LABEL_54_15 19
#define ENVIRONMENT_LABEL_54_3 40
#define DEBUGGING_LABEL_54_2 39
#define OBJECT_54_3 38
#define OBJECT_54_2 37
#define OBJECT_54_1 36
#define OBJECT_54_0 35
#define EXECUTE_CACHE_54_18 21
#define EXECUTE_CACHE_54_17 23
#define EXECUTE_CACHE_54_16 25
#define EXECUTE_CACHE_54_14 27
#define EXECUTE_CACHE_54_10 29
#define EXECUTE_CACHE_54_6 31
#define FREE_REFERENCE_54_0 34
#define FREE_REFERENCES_LABEL_54_0 20
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_54_4);
      goto c_call_10;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_9);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_54_11);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_54_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_54_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_54_15);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_call_16)
DEFLABEL (c_call_10)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_26;
  Wrd13 = Wrd17;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_18;

DEFLABEL (label_17)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_54_15);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_18]));

DEFLABEL (label_18)
  if (! ((Wrd7.uLng) == 1))
    goto label_24;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_23)
  if (! ((Wrd12.Obj) == (current_block [OBJECT_54_3])))
    goto label_17;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_22;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_54_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_19;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_19)
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd5.Obj) = ((Wrd38.pObj) [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_20)
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_17]));

DEFLABEL (label_22)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_13)
  (Wrd12.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_9])), (Wrd14.pObj));

DEFLABEL (label_12)
  (Wrd13.Obj) = Rvl;
  goto label_25;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define LABEL_55_8 9
#define LABEL_55_9 11
#define ENVIRONMENT_LABEL_55_3 25
#define DEBUGGING_LABEL_55_2 24
#define OBJECT_55_0 23
#define EXECUTE_CACHE_55_13 13
#define EXECUTE_CACHE_55_12 15
#define EXECUTE_CACHE_55_11 17
#define EXECUTE_CACHE_55_10 19
#define EXECUTE_CACHE_55_7 21
#define FREE_REFERENCES_LABEL_55_0 12
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_55_4);
      goto c_switch_4;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_switch_7)
DEFLABEL (c_switch_4)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_5 3
#define LABEL_56_4 5
#define LABEL_56_6 7
#define LABEL_56_7 9
#define LABEL_56_9 11
#define LABEL_56_11 13
#define ENVIRONMENT_LABEL_56_3 31
#define DEBUGGING_LABEL_56_2 30
#define OBJECT_56_2 29
#define OBJECT_56_1 28
#define OBJECT_56_0 27
#define EXECUTE_CACHE_56_15 15
#define EXECUTE_CACHE_56_14 17
#define EXECUTE_CACHE_56_13 19
#define EXECUTE_CACHE_56_12 21
#define EXECUTE_CACHE_56_10 23
#define EXECUTE_CACHE_56_8 25
#define FREE_REFERENCES_LABEL_56_0 14
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_56_4);
      goto c_case_5;

    case 2:
      current_block = (Rpc - LABEL_56_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_56_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_case_8)
DEFLABEL (c_case_5)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_56_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_56_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_15]));

DEFLABEL (label_10)
  (Wrd22.Obj) = (current_block [OBJECT_56_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_8 9
#define LABEL_57_9 11
#define ENVIRONMENT_LABEL_57_3 25
#define DEBUGGING_LABEL_57_2 24
#define OBJECT_57_0 23
#define EXECUTE_CACHE_57_13 13
#define EXECUTE_CACHE_57_12 15
#define EXECUTE_CACHE_57_11 17
#define EXECUTE_CACHE_57_10 19
#define EXECUTE_CACHE_57_7 21
#define FREE_REFERENCES_LABEL_57_0 12
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_57_4);
      goto c_if_goto_4;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_if_goto_7)
DEFLABEL (c_if_goto_4)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_57_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_8 9
#define LABEL_58_9 11
#define ENVIRONMENT_LABEL_58_3 25
#define DEBUGGING_LABEL_58_2 24
#define OBJECT_58_0 23
#define EXECUTE_CACHE_58_13 13
#define EXECUTE_CACHE_58_12 15
#define EXECUTE_CACHE_58_11 17
#define EXECUTE_CACHE_58_10 19
#define EXECUTE_CACHE_58_7 21
#define FREE_REFERENCES_LABEL_58_0 12
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_58_4);
      goto c_while_4;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_while_7)
DEFLABEL (c_while_4)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_7 7
#define LABEL_59_10 9
#define LABEL_59_12 11
#define LABEL_59_9 13
#define LABEL_59_15 15
#define ENVIRONMENT_LABEL_59_3 36
#define DEBUGGING_LABEL_59_2 35
#define OBJECT_59_3 34
#define OBJECT_59_2 33
#define OBJECT_59_1 32
#define OBJECT_59_0 31
#define EXECUTE_CACHE_59_16 17
#define EXECUTE_CACHE_59_14 19
#define EXECUTE_CACHE_59_13 21
#define EXECUTE_CACHE_59_11 23
#define EXECUTE_CACHE_59_8 25
#define EXECUTE_CACHE_59_6 27
#define FREE_REFERENCE_59_0 30
#define FREE_REFERENCES_LABEL_59_0 16
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_59_4);
      goto c_cast_7;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_59_12);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_59_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_59_15);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_cast_12)
DEFLABEL (c_cast_7)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_7);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_18;
  Wrd25 = Wrd29;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_59_1]);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_59_2]);
  (Rsp [4]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (label_13)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_16]));

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_12])), (Wrd26.pObj));

DEFLABEL (label_10)
  (Wrd25.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_8 7
#define LABEL_60_6 9
#define LABEL_60_9 11
#define LABEL_60_11 13
#define LABEL_60_12 15
#define LABEL_60_10 17
#define ENVIRONMENT_LABEL_60_3 33
#define DEBUGGING_LABEL_60_2 32
#define OBJECT_60_6 31
#define OBJECT_60_5 30
#define OBJECT_60_4 29
#define OBJECT_60_3 28
#define OBJECT_60_2 27
#define OBJECT_60_1 26
#define OBJECT_60_0 25
#define EXECUTE_CACHE_60_13 19
#define EXECUTE_CACHE_60_7 21
#define FREE_REFERENCE_60_0 24
#define FREE_REFERENCES_LABEL_60_0 18
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_60_4);
      goto c__decimalP_12;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_60_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_60_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_60_9);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_60_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_60_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_60_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c__decimalP_18)
DEFLABEL (c__decimalP_12)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_60_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_60_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_22)
  (Wrd7.Obj) = (current_block [OBJECT_60_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_20;

DEFLABEL (label_21)
  (Wrd15.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
DEFLABEL (label_23)
  goto loop_9;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (loop_19)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_60_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_26;
  Rvl = (current_block [OBJECT_60_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_31;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_31;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_31;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_30)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_29;
  Wrd37 = Wrd41;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_9;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_12])), (Wrd38.pObj));

DEFLABEL (label_16)
  (Wrd37.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_5]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_5 3
#define LABEL_61_6 5
#define LABEL_61_7 7
#define LABEL_61_4 9
#define LABEL_61_8 11
#define LABEL_61_10 13
#define ENVIRONMENT_LABEL_61_3 28
#define DEBUGGING_LABEL_61_2 27
#define OBJECT_61_5 26
#define OBJECT_61_4 25
#define OBJECT_61_3 24
#define OBJECT_61_2 23
#define OBJECT_61_1 22
#define OBJECT_61_0 21
#define EXECUTE_CACHE_61_11 15
#define EXECUTE_CACHE_61_9 17
#define FREE_REFERENCE_61_0 20
#define FREE_REFERENCES_LABEL_61_0 14
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd54;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_61_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_61_4);
      goto c_type_7;

    case 4:
      current_block = (Rpc - LABEL_61_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_61_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_type_12)
DEFLABEL (c_type_7)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_61_1]);
  (Wrd49.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd49.Lng))))
    goto label_28;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_27;

DEFLABEL (label_26)
  (Wrd16.Obj) = (current_block [OBJECT_61_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd26.Lng)))
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_13)
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_15;
  (Wrd18.Obj) = (current_block [OBJECT_61_5]);
  goto label_14;

DEFLABEL (label_15)
  (Wrd18.Obj) = (current_block [OBJECT_61_4]);

DEFLABEL (label_14)
DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_22;
  Wrd38 = Wrd42;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd65.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd65.uLng) == 1)
    goto label_16;
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_0]), 1);

DEFLABEL (label_16)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (Wrd30.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_9]));

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_20)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_10])), (Wrd39.pObj));

DEFLABEL (label_9)
  (Wrd38.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto label_20;

DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));
  goto label_23;

DEFLABEL (label_28)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_61_7);
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_9 7
#define LABEL_62_7 9
#define LABEL_62_11 11
#define ENVIRONMENT_LABEL_62_3 29
#define DEBUGGING_LABEL_62_2 28
#define OBJECT_62_4 27
#define OBJECT_62_3 26
#define OBJECT_62_2 25
#define OBJECT_62_1 24
#define OBJECT_62_0 23
#define EXECUTE_CACHE_62_13 13
#define EXECUTE_CACHE_62_12 15
#define EXECUTE_CACHE_62_10 17
#define EXECUTE_CACHE_62_8 19
#define EXECUTE_CACHE_62_6 21
#define FREE_REFERENCES_LABEL_62_0 12
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_62_4);
      goto c_decl_5;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_62_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_decl_8)
DEFLABEL (c_decl_5)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_7);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  if ((Wrd9.Obj) == (current_block [OBJECT_62_1]))
    goto label_10;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_9);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_62_3]);
  (Rsp [4]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (current_block [OBJECT_62_2]);
  Rsp = (& (Rsp [1]));
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_9 7
#define LABEL_63_7 9
#define LABEL_63_11 11
#define ENVIRONMENT_LABEL_63_3 29
#define DEBUGGING_LABEL_63_2 28
#define OBJECT_63_4 27
#define OBJECT_63_3 26
#define OBJECT_63_2 25
#define OBJECT_63_1 24
#define OBJECT_63_0 23
#define EXECUTE_CACHE_63_13 13
#define EXECUTE_CACHE_63_12 15
#define EXECUTE_CACHE_63_10 17
#define EXECUTE_CACHE_63_8 19
#define EXECUTE_CACHE_63_6 21
#define FREE_REFERENCES_LABEL_63_0 12
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_63_4);
      goto c_decl_unused_5;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_63_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_63_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_decl_unused_8)
DEFLABEL (c_decl_unused_5)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_7);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  if ((Wrd9.Obj) == (current_block [OBJECT_63_1]))
    goto label_10;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_9);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_63_3]);
  (Rsp [4]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_10]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (current_block [OBJECT_63_2]);
  Rsp = (& (Rsp [1]));
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_5 3
#define LABEL_64_4 5
#define LABEL_64_6 7
#define ENVIRONMENT_LABEL_64_3 21
#define DEBUGGING_LABEL_64_2 20
#define OBJECT_64_6 19
#define OBJECT_64_5 18
#define OBJECT_64_4 17
#define OBJECT_64_3 16
#define OBJECT_64_2 15
#define OBJECT_64_1 14
#define OBJECT_64_0 13
#define EXECUTE_CACHE_64_8 9
#define EXECUTE_CACHE_64_7 11
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_64_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_64_4);
      goto c_var_4;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_var_8)
DEFLABEL (c_var_4)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_9;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_64_0]);
  (Wrd34.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd34.Lng))))
    goto label_18;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_17;

DEFLABEL (label_16)
  (Wrd15.Obj) = (current_block [OBJECT_64_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_10)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_12;
  (Wrd17.Obj) = (current_block [OBJECT_64_4]);
  goto label_11;

DEFLABEL (label_12)
  (Wrd17.Obj) = (current_block [OBJECT_64_3]);

DEFLABEL (label_11)
DEFLABEL (label_15)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_8]));

DEFLABEL (label_14)
  (Wrd27.Obj) = (current_block [OBJECT_64_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_64_6]);
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto label_13;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_7 5
#define LABEL_65_8 7
#define LABEL_65_5 9
#define LABEL_65_9 11
#define LABEL_65_10 13
#define LABEL_65_18 15
#define LABEL_65_19 17
#define LABEL_65_22 19
#define LABEL_65_24 21
#define LABEL_65_12 23
#define LABEL_65_13 25
#define LABEL_65_14 27
#define LABEL_65_16 29
#define LABEL_65_23 31
#define LABEL_65_20 33
#define LABEL_65_33 35
#define LABEL_65_34 37
#define LABEL_65_21 39
#define LABEL_65_28 41
#define LABEL_65_29 43
#define LABEL_65_31 45
#define LABEL_65_36 47
#define ENVIRONMENT_LABEL_65_3 83
#define DEBUGGING_LABEL_65_2 82
#define OBJECT_65_8 81
#define OBJECT_65_7 80
#define OBJECT_65_6 79
#define OBJECT_65_5 78
#define OBJECT_65_4 77
#define OBJECT_65_3 76
#define OBJECT_65_2 75
#define OBJECT_65_1 74
#define OBJECT_65_0 73
#define EXECUTE_CACHE_65_32 49
#define EXECUTE_CACHE_65_30 51
#define EXECUTE_CACHE_65_27 53
#define EXECUTE_CACHE_65_38 55
#define EXECUTE_CACHE_65_26 57
#define EXECUTE_CACHE_65_25 59
#define EXECUTE_CACHE_65_17 61
#define EXECUTE_CACHE_65_37 63
#define EXECUTE_CACHE_65_35 65
#define EXECUTE_CACHE_65_15 67
#define EXECUTE_CACHE_65_11 69
#define EXECUTE_CACHE_65_6 71
#define FREE_REFERENCES_LABEL_65_0 48
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
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
      goto c_array_decl_27;

    case 1:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_65_10);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_65_18);
      goto loop_14;

    case 7:
      current_block = (Rpc - LABEL_65_19);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_65_22);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_65_24);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_65_12);
      goto continuation_25;

    case 11:
      current_block = (Rpc - LABEL_65_13);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_65_14);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_65_16);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_65_23);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_65_20);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_65_33);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_65_34);
      goto label_32;

    case 18:
      current_block = (Rpc - LABEL_65_21);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_65_28);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_65_29);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_65_31);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_65_36);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_decl_35)
DEFLABEL (c_array_decl_27)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_65_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_65_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_65_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_65_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_65_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_37]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_65_9);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_15]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_65_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_30]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_65_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_65_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_15]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_65_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_38]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_65_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_65_12);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_26]));

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  goto loop_14;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_8);
  goto label_37;

DEFLABEL (loop_36)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_65_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_45;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_44)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_42;
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_40;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (label_40)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 1);

DEFLABEL (label_30)
DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_65_5]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_21]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_43;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_39;

DEFLABEL (label_43)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_22]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 1);

DEFLABEL (label_31)
  goto label_41;

DEFLABEL (label_45)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (Rsp [1]) = Rvl;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_46;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 2);

DEFLABEL (label_46)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  ((Wrd22.pObj) [0]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto label_37;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_65_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_35]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_65_20);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_50;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  ((Wrd16.pObj) [0]) = Rvl;

DEFLABEL (label_49)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_48;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_14;

DEFLABEL (label_48)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 1);

DEFLABEL (label_32)
  (Wrd6.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 2);

DEFLABEL (label_33)
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_9 7
#define LABEL_66_10 9
#define LABEL_66_13 11
#define LABEL_66_15 13
#define LABEL_66_7 15
#define ENVIRONMENT_LABEL_66_3 35
#define DEBUGGING_LABEL_66_2 34
#define OBJECT_66_2 33
#define OBJECT_66_1 32
#define OBJECT_66_0 31
#define EXECUTE_CACHE_66_17 17
#define EXECUTE_CACHE_66_16 19
#define EXECUTE_CACHE_66_14 21
#define EXECUTE_CACHE_66_12 23
#define EXECUTE_CACHE_66_11 25
#define EXECUTE_CACHE_66_8 27
#define EXECUTE_CACHE_66_6 29
#define FREE_REFERENCES_LABEL_66_0 16
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_66_4);
      goto c_expr_7;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_66_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_66_13);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_66_15);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_expr_10)
DEFLABEL (c_expr_7)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_66_1]);
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_11]));

DEFLABEL (label_14)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_66_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define ENVIRONMENT_LABEL_67_3 18
#define DEBUGGING_LABEL_67_2 17
#define OBJECT_67_1 16
#define OBJECT_67_0 15
#define EXECUTE_CACHE_67_9 9
#define EXECUTE_CACHE_67_8 11
#define EXECUTE_CACHE_67_6 13
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_67_4);
      goto c_pexpr_3;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pexpr_6)
DEFLABEL (c_pexpr_3)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67_1]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_8 9
#define LABEL_68_9 11
#define LABEL_68_7 13
#define ENVIRONMENT_LABEL_68_3 24
#define DEBUGGING_LABEL_68_2 23
#define OBJECT_68_3 22
#define OBJECT_68_2 21
#define OBJECT_68_1 20
#define OBJECT_68_0 19
#define EXECUTE_CACHE_68_10 15
#define FREE_REFERENCE_68_0 18
#define FREE_REFERENCES_LABEL_68_0 14
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_68_4);
      goto c__identifierP_9;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_68_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_68_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_68_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c__identifierP_15)
DEFLABEL (c__identifierP_9)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  (Wrd16.Obj) = (current_block [OBJECT_68_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_6;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_68_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_19;
  Rvl = (current_block [OBJECT_68_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_24;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_24;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_24;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_23)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_22;
  Wrd37 = Wrd41;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_68_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_6;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd38.pObj));

DEFLABEL (label_13)
  (Wrd37.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 14
#define DEBUGGING_LABEL_69_2 13
#define OBJECT_69_1 12
#define OBJECT_69_0 11
#define EXECUTE_CACHE_69_7 7
#define EXECUTE_CACHE_69_6 9
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto c__parenthesizedP_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c__parenthesizedP_4)
DEFLABEL (c__parenthesizedP_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd7.Obj) = (current_block [OBJECT_69_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 13
#define DEBUGGING_LABEL_70_2 12
#define OBJECT_70_0 11
#define EXECUTE_CACHE_70_7 7
#define EXECUTE_CACHE_70_6 9
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_70_4);
      goto c_predec_1;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_predec_4)
DEFLABEL (c_predec_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 13
#define DEBUGGING_LABEL_71_2 12
#define OBJECT_71_0 11
#define EXECUTE_CACHE_71_7 7
#define EXECUTE_CACHE_71_6 9
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_71_4);
      goto c_preinc_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_preinc_4)
DEFLABEL (c_preinc_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (current_block [OBJECT_71_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define ENVIRONMENT_LABEL_72_3 13
#define DEBUGGING_LABEL_72_2 12
#define OBJECT_72_0 11
#define EXECUTE_CACHE_72_7 7
#define EXECUTE_CACHE_72_6 9
#define FREE_REFERENCES_LABEL_72_0 6
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_72_4);
      goto c_postdec_1;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_postdec_4)
DEFLABEL (c_postdec_1)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define ENVIRONMENT_LABEL_73_3 13
#define DEBUGGING_LABEL_73_2 12
#define OBJECT_73_0 11
#define EXECUTE_CACHE_73_7 7
#define EXECUTE_CACHE_73_6 9
#define FREE_REFERENCES_LABEL_73_0 6
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_73_4);
      goto c_postinc_1;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_postinc_4)
DEFLABEL (c_postinc_1)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_7 7
#define ENVIRONMENT_LABEL_74_3 17
#define DEBUGGING_LABEL_74_2 16
#define OBJECT_74_2 15
#define OBJECT_74_1 14
#define OBJECT_74_0 13
#define EXECUTE_CACHE_74_8 9
#define EXECUTE_CACHE_74_6 11
#define FREE_REFERENCES_LABEL_74_0 8
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto c_aref_2;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_aref_5)
DEFLABEL (c_aref_2)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (current_block [OBJECT_74_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_74_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_74_2]);
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 12
#define DEBUGGING_LABEL_75_2 11
#define EXECUTE_CACHE_75_7 7
#define EXECUTE_CACHE_75_6 9
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto c_aptr_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_aptr_4)
DEFLABEL (c_aptr_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_8 7
#define LABEL_76_9 9
#define LABEL_76_10 11
#define LABEL_76_12 13
#define LABEL_76_13 15
#define LABEL_76_6 17
#define LABEL_76_11 19
#define LABEL_76_17 21
#define LABEL_76_18 23
#define LABEL_76_15 25
#define LABEL_76_16 27
#define LABEL_76_21 29
#define LABEL_76_19 31
#define LABEL_76_22 33
#define LABEL_76_20 35
#define ENVIRONMENT_LABEL_76_3 53
#define DEBUGGING_LABEL_76_2 52
#define OBJECT_76_8 51
#define OBJECT_76_7 50
#define OBJECT_76_6 49
#define OBJECT_76_5 48
#define OBJECT_76_4 47
#define OBJECT_76_3 46
#define OBJECT_76_2 45
#define OBJECT_76_1 44
#define OBJECT_76_0 43
#define EXECUTE_CACHE_76_14 37
#define EXECUTE_CACHE_76_7 39
#define FREE_REFERENCE_76_0 42
#define FREE_REFERENCES_LABEL_76_0 36
#define NUMBER_OF_LINKER_SECTIONS_76_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_76_4);
      goto c_P__28;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_76_8);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_76_9);
      goto loop_20;

    case 4:
      current_block = (Rpc - LABEL_76_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_76_12);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_76_13);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_76_6);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_76_11);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_76_17);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_76_18);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_76_15);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_76_16);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_76_21);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_76_19);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_76_22);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_76_20);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_P__38)
DEFLABEL (c_P__28)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_20;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_76_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_76_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_76_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_76_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_41;
  Wrd15 = Wrd19;

DEFLABEL (label_40)
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_8]), 2);

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_22])), (Wrd16.pObj));

DEFLABEL (label_36)
  (Wrd15.Obj) = Rvl;
  goto label_40;

DEFLABEL (loop_39)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_76_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_42;
  (Wrd11.Obj) = (current_block [OBJECT_76_2]);
  (Wrd12.Obj) = (current_block [OBJECT_76_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  if (! ((Wrd6.uLng) == 1))
    goto label_55;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_54)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_53;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_76_1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_76_8);

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_51)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_50;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_49)
  goto loop_20;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_76_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_48;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_47)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_76_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_76_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_44;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_76_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_76_6]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_5]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_5]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (label_31)
  (Wrd30.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (label_30)
  (Wrd13.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_7 7
#define ENVIRONMENT_LABEL_77_3 19
#define DEBUGGING_LABEL_77_2 18
#define OBJECT_77_2 17
#define OBJECT_77_1 16
#define OBJECT_77_0 15
#define EXECUTE_CACHE_77_9 9
#define EXECUTE_CACHE_77_8 11
#define EXECUTE_CACHE_77_6 13
#define FREE_REFERENCES_LABEL_77_0 8
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto c_unary_2;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_unary_5)
DEFLABEL (c_unary_2)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (current_block [OBJECT_77_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_77_2]);
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 9
#define DEBUGGING_LABEL_78_2 8
#define OBJECT_78_0 7
#define EXECUTE_CACHE_78_5 5
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto c_B_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_B_3)
DEFLABEL (c_B_0)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (current_block [OBJECT_78_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 9
#define DEBUGGING_LABEL_79_2 8
#define OBJECT_79_0 7
#define EXECUTE_CACHE_79_5 5
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_7 7
#define LABEL_80_9 9
#define ENVIRONMENT_LABEL_80_3 21
#define DEBUGGING_LABEL_80_2 20
#define OBJECT_80_2 19
#define OBJECT_80_1 18
#define OBJECT_80_0 17
#define EXECUTE_CACHE_80_10 11
#define EXECUTE_CACHE_80_8 13
#define EXECUTE_CACHE_80_6 15
#define FREE_REFERENCES_LABEL_80_0 10
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_80_4);
      goto c_binary_infix_3;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_80_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_binary_infix_6)
DEFLABEL (c_binary_infix_3)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_80_0]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_9);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_80_2]);
  (Rsp [6]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 9
#define DEBUGGING_LABEL_81_2 8
#define OBJECT_81_0 7
#define EXECUTE_CACHE_81_5 5
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto c____0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____3)
DEFLABEL (c____0)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 9
#define DEBUGGING_LABEL_82_2 8
#define OBJECT_82_0 7
#define EXECUTE_CACHE_82_5 5
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto c_B__0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_B__3)
DEFLABEL (c_B__0)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 9
#define DEBUGGING_LABEL_83_2 8
#define OBJECT_83_0 7
#define EXECUTE_CACHE_83_5 5
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 9
#define DEBUGGING_LABEL_84_2 8
#define OBJECT_84_0 7
#define EXECUTE_CACHE_84_5 5
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto c____0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____3)
DEFLABEL (c____0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 9
#define DEBUGGING_LABEL_85_2 8
#define OBJECT_85_0 7
#define EXECUTE_CACHE_85_5 5
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 9
#define DEBUGGING_LABEL_86_2 8
#define OBJECT_86_0 7
#define EXECUTE_CACHE_86_5 5
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto c____0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____3)
DEFLABEL (c____0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 9
#define DEBUGGING_LABEL_87_2 8
#define OBJECT_87_0 7
#define EXECUTE_CACHE_87_5 5
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define ENVIRONMENT_LABEL_88_3 9
#define DEBUGGING_LABEL_88_2 8
#define OBJECT_88_0 7
#define EXECUTE_CACHE_88_5 5
#define FREE_REFERENCES_LABEL_88_0 4
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_88_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 9
#define DEBUGGING_LABEL_89_2 8
#define OBJECT_89_0 7
#define EXECUTE_CACHE_89_5 5
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto c____0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____3)
DEFLABEL (c____0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (current_block [OBJECT_89_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define ENVIRONMENT_LABEL_90_3 9
#define DEBUGGING_LABEL_90_2 8
#define OBJECT_90_0 7
#define EXECUTE_CACHE_90_5 5
#define FREE_REFERENCES_LABEL_90_0 4
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 9
#define DEBUGGING_LABEL_91_2 8
#define OBJECT_91_0 7
#define EXECUTE_CACHE_91_5 5
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto c____0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____3)
DEFLABEL (c____0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (current_block [OBJECT_91_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define ENVIRONMENT_LABEL_92_3 9
#define DEBUGGING_LABEL_92_2 8
#define OBJECT_92_0 7
#define EXECUTE_CACHE_92_5 5
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_92_4);
      goto c____0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c____3)
DEFLABEL (c____0)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define ENVIRONMENT_LABEL_93_3 11
#define DEBUGGING_LABEL_93_2 10
#define OBJECT_93_0 9
#define EXECUTE_CACHE_93_6 5
#define EXECUTE_CACHE_93_5 7
#define FREE_REFERENCES_LABEL_93_0 4
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_93_4);
      goto c_ubinary_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_ubinary_4)
DEFLABEL (c_ubinary_1)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_93_0]))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_6]));

DEFLABEL (label_5)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define ENVIRONMENT_LABEL_94_3 9
#define DEBUGGING_LABEL_94_2 8
#define OBJECT_94_0 7
#define EXECUTE_CACHE_94_5 5
#define FREE_REFERENCES_LABEL_94_0 4
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_94_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd5.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define ENVIRONMENT_LABEL_95_3 9
#define DEBUGGING_LABEL_95_2 8
#define OBJECT_95_0 7
#define EXECUTE_CACHE_95_5 5
#define FREE_REFERENCES_LABEL_95_0 4
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_95_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define ENVIRONMENT_LABEL_96_3 9
#define DEBUGGING_LABEL_96_2 8
#define OBJECT_96_0 7
#define EXECUTE_CACHE_96_5 5
#define FREE_REFERENCES_LABEL_96_0 4
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_96_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 9
#define DEBUGGING_LABEL_97_2 8
#define OBJECT_97_0 7
#define EXECUTE_CACHE_97_5 5
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_97_4);
      goto c___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c___3)
DEFLABEL (c___0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (current_block [OBJECT_97_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 9
#define DEBUGGING_LABEL_98_2 8
#define OBJECT_98_0 7
#define EXECUTE_CACHE_98_5 5
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_98_4);
      goto c_make_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_make_object_3)
DEFLABEL (c_make_object_0)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (current_block [OBJECT_98_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define ENVIRONMENT_LABEL_99_3 9
#define DEBUGGING_LABEL_99_2 8
#define OBJECT_99_0 7
#define EXECUTE_CACHE_99_5 5
#define FREE_REFERENCES_LABEL_99_0 4
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_99_4);
      goto c_make_pointer_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_make_pointer_object_3)
DEFLABEL (c_make_pointer_object_0)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd5.Obj) = (current_block [OBJECT_99_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 9
#define DEBUGGING_LABEL_100_2 8
#define OBJECT_100_0 7
#define EXECUTE_CACHE_100_5 5
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto c_object_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_object_type_3)
DEFLABEL (c_object_type_0)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd5.Obj) = (current_block [OBJECT_100_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 9
#define DEBUGGING_LABEL_101_2 8
#define OBJECT_101_0 7
#define EXECUTE_CACHE_101_5 5
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto c_object_datum_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_object_datum_3)
DEFLABEL (c_object_datum_0)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (current_block [OBJECT_101_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define ENVIRONMENT_LABEL_102_3 9
#define DEBUGGING_LABEL_102_2 8
#define OBJECT_102_0 7
#define EXECUTE_CACHE_102_5 5
#define FREE_REFERENCES_LABEL_102_0 4
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cutl_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_102_4);
      goto c_object_address_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_object_address_3)
DEFLABEL (c_object_address_0)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd5.Obj) = (current_block [OBJECT_102_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_15 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_19 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_23 25
#define LABEL_18 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_24 33
#define LABEL_25 35
#define LABEL_29 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_32 43
#define LABEL_28 45
#define LABEL_30 47
#define LABEL_35 49
#define LABEL_31 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_36 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_40 63
#define LABEL_41 65
#define TAG_42 31
#define LABEL_43 67
#define LABEL_44 69
#define LABEL_46 71
#define LABEL_47 73
#define LABEL_48 75
#define LABEL_49 77
#define LABEL_50 79
#define LABEL_51 81
#define LABEL_52 83
#define LABEL_54 85
#define LABEL_55 87
#define LABEL_56 89
#define LABEL_68 91
#define LABEL_57 93
#define LABEL_58 95
#define LABEL_60 97
#define LABEL_61 99
#define LABEL_63 101
#define LABEL_64 103
#define LABEL_65 105
#define LABEL_67 107
#define LABEL_75 109
#define LABEL_70 111
#define LABEL_71 113
#define LABEL_73 115
#define LABEL_74 117
#define LABEL_76 119
#define LABEL_77 121
#define LABEL_79 123
#define LABEL_80 125
#define LABEL_81 127
#define ENVIRONMENT_LABEL_3 213
#define DEBUGGING_LABEL_2 212
#define PURIFICATION_ROOT 211
#define OBJECT_49 210
#define OBJECT_48 209
#define OBJECT_47 208
#define OBJECT_46 207
#define OBJECT_45 206
#define OBJECT_44 205
#define OBJECT_43 204
#define OBJECT_42 203
#define OBJECT_41 202
#define OBJECT_40 201
#define OBJECT_39 200
#define OBJECT_38 199
#define OBJECT_37 198
#define OBJECT_36 197
#define OBJECT_35 196
#define OBJECT_34 195
#define OBJECT_33 194
#define OBJECT_32 193
#define OBJECT_31 192
#define OBJECT_30 191
#define OBJECT_29 190
#define OBJECT_28 189
#define OBJECT_27 188
#define OBJECT_26 187
#define OBJECT_25 186
#define OBJECT_24 185
#define OBJECT_23 184
#define OBJECT_22 183
#define OBJECT_21 182
#define OBJECT_20 181
#define OBJECT_19 180
#define OBJECT_18 179
#define OBJECT_17 178
#define OBJECT_16 177
#define OBJECT_15 176
#define OBJECT_14 175
#define OBJECT_13 174
#define OBJECT_12 173
#define OBJECT_11 172
#define OBJECT_10 171
#define OBJECT_9 170
#define OBJECT_8 169
#define OBJECT_7 168
#define OBJECT_6 167
#define OBJECT_5 166
#define OBJECT_4 165
#define OBJECT_3 164
#define OBJECT_2 163
#define OBJECT_1 162
#define OBJECT_0 161
#define EXECUTE_CACHE_78 129
#define EXECUTE_CACHE_72 131
#define EXECUTE_CACHE_69 133
#define EXECUTE_CACHE_66 135
#define EXECUTE_CACHE_62 137
#define EXECUTE_CACHE_59 139
#define EXECUTE_CACHE_53 141
#define EXECUTE_CACHE_45 143
#define EXECUTE_CACHE_39 145
#define EXECUTE_CACHE_20 147
#define EXECUTE_CACHE_16 149
#define EXECUTE_CACHE_12 151
#define EXECUTE_CACHE_8 153
#define FREE_REFERENCE_1 156
#define FREE_REFERENCE_0 157
#define GLOBAL_EXECUTE_CACHE_5 159
#define FREE_REFERENCES_LABEL_0 128
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cutl_so_b6145c1f46099f30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15);
      goto label_61;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_62;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_23);
      goto label_63;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_64;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_32);
      goto label_65;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_66;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_18;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_26;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_27;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto lambda_70;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto continuation_28;

    case 34:
      current_block = (Rpc - LABEL_46);
      goto continuation_30;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto continuation_50;

    case 36:
      current_block = (Rpc - LABEL_48);
      goto continuation_42;

    case 37:
      current_block = (Rpc - LABEL_49);
      goto continuation_31;

    case 38:
      current_block = (Rpc - LABEL_50);
      goto continuation_40;

    case 39:
      current_block = (Rpc - LABEL_51);
      goto continuation_39;

    case 40:
      current_block = (Rpc - LABEL_52);
      goto lambda_38;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto continuation_51;

    case 42:
      current_block = (Rpc - LABEL_55);
      goto continuation_48;

    case 43:
      current_block = (Rpc - LABEL_56);
      goto lambda_47;

    case 44:
      current_block = (Rpc - LABEL_68);
      goto label_67;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto continuation_34;

    case 46:
      current_block = (Rpc - LABEL_58);
      goto lambda_33;

    case 47:
      current_block = (Rpc - LABEL_60);
      goto continuation_37;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto continuation_36;

    case 49:
      current_block = (Rpc - LABEL_63);
      goto continuation_57;

    case 50:
      current_block = (Rpc - LABEL_64);
      goto continuation_56;

    case 51:
      current_block = (Rpc - LABEL_65);
      goto continuation_55;

    case 52:
      current_block = (Rpc - LABEL_67);
      goto continuation_46;

    case 53:
      current_block = (Rpc - LABEL_75);
      goto label_68;

    case 54:
      current_block = (Rpc - LABEL_70);
      goto continuation_32;

    case 55:
      current_block = (Rpc - LABEL_71);
      goto continuation_35;

    case 56:
      current_block = (Rpc - LABEL_73);
      goto continuation_54;

    case 57:
      current_block = (Rpc - LABEL_74);
      goto continuation_44;

    case 58:
      current_block = (Rpc - LABEL_76);
      goto continuation_53;

    case 59:
      current_block = (Rpc - LABEL_77);
      goto continuation_52;

    case 60:
      current_block = (Rpc - LABEL_79);
      goto label_75;

    case 61:
      current_block = (Rpc - LABEL_80);
      goto label_76;

    case 62:
      current_block = (Rpc - LABEL_81);
      goto expression_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_59)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_80])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_76)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_75)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
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
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	1,
	0,
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
    if (counter > 102)
      goto label_74;
    blocks = (current_block [OBJECT_49]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_79])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_74)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_90;
  Wrd12 = Wrd16;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_88;
  Wrd11 = Wrd15;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_86;
  Wrd12 = Wrd16;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_84;
  Wrd12 = Wrd16;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_82;
  Wrd12 = Wrd16;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_80;
  Wrd11 = Wrd15;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_78;
  Wrd12 = Wrd16;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd13.pObj));

DEFLABEL (label_66)
  (Wrd12.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_65)
  (Wrd11.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd13.pObj));

DEFLABEL (label_64)
  (Wrd12.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_63)
  (Wrd12.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd13.pObj));

DEFLABEL (label_62)
  (Wrd12.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd12.pObj));

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd13.pObj));

DEFLABEL (label_60)
  (Wrd12.Obj) = Rvl;
  goto label_89;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_55);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_41]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_41);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_21]))
    goto label_91;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (label_91)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd10.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_71)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_72)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_95;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_94)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_93;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (lambda_73)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cutl_so_b6145c1f46099f30 [102] =
  {
    { "cutl_so_code_1", 23, cutl_so_code_1 },
    { "cutl_so_code_2", 18, cutl_so_code_2 },
    { "cutl_so_code_3", 35, cutl_so_code_3 },
    { "cutl_so_code_4", 24, cutl_so_code_4 },
    { "cutl_so_code_5", 36, cutl_so_code_5 },
    { "cutl_so_code_6", 11, cutl_so_code_6 },
    { "cutl_so_code_7", 11, cutl_so_code_7 },
    { "cutl_so_code_8", 2, cutl_so_code_8 },
    { "cutl_so_code_9", 1, cutl_so_code_9 },
    { "cutl_so_code_10", 3, cutl_so_code_10 },
    { "cutl_so_code_11", 6, cutl_so_code_11 },
    { "cutl_so_code_12", 12, cutl_so_code_12 },
    { "cutl_so_code_13", 4, cutl_so_code_13 },
    { "cutl_so_code_14", 19, cutl_so_code_14 },
    { "cutl_so_code_15", 2, cutl_so_code_15 },
    { "cutl_so_code_16", 2, cutl_so_code_16 },
    { "cutl_so_code_17", 1, cutl_so_code_17 },
    { "cutl_so_code_18", 1, cutl_so_code_18 },
    { "cutl_so_code_19", 8, cutl_so_code_19 },
    { "cutl_so_code_20", 2, cutl_so_code_20 },
    { "cutl_so_code_21", 1, cutl_so_code_21 },
    { "cutl_so_code_22", 1, cutl_so_code_22 },
    { "cutl_so_code_23", 2, cutl_so_code_23 },
    { "cutl_so_code_24", 2, cutl_so_code_24 },
    { "cutl_so_code_25", 9, cutl_so_code_25 },
    { "cutl_so_code_26", 12, cutl_so_code_26 },
    { "cutl_so_code_27", 6, cutl_so_code_27 },
    { "cutl_so_code_28", 3, cutl_so_code_28 },
    { "cutl_so_code_29", 9, cutl_so_code_29 },
    { "cutl_so_code_30", 2, cutl_so_code_30 },
    { "cutl_so_code_31", 2, cutl_so_code_31 },
    { "cutl_so_code_32", 2, cutl_so_code_32 },
    { "cutl_so_code_33", 3, cutl_so_code_33 },
    { "cutl_so_code_34", 2, cutl_so_code_34 },
    { "cutl_so_code_35", 1, cutl_so_code_35 },
    { "cutl_so_code_36", 1, cutl_so_code_36 },
    { "cutl_so_code_37", 4, cutl_so_code_37 },
    { "cutl_so_code_38", 2, cutl_so_code_38 },
    { "cutl_so_code_39", 2, cutl_so_code_39 },
    { "cutl_so_code_40", 8, cutl_so_code_40 },
    { "cutl_so_code_41", 4, cutl_so_code_41 },
    { "cutl_so_code_42", 3, cutl_so_code_42 },
    { "cutl_so_code_43", 13, cutl_so_code_43 },
    { "cutl_so_code_44", 3, cutl_so_code_44 },
    { "cutl_so_code_45", 3, cutl_so_code_45 },
    { "cutl_so_code_46", 3, cutl_so_code_46 },
    { "cutl_so_code_47", 3, cutl_so_code_47 },
    { "cutl_so_code_48", 3, cutl_so_code_48 },
    { "cutl_so_code_49", 2, cutl_so_code_49 },
    { "cutl_so_code_50", 3, cutl_so_code_50 },
    { "cutl_so_code_51", 2, cutl_so_code_51 },
    { "cutl_so_code_52", 3, cutl_so_code_52 },
    { "cutl_so_code_53", 3, cutl_so_code_53 },
    { "cutl_so_code_54", 9, cutl_so_code_54 },
    { "cutl_so_code_55", 5, cutl_so_code_55 },
    { "cutl_so_code_56", 6, cutl_so_code_56 },
    { "cutl_so_code_57", 5, cutl_so_code_57 },
    { "cutl_so_code_58", 5, cutl_so_code_58 },
    { "cutl_so_code_59", 7, cutl_so_code_59 },
    { "cutl_so_code_60", 8, cutl_so_code_60 },
    { "cutl_so_code_61", 6, cutl_so_code_61 },
    { "cutl_so_code_62", 5, cutl_so_code_62 },
    { "cutl_so_code_63", 5, cutl_so_code_63 },
    { "cutl_so_code_64", 3, cutl_so_code_64 },
    { "cutl_so_code_65", 23, cutl_so_code_65 },
    { "cutl_so_code_66", 7, cutl_so_code_66 },
    { "cutl_so_code_67", 3, cutl_so_code_67 },
    { "cutl_so_code_68", 6, cutl_so_code_68 },
    { "cutl_so_code_69", 2, cutl_so_code_69 },
    { "cutl_so_code_70", 2, cutl_so_code_70 },
    { "cutl_so_code_71", 2, cutl_so_code_71 },
    { "cutl_so_code_72", 2, cutl_so_code_72 },
    { "cutl_so_code_73", 2, cutl_so_code_73 },
    { "cutl_so_code_74", 3, cutl_so_code_74 },
    { "cutl_so_code_75", 2, cutl_so_code_75 },
    { "cutl_so_code_76", 17, cutl_so_code_76 },
    { "cutl_so_code_77", 3, cutl_so_code_77 },
    { "cutl_so_code_78", 1, cutl_so_code_78 },
    { "cutl_so_code_79", 1, cutl_so_code_79 },
    { "cutl_so_code_80", 4, cutl_so_code_80 },
    { "cutl_so_code_81", 1, cutl_so_code_81 },
    { "cutl_so_code_82", 1, cutl_so_code_82 },
    { "cutl_so_code_83", 1, cutl_so_code_83 },
    { "cutl_so_code_84", 1, cutl_so_code_84 },
    { "cutl_so_code_85", 1, cutl_so_code_85 },
    { "cutl_so_code_86", 1, cutl_so_code_86 },
    { "cutl_so_code_87", 1, cutl_so_code_87 },
    { "cutl_so_code_88", 1, cutl_so_code_88 },
    { "cutl_so_code_89", 1, cutl_so_code_89 },
    { "cutl_so_code_90", 1, cutl_so_code_90 },
    { "cutl_so_code_91", 1, cutl_so_code_91 },
    { "cutl_so_code_92", 1, cutl_so_code_92 },
    { "cutl_so_code_93", 1, cutl_so_code_93 },
    { "cutl_so_code_94", 1, cutl_so_code_94 },
    { "cutl_so_code_95", 1, cutl_so_code_95 },
    { "cutl_so_code_96", 1, cutl_so_code_96 },
    { "cutl_so_code_97", 1, cutl_so_code_97 },
    { "cutl_so_code_98", 1, cutl_so_code_98 },
    { "cutl_so_code_99", 1, cutl_so_code_99 },
    { "cutl_so_code_100", 1, cutl_so_code_100 },
    { "cutl_so_code_101", 1, cutl_so_code_101 },
    { "cutl_so_code_102", 1, cutl_so_code_102 }
  };

int
decl_cutl_so_b6145c1f46099f30 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cutl_so_b6145c1f46099f30);
  return (0);
}

DECLARE_COMPILED_CODE ("cutl.so", 63, decl_cutl_so_b6145c1f46099f30, cutl_so_b6145c1f46099f30)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cutl_so_data_b6145c1f46099f30 [11076] =
  "\xd6\x01\xa6\x01\xc8\x1a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x06\x07"
  "\x02\x86\x02\x02\xc2\xb9\x02\x28\x0d\xba\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x80\x06\x07\x02\x86\x02\x02\xb1\x02\x28\x0d\xbc\x28\x0d\xbd"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x80\x81\x06"
  "\x07\x02\x86\x02\x02\xb1\x02\x28\x0d\xbf\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x80\x81\x06\x07\x02\x86\x02"
  "\x02\xb1\x02\x28\xb4\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\x0c\x82\x81\x06\x07\x02\x86\x02\x02\xb1\x02\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x06\x07\x02\x86\x02\x02\xb1\x02\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\x06\x07"
  "\x02\x86\x02\x02\xb1\x02\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x1c\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x80\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0c\xc1\x1c\xc1\x1c\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x0c\x0c\xc1\xc2\x09\xc1\x02\x86"
  "\x02\x02\x02\x06\x07\x85\xb1\x02\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0c\x0c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0f\x0f\x07\x80\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x08\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x82\x0c\x80\xc1\x1c\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x0d\x1c\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x0c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x1b\x0c\x0c\x08\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x0c\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x0c\x0d\x1c\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xc2\x1c\x81\x0c\x80\x0c\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x85\xb1\x02\x1b\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x1d\x0c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c"
  "\x1d\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0c\x06\x07\x85\xb1\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x0c\x1b\x0c\x0c"
  "\x0c\xc2\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x80\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0c\x0c\x1b\x0c\x08\x0c\x0c\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x0c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\xb8\x17\x1c\x88\x1b\x02\x02\x02\x02\x1b\x0d\x1b\xb0\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x0d\x0d\x0d\x0d\x0d\xb5\xb2\xb7\x1b\x1b\x0d\x1b\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d"
  "\x0d\x0d\x1b\x17\x0c\x0d\x1b\x0c\x0f\x1b\x1b\x1b\x1b\x0d\x1b\x0d"
  "\x0d\x9e\x1b\x2a\x1b\x2a\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9e\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8d\x0d\x0c\x88\x08\x88\x1b\x1b"
  "\x1b\x2a\x02\x02\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d"
  "\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d"
  "\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17"
  "\x1b\x2a\x0c\x0c\x88\x0c\x0c\x88\x0c\x0c\x88\x08\x8a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x08\x1b"
  "\x1b\x1b\x1b\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x1b\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x08\x88\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x0d\x17\x1b\x2a\x02\x82\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x1c\x1b\x0d\x1c\x1b\xc3\x0d"
  "\x1c\x1b\x1b\x08\x89\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x9e\x1b\x2a\xb4"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\xb3\x2a\x9e\x28\x0d\x26\x1b"
  "\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5d\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73"
  "\x2f\x43\x2f\x63\x75\x74\x6c\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x3d\x3b\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x1b\x04\x04\x63\x3a\x2b\x02\x56\x30\x81\x85\x02\x55\x2e\x81"
  "\x83\x02\x54\x2c\x81\x83\x02\x53\x2a\x81\x83\x02\x52\x28\x81\x83"
  "\x02\x51\x26\x81\x85\x02\x50\x24\x81\x83\x02\x4f\x22\x81\x83\x02"
  "\x4e\x20\x81\x83\x02\x4d\x1e\x81\x83\x02\x4c\x1c\x81\x83\x02\x4b"
  "\x1a\x81\x83\x02\x4a\x18\x81\x83\x02\x49\x16\x81\x83\x02\x48\x14"
  "\x81\x83\x02\x47\x12\x81\x83\x02\x46\x10\x81\x83\x02\x45\x0e\x81"
  "\x83\x02\x44\x0c\x84\x06\x43\x0a\x81\x85\x02\x42\x08\x81\x85\x02"
  "\x41\x06\x81\x85\x02\x40\x04\x81\x85\x02\x2f\x3d\x02\x3d\x3b\x0f"
  "\x1b\x04\x07\x65\x71\x75\x61\x6c\x3f\x04\x04\x63\x3a\x2d\x03\x68"
  "\x26\x81\x85\x02\x67\x24\x81\x85\x02\x66\x22\x81\x83\x02\x65\x20"
  "\x81\x83\x02\x64\x1e\x81\x83\x02\x63\x1c\x81\x83\x02\x62\x1a\x81"
  "\x83\x02\x61\x18\x81\x83\x02\x60\x16\x81\x83\x02\x5f\x14\x81\x83"
  "\x02\x5e\x12\x81\x83\x02\x5d\x10\x81\x83\x02\x5c\x0e\x81\x83\x02"
  "\x5b\x0c\x81\x83\x02\x5a\x0a\x84\x06\x59\x08\x81\x85\x02\x58\x06"
  "\x81\x85\x02\x57\x04\x81\x85\x02\x25\x36\x02\x3d\x3b\x0f\x1b\x04"
  "\x04\x63\x3a\x2a\x02\x8b\x01\x48\x81\x85\x02\x8a\x01\x46\x81\x83"
  "\x02\x89\x01\x44\x81\x83\x02\x88\x01\x42\x81\x83\x02\x87\x01\x40"
  "\x81\x83\x02\x86\x01\x3e\x81\x85\x02\x85\x01\x3c\x81\x83\x02\x84"
  "\x01\x3a\x81\x83\x02\x83\x01\x38\x81\x83\x02\x82\x01\x36\x81\x83"
  "\x02\x81\x01\x34\x81\x85\x02\x80\x01\x32\x81\x83\x02\x7f\x30\x81"
  "\x83\x02\x7e\x2e\x81\x83\x02\x7d\x2c\x81\x83\x02\x7c\x2a\x81\x85"
  "\x02\x7b\x28\x81\x83\x02\x7a\x26\x81\x83\x02\x79\x24\x81\x83\x02"
  "\x78\x22\x81\x83\x02\x77\x20\x81\x83\x02\x76\x1e\x81\x83\x02\x75"
  "\x1c\x81\x83\x02\x74\x1a\x81\x83\x02\x73\x18\x81\x83\x02\x72\x16"
  "\x81\x83\x02\x71\x14\x81\x83\x02\x70\x12\x81\x83\x02\x6f\x10\x84"
  "\x06\x6e\x0e\x81\x85\x02\x6d\x0c\x81\x85\x02\x6c\x0a\x81\x85\x02"
  "\x6b\x08\x81\x85\x02\x6a\x06\x81\x85\x02\x69\x04\x81\x85\x02\x47"
  "\x57\x09\x02\x3d\x3b\x0f\x1b\x04\x04\x04\x63\x3a\x2f\x0a\x03\xa3"
  "\x01\x32\x81\x85\x02\xa2\x01\x30\x81\x85\x02\xa1\x01\x2e\x81\x83"
  "\x02\xa0\x01\x2c\x81\x83\x02\x9f\x01\x2a\x81\x83\x02\x9e\x01\x28"
  "\x81\x83\x02\x9d\x01\x26\x81\x85\x02\x9c\x01\x24\x81\x83\x02\x9b"
  "\x01\x22\x81\x83\x02\x9a\x01\x20\x81\x83\x02\x99\x01\x1e\x81\x83"
  "\x02\x98\x01\x1c\x81\x83\x02\x97\x01\x1a\x81\x83\x02\x96\x01\x18"
  "\x81\x83\x02\x95\x01\x16\x81\x83\x02\x94\x01\x14\x81\x83\x02\x93"
  "\x01\x12\x81\x83\x02\x92\x01\x10\x81\x83\x02\x91\x01\x0e\x81\x83"
  "\x02\x90\x01\x0c\x84\x06\x8f\x01\x0a\x81\x85\x02\x8e\x01\x08\x81"
  "\x85\x02\x8d\x01\x06\x81\x85\x02\x8c\x01\x04\x81\x85\x02\x31\x43"
  "\x0b\x02\x24\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x65\x78\x70\x74"
  "\x3a\x20\x43\x61\x6e\x6e\x6f\x74\x20\x65\x78\x70\x6f\x6e\x65\x6e"
  "\x74\x69\x61\x74\x65\x3a\x3d\x3b\x0f\x1b\x05\x06\x65\x72\x72\x6f"
  "\x72\x0c\x04\x05\x63\x3a\x3c\x3c\x0d\x04\x05\x65\x78\x70\x74\x04"
  "\xc7\x01\x4a\x81\x85\x02\xc6\x01\x48\x81\x83\x02\xc5\x01\x46\x81"
  "\x83\x02\xc4\x01\x44\x81\x83\x02\xc3\x01\x42\x81\x83\x02\xc2\x01"
  "\x40\x81\x85\x02\xc1\x01\x3e\x81\x83\x02\xc0\x01\x3c\x81\x83\x02"
  "\xbf\x01\x3a\x81\x83\x02\xbe\x01\x38\x81\x83\x02\xbd\x01\x36\x81"
  "\x85\x02\xbc\x01\x34\x81\x83\x02\xbb\x01\x32\x81\x83\x02\xba\x01"
  "\x30\x81\x83\x02\xb9\x01\x2e\x81\x83\x02\xb8\x01\x2c\x81\x85\x02"
  "\xb7\x01\x2a\x81\x85\x02\xb6\x01\x28\x81\x83\x02\xb5\x01\x26\x81"
  "\x83\x02\xb4\x01\x24\x81\x83\x02\xb3\x01\x22\x81\x83\x02\xb2\x01"
  "\x20\x81\x83\x02\xb1\x01\x1e\x81\x83\x02\xb0\x01\x1c\x81\x83\x02"
  "\xaf\x01\x1a\x81\x83\x02\xae\x01\x18\x81\x83\x02\xad\x01\x16\x81"
  "\x83\x02\xac\x01\x14\x81\x83\x02\xab\x01\x12\x81\x83\x02\xaa\x01"
  "\x10\x84\x06\xa9\x01\x0e\x81\x85\x02\xa8\x01\x0c\x81\x85\x02\xa7"
  "\x01\x0a\x81\x85\x02\xa6\x01\x08\x81\x85\x02\xa5\x01\x06\x81\x85"
  "\x02\xa4\x01\x04\x81\x85\x02\x49\x5e\x0e\x02\x3d\x3b\x0f\x1b\x04"
  "\x02\xd2\x01\x18\x81\x83\x02\xd1\x01\x16\x81\x83\x02\xd0\x01\x14"
  "\x81\x83\x02\xcf\x01\x12\x81\x83\x02\xce\x01\x10\x81\x83\x02\xcd"
  "\x01\x0e\x81\x83\x02\xcc\x01\x0c\x81\x83\x02\xcb\x01\x0a\x81\x83"
  "\x02\xca\x01\x08\x84\x06\xc9\x01\x06\x81\x85\x02\xc8\x01\x04\x81"
  "\x85\x02\x17\x25\x02\x08\x3d\x3b\x0f\x1b\xdd\x01\x18\x81\x83\x02"
  "\xdc\x01\x16\x81\x83\x02\xdb\x01\x14\x81\x83\x02\xda\x01\x12\x81"
  "\x83\x02\xd9\x01\x10\x81\x83\x02\xd8\x01\x0e\x81\x83\x02\xd7\x01"
  "\x0c\x81\x83\x02\xd6\x01\x0a\x81\x83\x02\xd5\x01\x08\x84\x06\xd4"
  "\x01\x06\x81\x85\x02\xd3\x01\x04\x81\x85\x02\x17\x22\x0f\x02\x09"
  "\x02\x03\x08\x63\x3a\x6c\x69\x6e\x65\x3f\x10\x04\x11\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x3a\x6c\x69\x6e\x65\x11\x03\xdf"
  "\x01\x06\x81\x85\x02\xde\x01\x04\x84\x04\x05\x0e\x12\x02\x0a\x08"
  "\x07\x43\x20\x6c\x69\x6e\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77"
  "\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x13\x02\xe0\x01\x04\x84\x04\x03\x0c\x14\x02\x0b\x06\x61"
  "\x70\x70\x6c\x79\x15\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70"
  "\x65\x6e\x64\x16\x02\x04\x0d\x63\x3a\x25\x6d\x61\x6b\x65\x2d\x6c"
  "\x69\x6e\x65\x17\x02\xe3\x01\x08\x81\x85\x02\xe2\x01\x06\x81\x89"
  "\x02\xe1\x01\x04\xff\x03\x07\x11\x18\x02\x0c\x15\x01\x04\x63\x61"
  "\x72\x19\x04\x63\x64\x72\x1a\x16\x0c\x63\x3a\x6c\x69\x6e\x65\x2d"
  "\x69\x74\x65\x6d\x1b\x03\x04\x04\x6d\x61\x70\x1c\x03\x1b\x03\xe9"
  "\x01\x0e\x81\x85\x02\xe8\x01\x0c\x81\x83\x02\xe7\x01\x0a\x81\x89"
  "\x02\xe6\x01\x08\x81\x83\x02\xe5\x01\x06\x81\x83\x02\xe4\x01\x04"
  "\x83\x04\x0d\x1c\x1d\x02\x0d\x1b\x0c\x43\x20\x6c\x69\x6e\x65\x20"
  "\x69\x74\x65\x6d\x05\x74\x72\x75\x65\x06\x66\x61\x6c\x73\x65\x04"
  "\x2d\x30\x2e\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x3f\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e"
  "\x32\x04\x2d\x31\x2e\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x7a\x65\x72"
  "\x6f\x3f\x3d\x3b\x0f\x1b\x1e\x03\x07\x73\x74\x72\x69\x6e\x67\x03"
  "\x0e\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x3f\x03\x0f"
  "\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x1e\x03"
  "\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x1f\x05\x13\x03"
  "\x1d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2d\x3e\x69"
  "\x73\x6f\x38\x36\x30\x31\x2d\x73\x74\x72\x69\x6e\x67\x07\xf5\x01"
  "\x1a\x81\x83\x02\xf4\x01\x18\x81\x83\x02\xf3\x01\x16\x81\x83\x02"
  "\xf2\x01\x14\x81\x83\x02\xf1\x01\x12\x81\x83\x02\xf0\x01\x10\x81"
  "\x83\x02\xef\x01\x0e\x81\x83\x02\xee\x01\x0c\x81\x83\x02\xed\x01"
  "\x0a\x81\x83\x02\xec\x01\x08\x83\x04\xeb\x01\x06\x81\x83\x02\xea"
  "\x01\x04\x81\x83\x02\x19\x3c\x20\x02\x0e\x02\x23\x02\x0c\x03\x0d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x21\x04\x0f\x73"
  "\x74\x72\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78\x3f\x22\x04\x17"
  "\x04\xf9\x01\x0a\x81\x85\x02\xf8\x01\x08\x81\x85\x02\xf7\x01\x06"
  "\x81\x85\x02\xf6\x01\x04\x84\x06\x09\x16\x23\x02\x0f\x01\x21\x01"
  "\x0a\x18\x63\x3a\x69\x6e\x64\x65\x6e\x74\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x61\x62\x2d\x77\x69\x64\x74\x68\x24\x14\x63\x3a\x69\x6e\x64"
  "\x65\x6e\x74\x61\x74\x69\x6f\x6e\x2d\x64\x65\x6c\x74\x61\x25\x03"
  "\x03\x13\x63\x3a\x6c\x69\x6e\x65\x2d\x69\x6e\x64\x65\x6e\x74\x61"
  "\x74\x69\x6f\x6e\x26\x03\x18\x69\x6e\x74\x65\x67\x65\x72\x2d\x64"
  "\x69\x76\x69\x64\x65\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x04\x0f"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x04\x04"
  "\x6d\x61\x78\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x03"
  "\x19\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d"
  "\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x03\x0c\x63\x3a\x6c\x69\x6e"
  "\x65\x2d\x74\x65\x78\x74\x27\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65"
  "\x28\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x29"
  "\x0a\x8c\x02\x28\x81\x8b\x02\x8b\x02\x26\x81\x8b\x02\x8a\x02\x24"
  "\x81\x89\x02\x89\x02\x22\x81\x85\x02\x88\x02\x20\x81\x89\x02\x87"
  "\x02\x1e\x81\x89\x02\x86\x02\x1c\x81\x8d\x02\x85\x02\x1a\x81\x8d"
  "\x02\x84\x02\x18\x81\x87\x02\x83\x02\x16\x81\x8b\x02\x82\x02\x14"
  "\x81\x8b\x02\x81\x02\x12\x81\x87\x02\x80\x02\x10\x81\x8d\x02\xff"
  "\x01\x0e\x81\x89\x02\xfe\x01\x0c\x81\x8b\x02\xfd\x01\x0a\x81\x85"
  "\x02\xfc\x01\x08\x81\x89\x02\xfb\x01\x06\x81\x87\x02\xfa\x01\x04"
  "\x84\x06\x27\x44\x2a\x02\x10\x03\x27\x03\x21\x03\x8e\x02\x06\x81"
  "\x83\x02\x8d\x02\x04\x83\x04\x05\x0d\x21\x02\x11\x02\x03\x09\x63"
  "\x3a\x67\x72\x6f\x75\x70\x3f\x2b\x04\x12\x65\x72\x72\x6f\x72\x3a"
  "\x6e\x6f\x74\x2d\x63\x3a\x67\x72\x6f\x75\x70\x2c\x03\x90\x02\x06"
  "\x81\x85\x02\x8f\x02\x04\x84\x04\x05\x0e\x2d\x02\x12\x08\x08\x43"
  "\x20\x67\x72\x6f\x75\x70\x05\x13\x02\x91\x02\x04\x84\x04\x03\x0c"
  "\x2e\x02\x13\x03\x09\x63\x3a\x67\x72\x6f\x75\x70\x2a\x2f\x02\x92"
  "\x02\x04\xff\x03\x03\x30\x02\x14\x2f\x19\x1a\x03\x2b\x04\x0b\x61"
  "\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x03\x0d\x63\x3a\x6d\x61\x6b"
  "\x65\x2d\x67\x72\x6f\x75\x70\x31\x03\x10\x04\x11\x03\x0e\x63\x3a"
  "\x67\x72\x6f\x75\x70\x2d\x6c\x69\x6e\x65\x73\x32\x07\x9a\x02\x12"
  "\x81\x83\x02\x99\x02\x10\x81\x83\x02\x98\x02\x0e\x83\x04\x97\x02"
  "\x0c\x81\x83\x02\x96\x02\x0a\x81\x85\x02\x95\x02\x08\x83\x04\x94"
  "\x02\x06\x81\x83\x02\x93\x02\x04\x81\x83\x02\x11\x25\x33\x02\x15"
  "\x03\x32\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x9c\x02\x06\x81\x83"
  "\x02\x9b\x02\x04\x83\x04\x05\x0d\x34\x02\x16\x03\x0a\x63\x3a\x69"
  "\x6e\x64\x65\x6e\x74\x2a\x35\x02\x9d\x02\x04\xff\x03\x03\x36\x02"
  "\x17\x03\x0a\x63\x3a\x65\x78\x64\x65\x6e\x74\x2a\x37\x02\x9e\x02"
  "\x04\xff\x03\x03\x38\x02\x18\x03\x2f\x04\x0a\x63\x3a\x25\x69\x6e"
  "\x64\x65\x6e\x74\x39\x03\xa0\x02\x06\x81\x83\x02\x9f\x02\x04\x83"
  "\x04\x05\x0e\x3a\x02\x19\x03\x2f\x04\x39\x03\xa2\x02\x06\x81\x83"
  "\x02\xa1\x02\x04\x83\x04\x05\x0e\x3b\x02\x1a\x39\x03\x10\x03\x27"
  "\x03\x2b\x03\x26\x04\x11\x03\x32\x04\x0c\x63\x3a\x6d\x61\x6b\x65"
  "\x2d\x6c\x69\x6e\x65\x3c\x03\x31\x04\x1c\x0a\xab\x02\x14\x81\x89"
  "\x02\xaa\x02\x12\x81\x87\x02\xa9\x02\x10\x81\x87\x02\xa8\x02\x0e"
  "\x81\x87\x02\xa7\x02\x0c\x81\x87\x02\xa6\x02\x0a\x81\x85\x02\xa5"
  "\x02\x08\x81\x87\x02\xa4\x02\x06\x81\x85\x02\xa3\x02\x04\x84\x06"
  "\x13\x2a\x3d\x02\x1b\x02\x19\x1a\x0e\x63\x3a\x77\x72\x69\x74\x65"
  "\x2d\x67\x72\x6f\x75\x70\x3e\x03\x10\x03\x2b\x04\x0d\x63\x3a\x77"
  "\x72\x69\x74\x65\x2d\x6c\x69\x6e\x65\x3f\x04\x2c\x03\x32\x03\x0e"
  "\x63\x3a\x6c\x61\x62\x65\x6c\x2d\x6c\x69\x6e\x65\x3f\x40\x03\x0e"
  "\x63\x3a\x62\x6c\x61\x6e\x6b\x2d\x6c\x69\x6e\x65\x3f\x41\x03\x28"
  "\x09\xb7\x02\x1a\x81\x8d\x02\xb6\x02\x18\x81\x8d\x02\xb5\x02\x16"
  "\x81\x8d\x02\xb4\x02\x14\x81\x8d\x02\xb3\x02\x12\x81\x8d\x02\xb2"
  "\x02\x10\x81\x8b\x02\xb1\x02\x0e\x81\x89\x02\xb0\x02\x0c\x81\x89"
  "\x02\xaf\x02\x0a\x81\x87\x02\xae\x02\x08\x81\x85\x02\xad\x02\x06"
  "\x81\x85\x02\xac\x02\x04\x84\x06\x19\x31\x28\x02\x1c\x19\x49\x4e"
  "\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45\x5f\x54"
  "\x41\x52\x47\x45\x54\x5f\x18\x49\x4e\x56\x4f\x4b\x45\x5f\x50\x52"
  "\x49\x4d\x49\x54\x49\x56\x45\x5f\x54\x41\x52\x47\x45\x54\x0a\x44"
  "\x45\x46\x4c\x41\x42\x45\x4c\x20\x03\x27\x04\x22\x04\x09\x73\x74"
  "\x72\x69\x6e\x67\x3d\x3f\x04\xbd\x02\x0e\x81\x85\x02\xbc\x02\x0c"
  "\x81\x87\x02\xbb\x02\x0a\x81\x85\x02\xba\x02\x08\x81\x85\x02\xb9"
  "\x02\x06\x81\x83\x02\xb8\x02\x04\x83\x04\x0d\x1a\x42\x02\x1d\x04"
  "\x20\x2a\x2f\x04\x2f\x2a\x20\x03\x0d\x63\x3a\x6c\x69\x6e\x65\x2d"
  "\x69\x74\x65\x6d\x73\x43\x05\x16\x03\x13\x63\x3a\x70\x72\x65\x73"
  "\x65\x72\x76\x65\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x44\x04\xc0\x02"
  "\x08\x81\x85\x02\xbf\x02\x06\x81\x83\x02\xbe\x02\x04\xff\x03\x07"
  "\x13\x45\x02\x1e\x04\x2a\x5c\x2f\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x46\x03\x2a\x2f\x04\x16\x73\x74\x72\x69"
  "\x6e\x67\x2d\x73\x65\x61\x72\x63\x68\x2d\x66\x6f\x72\x77\x61\x72"
  "\x64\x03\x18\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x06\x10\x77\x72\x69\x74"
  "\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x04\x29\x06\x19\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x61\x72\x63\x68\x2d"
  "\x66\x6f\x72\x77\x61\x72\x64\x06\xc9\x02\x14\x81\x89\x02\xc8\x02"
  "\x12\x81\x8b\x02\xc7\x02\x10\x81\x8b\x02\xc6\x02\x0e\x81\x8b\x02"
  "\xc5\x02\x0c\x81\x8b\x02\xc4\x02\x0a\x81\x85\x02\xc3\x02\x08\x81"
  "\x85\x02\xc2\x02\x06\x81\x83\x02\xc1\x02\x04\x83\x04\x13\x26\x29"
  "\x02\x1f\x02\x22\x03\x43\x05\x16\x03\xcb\x02\x06\x81\x83\x02\xca"
  "\x02\x04\xff\x03\x05\x0e\x47\x02\x20\x02\x29\x02\x28\x03\x43\x05"
  "\x16\x03\xcd\x02\x06\x81\x83\x02\xcc\x02\x04\xff\x03\x05\x0f\x48"
  "\x02\x21\x03\x20\x7d\x03\x7b\x20\x03\x0d\x63\x3a\x63\x6f\x6d\x6d"
  "\x61\x2d\x6c\x69\x73\x74\x49\x05\x16\x03\xcf\x02\x06\x81\x83\x02"
  "\xce\x02\x04\xff\x03\x05\x0f\x4a\x02\x22\x03\x2c\x20\x01\x1b\x02"
  "\x04\x1c\x06\x18\x64\x65\x63\x6f\x72\x61\x74\x65\x64\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03\xd2\x02\x08\x81"
  "\x89\x02\xd1\x02\x06\x81\x8d\x02\xd0\x02\x04\x83\x04\x07\x13\x4b"
  "\x02\x23\x11\x03\x30\x78\x04\x1e\x04\x16\x03\xd4\x02\x06\x81\x85"
  "\x02\xd3\x02\x04\x83\x04\x05\x0f\x1e\x02\x24\x02\x0c\x03\x07\x63"
  "\x3a\x6c\x69\x6e\x65\x4c\x02\xd5\x02\x04\x82\x02\x03\x0a\x4d\x02"
  "\x25\x03\x0f\x63\x3a\x62\x72\x61\x63\x65\x2d\x67\x72\x6f\x75\x70"
  "\x2a\x4e\x02\xd6\x02\x04\xff\x03\x03\x4f\x02\x26\x02\x7d\x02\x7b"
  "\x03\x35\x03\x4c\x05\x08\x63\x3a\x67\x72\x6f\x75\x70\x50\x04\xda"
  "\x02\x0a\x81\x87\x02\xd9\x02\x08\x81\x85\x02\xd8\x02\x06\x81\x83"
  "\x02\xd7\x02\x04\x83\x04\x09\x15\x51\x02\x27\x15\x0f\x57\x41\x4e"
  "\x54\x5f\x4f\x4e\x4c\x59\x5f\x44\x41\x54\x41\x09\x63\x3a\x69\x66"
  "\x6e\x64\x65\x66\x52\x02\xdc\x02\x06\x81\x83\x02\xdb\x02\x04\xff"
  "\x03\x05\x0c\x53\x02\x28\x15\x0f\x57\x41\x4e\x54\x5f\x4f\x4e\x4c"
  "\x59\x5f\x43\x4f\x44\x45\x52\x02\xde\x02\x06\x81\x83\x02\xdd\x02"
  "\x04\xff\x03\x05\x0c\x54\x02\x29\x08\x23\x65\x6e\x64\x69\x66\x20"
  "\x09\x23\x69\x66\x6e\x64\x65\x66\x20\x02\x21\x03\x2f\x02\x4c\x04"
  "\x4c\x03\x06\x63\x3a\x76\x61\x72\x55\x04\x0a\x63\x3a\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x56\x07\x50\x07\xe6\x02\x12\x81\x8b\x02\xe5\x02"
  "\x10\x81\x8d\x02\xe4\x02\x0e\x81\x8b\x02\xe3\x02\x0c\x81\x8b\x02"
  "\xe2\x02\x0a\x81\x89\x02\xe1\x02\x08\x81\x87\x02\xe0\x02\x06\x81"
  "\x85\x02\xdf\x02\x04\xfe\x05\x11\x24\x57\x02\x2a\x02\x3e\x02\x3c"
  "\x0a\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x04\x22\x03\x09\x63\x3a"
  "\x73\x74\x72\x69\x6e\x67\x58\x04\x0f\x73\x74\x72\x69\x6e\x67\x2d"
  "\x73\x75\x66\x66\x69\x78\x3f\x59\x04\x4c\x05\xea\x02\x0a\x81\x85"
  "\x02\xe9\x02\x08\x81\x87\x02\xe8\x02\x06\x81\x87\x02\xe7\x02\x04"
  "\x83\x04\x09\x18\x5a\x02\x2b\x02\x20\x09\x23\x64\x65\x66\x69\x6e"
  "\x65\x20\x03\x55\x03\x07\x63\x3a\x65\x78\x70\x72\x5b\x06\x4c\x04"
  "\xed\x02\x08\x81\x89\x02\xec\x02\x06\x81\x85\x02\xeb\x02\x04\x84"
  "\x06\x07\x13\x5c\x02\x2c\x08\x73\x74\x61\x74\x69\x63\x20\x01\x1a"
  "\x19\x02\x20\x07\x28\x76\x6f\x69\x64\x29\x05\x4c\x04\x4c\x04\x1c"
  "\x03\x4e\x03\x09\x63\x3a\x70\x61\x72\x65\x6e\x73\x5d\x03\x49\x03"
  "\x07\x63\x3a\x74\x79\x70\x65\x5e\x03\x55\x05\x50\x05\x16\x0b\xfa"
  "\x02\x1c\x81\x87\x02\xf9\x02\x1a\x81\x8d\x02\xf8\x02\x18\x81\x8b"
  "\x02\xf7\x02\x16\x81\x89\x02\xf6\x02\x14\x81\x85\x02\xf5\x02\x12"
  "\x81\x8b\x02\xf4\x02\x10\x81\x87\x02\xf3\x02\x0e\x83\x04\xf2\x02"
  "\x0c\x81\x91\x02\xf1\x02\x0a\x81\x8f\x02\xf0\x02\x08\x81\x8b\x02"
  "\xef\x02\x06\xfb\x0b\xee\x02\x04\x81\x8d\x02\x1b\x3a\x5f\x02\x2d"
  "\x02\x3b\x04\x20\x3d\x20\x03\x5b\x06\x4c\x03\xfd\x02\x08\x81\x89"
  "\x02\xfc\x02\x06\x81\x87\x02\xfb\x02\x04\x84\x06\x07\x11\x60\x02"
  "\x2e\x02\x3b\x05\x20\x2b\x3d\x20\x03\x5b\x06\x4c\x03\x80\x03\x08"
  "\x81\x89\x02\xff\x02\x06\x81\x87\x02\xfe\x02\x04\x84\x06\x07\x11"
  "\x61\x02\x2f\x02\x3b\x05\x20\x2d\x3d\x20\x03\x5b\x06\x4c\x03\x83"
  "\x03\x08\x81\x89\x02\x82\x03\x06\x81\x87\x02\x81\x03\x04\x84\x06"
  "\x07\x11\x62\x02\x30\x02\x3b\x05\x20\x2a\x3d\x20\x03\x5b\x06\x4c"
  "\x03\x86\x03\x08\x81\x89\x02\x85\x03\x06\x81\x87\x02\x84\x03\x04"
  "\x84\x06\x07\x11\x63\x02\x31\x02\x3b\x05\x20\x2f\x3d\x20\x03\x5b"
  "\x06\x4c\x03\x89\x03\x08\x81\x89\x02\x88\x03\x06\x81\x87\x02\x87"
  "\x03\x04\x84\x06\x07\x11\x64\x02\x32\x02\x3b\x06\x67\x6f\x74\x6f"
  "\x20\x03\x55\x05\x4c\x03\x8b\x03\x06\x81\x83\x02\x8a\x03\x04\x83"
  "\x04\x05\x0f\x65\x02\x33\x09\x44\x45\x46\x4c\x41\x42\x45\x4c\x04"
  "\x07\x63\x3a\x63\x61\x6c\x6c\x66\x03\x09\x63\x3a\x65\x78\x64\x65"
  "\x6e\x74\x67\x03\x4c\x04\x8e\x03\x08\x81\x85\x02\x8d\x03\x06\x81"
  "\x83\x02\x8c\x03\x04\x83\x04\x07\x12\x68\x02\x34\x02\x3b\x08\x72"
  "\x65\x74\x75\x72\x6e\x20\x03\x08\x63\x3a\x70\x65\x78\x70\x72\x69"
  "\x05\x4c\x03\x90\x03\x06\x81\x83\x02\x8f\x03\x04\x83\x04\x05\x0f"
  "\x6a\x02\x35\x02\x3b\x15\x66\x02\x04\x4c\x02\x93\x03\x08\x81\x85"
  "\x02\x92\x03\x06\x81\x89\x02\x91\x03\x04\xfe\x05\x07\x11\x6b\x02"
  "\x36\x15\x66\x02\x03\x5d\x02\x96\x03\x08\x81\x85\x02\x95\x03\x06"
  "\x81\x89\x02\x94\x03\x04\xfe\x05\x07\x10\x6c\x02\x37\x1a\x19\x02"
  "\x20\x5b\x02\x03\x5b\x04\x1c\x03\x12\x63\x3a\x25\x70\x61\x72\x65"
  "\x6e\x74\x68\x65\x73\x69\x7a\x65\x64\x3f\x6d\x03\x49\x05\x16\x03"
  "\x5d\x07\x9f\x03\x14\x81\x83\x02\x9e\x03\x12\x81\x87\x02\x9d\x03"
  "\x10\x81\x85\x02\x9c\x03\x0e\x81\x83\x02\x9b\x03\x0c\x81\x89\x02"
  "\x9a\x03\x0a\x81\x83\x02\x99\x03\x08\x81\x8d\x02\x98\x03\x06\x81"
  "\x85\x02\x97\x03\x04\xfe\x05\x13\x29\x6e\x02\x38\x08\x73\x77\x69"
  "\x74\x63\x68\x20\x03\x69\x03\x4e\x04\x4c\x04\x50\x03\x09\x63\x3a"
  "\x69\x6e\x64\x65\x6e\x74\x6f\x06\xa4\x03\x0c\x81\x87\x02\xa3\x03"
  "\x0a\x81\x85\x02\xa2\x03\x08\x81\x87\x02\xa1\x03\x06\x81\x85\x02"
  "\xa0\x03\x04\xfe\x05\x0b\x1a\x70\x02\x39\x06\x63\x61\x73\x65\x20"
  "\x08\x64\x65\x66\x61\x75\x6c\x74\x02\x3a\x04\x4c\x03\x1b\x03\x2f"
  "\x03\x67\x04\x16\x04\x50\x07\xaa\x03\x0e\x81\x85\x02\xa9\x03\x0c"
  "\x81\x8d\x02\xa8\x03\x0a\x81\x87\x02\xa7\x03\x08\x81\x85\x02\xa6"
  "\x03\x06\xfe\x05\xa5\x03\x04\x81\x8b\x02\x0d\x20\x71\x02\x3a\x04"
  "\x69\x66\x20\x03\x69\x03\x07\x63\x3a\x67\x6f\x74\x6f\x72\x04\x4c"
  "\x04\x50\x03\x6f\x06\xaf\x03\x0c\x81\x87\x02\xae\x03\x0a\x81\x85"
  "\x02\xad\x03\x08\x81\x87\x02\xac\x03\x06\x81\x85\x02\xab\x03\x04"
  "\x84\x06\x0b\x1a\x73\x02\x3b\x07\x77\x68\x69\x6c\x65\x20\x03\x69"
  "\x03\x4e\x04\x4c\x04\x50\x03\x6f\x06\xb4\x03\x0c\x81\x87\x02\xb3"
  "\x03\x0a\x81\x85\x02\xb2\x03\x08\x81\x87\x02\xb1\x03\x06\x81\x85"
  "\x02\xb0\x03\x04\xfe\x05\x0b\x1a\x74\x02\x3c\x1a\x02\x29\x03\x29"
  "\x20\x03\x28\x28\x13\x63\x3a\x64\x65\x63\x69\x6d\x61\x6c\x2d\x73"
  "\x75\x66\x66\x69\x78\x65\x73\x75\x02\x03\x5e\x03\x5b\x03\x0c\x63"
  "\x3a\x25\x64\x65\x63\x69\x6d\x61\x6c\x3f\x76\x04\x06\x61\x73\x73"
  "\x6f\x63\x07\x16\x04\x16\x07\xbb\x03\x10\x81\x87\x02\xba\x03\x0e"
  "\x81\x85\x02\xb9\x03\x0c\x81\x87\x02\xb8\x03\x0a\x81\x87\x02\xb7"
  "\x03\x08\x81\x85\x02\xb6\x03\x06\x81\x85\x02\xb5\x03\x04\x84\x06"
  "\x0f\x25\x77\x02\x3d\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66"
  "\x78\x02\x2b\x02\x2d\x46\x10\x63\x3a\x64\x65\x63\x69\x6d\x61\x6c"
  "\x2d\x63\x68\x61\x72\x73\x79\x02\x04\x22\x04\x11\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x7a\x03\xc3\x03"
  "\x12\x81\x87\x02\xc2\x03\x10\x81\x8b\x02\xc1\x03\x0e\x81\x89\x02"
  "\xc0\x03\x0c\x81\x87\x02\xbf\x03\x0a\x81\x85\x02\xbe\x03\x08\x81"
  "\x85\x02\xbd\x03\x06\x81\x83\x02\xbc\x03\x04\x83\x04\x11\x22\x7b"
  "\x02\x3e\x1e\x1a\x0d\x74\x79\x70\x65\x2d\x61\x62\x62\x72\x65\x76"
  "\x73\x7c\x02\x03\x1b\x04\x05\x61\x73\x73\x71\x03\xc9\x03\x0e\x81"
  "\x87\x02\xc8\x03\x0c\x81\x83\x02\xc7\x03\x0a\x83\x04\xc6\x03\x08"
  "\x81\x83\x02\xc5\x03\x06\x81\x85\x02\xc4\x03\x04\x81\x85\x02\x0d"
  "\x1d\x7d\x02\x3f\x04\x20\x3d\x20\x02\x3b\x01\x08\x02\x20\x03\x5e"
  "\x03\x55\x07\x4c\x03\x5b\x04\x16\x06\xce\x03\x0c\x81\x8d\x02\xcd"
  "\x03\x0a\x81\x8b\x02\xcc\x03\x08\x81\x8b\x02\xcb\x03\x06\x81\x89"
  "\x02\xca\x03\x04\x85\x06\x0b\x1e\x7e\x02\x40\x04\x20\x3d\x20\x16"
  "\x20\x41\x54\x54\x52\x49\x42\x55\x54\x45\x28\x28\x75\x6e\x75\x73"
  "\x65\x64\x29\x29\x3b\x01\x08\x02\x20\x03\x5e\x03\x55\x07\x4c\x03"
  "\x5b\x04\x16\x06\xd3\x03\x0c\x81\x8d\x02\xd2\x03\x0a\x81\x8b\x02"
  "\xd1\x03\x08\x81\x8b\x02\xd0\x03\x06\x81\x89\x02\xcf\x03\x04\x85"
  "\x06\x0b\x1e\x7f\x02\x41\x55\x0b\x43\x20\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x1e\x05\x13\x03\x1f\x03\xd6\x03\x08\x81\x83\x02\xd5\x03"
  "\x06\x83\x04\xd4\x03\x04\x81\x83\x02\x07\x16\x13\x02\x42\x02\x7b"
  "\x02\x20\x19\x02\x2c\x1a\x03\x20\x5b\x03\x7d\x3b\x04\x5d\x20\x3d"
  "\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x03\x0a\x6c\x69\x73\x74\x2d"
  "\x63\x6f\x70\x79\x03\x5b\x03\x4c\x04\x4c\x08\x4c\x03\x55\x03\x1b"
  "\x04\x50\x05\x50\x03\x6f\x03\x2f\x03\x5e\x0d\xed\x03\x30\x81\x93"
  "\x02\xec\x03\x2e\x81\x97\x02\xeb\x03\x2c\x81\x93\x02\xea\x03\x2a"
  "\x81\x91\x02\xe9\x03\x28\x81\x87\x02\xe8\x03\x26\x81\x83\x02\xe7"
  "\x03\x24\x81\x83\x02\xe6\x03\x22\x81\x83\x02\xe5\x03\x20\x81\x87"
  "\x02\xe4\x03\x1e\x81\x93\x02\xe3\x03\x1c\x81\x8f\x02\xe2\x03\x1a"
  "\x81\x8d\x02\xe1\x03\x18\x81\x8b\x02\xe0\x03\x16\x81\x89\x02\xdf"
  "\x03\x14\x81\x89\x02\xde\x03\x12\x81\x83\x02\xdd\x03\x10\x81\x83"
  "\x02\xdc\x03\x0e\x81\x8f\x02\xdb\x03\x0c\x81\x8b\x02\xda\x03\x0a"
  "\x81\x89\x02\xd9\x03\x08\x81\x8b\x02\xd8\x03\x06\x81\x85\x02\xd7"
  "\x03\x04\x86\x0a\x2f\x54\x02\x43\x02\x22\x02\x29\x02\x28\x03\x1b"
  "\x03\x0f\x63\x3a\x25\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f"
  "\x80\x01\x05\x16\x04\x59\x04\x22\x03\x6d\x03\x0f\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x08\xf4\x03\x10\x81\x83"
  "\x02\xf3\x03\x0e\x81\x83\x02\xf2\x03\x0c\x81\x83\x02\xf1\x03\x0a"
  "\x81\x83\x02\xf0\x03\x08\x81\x83\x02\xef\x03\x06\x81\x83\x02\xee"
  "\x03\x04\x83\x04\x0f\x24\x81\x01\x02\x44\x02\x29\x02\x28\x03\x1b"
  "\x03\x6d\x05\x16\x04\xf7\x03\x08\x81\x83\x02\xf6\x03\x06\x81\x83"
  "\x02\xf5\x03\x04\x83\x04\x07\x13\x82\x01\x02\x45\x78\x46\x13\x63"
  "\x3a\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x63\x68\x61\x72"
  "\x73\x78\x02\x04\x7a\x02\xfd\x03\x0e\x81\x87\x02\xfc\x03\x0c\x81"
  "\x8b\x02\xfb\x03\x0a\x81\x89\x02\xfa\x03\x08\x81\x87\x02\xf9\x03"
  "\x06\x81\x83\x02\xf8\x03\x04\x83\x04\x0d\x19\x7a\x02\x46\x02\x29"
  "\x02\x28\x04\x22\x04\x59\x03\xff\x03\x06\x81\x83\x02\xfe\x03\x04"
  "\x83\x04\x05\x0f\x59\x02\x47\x03\x2d\x2d\x03\x5b\x04\x16\x03\x81"
  "\x04\x06\x81\x85\x02\x80\x04\x04\x83\x04\x05\x0e\x46\x02\x48\x03"
  "\x2b\x2b\x03\x5b\x04\x16\x03\x83\x04\x06\x81\x85\x02\x82\x04\x04"
  "\x83\x04\x05\x0e\x22\x02\x49\x03\x2d\x2d\x03\x5b\x04\x16\x03\x85"
  "\x04\x06\x81\x83\x02\x84\x04\x04\x83\x04\x05\x0e\x83\x01\x02\x4a"
  "\x03\x2b\x2b\x03\x5b\x04\x16\x03\x87\x04\x06\x81\x83\x02\x86\x04"
  "\x04\x83\x04\x05\x0e\x84\x01\x02\x4b\x03\x5d\x29\x02\x28\x03\x20"
  "\x5b\x03\x5b\x07\x16\x03\x8a\x04\x08\x81\x8b\x02\x89\x04\x06\x81"
  "\x87\x02\x88\x04\x04\x84\x06\x07\x12\x85\x01\x02\x4c\x04\x07\x63"
  "\x3a\x61\x72\x65\x66\x86\x01\x03\x04\x63\x3a\x26\x87\x01\x03\x8c"
  "\x04\x06\x81\x85\x02\x8b\x04\x04\x84\x06\x05\x0d\x88\x01\x02\x4d"
  "\x15\x02\x28\x04\x20\x3f\x20\x19\x04\x20\x3a\x20\x02\x29\x23\x43"
  "\x3a\x3f\x3a\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x76\x65"
  "\x6e\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x73"
  "\x2e\x1a\x16\x02\x03\x5b\x03\x0c\x03\x9d\x04\x24\x81\x85\x02\x9c"
  "\x04\x22\x81\x89\x02\x9b\x04\x20\x81\x8b\x02\x9a\x04\x1e\x81\x87"
  "\x02\x99\x04\x1c\x81\x85\x02\x98\x04\x1a\x81\x8b\x02\x97\x04\x18"
  "\x81\x87\x02\x96\x04\x16\x81\x87\x02\x95\x04\x14\x81\x83\x02\x94"
  "\x04\x12\x81\x8b\x02\x93\x04\x10\x81\x85\x02\x92\x04\x0e\x81\x85"
  "\x02\x91\x04\x0c\x81\x83\x02\x90\x04\x0a\x81\x83\x02\x8f\x04\x08"
  "\x81\x83\x02\x8e\x04\x06\x81\x89\x02\x8d\x04\x04\xfc\x09\x23\x36"
  "\x15\x02\x4e\x02\x29\x02\x28\x02\x20\x03\x1b\x03\x5b\x07\x16\x04"
  "\xa0\x04\x08\x81\x8b\x02\x9f\x04\x06\x81\x87\x02\x9e\x04\x04\x84"
  "\x06\x07\x14\x0c\x02\x4f\x02\x21\x04\x08\x63\x3a\x75\x6e\x61\x72"
  "\x79\x89\x01\x02\xa1\x04\x04\x83\x04\x03\x0a\x8a\x01\x02\x50\x02"
  "\x7e\x04\x89\x01\x02\xa2\x04\x04\x83\x04\x03\x0a\x8b\x01\x02\x51"
  "\x02\x29\x02\x28\x02\x20\x03\x1b\x03\x5b\x09\x16\x04\xa6\x04\x0a"
  "\x81\x8f\x02\xa5\x04\x08\x81\x8b\x02\xa4\x04\x06\x81\x87\x02\xa3"
  "\x04\x04\x85\x08\x09\x16\x8c\x01\x02\x52\x03\x3d\x3d\x05\x0f\x63"
  "\x3a\x62\x69\x6e\x61\x72\x79\x2d\x69\x6e\x66\x69\x78\x8d\x01\x02"
  "\xa7\x04\x04\x84\x06\x03\x0a\x8e\x01\x02\x53\x03\x3d\x3d\x05\x8d"
  "\x01\x02\xa8\x04\x04\x84\x06\x03\x0a\x8f\x01\x02\x54\x02\x3e\x05"
  "\x8d\x01\x02\xa9\x04\x04\x84\x06\x03\x0a\x90\x01\x02\x55\x03\x3e"
  "\x3d\x05\x8d\x01\x02\xaa\x04\x04\x84\x06\x03\x0a\x91\x01\x02\x56"
  "\x02\x3c\x05\x8d\x01\x02\xab\x04\x04\x84\x06\x03\x0a\x92\x01\x02"
  "\x57\x03\x3c\x3d\x05\x8d\x01\x02\xac\x04\x04\x84\x06\x03\x0a\x93"
  "\x01\x02\x58\x02\x7c\x05\x8d\x01\x02\xad\x04\x04\x84\x06\x03\x0a"
  "\x94\x01\x02\x59\x02\x5e\x05\x8d\x01\x02\xae\x04\x04\x84\x06\x03"
  "\x0a\x95\x01\x02\x5a\x03\x26\x7e\x05\x8d\x01\x02\xaf\x04\x04\x84"
  "\x06\x03\x0a\x96\x01\x02\x5b\x02\x2f\x05\x8d\x01\x02\xb0\x04\x04"
  "\x84\x06\x03\x0a\x97\x01\x02\x5c\x03\x3c\x3c\x05\x8d\x01\x02\xb1"
  "\x04\x04\x84\x06\x03\x0a\x98\x01\x02\x5d\x03\x3e\x3e\x05\x8d\x01"
  "\x02\xb2\x04\x04\x84\x06\x03\x0a\x99\x01\x02\x5e\x08\x04\x89\x01"
  "\x05\x8d\x01\x03\xb3\x04\x04\x85\x08\x03\x0c\x9a\x01\x02\x5f\x02"
  "\x26\x05\x0a\x63\x3a\x75\x62\x69\x6e\x61\x72\x79\x9b\x01\x02\xb4"
  "\x04\x04\x84\x04\x03\x0a\x9c\x01\x02\x60\x02\x2a\x05\x9b\x01\x02"
  "\xb5\x04\x04\x84\x04\x03\x0a\x9d\x01\x02\x61\x02\x2b\x05\x9b\x01"
  "\x02\xb6\x04\x04\x84\x04\x03\x0a\x9e\x01\x02\x62\x02\x2d\x05\x9b"
  "\x01\x02\xb7\x04\x04\x84\x04\x03\x0a\x9f\x01\x02\x63\x0c\x4d\x41"
  "\x4b\x45\x5f\x4f\x42\x4a\x45\x43\x54\x05\x08\x63\x3a\x65\x63\x61"
  "\x6c\x6c\xa0\x01\x02\xb8\x04\x04\x84\x06\x03\x0a\xa1\x01\x02\x64"
  "\x14\x4d\x41\x4b\x45\x5f\x50\x4f\x49\x4e\x54\x45\x52\x5f\x4f\x42"
  "\x4a\x45\x43\x54\x05\xa0\x01\x02\xb9\x04\x04\x84\x06\x03\x0a\xa2"
  "\x01\x02\x65\x0c\x4f\x42\x4a\x45\x43\x54\x5f\x54\x59\x50\x45\x04"
  "\xa0\x01\x02\xba\x04\x04\x83\x04\x03\x0a\xa3\x01\x02\x66\x0d\x4f"
  "\x42\x4a\x45\x43\x54\x5f\x44\x41\x54\x55\x4d\x04\xa0\x01\x02\xbb"
  "\x04\x04\x83\x04\x03\x0a\xa4\x01\x02\x67\x0f\x4f\x42\x4a\x45\x43"
  "\x54\x5f\x41\x44\x44\x52\x45\x53\x53\x04\xa0\x01\x02\xbc\x04\x04"
  "\x83\x04\x03\x0a\x67\xa5\x01\xa5\x01\x42\x5c\x62\x7c\x19\x02\x2a"
  "\x78\x04\xa4\x01\x04\xa3\x01\x04\xa2\x01\x04\xa1\x01\x04\x9f\x01"
  "\x04\x9e\x01\x04\x9d\x01\x04\x9c\x01\x04\x9a\x01\x04\x99\x01\x04"
  "\x98\x01\x04\x97\x01\x04\x96\x01\x04\x95\x01\x04\x94\x01\x04\x93"
  "\x01\x04\x92\x01\x04\x91\x01\x04\x90\x01\x04\x8f\x01\x04\x8e\x01"
  "\x04\x8c\x01\x04\x8b\x01\x04\x8a\x01\x04\x0c\x04\x15\x04\x88\x01"
  "\x04\x85\x01\x04\x84\x01\x04\x83\x01\x04\x22\x04\x46\x04\x59\x04"
  "\x23\x11\x63\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x0f\x63\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75"
  "\x6d\x0e\x63\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x16"
  "\x63\x3a\x6d\x61\x6b\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x0e\x63\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x87\x01\x9b\x01\x05\x63\x3a\x3e\x3e\x0d\x0a\x05\x63"
  "\x3a\x26\x7e\x04\x63\x3a\x5e\x04\x63\x3a\x7c\x05\x63\x3a\x3c\x3d"
  "\x04\x63\x3a\x3c\x05\x63\x3a\x3e\x3d\x04\x63\x3a\x3e\x05\x63\x3a"
  "\x21\x3d\x05\x63\x3a\x3d\x3d\x8d\x01\x04\x63\x3a\x7e\x04\x63\x3a"
  "\x21\x89\x01\x05\x63\x3a\x3f\x3a\x07\x63\x3a\x61\x70\x74\x72\x86"
  "\x01\x0a\x63\x3a\x70\x6f\x73\x74\x69\x6e\x63\x0a\x63\x3a\x70\x6f"
  "\x73\x74\x64\x65\x63\x09\x63\x3a\x70\x72\x65\x69\x6e\x63\x09\x63"
  "\x3a\x70\x72\x65\x64\x65\x63\x6d\x23\x0a\x75\x6e\x73\x69\x67\x6e"
  "\x65\x64\x20\x02\x75\x1a\x03\x20\x2a\x01\x60\x7c\x80\x01\x69\x5b"
  "\x0d\x63\x3a\x61\x72\x72\x61\x79\x2d\x64\x65\x63\x6c\x55\x0e\x63"
  "\x3a\x64\x65\x63\x6c\x2d\x75\x6e\x75\x73\x65\x64\x07\x63\x3a\x64"
  "\x65\x63\x6c\x7a\x04\x82\x01\x04\x81\x01\x04\x04\x13\x06\x7f\x04"
  "\x7e\x04\x05\x63\x68\x61\x72\x06\x73\x68\x6f\x72\x74\x04\x69\x6e"
  "\x74\x05\x6c\x6f\x6e\x67\x06\x66\x6c\x6f\x61\x74\x07\x64\x6f\x75"
  "\x62\x6c\x65\x05\x73\x6f\x62\x6a\x0e\x53\x43\x48\x45\x4d\x45\x5f"
  "\x4f\x42\x4a\x45\x43\x54\x79\x5e\x7d\x0a\x31\x3b\x31\x76\x75\x07"
  "\x63\x3a\x63\x61\x73\x74\x08\x63\x3a\x77\x68\x69\x6c\x65\x0a\x63"
  "\x3a\x69\x66\x2d\x67\x6f\x74\x6f\x07\x63\x3a\x63\x61\x73\x65\x09"
  "\x63\x3a\x73\x77\x69\x74\x63\x68\x66\xa0\x01\x08\x63\x3a\x73\x63"
  "\x61\x6c\x6c\x09\x63\x3a\x72\x65\x74\x75\x72\x6e\x08\x63\x3a\x6c"
  "\x61\x62\x65\x6c\x72\x05\x63\x3a\x2f\x3d\x05\x63\x3a\x2a\x3d\x05"
  "\x63\x3a\x2d\x3d\x05\x63\x3a\x2b\x3d\x04\x63\x3a\x3d\x05\x63\x3a"
  "\x66\x6e\x09\x63\x3a\x64\x65\x66\x69\x6e\x65\x0a\x63\x3a\x69\x6e"
  "\x63\x6c\x75\x64\x65\x52\x0f\x63\x3a\x64\x61\x74\x61\x2d\x73\x65"
  "\x63\x74\x69\x6f\x6e\x0f\x63\x3a\x63\x6f\x64\x65\x2d\x73\x65\x63"
  "\x74\x69\x6f\x6e\x4e\x0e\x63\x3a\x62\x72\x61\x63\x65\x2d\x67\x72"
  "\x6f\x75\x70\x07\x63\x3a\x70\x61\x67\x65\x06\x63\x3a\x68\x65\x78"
  "\x49\x0e\x63\x3a\x73\x74\x72\x75\x63\x74\x2d\x69\x6e\x69\x74\x5d"
  "\x58\x44\x56\x40\x3e\x39\x37\x35\x67\x6f\x0f\x63\x3a\x67\x72\x6f"
  "\x75\x70\x2d\x6c\x65\x6e\x67\x74\x68\x2b\x7b\x04\x05\x6c\x6f\x6e"
  "\x67\x02\x4c\x09\x75\x6e\x73\x69\x67\x6e\x65\x64\x02\x55\x0e\x75"
  "\x6e\x73\x69\x67\x6e\x65\x64\x20\x6c\x6f\x6e\x67\x03\x55\x4c\x77"
  "\x04\x74\x04\x73\x04\x71\x06\x70\x04\x6e\x04\x6c\x04\x6b\x04\x6a"
  "\x04\x68\x04\x65\x04\x64\x04\x63\x04\x62\x04\x61\x04\x60\x04\x5f"
  "\x06\x5c\x04\x5a\x04\x57\x04\x54\x04\x53\x04\x51\x04\x4f\x04\x4d"
  "\x04\x1e\x04\x4b\x04\x4a\x04\x48\x04\x47\x04\x29\x04\x45\x04\x42"
  "\x04\x28\x04\x3d\x04\x3b\x04\x3a\x04\x38\x04\x36\x04\x34\x04\x2b"
  "\x32\x2f\x50\x2c\x12\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63"
  "\x3a\x67\x72\x6f\x75\x70\x33\x08\x30\x04\x2e\x04\x2d\x04\x2b\x06"
  "\x6c\x69\x6e\x65\x73\xa5\x01\x0e\x63\x3a\x25\x6d\x61\x6b\x65\x2d"
  "\x67\x72\x6f\x75\x70\xa4\x01\x0a\x3c\x63\x3a\x67\x72\x6f\x75\x70"
  "\x3e\xa3\x01\xa5\x01\x27\x41\x24\x25\x3f\x3c\x1b\x43\x4c\x11\x11"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x3a\x6c\x69\x6e\x65"
  "\x0b\x21\x04\x09\x2a\x04\x23\x04\x20\x08\x1d\x04\x18\x04\x14\x04"
  "\x12\x04\x0b\x26\x05\x74\x65\x78\x74\xa5\x01\x10\x0c\x69\x6e\x64"
  "\x65\x6e\x74\x61\x74\x69\x6f\x6e\xa2\x01\x17\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x09\x3c\x63\x3a"
  "\x6c\x69\x6e\x65\x3e\xa1\x01\xa2\x01\xa5\x01\x0b\x62\x61\x63\x6b"
  "\x2d\x65\x6e\x64\x3a\x3c\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a"
  "\x3d\x0e\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x65\x78\x70\x74\x12"
  "\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x71\x75\x6f\x74\x69\x65\x6e"
  "\x74\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x2a\x0b\x62\x61\x63"
  "\x6b\x2d\x65\x6e\x64\x3a\x2d\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64"
  "\x3a\x2b\x0f\x08\x08\x0e\x10\x0b\x0c\x09\x10\x0a\x0c\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\xa1"
  "\x01\xa3\x01\x03\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63"
  "\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f"
  "\x72\x64\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65"
  "\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x03\xa4\x01"
  "\x04\x16\x61\x73\x63\x69\x69\x2d\x72\x61\x6e\x67\x65\x2d\x3e\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x04\x1c\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x03\x1f\x03\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x04\x16\x04"
  "\x07\x73\x79\x6d\x62\x6f\x6c\x06\x0f\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x2d\x75\x6e\x69\x6f\x6e\x0e\x3f\x80\x01\x80\x80\x04\x3e\x7e"
  "\x81\x81\x02\x3d\x7c\x81\x81\x02\x3c\x7a\x81\x8d\x02\x3b\x78\x81"
  "\x8b\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x89\x02\x38\x72\x81\x85"
  "\x02\x37\x70\x81\x83\x02\x36\x6e\x81\x89\x02\x35\x6c\x81\x83\x02"
  "\x34\x6a\x81\x87\x02\x33\x68\x81\x85\x02\x32\x66\x81\x83\x02\x31"
  "\x64\x81\x85\x02\x30\x62\x81\x83\x02\x2f\x60\x83\x04\x2e\x5e\x81"
  "\x83\x02\x2d\x5c\x81\x87\x02\x2c\x5a\x83\x04\x2b\x58\x81\x85\x02"
  "\x2a\x56\x81\x83\x02\x29\x54\x83\x04\x28\x52\x81\x85\x02\x27\x50"
  "\x81\x81\x02\x26\x4e\x81\x87\x02\x25\x4c\x81\x85\x02\x24\x4a\x81"
  "\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x85\x02\x21\x44\x81\x83"
  "\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02"
  "\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a"
  "\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x89\x02\x17\x30"
  "\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x87\x02\x14\x2a\x81"
  "\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x89\x02\x11\x24\x81\x83"
  "\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02"
  "\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x89\x02\x0b\x18\x81\x83\x02\x0a"
  "\x16\x81\x85\x02\x09\x14\x81\x89\x02\x08\x12\x81\x83\x02\x07\x10"
  "\x81\x85\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x83\x02\x04\x0a\x81"
  "\x85\x02\x03\x08\x81\x89\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83"
  "\x02\x7f\xd6\x01";

SCHEME_OBJECT *
cutl_so_data_b6145c1f46099f30 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cutl_so_data_b6145c1f46099f30 [0]))), (sizeof (prog_cutl_so_data_b6145c1f46099f30)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_81]));
}

DECLARE_COMPILED_DATA_NS ("cutl.so", cutl_so_data_b6145c1f46099f30)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cutl.so", "44f9821d08de3734")
